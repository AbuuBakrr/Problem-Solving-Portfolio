# Problem-Solving Portfolio

This repository collects competitive programming solutions (primarily Codeforces) organized by problem rating. It's a personal portfolio for practicing algorithmic problems and tracking submissions.

## Structure

- `codeforces/` — solutions grouped by rating folders (`800/`, `900/`, `1000/`, ...). Each rating folder contains a `README.md` summarizing problems and solution links, and one `.cpp` file per problem.
- `problem`, `problem.cpp`, `input.txt`, `output.txt`, `test/` — workspace/test files used locally.

Filenames follow the pattern: `<Title>_<contestID><problemLetter>.cpp` (for example: `Tram_116A.cpp`).

## How to build and run a single solution

1. Compile a solution with g++ (example using C++20):

```bash
g++ -std=c++20 -O2 -Wall -Wextra "codeforces/800/Tram_116A.cpp" -o tram
```

2. Run the compiled program and (optionally) feed input from a file:

```bash
./tram < input.txt
```

Or compile & run in one line:

```bash
g++ -std=c++20 -O2 "codeforces/800/Tram_116A.cpp" && ./a.out
```

## Contributing / Adding new solutions

- Add a new `.cpp` file under the appropriate rating folder and follow the filename pattern.
- Update the corresponding rating `README.md` with problem metadata and a link to the solution file.
- Keep solutions self-contained; avoid changing other files unless necessary.

## Notes

- Solution files are usually simple, single-file C++ programs ready to be compiled.
- The `codeforces/README.md` is an auto-generated index of submissions.

## Contact

If you want changes, run suggestions, or help implementing solutions, open an issue or edit the repo directly.

---

Generated: automated README for quick navigation and usage.
