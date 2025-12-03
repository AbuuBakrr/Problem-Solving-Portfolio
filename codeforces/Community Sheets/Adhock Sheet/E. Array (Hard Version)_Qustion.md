# 📊 Array (Hard Version)

**Time Limit:** 1 second  
**Memory Limit:** 256 megabytes

⚠️ _Hard version - differs from easy version only by constraints on N and Q_

---

## Problem Statement

Given an array of size **N** and **Q** queries, calculate the sum of array elements from index **L** to **R** (inclusive) for each query.

---

## Input

**Line 1:** Integer N (1 ≤ N ≤ 10⁵)

**Line 2:** N integers a₁, a₂, ..., aₙ (1 ≤ a[i] ≤ 10⁵)

**Line 3:** Integer Q (1 ≤ Q ≤ 10⁵)

**Next Q lines:** Two integers L, R (1 ≤ L ≤ R ≤ N)

---

## Output

Print Q integers — the sum for each query in order.

---

## Example

### Input

5
1 2 2 5 10
3
3 5
1 4
2 3

text

### Output

17
10
4
