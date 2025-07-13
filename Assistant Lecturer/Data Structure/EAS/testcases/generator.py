import random
import string
import os
from io import StringIO
import sys

def generate_random_word(min_len=1, max_len=10):
    """Generate random word with specified length range"""
    length = random.randint(min_len, max_len)
    return ''.join(random.choices(string.ascii_lowercase, k=length))

def create_valid_path(words, length):
    """Create a valid path of specified length"""
    if length <= 0:
        return []
    
    path = [random.choice(words)]
    for _ in range(length - 1):
        available_words = [w for w in words if w not in path]
        if not available_words:
            break
        path.append(random.choice(available_words))
    return path

def create_chain_connections(words, chain_length=None):
    """Create connections that form a chain (no cycles)"""
    if chain_length is None:
        chain_length = min(len(words), random.randint(3, len(words)))
    
    chain = random.sample(words, min(chain_length, len(words)))
    connections = []
    for i in range(len(chain) - 1):
        connections.append((chain[i], chain[i+1]))
    return connections, chain

def has_cycle_dfs(adj, node, visited, rec_stack):
    """Check if adding a connection would create a cycle using DFS"""
    visited[node] = True
    rec_stack[node] = True
    
    if node in adj:
        for neighbor in adj[node]:
            if not visited.get(neighbor, False):
                if has_cycle_dfs(adj, neighbor, visited, rec_stack):
                    return True
            elif rec_stack.get(neighbor, False):
                return True
    
    rec_stack[node] = False
    return False

def would_create_cycle(adj, u, v):
    """Check if adding edge u->v would create a cycle"""
    # Temporarily add the edge
    if u not in adj:
        adj[u] = []
    adj[u].append(v)
    
    # Check for cycles
    visited = {}
    rec_stack = {}
    
    has_cycle = False
    for node in adj:
        if not visited.get(node, False):
            if has_cycle_dfs(adj, node, visited, rec_stack):
                has_cycle = True
                break
    
    # Remove the temporary edge
    adj[u].remove(v)
    if not adj[u]:
        del adj[u]
    
    return has_cycle

def add_safe_connections(connections, words, target_count):
    """Add random connections without creating cycles"""
    adj = {}
    final_connections = []
    
    # First add all existing connections and build adjacency list
    for u, v in connections:
        if u not in adj:
            adj[u] = []
        adj[u].append(v)
        final_connections.append((u, v))
    
    # Try to add more connections without creating cycles
    attempts = 0
    max_attempts = target_count * 10  # Prevent infinite loops
    
    while len(final_connections) < target_count and attempts < max_attempts:
        u = random.choice(words)
        v = random.choice(words)
        
        if u != v and (u, v) not in final_connections:
            # Check if this would create a cycle
            if not would_create_cycle(adj, u, v):
                if u not in adj:
                    adj[u] = []
                adj[u].append(v)
                final_connections.append((u, v))
            
        attempts += 1
    
    return final_connections

def create_tree_structure(words, max_children=3):
    """Create a tree structure (guaranteed no cycles)"""
    if not words:
        return []
    
    connections = []
    used_as_child = set()
    available_parents = [words[0]]  # Start with first word as root
    remaining_words = words[1:]
    
    while remaining_words and available_parents:
        parent = random.choice(available_parents)
        children_count = random.randint(1, min(max_children, len(remaining_words)))
        
        for _ in range(children_count):
            if not remaining_words:
                break
            child = remaining_words.pop(0)
            connections.append((parent, child))
            used_as_child.add(child)
            
            # Child can become parent later
            if random.random() < 0.7:  # 70% chance to become parent
                available_parents.append(child)
        
        # Remove this parent from available parents sometimes
        if random.random() < 0.3:  # 30% chance to stop being parent
            available_parents.remove(parent)
    
    return connections

# Solution functions (copied from your solution)
def new_graph(number_of_nodes = 1, nodes_name = None):
    adj = dict()
    if(nodes_name != None):
        for node in nodes_name:
            adj[node] = list()
    else:
        for i in range(1,number_of_nodes+1):
            adj[i] = list()
    return adj

def add_connection(adj, u, v, directed = False):
    if(adj.get(u) == None):
        adj[u] = list()
    if(not directed):
        adj[u].append(v)
        adj[v].append(u)
    else:
        adj[u].append(v)

def count_height(tree: dict, max_from_parent : dict, parent):
    if tree.get(parent) == None or parent not in tree.keys():
        return 1
    max_child_height = 0
    for child in tree[parent]:
        if(max_from_parent.get(child) == None):
            child_height = count_height(tree, max_from_parent, child)
            max_from_parent[child] = child_height
        max_child_height = max(max_child_height, max_from_parent[child])
    return 1 + max_child_height

def solve_Q1(adj, S:list):
    for i in range(1, len(S)):
        if(adj.get(S[i - 1]) == None):
            return "TIDAK"
        if(S[i] not in adj[S[i - 1]]):
            return "TIDAK"
    return "YA"

