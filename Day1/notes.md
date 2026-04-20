# 📅 Day 1 — C++ + Git/GitHub Fundamentals

---

## 🧠 What I Learned

### C++ Basics
- A **program** is a set of instructions that a computer executes.
- When I press **Run**:
  1. The code is **compiled** (translated into machine code).
  2. The program **executes**.
  3. Execution **starts at `main()`**.
- `main()` is the **entry point** of every C++ program.
- `std::cout` is used to **output text to the console**.
- If `main()` is missing:
  - The program has **no entry point**
  - It will **fail to compile/run**

---

### Git & GitHub Basics
- **Git** = Version control system (tracks code changes locally)
- **GitHub** = Online platform to store and share repositories
- **Repository (Repo)** = Project folder with version history

#### Core Commands
- `git init` → Initializes Git in a project folder
- `git add .` → Stages all files for the next commit
- `git commit -m "message"` → Saves a snapshot of changes
- `git remote add origin <url>` → Links local repo to GitHub
- `git push` → Uploads commits to GitHub

- **Repo Link** = URL pointing to the GitHub repository

---

## 💻 What I Built
- Created my **first C++ console application**
- Printed `"Hello World"` to the console
- Modified output and re-ran the program
- Initialized a Git repository locally
- Created and connected a GitHub repository
- Successfully pushed my project to GitHub

---

## ⚠️ What I Struggled With
- Understanding the full flow:
  - Pressing **Run → Compilation → Execution**
- Differentiating:
  - **Staging (`git add`) vs Committing (`git commit`)**

---

## ❓ Questions I Had
- What happens if `main()` is removed?

---

## 🔑 Key Takeaways
- Every C++ program **must have `main()`** as the entry point
- Code does **not run directly** — it must be **compiled first**
- Git works in **3 main stages**:
  1. Working Directory
  2. Staging Area (`git add`)
  3. Commit History (`git commit`)
- GitHub is used to **store and share code remotely**

---

## 🚀 Next Focus
- Strengthen understanding of:
  - Program execution flow
  - Git workflow (add → commit → push)