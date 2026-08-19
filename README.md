# DSA - LeetCode Solutions (C++)

[![Language: C++](https://img.shields.io/badge/language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)
[![Open Issues](https://img.shields.io/github/issues/Myselfayush1805/DSA-leetcode-solutions-.svg)](https://github.com/Myselfayush1805/DSA-leetcode-solutions-/issues)

A curated collection of data structures & algorithms solutions for LeetCode problems implemented in idiomatic, well-documented C++17/20. Each problem resides in its own folder with a problem statement, explanation, complexity analysis, and one or more C++ implementations.

Table of Contents
- Overview
- What’s included
- Folder structure & naming convention
- How to run solutions locally
- Problem README template (how to add new problems)
- Contributing
- Recommended tooling / CI
- License
- Contact

Overview
--------
This repository is intended as a learning resource and reference for developers preparing for interviews or improving algorithmic skills. Solutions aim to be:
- Correct and tested
- Readable and documented
- Performance-conscious (time/space complexity noted)
- Portable across common compilers (g++, clang++)

What’s included
---------------
- Problem descriptions (from LeetCode) in each problem folder.
- One or more C++ solution files per problem, typically named `solution.cpp` or `<approach>.cpp`.
- Explanations, examples, complexity analysis in each problem's README.

Folder structure & naming convention
-----------------------------------
Top-level:
- README.md (this file)
- ABOUT.md (project blurb and goals)
- LICENSE (recommended)
- my-folder/0001-two-sum/
  - README.md — problem statement, examples, constraints, explanation
  - solution.cpp — canonical C++ solution (compile & run)
  - (optional) tests.txt — example input/output for quick manual testing

Naming conventions:
- Problem folder: `{zero-padded-index}-{slug}` (e.g., `0001-two-sum`).
- Solution file: `solution.cpp` (or `solution_<approach>.cpp` if multiple implementations).
- Use C++17 or later (add `// C++17` at top of files).

How to run solutions locally
----------------------------
Prerequisites:
- g++ (>=7) or clang++ (>=6) installed.

Compile and run a single solution:
```bash
g++ -std=c++17 -O2 my-folder/0001-two-sum/solution.cpp -o two-sum
./two-sum
