from collections import deque

def new_tree():
    return dict()
def add_child(tree:dict, parent, child):
    if(tree.get(parent) != None):
        tree[parent].append(child)
    else:
        tree[parent] = [child]
def cut(tree, key):
    if tree.get(key) == None:
        return
    for c in tree[key]:
        cut(tree, c)
    for parent, children in tree.items():
        if key in tree[parent]:
            tree[parent].remove(key)
    del tree[key]
    return tree

def count_height(tree: dict, parent):
    if tree.get(parent) == None or parent not in tree.keys():
        return 1
    max_child_height = 0
    for child in tree[parent]:
        child_height = count_height(tree, child)
        max_child_height = max(max_child_height, child_height)
    return 1 + max_child_height

M = int(input())
D = list(map(int, input().split()))
Q = int(input())


tree = new_tree()
height = 0
root = 0
for _ in range(Q):
    opr = input().split()
    if(opr[0] == "cangkok"):
        if(root == 0):
            root = int(opr[1])
        add_child(tree, int(opr[1]), int(opr[2]))
    elif(opr[0] == "potong"):
        cut(tree, int(opr[1]))
    elif(opr[0] == "siram"):
        height += 1

height += count_height(tree, root)

print(height)

    
