import random
import os
from collections import defaultdict, deque

def new_tree():
    return defaultdict(list)

def add_child(tree, parent, child):
    tree[parent].append(child)

def cut(tree, key):
    """Cut a node and all its children recursively from the tree"""
    if key not in tree:
        return
    
    # Find all nodes to cut
    to_cut = []
    queue = deque([key])
    while queue:
        node = queue.popleft()
        to_cut.append(node)
        queue.extend(tree[node])
    
    # Remove nodes from children lists
    for parent in tree:
        tree[parent] = [child for child in tree[parent] if child not in to_cut]
    
    # Remove nodes from tree
    for node in to_cut:
        if node in tree:
            del tree[node]

def count_height(tree, root):
    """Calculate the height of the tree"""
    if root not in tree or not tree[root]:
        return 1
    
    max_child_height = 0
    for child in tree[root]:
        child_height = count_height(tree, child)
        max_child_height = max(max_child_height, child_height)
    
    return 1 + max_child_height

def calculate_answer(test_case):
    """Calculate the expected answer for a test case"""
    lines = test_case.strip().split('\n')
    
    # Parse initial leaves
    M = int(lines[0])
    leaves = list(map(int, lines[1].split()))
    
    # Parse operations
    Q = int(lines[2])
    operations = lines[3:3+Q]
    
    tree = new_tree()
    root = None
    extra_height = 0
    nodes_in_tree = set()  # Track nodes that are in the tree
    
    # Process operations
    for op in operations:
        parts = op.split()
        
        if parts[0] == "cangkok":
            parent, child = int(parts[1]), int(parts[2])
            
            # If parent is not already in the tree but it's one of the leaves
            # and there's no root yet, set it as the root
            if root is None and parent in leaves:
                root = parent
                nodes_in_tree.add(parent)
            
            # Add the connection
            add_child(tree, parent, child)
            nodes_in_tree.add(child)
            
        elif parts[0] == "potong":
            node = int(parts[1])
            
            # Handle root cutting
            if node == root:
                # Find a new root if possible after cutting
                potential_roots = [n for n in nodes_in_tree if n in tree and n != node]
                
                # Check if the potential roots are not descendants of the node being cut
                to_cut = []
                queue = deque([node])
                while queue:
                    current = queue.popleft()
                    to_cut.append(current)
                    queue.extend(tree[current])
                    
                valid_roots = [r for r in potential_roots if r not in to_cut]
                
                if valid_roots:
                    root = valid_roots[0]  # Pick the first valid root
                else:
                    root = None  # No valid root left
            
            # Perform the cut
            cut(tree, node)
            
            # Update nodes_in_tree
            to_remove = []
            queue = deque([node])
            while queue:
                current = queue.popleft()
                to_remove.append(current)
                queue.extend(tree[current])
                
            for n in to_remove:
                if n in nodes_in_tree:
                    nodes_in_tree.remove(n)
            
        elif parts[0] == "siram":
            extra_height += 1
    
    # Calculate final height
    if root is None or root not in tree:
        # No valid tree exists
        return extra_height
    
    tree_height = count_height(tree, root)
    return tree_height + extra_height

