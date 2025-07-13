Testcase Generation Summary (NO CYCLES VERSION):
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
