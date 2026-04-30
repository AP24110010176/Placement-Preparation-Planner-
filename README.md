# 📘 Placement Preparation Planner in C

## Overview

This project is a menu-driven C program that demonstrates the application of important algorithmic techniques such as Greedy and Dynamic Programming.

The program allows users to add subjects/topics along with their time requirements and importance scores, and determines the best combination of topics to study within a limited time. It also compares different approaches to highlight optimal and non-optimal solutions.

It is designed as a simple academic mini project and focuses on solving a real-world problem of time management and study planning.

---

## Features

- Menu-driven console application  
- Add multiple topics  
- Display all topics  
- Greedy Algorithm implementation  
- Dynamic Programming (0/1 Knapsack) implementation  
- Maximum Score calculation  
- Comparison between Greedy and DP results  

---

## Algorithms Used

### 1. Greedy Approach

Topics are selected based on the highest score-to-time ratio.

- Fast and simple  
- Does not always guarantee optimal results  

---

### 2. Dynamic Programming (0/1 Knapsack)

Finds the optimal combination of topics within the given time.

- Considers all possible combinations  
- Guarantees maximum score  

---

## Technologies Used

- C Programming Language  
- Standard Input/Output Library  

---

## Project Structure

```bash
PlacementPlanner/
│── main.c
│── README.md
```

---

## Menu Options

```text
1. Add Topics
2. Display Topics
3. Calculate using Dynamic Programming
4. Calculate using Greedy
5. Compare Results
6. Exit
```

---

## Sample Input

Enter 3 Topics:

| Topic    | Time (hrs) | Score |
|----------|-----------|-------|
| English  | 2         | 80    |
| Maths    | 4         | 90    |
| Sanskrit | 1         | 60    |

Total Available Time = 6

---

## Sample Output

```text
Maximum Score using DP: 170
Total Score using Greedy: 140
```

---

## Learning Outcomes

- Understanding Dynamic Programming  
- Understanding Greedy Algorithms  
- Solving 0/1 Knapsack Problem  
- Optimization Techniques  
- Decision Making using Algorithms  

---

## Future Improvements

- GUI-based application  
- Display selected topics clearly  
- File storage for saving inputs  
- Intelligent recommendation system  

---

## Team Members

- Yeswanth nuvvula
- sai vardhan kalva
- mohan Karthikeya karnataka
- lakshmi sathwik manda
- omkareswar jaladi
