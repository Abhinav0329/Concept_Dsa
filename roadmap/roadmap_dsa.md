# 💻 Google-Level DSA Master Roadmap

## 🌟 Part 1: The Core Foundations
### PHASE 0: Low-Level Core Foundations
- C++ STL (Vectors, Iterators, Algorithm Library)
- Pointers & References (Address-of operator, dereferencing)
- Low-Level Memory Layout (Stack vs. Heap allocation dynamics)
- Time & Space Complexity (Asymptotic notation, Big-O analysis)
### PHASE 1: Arrays & Range Queries
- Static Contiguous Memory (Raw Arrays) & Cache Locality
- Dynamic Heap Memory (Vectors, size vs capacity, reallocation storms)
- 1D & 2D Prefix Sum Tables (Static range sum calculations)
- Difference Arrays (O(1) range tracking updates)
### PHASE 2: Associative Hashing Tables
- Hash Functions & Mathematics (Polynomial rolling hashes)
- Collision Resolution (Chaining vs Open Addressing mechanics)
- Load Factor Dynamics & Rehash Scaling
- Standard Containers (`std::unordered_map` / `std::unordered_set`)
### PHASE 3: Linear Pointer Mechanics
- Converging Pointers (Two-Sum Sorted, Palindromes, In-place swaps)
- Diverging Pointers (Longest Palindromic Substring centers)
- Fast & Slow Pointers (Floyd's Cycle Detection engine)
### PHASE 4: Subarray Sliding Windows
- Fixed-Size Windows (Constant subarray constraints & running frequencies)
- Dynamic / Variable-Size Windows (Expansion & contraction loops)
- At-Most / Exactly K Distinct Elements Filtering
### PHASE 5: Logarithmic Search Spaces
- Divide & Conquer on Sorted Arrays (Avoiding overflow: `mid = L + (R-L)/2`)
- Boundary Searching (Custom lower_bound & upper_bound logic)
- Search Space Monotonicity (Searching on Answers / Min-Max optimization)

## ⛓️ Part 2: Abstract Linear Structures & Deep Logic
### PHASE 6: Node Chains (Linked Lists)
- Singly Linked Lists (Structural layouts, iterative vs recursive reversal)
- Doubly Linked Lists (Forward/backward traversal, self-correcting deletion)
- Circular Linked Lists (Tail-to-head loop linkages & Josephus Permutations)
### PHASE 7: Restricted Lifecycles (Stacks, Queues & Deques)
- Stacks (LIFO, Shunting-Yard expression parsing)
- Monotonic Stacks (Next Greater/Smaller element searches, area maximization)
- Queues (FIFO, buffer simulations, circular modulo queues)
- Deques (Double-ended trackers, Sliding Window Maximum via O(1) monotonic checks)
### PHASE 8: The Recursive Engine
- Anatomy of a System Call Stack Frame (Activation records, return registers)
- Stack Overflows & Invariant Base-Case Halting Triggers
- Divide & Conquer Splitting (Merge Sort & Quick Sort partition mechanics)
- Tail-Recursion Optimizations
### PHASE 9: Combinatorial Backtracking
- State Space Graph Explorations (Decision tree generation loops)
- The Crucial "Undo" Step (State serialization, validation, and de-serialization)
- Pruning & Constraints Engines (Bounding functions to kill invalid branches early)

## 🌲 Part 3: Hierarchical Data & Network Topologies
### PHASE 10: Hierarchical Architectures (Trees)
- Standard Binary Trees (Recursive vs manual iterative traversals using stacks)
- O(1) Space Invariants (Morris Threaded In-order Traversal)
- Binary Search Trees (BST invariant, dynamic node successor rewiring)
- Self-Balancing Invariant Trees (AVL pointer rotations & Red-Black color re-flips)
### PHASE 11: Priority Mechanics (Heaps)
- Complete Array-Based Trees (Index coordinate mappings: `2i+1`, `2i+2`)
- Balancing Routines (Sift-Up insertion vs Sift-Down extraction)
- Floyd's Heapify Algorithm (O(N) build complexity via `std::priority_queue`)
- K-Way Merge Patterns
### PHASE 12: Connected Non-Linear Networks (Graphs)
- Structural Layouts (Adjacency Matrices for dense vs Adjacency Lists for sparse graphs)
- Traversal Engines (Queue-driven BFS layer searches, Stack-driven DFS exploration)
- Directed Graph Frameworks (Kahn's In-degree array algorithm for Topological Sorting)
- Shortest Path Engines (Dijkstra's PQ Greedy map, Bellman-Ford relaxation, Floyd-Warshall matrix)
- Minimum Spanning Trees (Kruskal's pipeline via edge sorting vs Prim's neighborhood expansion)

## 📈 Part 4: High-Tier Optimization & Strategic Paradigms
### PHASE 13: Greedy Choice Strategy
- Local vs Global Optimality Evaluations
- Proof-of-Correctness Thinking
- Core Applications (Interval boundary scheduling, sorting by endpoints)
### PHASE 14: Dynamic Programming (DP) Foundations
- Overlapping Subproblems & Optimal Substructure Properties
- Top-Down Blueprint (Recursion stack frame + cache lookups/memoization)
- Bottom-Up Blueprint (Iterative multi-dimensional table generation)
- State Transitions (1D Sequences, 2D Grid step paths, 0-1 Knapsack bounding)
### PHASE 15: Raw Hardware Bit Manipulation
- Bitwise Operators & Logic (`&`, `|`, `^`, `~`, `<<`, `>>`)
- Custom Mask Configurations (Setting, clearing, flipping, and isolating bits)
- Counting Operations (Built-in bit manipulation functions)
### PHASE 16: Advanced Optimization States
- Bitmask DP (Sub-state space compression, Traveling Salesperson tracking)
- Digit DP (Counting numbers satisfying properties across ranges)
- String Alignment DP (Longest Common Subsequence, Edit Distance tables)
- Interval Configurations (Matrix Chain Multiplication index partitions)

## ⚡ Part 5: Hard-Core Advanced Structures & Automation
### PHASE 17: Digital Retrieval Trees (Tries)
- Prefix Optimization (Character array maps: `TrieNode* children[26]`)
- Fast Information Lookups (O(L) character word searches & wildcard matching)
### PHASE 18: Set Partition Networks (DSU)
- Disjoint Set Union Architecture (`parent` & `rank`/`size` tracking arrays)
- Structural Optimizations (Path Compression flattening & Union by Rank)
- Dynamic Connectivity Validation
### PHASE 19: Range-Divide Segment Trees
- Array Divide & Conquer (Bounded range subtrees for O(log N) query/update cycles)
- Lazy Propagation (Deferring node updates via lazy arrays until mandatory reads)
### PHASE 20: Binary Indexed Trees (Fenwick Trees)
- Compact Prefix Tracking Arrays
- Least Significant Bit Extraction (Coordinate jumps via bitwise mask logic: `i & (-i)`)
### PHASE 21: High-Intensity Contest Practice
- LeetCode Hard Analysis (String parsing, complex invariants, graph design)
- Codeforces Div. 2 Virtual Contests (Speed, accuracy, and algorithmic stress testing)