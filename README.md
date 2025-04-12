# 🌌 Krypton Programming Language

---

## ✨ Introduction

```
"In a realm of code where silence glows,  
A noble language softly flows.  
Born of stars and spectral light,  
Krypton rose in binary might."
```

**Krypton** is a modern, elegant, and expressive programming language named after the noble gas **Krypton** (element **#36**). Like its atomic namesake, Krypton the language is stable, versatile, and built with a structure that mirrors the **electron configuration** of the element.

---

## 🧪 Why the Name "Krypton"?

The name "Krypton" isn’t just poetic—it’s **scientific**.

- **Atomic Number**: `36`
- **Electron Configuration**:  
  `1s² 2s² 2p⁶ 3s² 3p⁶ 3d¹⁰ 4s² 4p⁶`

Each layer of electrons inspires a part of Krypton's design:
- **2 Core Modules** → 1s²
- **8 Primary Data Types** → 2s² 2p⁶
- **18 Built-in Functions** → 3s² 3p⁶ 3d¹⁰
- **8 Libraries** → 4s² 4p⁶

```
"Krypton glows with structure bright,  
As atoms dance in data's light."
```

---

## ⚙️ 2 Core Modules

```
"At its core, just modules two,  
The heart and soul of what it knew—  
One for logic, sharp and keen,  
One for memory, swift and clean."
```

- **`core.logic`** – Powers decision-making and control flow.
- **`core.memory`** – Handles memory and variable lifecycles.

These modules form the **foundation** of the language, mirroring the **first shell (1s²)** of the atom.

---

## 🔢 8 Primary Data Types

```
  "Through binary breath and structured fate,  
  The eight were born to form and state."
```

Reflecting the **second shell (2s² 2p⁶)**, Krypton defines 8 native datatypes:

1. `num` – Numbers (integers & floats)
2. `text` – Strings (Unicode)
3. `bool` – Booleans (`true` / `false`)
4. `list` – Ordered collections
5. `map` – Key-value pairs
6. `void` – Represents null or absence
7. `func` – Functions as first-class citizens
8. `byte` – Raw bytes for low-level ops

---

## 🧮 18 Built-in Functions

```
"Eighteen stars in logic's sky,  
That shine when reason dares to fly."
```

Inspired by the **third shell (3s² 3p⁶ 3d¹⁰)**, these functions cover essentials:

### 📐 Math
- `add()`, `sub()`, `mul()`, `div()`, `mod()`, `pow()`

### 🧵 Strings
- `length()`, `split()`, `join()`, `replace()`

### 🔄 Logic & Control
- `ifelse()`, `loop()`, `switch()`

### 📦 Collections
- `push()`, `pop()`, `find()`, `filter()`, `map()`

---

## 📚 8 Standard Libraries

```
"From noble roots, these libraries grew,  
Like outer shells that held what's true."
```

Inspired by **eight electrons in the outer shell (4s² 4p⁶)**, these libraries extend Krypton’s power:

1. **`krypto.math`** – Math utilities and constants
2. **`krypto.io`** – File and terminal I/O
3. **`krypto.net`** – Networking tools
4. **`krypto.sys`** – OS and environment
5. **`krypto.ui`** – UI toolkit for visual interfaces
6. **`krypto.ds`** – Common data structures
7. **`krypto.time`** – Time management and scheduling
8. **`krypto.crypto`** – Encryption and security

---

## 💠 Krypton Syntax Table

| **Category**       | **Syntax / Keyword**                             | **Description / Behavior**                                                                 |
|--------------------|--------------------------------------------------|---------------------------------------------------------------------------------------------|
| **Variables**      | `define varName as Type : value`                | Declare a variable with initial value                                                      |
|                    | `let varName as Type : value`                   | Alternative to `define`, used for shorter variable declarations                           |
| **Assignment**     | `varName : newValue`                            | Assign new value to existing variable                                                      |
| **Functions**      | `function name with params returns Type:`       | Function declaration header                                                                |
|                    | `end`                                           | Ends the function or block                                                                 |
| **Function Call**  | `functionName using args`                       | Call a function with arguments                                                             |
| **Return**         | `return value`                                  | Return a value from a function                                                             |
| **Conditionals**   | `check condition:`                              | Start an `if` condition                                                                    |
|                    | `else check condition:`                         | Start an `else if` block                                                                   |
|                    | `else:`                                         | Start an `else` block                                                                      |
|                    | `end`                                           | Close the `check` block                                                                    |
| **Loops**          | `repeat times N:`                               | Repeat N times                                                                             |
|                    | `repeat while condition:`                       | Loop while a condition is true                                                             |
|                    | `break`                                         | Break out of a loop                                                                        |
|                    | `continue`                                      | Skip current loop iteration                                                                |
|                    | `end`                                           | Ends the loop block                                                                        |
| **Print Output**   | `show "message"`                                | Print output to console                                                                    |
| **Input**          | `ask "prompt"`                                  | Get user input (optional feature)                                                          |
| **Comments**       | `-- comment`                                    | Single-line comment                                                                        |
|                    | `--[[ multi-line comment ]]--`                  | Multi-line comment                                                                         |
| **Types**          | `Int`, `Float`, `String`, `Bool`, `List`, `Void`| Basic data types                                                                           |
|                    | `alias TypeName as Symbol`                      | Define alias (e.g., `alias Bool as ✅`)                                                    |
| **Modules**        | `module name`                                   | Define a module                                                                            |
|                    | `import module_name`                            | Import another module                                                                      |
| **Operators**      | `+`, `-`, `*`, `/`, `%`                         | Arithmetic                                                                                 |
|                    | `==`, `!=`, `>`, `<`, `>=`, `<=`                | Comparison                                                                                 |
|                    | `and`, `or`, `not`                              | Logical operations                                                                         |
| **Data Structures**| `List of Type`                                  | List declaration (e.g., `List of Int`)                                                     |
|                    | `add item to list`, `remove item from list`     | List manipulation (can be added as sugar)                                                  |
| **Error Handling** | `attempt:` / `rescue:`                          | (Optional) Try-catch like structure                                                        |
|                    | `end`                                           | End error handling block                                                                   |
| **Special Keywords**| `define`, `let`, `function`, `with`, `returns` | Language-specific keywords                                                                 |
|                    | `show`, `ask`, `repeat`, `check`, `using`       | Intuitive verbs instead of traditional syntax                                              |
| **Example Emoji Aliases** | `alias Int as 🔢`, `Bool as ✅`, `String as 🧵` | Fun and unique type aliasing                                                               |

---

## 💡 Code Snippet

> *Coming soon...*

---

## 🧠 Philosophy

```
"Noble like gas, untamed yet pure,  
A language built to long endure.  
36 its soul, in logic born,  
A noble syntax, bright as dawn."
```

Krypton is more than just a language—it's a **philosophy**. Minimal yet powerful, it follows a model of **atomic harmony**, where structure mirrors science and elegance guides every line of code.

---

## 🚀 Final Thought

```
"When atoms code and bytes align,  
Krypton speaks in noble rhyme."
```

Welcome to **Krypton**—where chemistry meets code, and every statement is an element of art.

---