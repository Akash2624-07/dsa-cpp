# DSA Practice

My data structures and algorithms practice in C++, organised by topic.

## Layout

```text
NN-topic/
  lecture-NN/   -> concept implementations, in study order
  problems/     -> platform problems, named <platform>-<id>-<slug>.cpp
```

Each file starts with a comment naming the problem or concept (and the problem URL for platform problems).
Platform prefixes: `lc` LeetCode, `gfg` GeeksforGeeks, `cf` Codeforces, `cc` CodeChef, `ac` AtCoder, `cses` CSES.

Some LeetCode files contain only the `class Solution` part, as submitted on the site.

## Topics

| Folder | Topic |
|---|---|
| `01-array` | Arrays |
| `02-binary-search` | Binary search |
| `04-recursion` | Recursion |
| `05-linked-list` | Linked lists |
| `06-OOPS` | Object-oriented programming in C++ |

## Build

```sh
g++ -std=c++17 -O2 -Wall file.cpp && ./a.out
```
