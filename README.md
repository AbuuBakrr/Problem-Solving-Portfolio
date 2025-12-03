# Problem-Solving Portfolio

A curated collection of competitive programming solutions, primarily from Codeforces. Organized by problem difficulty rating with solutions structured for easy navigation and reference.

---

## Overview

This portfolio tracks algorithmic problem-solving progress through:

- **Solutions**: C++ implementations organized by rating level
- **Documentation**: Problem details and references for each submission
- **Tracking**: Complete submission history with timestamps

---

## Repository Structure

```
Problem-Solving-Portfolio/
├── codeforces/                    # Codeforces problem solutions
│   ├── 800/                       # Rating 800 problems
│   ├── 900/                       # Rating 900 problems
│   ├── 1000/                      # Rating 1000 problems
│   ├── 1100/                      # Rating 1100 problems
│   ├── 1200/                      # Rating 1200 problems
│   ├── 1300/                      # Rating 1300 problems
│   ├── 1600/                      # Rating 1600 problems
│   └── Community Sheets/          # Additional practice materials
├── input.txt                      # Test input file
├── output.txt                     # Test output file
└── test/                          # Local testing workspace
```

### File Naming Convention

All solution files follow this pattern:

```
<ProblemTitle>_<ContestID><ProblemLetter>.cpp
```

Example: `Tram_116A.cpp`

---

## Getting Started

### Compiling a Solution

Compile with g++ using C++20 (or C++23 for newer problems):

```bash
g++ -std=c++20 -O2 -Wall -Wextra "codeforces/800/Tram_116A.cpp" -o tram
```

### Running a Solution

Run the compiled program with optional input from a file:

```bash
./tram < input.txt
```

Alternatively, compile and run in a single command:

```bash
g++ -std=c++20 -O2 "codeforces/800/Tram_116A.cpp" && ./a.out
```

---

## Adding New Solutions

1. Place the `.cpp` file in the appropriate rating folder under `codeforces/`
2. Follow the filename pattern: `<Title>_<ContestID><Letter>.cpp`
3. Update the corresponding rating folder's `README.md`
4. Keep solutions self-contained (single file, no external dependencies)

---

## Key Features

- **Organized by Difficulty**: Solutions grouped into rating-based folders
- **Well Documented**: Each solution includes problem links and submission details
- **Easy Navigation**: README files in each rating folder provide quick access
- **Auto-indexed**: Central index tracks all submissions with timestamps

---

## Notes

- All solution files are standalone C++ programs
- Solutions are tested and accepted on Codeforces
- Rating folders automatically generated and indexed
- Problem solutions organized from easiest (800) to most difficult (1600+)

---

## Contact

For suggestions, contributions, or improvements:

- Open an issue on GitHub
- Edit the repository directly
- Submit pull requests with new solutions

---
