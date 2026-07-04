<div align="center">

# 🧩 Practicing_STL

### A hands-on playground for mastering C++ STL Containers

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus)
![STL](https://img.shields.io/badge/Focus-STL%20Containers-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Learning%20Repo-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-Educational-yellow?style=for-the-badge)

*Learn. Compile. Break things. Learn again.* 🔁

</div>

---

## 📌 Overview

This repository is a **practice ground** for understanding how the C++ **Standard Template Library (STL)** containers work under the hood — their operations, behaviors, and real-world use cases. Each container has its own standalone `.c++` file (with a compiled `.exe` for quick reference) so you can study, run, and modify them independently.

---

## 🗺️ STL Container Map

```
                              ┌─────────────────────┐
                              │    STL Containers    │
                              └──────────┬───────────┘
                                         │
        ┌───────────────┬───────────────┼───────────────┐
        │                │               │               │
 ┌──────▼──────┐  ┌───────▼──────┐ ┌──────▼──────┐  ┌─────▼─────┐
 │  Sequence    │  │  Adapters    │ │ Associative │  │  Utility  │
 └──────┬──────┘  └───────┬──────┘ └──────┬──────┘  └─────┬─────┘
        │                 │               │                │
  Vector, List,     Stack, Queue,     Set, Map            Pair
     Deque         Priority_queue
```

*Nothing fancy — just how these containers naturally group together once you've worked with each one.*

---

## 📂 Repository Structure

```
Practicing_Stl/
│
├── Vector.c++            🔹 Dynamic array
├── List.c++               🔹 Doubly linked list
├── Deque.c++              🔹 Double-ended queue
│
├── Stack.c++              🔸 LIFO adapter
├── Queue.c++              🔸 FIFO adapter
├── Priority_queue.c++     🔸 Heap-based adapter
│
├── Set.c++                🔶 Unique sorted elements
├── Map.c++                🔶 Key-value pairs (sorted)
│
├── Pair.c++               🔷 Two-value utility container
│
└── README.md
```

---

## ⚙️ How Each Container Fits

Think of it less like a formal chart and more like sorting tools into drawers based on what they're good at:

```
📦 Sequence Containers  → order matters, elements sit in a line
   ├─ Vector   → great when you need quick random access
   ├─ List     → great when you're inserting/deleting a lot
   └─ Deque    → great when you're working from both ends

🔧 Container Adapters   → built on top of other containers, restricted on purpose
   ├─ Stack          → last in, first out (like a stack of plates)
   ├─ Queue          → first in, first out (like a line at a store)
   └─ Priority_queue → whoever's "most important" goes first

🔑 Associative Containers → built for fast lookup, not order of insertion
   ├─ Set → keeps things unique and sorted
   └─ Map → keeps a key linked to a value

🧵 Utility
   └─ Pair → just glues two values together, nothing more
```

*The idea isn't to memorize this — it's to build a gut feeling for "which container fits this problem" over time.*

---

## 📊 Container Comparison Table

| Container | Category | Ordering | Duplicates | Access Speed | Insert/Delete Speed | Common Use Case |
|-----------|----------|----------|------------|--------------|---------------------|------------------|
| `vector` | Sequence | Insertion order | ✅ Allowed | ⚡ O(1) random | 🐢 O(n) middle | Dynamic arrays |
| `list` | Sequence | Insertion order | ✅ Allowed | 🐢 O(n) | ⚡ O(1) anywhere | Frequent insert/delete |
| `deque` | Sequence | Insertion order | ✅ Allowed | ⚡ O(1) ends | ⚡ O(1) ends | Sliding window, queues |
| `stack` | Adapter | LIFO | ✅ Allowed | 🔒 Top only | ⚡ O(1) top | Undo, backtracking |
| `queue` | Adapter | FIFO | ✅ Allowed | 🔒 Front/back only | ⚡ O(1) | Task scheduling |
| `priority_queue` | Adapter | By priority | ✅ Allowed | 🔒 Top only | ⚡ O(log n) | Heaps, Dijkstra's algo |
| `set` | Associative | Sorted | ❌ Unique only | 🌳 O(log n) | 🌳 O(log n) | Fast lookup, no dupes |
| `map` | Associative | Sorted by key | ❌ Unique keys | 🌳 O(log n) | 🌳 O(log n) | Key-value storage |
| `pair` | Utility | N/A | N/A | ⚡ O(1) | N/A | Bundling two values |

---

## 🚀 Getting Started

### ✅ Prerequisites
- A C++ compiler (`g++`, MinGW, or MSVC)
- Basic familiarity with C++ syntax

### 🔨 Compile & Run

```bash
# Compile
g++ Vector.c++ -o Vector

# Run
./Vector        # Linux / Mac
Vector.exe      # Windows
```

Replace `Vector` with any other container file name (`List`, `Map`, `Set`, `Stack`, `Queue`, `Priority_queue`, `Deque`, `Pair`) to compile and run that example.

---

## 🎯 Learning Path

This is roughly the order I'd go through these files myself, easiest to trickiest:

```
Start
  │
  ▼
Pair  ──▶  Vector  ──▶  List  ──▶  Deque
                                     │
                                     ▼
                        Stack  ──▶  Queue  ──▶  Priority_queue
                                                       │
                                                       ▼
                                              Set  ──▶  Map
                                                          │
                                                          ▼
                                                   🏆 You're comfortable
                                                      with STL now
```

> 💡 **Tip:** Start with `Pair` and `Vector` — they're the simplest, and everything else builds on the intuition you get from them. By the time you reach `Map` and `Priority_queue`, things click a lot faster.

---

## 🧠 What You'll Practice

- 🔹 How each STL container is structured internally
- 🔹 Common member functions (`push`, `pop`, `insert`, `erase`, `find`, etc.)
- 🔹 Time complexity trade-offs between containers
- 🔹 Choosing the *right* container for the *right* problem

---

## 🤝 Contributing

Contributions are welcome! Feel free to:
- 🍴 Fork this repository
- ➕ Add new STL examples
- 🛠️ Improve existing implementations
- 📬 Open a Pull Request

---

## 📄 License

This project is open-source and available for **educational purposes**. Use it, learn from it, and build on it! 🎓

---

<div align="center">

### ⭐ If this helped you, consider starring the repo!

**Happy Coding! 💻🚀**

</div>
