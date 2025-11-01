# 💻 C-Problems — Learn C the Easy Way!

Welcome to the **C-Problems Wiki!**  
This wiki helps you learn C programming through simple, real, and working code examples — all included in this repository.

---

## 🧠 About This Repository
**C-Problems** is a complete collection of beginner-friendly to intermediate-level C programs.

> 🎯 **Goal:** Learn-by-doing — understand concepts by running small, clear programs.

Each `.c` file covers an important concept like loops, functions, arrays, strings, recursion, or file handling.

---

## 📂 Folder Structure

```bash
C-Problems/
│
├── Main.c                        # Base structure and syntax example
├── Avg-Using-Array.c             # Average calculation using array
├── Celsius-to-Fahrenheit.c       # Unit conversion
├── Factorial-Fibonacci-Using-Recursive.c # Recursion example
├── Find-Electricity-Bill.c       # Billing problem
├── Grade-Calculator.c            # Conditional logic
├── Find-Odd-Even.c               # Basic number check
├── README.md                     # All programs listed with descriptions
└── LICENSE                       # MIT License details
```

---

## ⚙️ Setup and Usage Guide

### 🧾 Step 1 — Clone the Repository
Clone this repo from GitHub to your local system:
```bash
git clone https://github.com/vishwas-2/C-Problems.git
cd C-Problems
```

---

### 🧰 Step 2 — Compile Any Program
Use the GCC compiler to compile your desired C file.
```bash
gcc program_name.c -o program_name
```

**Example:**
```bash
gcc Avg-Using-Array.c -o avg
```

---

### ▶️ Step 3 — Run the Compiled Program
Now execute your compiled file.
```bash
./program_name
```

**Example:**
```bash
./avg
```

You’ll see output in your terminal based on the input or logic of that program.

---

### 🧪 Step 4 — Try Different Programs
Repeat the same steps for other files like:
```bash
gcc Find-Odd-Even.c -o even
./even
```

or

```bash
gcc Grade-Calculator.c -o grade
./grade
```

---

## 🧩 Key Topics Covered

- ✅ Input / Output in C  
- ✅ Conditional Statements (`if`, `else`, `switch`)  
- ✅ Loops (`for`, `while`, `do-while`)  
- ✅ Arrays & Strings  
- ✅ Functions & Recursion  
- ✅ Pointers  
- ✅ File Handling  
- ✅ Real-world logic building  

---

## 📘 Example: Factorial Using Recursion

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}
```

---

## 🤝 How to Contribute

You can add your own programs and improve this collection!

```bash
# Step 1: Fork the repository
# Step 2: Clone your fork
git clone https://github.com/<your-username>/C-Problems.git

# Step 3: Add your new C file
# Example: Pattern-Printing.c

# Step 4: Commit your changes
git add .
git commit -m "Added new pattern printing program"

# Step 5: Push your changes
git push origin main

# Step 6: Create a Pull Request on GitHub
```

---

## 🪪 License

```text
MIT License

Copyright (c) 2025 Vishwas

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
...
```

Full license available in the [LICENSE](../LICENSE) file.

---

## 👨‍💻 Author

**Vishwas (2025)**  
Student Developer | C Programming Learner  

> 💬 “Every C program you write brings you closer to mastering logic.”  

---

## ⭐ Support & Feedback

If you found this helpful:
```bash
1. ⭐ Star this repository
2. 🧠 Share it with friends learning C
3. 💬 Suggest new problems in Issues section
```

Your feedback and contributions make this project better! 🚀

---