def generate_test_case(min_m=1, max_m=1000, min_q=1, max_q=100000, min_di=1, max_di=10**9, 
                      siram_prob=0.3, potong_prob=0.3):
    """Generate a test case for the tree problem"""
    # Generate M (number of initial leaves)
    m = random.randint(min_m, max_m)
    
    # Generate unique leaf values
    leaves = random.sample(range(min_di, max_di + 1), m)
    
    # Generate Q (number of operations)
    q = random.randint(min_q, max_q)
    
    # Track tree structure and available nodes
    tree = new_tree()
    nodes_in_tree = set()  # Nodes that are part of the tree structure
    available_nodes = set(leaves)  # Initial leaves that can be parents
    next_node_value = max(leaves) + 1
    operations = []
    root = None
    
    # First, ensure we build a single connected tree by adding all initial leaves
    # Select one leaf as the root
    if available_nodes:
        root = random.choice(list(available_nodes))
        nodes_in_tree.add(root)
        
        # Connect all other leaves to the tree
        leaves_to_connect = list(available_nodes - {root})
        if leaves_to_connect:
            for leaf in leaves_to_connect:
                # Choose a parent from the existing tree
                parent = random.choice(list(nodes_in_tree))
                add_child(tree, parent, leaf)
                nodes_in_tree.add(leaf)
                operations.append(f"cangkok {parent} {leaf}")
    
    # Generate remaining operations
    remaining_ops = q - len(operations)
    for _ in range(remaining_ops):
        op_type = random.random()
        
        if op_type < siram_prob:
            # siram operation
            operations.append("siram")
            
        elif op_type < siram_prob + potong_prob and nodes_in_tree and len(tree) > 0:
            # potong operation - can only cut nodes that exist in the tree
            # We should avoid cutting the root if possible
            candidates = [node for node in nodes_in_tree if node != root]
            
            if not candidates and root in nodes_in_tree:
                # If only the root is available, we can cut it
                candidates = [root]
                
            if candidates:
                node_to_cut = random.choice(candidates)
                operations.append(f"potong {node_to_cut}")
                
                # Update tree - remove all descendants
                to_remove = []
                queue = deque([node_to_cut])
                while queue:
                    node = queue.popleft()
                    to_remove.append(node)
                    queue.extend(tree[node])
                
                for node in to_remove:
                    if node in nodes_in_tree:
                        nodes_in_tree.remove(node)
                    if node in tree:
                        del tree[node]
                
                # Update tree structure
                for parent in list(tree.keys()):
                    tree[parent] = [child for child in tree[parent] if child not in to_remove]
            else:
                # If no suitable candidates, do a cangkok instead
                if nodes_in_tree:
                    # Choose a parent from existing tree nodes
                    parent = random.choice(list(nodes_in_tree))
                    child = next_node_value
                    next_node_value += 1
                    
                    add_child(tree, parent, child)
                    nodes_in_tree.add(child)
                    operations.append(f"cangkok {parent} {child}")
                else:
                    operations.append("siram")
                
        else:
            # cangkok operation
            if nodes_in_tree:
                # Choose a parent from nodes already in the tree
                parent = random.choice(list(nodes_in_tree))
                child = next_node_value
                next_node_value += 1
                
                add_child(tree, parent, child)
                nodes_in_tree.add(child)
                operations.append(f"cangkok {parent} {child}")
            else:
                # If tree is empty (all nodes were cut), use siram
                operations.append("siram")
    
    # Format the test case
    test_case = f"{m}\n{' '.join(map(str, leaves))}\n{q}\n"
    test_case += "\n".join(operations)
    
    return test_case

def generate_edge_case(case_type):
    """Generate specific edge cases"""
    if case_type == "minimal":
        # Minimal case: M=1, Q=1
        return "1\n1\n1\nsiram"
        
    elif case_type == "maximum":
        # Maximum case (but scaled down): M=100, Q=1000
        m = 100
        leaves = random.sample(range(1, 10**6), m)
        q = 1000
        
        # First connect all leaves to ensure a single tree
        root = leaves[0]
        operations = []
        
        # Connect all leaves to the root
        for i in range(1, len(leaves)):
            operations.append(f"cangkok {root} {leaves[i]}")
        
        # Add siram operations to fill the rest
        for _ in range(q - len(operations)):
            operations.append("siram")
        
        test_case = f"{m}\n{' '.join(map(str, leaves))}\n{q}\n"
        test_case += "\n".join(operations)
        return test_case
        
    elif case_type == "all_cangkok":
        # Only cangkok operations
        m = 5
        leaves = [1, 2, 3, 4, 5]
        
        # First make sure all initial leaves are connected
        operations = [
            "cangkok 1 2",
            "cangkok 1 3",
            "cangkok 3 4",
            "cangkok 3 5",
            # Now add more cangkok operations
            "cangkok 1 6",
            "cangkok 1 7",
            "cangkok 6 8",
            "cangkok 6 9",
            "cangkok 7 10",
            "cangkok 2 11",
            "cangkok 2 12",
            "cangkok 5 13",
            "cangkok 5 14",
            "cangkok 13 15"
        ]
        
        test_case = f"{m}\n{' '.join(map(str, leaves))}\n{len(operations)}\n"
        test_case += "\n".join(operations)
        return test_case
        
    elif case_type == "build_and_cut":
        # Build a tree and then cut parts of it
        m = 5
        leaves = [1, 2, 3, 4, 5]
        
        # First make sure all initial leaves are connected
        operations = [
            "cangkok 1 2",
            "cangkok 1 3",
            "cangkok 3 4",
            "cangkok 3 5",
            # Now add more operations
            "cangkok 1 6",
            "cangkok 1 7",
            "cangkok 6 8",
            "cangkok 6 9",
            "cangkok 7 10",
            "cangkok 2 11",
            "cangkok 5 12",
            "potong 6",
            "potong 2",
            "siram",
            "siram"
        ]
        
        test_case = f"{m}\n{' '.join(map(str, leaves))}\n{len(operations)}\n"
        test_case += "\n".join(operations)
        return test_case
    
    elif case_type == "large_tree":
        # Create a large, deep tree
        m = 10
        leaves = list(range(1, 11))
        
        # First make sure all initial leaves are connected
        operations = []
        for i in range(1, m):
            operations.append(f"cangkok 1 {leaves[i]}")
        
        # Now add more operations
        next_val = max(leaves) + 1
        
        # Create a chain-like structure with some branches
        for i in range(1, 10):
            operations.append(f"cangkok {i} {next_val}")
            next_val += 1
            
            # Add some branches
            for _ in range(3):
                operations.append(f"cangkok {i} {next_val}")
                next_val += 1
        
        # Add some potong operations
        for _ in range(10):
            node_to_cut = random.randint(11, next_val-1)
            operations.append(f"potong {node_to_cut}")
        
        # Add some siram operations
        for _ in range(5):
            operations.append("siram")
        
        test_case = f"{m}\n{' '.join(map(str, leaves))}\n{len(operations)}\n"
        test_case += "\n".join(operations)
        return test_case
        
    return generate_test_case()  # Default to random test case

