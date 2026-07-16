# LeetCode — Daily Solutions

This repository is where I will solve LeetCode problems on a daily basis.

## Purpose

- Track daily problem-solving practice and keep runnable solutions.
- Provide a clear structure so problems and multiple language solutions are easy to find.

## Repository structure

- solutions/
  - <problem-number>-<slug>/
    - python/
      - solution.py
      - README.md (optional problem notes)
    - cpp/
      - solution.cpp
    - java/
      - Solution.java

Example: `solutions/0001-two-sum/python/solution.py`

Alternative (date-based) for daily snapshots:

- daily/
  - 2026-07-16-2-sum/
    - solution.py
    - notes.md

Use whichever organization you prefer; the `solutions/` by-problem layout is recommended for long-term lookup.

## Naming conventions

- Use zero-padded problem numbers (e.g., `0001`, `0123`) to keep folders sorted.
- Use lowercase hyphen-separated slugs derived from the LeetCode title (e.g., `two-sum`).
- Put language-specific code in a language subfolder (python, cpp, java, etc.).

## How I will use this repo

- Each day I will add or update a folder under `solutions/` or `daily/` with my solution(s).
- Include brief notes or complexity analysis in a `README.md` or `notes.md` next to the solution file.
- For Python: run `python3 solution.py`.
- For C++: compile with `g++ -std=c++17 solution.cpp -O2 -o solution && ./solution` (adjust as needed).
- For Java: `javac Solution.java` then `java Solution`.

## Contributions

This is primarily a personal practice repo. Contributions and PRs are welcome — please:

- Add tests or alternative solutions in their own language folder.
- Keep folder naming consistent with the conventions above.

## TODO

- Add a LICENSE if I want to accept wider contributions.
- Add a template for problem README/notes.

Happy coding!