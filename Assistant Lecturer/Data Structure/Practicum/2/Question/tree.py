import networkx as nx
import matplotlib.pyplot as plt
from collections import defaultdict, deque

# Data pohon yang diberikan
tree_data = {49379: [99643, 99685], 15430: [99644], 91743: [99646], 99644: [99649, 99679, 99684], 26888: [99650, 99677, 99688, 99697], 70387: [99651], 45783: [99652], 34914: [99654], 23867: [99655], 40152: [99657], 99652: [99658], 99642: [], 28815: [99665], 99653: [99666], 85669: [99667, 99689, 99694], 6104: [99670], 77110: [99671, 99695], 44441: [99672], 99665: [99673], 54624: [99674], 77768: [99678], 97709: [99681, 99683], 14006: [99686], 41544: [99687, 99693], 99689: [99690], 90605: [99691], 99655: [99696], 50046: [99698], 99698: [99699], 98525: [99700]}

# Membuat graf
G = nx.DiGraph()

# Menambahkan edge ke graf
for parent, children in tree_data.items():
    for child in children:
        G.add_edge(parent, child)

# Menemukan root (node yang tidak memiliki parent)
all_nodes = set(G.nodes())
child_nodes = set()
for parent, children in tree_data.items():
    for child in children:
        child_nodes.add(child)
root_candidates = all_nodes - child_nodes

# Menampilkan root
print("Root node(s):", root_candidates)

# Fungsi untuk menghitung tinggi pohon
def calculate_tree_height(graph, root):
    if root not in graph:
        return 0
    
    heights = {}
    
    def dfs(node):
        if node not in graph.adj or not graph.adj[node]:  # Jika node adalah leaf
            heights[node] = 0
            return 0
        
        max_child_height = 0
        for child in graph.adj[node]:
            if child not in heights:
                child_height = dfs(child)
            else:
                child_height = heights[child]
            max_child_height = max(max_child_height, child_height)
        
        heights[node] = max_child_height + 1
        return heights[node]
    
    return dfs(root)

# Menghitung tinggi untuk setiap kandidat root
heights = {}
for root in root_candidates:
    heights[root] = calculate_tree_height(G, root)

print("Tinggi pohon dari setiap root kandidat:")
for root, height in heights.items():
    print(f"Root {root}: tinggi = {height}")

# Menentukan tinggi pohon keseluruhan
if heights:
    max_height = max(heights.values())
    print(f"\nTinggi pohon keseluruhan: {max_height}")
else:
    print("\nTidak dapat menentukan tinggi pohon karena tidak ada root yang valid.")

# Menentukan jenis pohon (apakah benar-benar tree atau graph)
if len(root_candidates) == 1:
    print("Struktur data ini merupakan pohon tunggal dengan satu root.")
elif len(root_candidates) > 1:
    print("Struktur data ini merupakan forest (kumpulan beberapa pohon).")
else:
    print("Struktur data ini bukan pohon (mungkin memiliki siklus).")

# Menghitung jumlah node pada masing-masing level
def calculate_level_counts(graph, root):
    level_counts = defaultdict(int)
    queue = deque([(root, 0)])  # (node, level)
    
    while queue:
        node, level = queue.popleft()
        level_counts[level] += 1
        
        for child in graph.adj[node]:
            queue.append((child, level + 1))
    
    return level_counts

if len(root_candidates) == 1:
    root = list(root_candidates)[0]
    level_counts = calculate_level_counts(G, root)
    print("\nJumlah node pada setiap level:")
    for level, count in sorted(level_counts.items()):
        print(f"Level {level}: {count} node")

# Visualisasi pohon
plt.figure(figsize=(15, 10))
pos = nx.spring_layout(G, seed=42)  # Posisi node untuk visualisasi

nx.draw(G, pos, with_labels=True, node_color='lightblue', 
        node_size=800, font_size=10, arrows=True)

plt.title("Visualisasi Pohon")
plt.axis('off')
plt.tight_layout()
plt.show()