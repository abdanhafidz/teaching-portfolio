# ---- BEGINNING OF TEMPLATE --- #
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
def dfs(adj:dict, start, visited=None):
    if visited is None:
        visited = set()
    
    visited.add(start)
    print(start, end=' ')
    
    for connection in adj[start]:
        neighbor = list(connection.keys())[0]
        if  neighbor not in visited:
            dfs(adj, neighbor, visited)
def count_height(tree: dict, parent):
    if tree.get(parent) == None or parent not in tree.keys():
        return 1
    max_child_height = 0
    for child in tree[parent]:
        child_height = count_height(tree, child)
        max_child_height = max(max_child_height, child_height)
    return 1 + max_child_height
# ---- END OF TEMPLATE --- #


# ---- BEGINNING OF SOLUTINON --- (SECRET) #
def count_height(tree: dict, max_from_parent : dict, parent):
    if tree.get(parent) == None or parent not in tree.keys():
        return 1
    max_child_height = 0
    for child in tree[parent]:
        if(max_from_parent.get(child) == None): # HANYA MODIFIKASI BAGIAN SINI SAJA
            child_height = count_height(tree, max_from_parent, child) # HANYA MODIFIKASI BAGIAN SINI SAJA
            max_from_parent[child] = child_height # HANYA MODIFIKASI BAGIAN SINI SAJA
        max_child_height = max(max_child_height, max_from_parent[child]) # HANYA MODIFIKASI BAGIAN SINI SAJA
    return 1 + max_child_height


 
def solve_Q1(adj, S:list): # SOAL PERTAMA HANYA MENGUJI PEMAHAMAN TERHADAP KEY, VALUE PADA HASH TABLE
    for i in range(1, len(S)):
        # print(S[i], "in", adj[S[i - 1]]) debugger
        if(adj.get(S[i - 1]) == None):
            print("TIDAK")
            return
        if(S[i] not in adj[S[i - 1]]): # Hanya Recursive Linked List Biasa
            print("TIDAK")
            return
    print("YA") 

def solve_Q2(adj): # SOAL KEDUA HANYA MENGUJI TRAVERSAL GRAPH DAN PEMAHAMAN TERHADAP PROSES REKURSIF DFS 
    max_from_parent = dict()
    for parent in adj.keys():
        count_height(adj, max_from_parent, parent)
    print(max(max_from_parent.values()) + 1)
def solve():
    adj = new_graph()
    ins = input().split()
    Q = ins[0] # indikator : menguji pemahaman Queue
    ins.remove(Q)
    Q = int(Q)
    T = ins[-1]
    ins.remove(T)
    T = int(T)
    S = ins
    for _ in range(T):
        U, V = map(str, input().split())
        add_connection(adj, U, V, directed = True)
    if(Q == 1):
        solve_Q1(adj, S)
    elif(Q == 2):
        solve_Q2(adj)

solve()
# ---- END OF SOLUTION --- #