def create_test_cases(num_cases=10, output_dir="."):
    """Create multiple test cases in the specified format"""
    os.makedirs(f"{output_dir}/input", exist_ok=True)
    os.makedirs(f"{output_dir}/output", exist_ok=True)
    
    # Create different types of test cases
    test_case_types = [
        "minimal",          # Case 0: Minimal case
        "all_cangkok",      # Case 1: Only cangkok operations
        "build_and_cut",    # Case 2: Build and cut test case
        "large_tree",       # Case 3: Large tree
        "maximum"           # Case 4: Maximum-sized case
    ]
    
    # Generate specified edge cases first
    for i, case_type in enumerate(test_case_types):
        test_case = generate_edge_case(case_type)
        answer = calculate_answer(test_case)
        
        # Write test case and answer
        with open(f"{output_dir}/input/input-{i:02d}.txt", "w") as f:
            f.write(test_case)
        
        with open(f"{output_dir}/output/output-{i:02d}.txt", "w") as f:
            f.write(str(answer))
    
    # Generate more random test cases if needed
    for i in range(len(test_case_types), num_cases):
        # Randomly vary parameters for diversity
        min_m = random.randint(1, 50)
        max_m = random.randint(min_m, min(min_m + 100, 1000))
        min_q = random.randint(1, 50)
        max_q = random.randint(min_q, min(min_q + 200, 10000))
        siram_prob = random.uniform(0.1, 0.4)
        potong_prob = random.uniform(0.1, 0.4)
        
        test_case = generate_test_case(
            min_m=min_m, max_m=max_m, 
            min_q=min_q, max_q=max_q,
            min_di=1, max_di=10**5,  # Using reasonable values
            siram_prob=siram_prob, potong_prob=potong_prob
        )
        answer = calculate_answer(test_case)
        
        # Write test case and answer
        with open(f"{output_dir}/input/input-{i:02d}.txt", "w") as f:
            f.write(test_case)
        
        with open(f"{output_dir}/output/output-{i:02d}.txt", "w") as f:
            f.write(str(answer))
        
    print(f"Created {num_cases} test cases in directory '{output_dir}'")

if __name__ == "__main__":
    import argparse
    
    parser = argparse.ArgumentParser(description='Generate test cases for Mas Faiz tree problem')
    parser.add_argument('--num_cases', type=int, default=10, help='Number of test cases to generate')
    parser.add_argument('--output_dir', type=str, default="test_cases", help='Directory to store test cases')
    
    args = parser.parse_args()
    
    create_test_cases(args.num_cases, args.output_dir)