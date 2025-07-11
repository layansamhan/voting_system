# 🗳️ Simple Voting System in C

This is a basic console-based voting program in C. It allows users to input candidates, cast votes, and display the final results — including who won or if it's a draw.

---

## ✨ Features

* 👥 Add up to **4 candidates**.
* 🙋‍♂️ Each voter casts one vote.
* 📊 Automatically counts votes.
* 🏆 Declares the winner (or detects a draw).
* ❌ Handles invalid choices gracefully.

---

## ▶️ How to Use

1. **Compile the code**:

   ```bash
   gcc -o voting voting.c
   ```

2. **Run the program**:

   ```bash
   ./voting
   ```

3. **Follow the prompts**:

   * Enter 4 candidate names.
   * Enter the number of voters.
   * Each voter picks a candidate by number.

---

## 📚 Example

```
Enter names of 4 candidates:
Candidate 1: Alice
Candidate 2: Bob
Candidate 3: Charlie
Candidate 4: Dana

Enter number of voters: 5

Voter 1:
1. Alice
2. Bob
3. Charlie
4. Dana
Enter your choice (1-4): 2
Thank you for voting for Bob!

...

Voting Results:
Alice: 1 votes
Bob: 2 votes
Charlie: 1 votes
Dana: 1 votes

Winner is Bob with 2 votes!
```

---

## ⚠️ Limitations

* Only **4 candidates** supported.
* No input validation for names.
* Voting is **not anonymous**.
* No persistent storage (votes are not saved after program ends).
