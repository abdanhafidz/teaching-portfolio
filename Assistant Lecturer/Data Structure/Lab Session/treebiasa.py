def new_tree(key = 0):
    return dict()

def insert(tree, parent, children):
    if(tree.get(parent) != None):
        tree[parent].append(children)
    else:
        tree[parent] = [children]

def dfs(tree, parent, visited = []):
    if(parent in visited):
        return
    print(parent, end = "")
    visited.append(parent) ## Mark
    for children in tree[parent]:
        if children not in visited:
            dfs(tree, parent, visited)  ## Visit Neighbour
        else:
            continue
def post_order(tree, parent, visited = []):
    if(parent in visited):
        return
    for children in tree[parent]:
        if children not in visited:
            post_order(tree, parent, visited) # Visit
        else:
            continue
    visited.append(parent) 
    print(parent, end = "") #Mark

def solution():
    NTree = dict()
    insert(NTree, 1, 2)
    insert(NTree, 1, 3)
    insert(NTree, 2, 4)
    insert(NTree, 2, 5)
    insert(NTree, 3, 6)
    dfs(NTree, 1)

solution()

