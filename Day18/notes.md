# Day 18 - std::string Methods and Word Counter

## Quiz Me
1. What does `.find()` return if it cannot find the character you searched for?
2. What does `.substr(4, 3)` do?
3. Why does the word counter use a `while` loop instead of a `for` loop?
4. What is wrong with declaring `longestWord` as an `int`?
5. When does `if (spacePos == std::string::npos)` fire?

## Key Concepts Answers
1. It returns `std::string::npos` — a special value that means "not found." You check for it to know when there are no more spaces left.
2. It starts at index 4 and takes the next 3 characters.
3. Because the sentence shrinks each iteration. A for loop needs a fixed count. A while loop just checks a condition — "keep going while sentence is not empty" — which works perfectly when the size keeps changing.
4. `longestWord` needs to hold the actual word, not just its length. It has to be a `std::string`.
5. When the sentence has no more spaces — meaning you are on the last word.

## My Understanding
The core idea of this program is chopping the sentence one word at a time. Every iteration, you find the first space, grab everything before it as a word, then cut that word and the space off the sentence. The sentence gets shorter each pass until nothing is left and the loop ends.

The part that clicked for me was the `longestWord` comparison. On the first run, `longestWord` is an empty string with length 0. Any real word beats that. So the first word automatically becomes the champion, and every word after either beats it or doesn't. Simple.

The other thing that clicked was why `sentence = ""` exists in the last-word case. Without it, the loop would never end because the sentence would never become empty naturally.

## Mistakes I Fixed
- Declared `longestWord` as `int` instead of `std::string` — it needs to hold the actual word, not a number
- Forgot the `else` structure — the substr lines need to be inside `else`, not floating outside the if block
- Comment on the closing brace said "because of my else statement" — wrong, the loop jumps back because that is how while loops work

## Key Insight
The "chop the sentence" pattern works on any delimited string. Change the space to a comma and you have a CSV parser. Change it to a slash and you have a path parser. Same pattern, different delimiter. This comes up constantly in real C++ work.

## My Takeaway
`std::string` has methods that make string work manageable. `.find()` locates characters, `.substr()` extracts pieces, `.length()` compares sizes, `.empty()` checks if anything is left. Those four methods together can parse almost any simple string format.

## Summary
Built a word counter from scratch using `std::string`. The program chops a sentence word by word, counts each one, and tracks the longest. Second attempt was written mostly independently with minimal help. First time the string-chopping pattern made real sense.