def solve_Q2(adj):
    max_from_parent = dict()
    for parent in adj.keys():
        count_height(adj, max_from_parent, parent)
    if not max_from_parent.values():
        return "1"
    return str(max(max_from_parent.values()) + 1)

def solve_testcase(input_text):
    """Solve a single testcase and return the output"""
    lines = input_text.strip().split('\n')
    ins = lines[0].split()
    Q = int(ins[0])
    T = int(ins[-1])
    S = ins[1:-1]
    
    adj = new_graph()
    
    for i in range(1, T + 1):
        U, V = lines[i].split()
        add_connection(adj, U, V, directed=True)
    
    if Q == 1:
        return solve_Q1(adj, S)
    elif Q == 2:
        return solve_Q2(adj)

def generate_testcase_easy(case_num):
    """Generate easy testcase (30% - always same content)"""
    testcase = """1 aku suka belajar strukdat tapi tidak mau baca 9
aku suka
suka belajar
belajar nlp
belajar strukdat
nlp tapi
strukdat tapi
tapi tidak
tapi mau
mau baca"""
    return testcase

def generate_testcase_medium(case_num):
    """Generate medium testcase (50% - Q=1 only)"""
    random.seed(42 + case_num)
    
    case_type = case_num % 8
    
    if case_type == 0:  # Valid sentence - simple
        words = [generate_random_word(1, 8) for _ in range(30)]
        sentence_words = create_valid_path(words, random.randint(3, 6))
        T = random.randint(50, 300)
        
        connections = []
        for i in range(len(sentence_words) - 1):
            connections.append((sentence_words[i], sentence_words[i+1]))
        
        # Add safe connections without cycles
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 1:  # Invalid sentence
        words = [generate_random_word(1, 8) for _ in range(25)]
        sentence_words = random.choices(words, k=random.randint(3, 5))
        T = random.randint(30, 200)
        
        connections = []
        used_pairs = set()
        for i in range(len(sentence_words) - 1):
            used_pairs.add((sentence_words[i], sentence_words[i+1]))
        
        # Create tree structure without required connections
        tree_connections = create_tree_structure(words[:15], max_children=2)
        connections = [conn for conn in tree_connections if conn not in used_pairs]
        
        # Add more safe connections
        connections = add_safe_connections(connections, words, T)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 2:  # Single word
        word = generate_random_word(1, 10)
        other_word = generate_random_word(1, 10)
        testcase = f"1 {word} 1\n{word} {other_word}"
        return testcase
    
    elif case_type == 3:  # Two words valid
        word1 = generate_random_word(1, 10)
        word2 = generate_random_word(1, 10)
        testcase = f"1 {word1} {word2} 1\n{word1} {word2}"
        return testcase
    
    elif case_type == 4:  # Long sentence valid
        words = [generate_random_word(1, 8) for _ in range(50)]
        sentence_words = create_valid_path(words, random.randint(8, 15))
        T = random.randint(200, 800)
        
        connections = []
        for i in range(len(sentence_words) - 1):
            connections.append((sentence_words[i], sentence_words[i+1]))
        
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 5:  # Medium length invalid
        words = [generate_random_word(1, 8) for _ in range(20)]
        sentence_words = random.choices(words, k=random.randint(4, 8))
        T = random.randint(50, 400)
        
        connections = []
        forbidden_pairs = set()
        for i in range(len(sentence_words) - 1):
            forbidden_pairs.add((sentence_words[i], sentence_words[i+1]))
        
        # Create tree structure
        tree_connections = create_tree_structure(words[:12], max_children=3)
        connections = [conn for conn in tree_connections if conn not in forbidden_pairs]
        connections = add_safe_connections(connections, words, T)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 6:  # Partial valid (some connections exist)
        words = [generate_random_word(1, 8) for _ in range(35)]
        sentence_words = create_valid_path(words, random.randint(5, 8))
        T = random.randint(100, 600)
        
        connections = []
        required_connections = []
        for i in range(len(sentence_words) - 1):
            required_connections.append((sentence_words[i], sentence_words[i+1]))
        
        # Add only 70% of required connections
        num_to_add = int(len(required_connections) * 0.7)
        connections.extend(random.sample(required_connections, num_to_add))
        
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    else:  # case_type == 7: Complex valid with many connections
        words = [generate_random_word(1, 10) for _ in range(40)]
        sentence_words = create_valid_path(words, random.randint(6, 10))
        T = random.randint(300, 1000)
        
        connections = []
        for i in range(len(sentence_words) - 1):
            connections.append((sentence_words[i], sentence_words[i+1]))
        
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()

