# Data Structures and Algorithms (DSA) Repository

This repository contains implementations of fundamental **Data Structures and Algorithms I(DSA)** in C++, starting with Sorting and expanding to Searching, Trees, Graphs, Dynamic Programming, and more.CSE 2216 Data Structure and Algorithms I and CSI 218 Data Structure and Algorithms I Laboratory


---

## 📘 Current Module: Sorting Algorithms

### Sorting Algorithms in C++

This project demonstrates three fundamental sorting algorithms implemented in C++:

* **Selection Sort**
* **Bubble Sort**
* **Insertion Sort**

You can input an array and choose any of the sorting algorithms by uncommenting the corresponding line in the `main()` function.

---

## 📂 Project Structure

Current and planned directory layout for the repository:

```
DSA-Repo/
│
├── Sorting/
│   ├── selection_sort.cpp
│   ├── bubble_sort.cpp
│   ├── insertion_sort.cpp
│
├── Searching/
│   ├── linear_search.cpp
│   ├── binary_search.cpp
│
├── LinkedList/
│   ├── singly_linked_list.cpp
│   ├── doubly_linked_list.cpp
│
└── README.md
```

main.cpp

````
Contains the full implementation of:
- Input function
- Print function
- Selection Sort
- Bubble Sort
- Insertion Sort
- Main execution

---

## 🧠 Algorithm Details

### 1. **Selection Sort**
Selection Sort works by repeatedly selecting the smallest element from the unsorted part of the array and placing it at the beginning.

#### **Algorithm Steps:**
1. Start from index `i = 0`.
2. Find the minimum element in the unsorted portion `i+1` to `n-1`.
3. Swap it with element at index `i`.
4. Repeat until entire array is sorted.

#### **Time Complexity:**
- **Best Case:** O(n²)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)
- **Space Complexity:** O(1) (in-place)

#### **Stability:** ❌ Not stable

---

### 2. **Bubble Sort**
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

#### **Algorithm Steps:**
1. Traverse array from `0` to `n-i-1`.
2. Compare adjacent elements.
3. Swap if needed.
4. If no swap occurs in a full pass, the array is already sorted.

#### **Time Complexity:**
- **Best Case:** O(n) (when already sorted)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)
- **Space Complexity:** O(1)

#### **Stability:** ✔️ Stable

---

### 3. **Insertion Sort**
Insertion Sort builds the sorted array one element at a time by inserting the current element into its correct position.

#### **Algorithm Steps:**
1. Pick element at index `i` as `key`.
2. Compare with elements from `i-1` backward.
3. Shift larger elements one position to the right.
4. Insert key at correct position.

#### **Time Complexity:**
- **Best Case:** O(n)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)
- **Space Complexity:** O(1)

#### **Stability:** ✔️ Stable

---

## ▶️ How to Use
1. Compile the program:
   ```bash
   g++ sorting.cpp -o sorting
````

2. Run it:

   ```bash
   ./sorting
   ```
3. Input size and elements:

   ```
   5
   3 1 4 2 5
   ```
4. Uncomment one of these in `main()` to select a sorting algorithm:

   ```cpp
   // bubbleSort(arr);
   // selectionSort(arr);
   // insertionSort(arr);
   ```

---

## 📌 Notes

* All sorting functions modify the vector **in-place**.
* Printing occurs after sorting.
* You may extend this project by adding Merge Sort, Quick Sort, etc.

---

---

## 📂 Planned Future Modules

You can expand this repository by adding the following sections as you implement them:

### 🔍 Searching Algorithms

* Linear Search
* Binary Search
* Recursive Binary Search

### 🧱 Basic Data Structures

* Arrays
* Linked Lists (SLL, DLL)
* Stack
* Queue
* Circular Queue

### 🌳 Trees

* Binary Tree
* Binary Search Tree (BST)
* AVL Tree
* Heap (Min/Max)
* Trie

### 🔗 Graphs

* Adjacency List / Matrix
* BFS
* DFS
* Dijkstra
* Floyd–Warshall
* MST (Prim/Kruskal)

### ⚙️ Advanced Algorithms

* Dynamic Programming
* Greedy Algorithms
* Backtracking
* Divide and Conquer

### 📦 Other Possible Additions

* Hashing
* STL-based Implementations
* Complexity charts

---

## 🧩 Repository Format Recommendation

To keep the project clean and scalable:

```
DSA-Repo/
│
├── sorting/
│   ├── selection_sort.cpp
│   ├── bubble_sort.cpp
│   ├── insertion_sort.cpp
│   └── README.md
│
├── searching/
│   ├── linear_search.cpp
│   ├── binary_search.cpp
│   └── README.md
│
├── trees/
├── graphs/
├── dp/
├── utils/
│   └── input_output.cpp
│
└── README.md
```

---

