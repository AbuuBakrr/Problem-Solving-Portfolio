# 🎓 Lecture Sleep

> **Problem ID:** 961B  
> **Difficulty:** Educational Codeforces Round 41  
> **Time Limit:** 1 second  
> **Memory Limit:** 256 megabytes

## 📝 Problem Statement

Your friend Mishka and you attend a calculus lecture that lasts **n** minutes. During the **i-th** minute, the lecturer tells **aᵢ** theorems.

Mishka is really interested in calculus, but it's hard to stay awake for the entire lecture. You have an array **t** that describes Mishka's behavior:

- **tᵢ = 0**: Mishka is asleep during the i-th minute
- **tᵢ = 1**: Mishka is awake during the i-th minute

When Mishka is awake, he writes down all **aᵢ** theorems told during that minute. When asleep, he writes nothing.

### 🔑 The Secret Technique

You know a secret technique to keep Mishka awake for **k** consecutive minutes, but you can only use it **once**. You can start using it at the beginning of any minute between **1** and **n - k + 1**.

If you activate the technique at minute **i**, Mishka will be awake during all minutes **j** where **i ≤ j ≤ i + k - 1** and will write down all the theorems during those minutes.

### 🎯 Task

Calculate the **maximum number of theorems** Mishka can write down if you use your technique optimally.

---

## 📥 Input

- **Line 1:** Two integers **n** and **k** `(1 ≤ k ≤ n ≤ 10⁵)`

  - **n**: Duration of the lecture in minutes
  - **k**: Number of minutes you can keep Mishka awake

- **Line 2:** **n** integers **a₁, a₂, ..., aₙ** `(1 ≤ aᵢ ≤ 10⁴)`

  - Number of theorems during each minute

- **Line 3:** **n** integers **t₁, t₂, ..., tₙ** `(0 ≤ tᵢ ≤ 1)`
  - Mishka's behavior (0 = asleep, 1 = awake)

---

## 📤 Output

Print a single integer: the maximum number of theorems Mishka can write down.

---

## 💡 Example

### Input

6 3
1 3 5 2 5 4
1 1 0 1 0 0

### Output

16
