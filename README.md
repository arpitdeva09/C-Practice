# C Language Programs for Beginners

Welcome! 👋

This repository contains simple C language programs for beginners who are learning programming and want to practice basic concepts.

You can run these programs using **VS Code** or directly from your computer's **terminal/command prompt**.

---

## 📁 Repository Structure

```text
C-Programs/
│
├── README.md
├── hello.c
├── calculator.c
├── factorial.c
├── palindrome.c
├── prime.c
├── fibonacci.c
└── ...
```

Each `.c` file contains one C program.

---

# 💻 Method 1: Run C Programs Using VS Code

## Step 1: Install VS Code

Download and install Visual Studio Code:

https://code.visualstudio.com/

---

## Step 2: Install a C Compiler

VS Code is an editor. It does **not** compile C programs by itself.

You need a C compiler such as **GCC**.

On Windows, you can install **MinGW-w64** or another GCC distribution.

After installing GCC, open Command Prompt and type:

```bash
gcc --version
```

If you see the GCC version, the compiler is installed correctly.

---

## Step 3: Install the C/C++ Extension in VS Code

1. Open VS Code.
2. Open **Extensions**.
3. Search for:

```text
C/C++
```

4. Install the Microsoft C/C++ extension.

---

## Step 4: Download This Repository

On GitHub:

1. Click the **Code** button.
2. Select **Download ZIP**.
3. Extract the ZIP file.

Or, if you know Git:

```bash
git clone YOUR-REPOSITORY-LINK
```

---

## Step 5: Open the Folder in VS Code

In VS Code:

**File → Open Folder**

Select the downloaded C-Programs folder.

---

## Step 6: Open a C File

For example:

```text
hello.c
```

---

## Step 7: Compile the Program

Open the VS Code terminal:

**Terminal → New Terminal**

Then run:

```bash
gcc hello.c -o hello
```

This creates an executable program named `hello`.

---

## Step 8: Run the Program

On Windows:

```bash
.\hello
```

You should see the output in the terminal.

---

# 🖥️ Method 2: Run C Programs WITHOUT VS Code

You don't need VS Code to run C programs.

You only need:

1. A C compiler
2. Command Prompt / Terminal

---

## Windows

Open the folder containing your C file.

For example:

```text
C:\Users\YourName\C-Programs
```

Open Command Prompt in that folder.

Then compile:

```bash
gcc hello.c -o hello
```

Run:

```bash
hello
```

or:

```bash
.\hello
```

---

# 🐧 Linux

Open Terminal and go to the folder containing your program:

```bash
cd C-Programs
```

Compile:

```bash
gcc hello.c -o hello
```

Run:

```bash
./hello
```

---

# 🍎 macOS

Open Terminal and go to your program's folder:

```bash
cd C-Programs
```

Compile:

```bash
gcc hello.c -o hello
```

Run:

```bash
./hello
```

---

# 🧠 Understanding the Commands

Suppose your file is:

```text
factorial.c
```

You can compile it using:

```bash
gcc factorial.c -o factorial
```

Here:

* `gcc` → C compiler
* `factorial.c` → your C source file
* `-o` → tells GCC the output program name
* `factorial` → name of the executable

Then run:

```bash
./factorial
```

On Windows:

```bash
.\factorial
```

---

# 📌 Quick Example

Suppose `hello.c` contains:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
```

Compile:

```bash
gcc hello.c -o hello
```

Run:

```bash
.\hello
```

Output:

```text
Hello, World!
```

---

# ❗ Common Problems

### `'gcc' is not recognized`

This usually means GCC is not installed or its location has not been added to your system's PATH.

Install a GCC compiler and make sure GCC is available from the terminal.

---

### `No such file or directory`

Make sure your terminal is opened in the folder containing your `.c` file.

You can check the files in the current folder with:

Windows:

```bash
dir
```

Linux/macOS:

```bash
ls
```

---

### Program doesn't run after compiling

Make sure compilation completed without errors.

For Windows:

```bash
.\program-name
```

For Linux/macOS:

```bash
./program-name
```

---

# 📚 Recommended Learning Order

If you are completely new to C, try the programs in this order:

1. Hello World
2. Input and Output
3. If-Else
4. Switch
5. For Loop
6. While Loop
7. Do-While Loop
8. Patterns
9. Arrays
10. Strings
11. Functions
12. Recursion
13. Pointers
14. Structures
15. File Handling

---

## ⭐ Beginner Tip

Don't just copy and run the programs.

Try to:

1. Read the code.
2. Understand each line.
3. Run the program.
4. Change something in the code.
5. Run it again.
6. Try writing the same program yourself.

That's how you improve your programming skills.

---

## 📖 About This Repository

This repository is created for **C language practice and learning**.

The programs are intended to be simple and beginner-friendly.

If you are new to programming, start with the basic programs and gradually move toward more advanced topics.

Happy Coding! 🚀

---

## 🙏 Thanks for Visiting!

Thanks for visiting **arpitdeva09's GitHub repository**! ❤️