def generate_testcase_hard(case_num):
    """Generate hard testcase (20% - Q=1 or Q=2)"""
    random.seed(100 + case_num)
    
    case_type = case_num % 6
    
    if case_type == 0:  # Q=2 - Simple chain
        words = [generate_random_word(1, 50) for _ in range(30)]
        T = random.randint(100, 1000)
        
        connections, chain = create_chain_connections(words, random.randint(10, 20))
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"2 _ {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 1:  # Q=1 - Very long sentence
        words = [generate_random_word(1, 80) for _ in range(100)]
        sentence_words = create_valid_path(words, random.randint(20, 40))
        T = random.randint(1000, 5000)
        
        connections = []
        for i in range(len(sentence_words) - 1):
            connections.append((sentence_words[i], sentence_words[i+1]))
        
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 2:  # Q=2 - Multiple chains
        words = [generate_random_word(1, 100) for _ in range(80)]
        T = random.randint(2000, 8000)
        
        connections = []
        # Create multiple separate chains
        used_words = set()
        for _ in range(3):
            available_words = [w for w in words if w not in used_words]
            if len(available_words) < 10:
                break
            chain_words = random.sample(available_words, random.randint(10, 15))
            chain_connections, _ = create_chain_connections(chain_words)
            connections.extend(chain_connections)
            used_words.update(chain_words)
        
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"2 _ {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 3:  # Q=1 - Very long words
        words = [generate_random_word(80, 100) for _ in range(15)]
        sentence_words = words[:random.randint(3, 6)]
        T = random.randint(200, 1000)
        
        connections = []
        for i in range(len(sentence_words) - 1):
            connections.append((sentence_words[i], sentence_words[i+1]))
        
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"1 {' '.join(sentence_words)} {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    elif case_type == 4:  # Q=2 - Tree structure (one root, multiple branches)
        words = [generate_random_word(1, 100) for _ in range(50)]
        T = random.randint(1000, 5000)
        
        connections = create_tree_structure(words[:30], max_children=4)
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"2 _ {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()
    
    else:  # case_type == 5: Q=2 - Multiple tree forests
        words = [generate_random_word(1, 100) for _ in range(60)]
        T = random.randint(3000, 10000)
        
        connections = []
        
        # Create multiple separate trees (forest)
        word_sets = [words[i:i+15] for i in range(0, 45, 15)]
        
        for word_set in word_sets:
            tree_connections = create_tree_structure(word_set, max_children=3)
            connections.extend(tree_connections)
        
        connections = add_safe_connections(connections, words, T)
        random.shuffle(connections)
        
        testcase = f"2 _ {len(connections)}\n"
        for u, v in connections:
            testcase += f"{u} {v}\n"
        return testcase.strip()

def generate_all_testcases():
    """Generate all testcases and save to files"""
    if not os.path.exists('testcases'):
        os.makedirs('testcases')
    
    print("Generating testcases...")
    
    # Easy testcases (24 files)
    print("Generating easy testcases (24 files)...")
    for i in range(1, 25):
        input_content = generate_testcase_easy(i)
        output_content = solve_testcase(input_content)
        
        with open(f'testcases/input{i:02d}.txt', 'w') as f:
            f.write(input_content)
        with open(f'testcases/output{i:02d}.txt', 'w') as f:
            f.write(output_content)
    
    # Medium testcases (40 files)
    print("Generating medium testcases (40 files)...")
    for i in range(25, 65):
        input_content = generate_testcase_medium(i)
        output_content = solve_testcase(input_content)
        
        with open(f'testcases/input{i:02d}.txt', 'w') as f:
            f.write(input_content)
        with open(f'testcases/output{i:02d}.txt', 'w') as f:
            f.write(output_content)
    
    # Hard testcases (16 files)
    print("Generating hard testcases (16 files)...")
    for i in range(65, 81):
        input_content = generate_testcase_hard(i)
        output_content = solve_testcase(input_content)
        
        with open(f'testcases/input{i:02d}.txt', 'w') as f:
            f.write(input_content)
        with open(f'testcases/output{i:02d}.txt', 'w') as f:
            f.write(output_content)
    
    print("Generated 80 testcases total (input + output files)")
    print("Files saved in 'testcases' directory")
    
    # Generate summary
    summary = f"""Testcase Generation Summary (NO CYCLES VERSION):
- Easy (30%): 24 testcases (input01.txt - input24.txt + corresponding outputs)
- Medium (50%): 40 testcases (input25.txt - input64.txt + corresponding outputs)  
- Hard (20%): 16 testcases (input65.txt - input80.txt + corresponding outputs)

Total: 80 testcases (160 files including outputs)

CYCLE PREVENTION MEASURES:
- All graphs are guaranteed to be acyclic (DAG - Directed Acyclic Graph)
- Uses DFS cycle detection before adding any edge
- Implements tree structures and chain connections
- Multiple forest structures for complex cases
- Safe connection addition with cycle checking

Distribution:
- Easy: Fixed testcase content (guaranteed acyclic)
- Medium: Q=1 only, various acyclic scenarios
- Hard: Q=1 and Q=2, complex acyclic structures (trees, forests, chains)

Graph Structures Used:
- Simple chains (linear paths)
- Tree structures (one root, multiple branches)  
- Forest structures (multiple disconnected trees)
- Safe random connections (cycle-checked)
"""
    
    with open('testcases/README.txt', 'w') as f:
        f.write(summary)
    
    print("\nSummary saved to testcases/README.txt")

if __name__ == "__main__":
    generate_all_testcases()
