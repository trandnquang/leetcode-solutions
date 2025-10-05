# 📌 Roadmap: 15 Essential String Problems (base from ChatGPT)

## 🌱 Beginner (Basic string operations)

Focus: indexing, slicing, reversing, simple checks

1. Reverse String (344) → two-pointer swap ✅

2. Reverse Words in a String III (557) → split each word, reverse individually ⚠️ Need to review all solutions ⚠️

3. Valid Palindrome (125) → two-pointer check ignoring non-alphanumeric ✅

4. Implement strStr() (28) → substring search (can use Python find or manually) ✅

5. Length of Last Word (58) → simple parsing from the end ✅

6. Longest Common Prefix (14) → compare prefixes across strings ✅

## 🌿 Intermediate (logic + manipulation)

Focus: pattern scanning, string building, and parsing

7. Valid Anagram (242) → count letters (can use array of 26 chars, no hash map yet) ✅

8. Count and Say (38) → string generation with counts ✅

9. Add Binary (67) → simulate binary addition manually ✅ (Should review again all solutions)

10. Roman to Integer / Integer to Roman (13 / 12) → mapping + parsing logic ✅ (Should rewrite the better code using hash map)

11. Longest Palindromic Substring (5) → expand-around-center echnique

12. String Compression (443) → in-place array writing logic (similar to array problems!) ✅  (Should review again the solution)

## 🌳 Advanced (two-pointer + sliding window + pattern)

Focus: pattern matching, substring manipulation, window scanning

13. Valid Parentheses (20) → stack logic (string scanning)

14. Longest Substring Without Repeating Characters (3) → sliding window

15. Minimum Window Substring (76) → optional advanced sliding window with counts

## 🧩 Bonus (conceptual expansion)

If you later allow light use of hash maps or sets:

16. Group Anagrams (49)

17. Valid Palindrome II (680) — check palindrome with at most one deletion

18. Is Subsequence (392) — two-pointer sequence matching

19. Repeated Substring Pattern (459) — trick with `(s + s)[1:-1]`

## 🧠 Key Concepts You’ll Master by Doing These

Concept                     | Problems
Two Pointers                | 344, 125, 3, 5
Parsing & String Building   | 38, 67, 12, 13
Palindrome logic            | 125, 5, 680
Substring & prefix ideas    | 14, 28, 3
Stack-based validation      | 20
Sliding Window              | 3, 76
