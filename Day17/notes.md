# Day 17 - std::map basics

## Quiz Me
1. What is the difference between std::vector and std::map?
2. How do you add a value to a std::map?
3. What happens if you read a key that does not exist?
4. Why do you need to include <string> even when std::map seems to work without it?

## Key Concepts Answers
1. std::vector is a list accessed by index (a number position). std::map is a list accessed by a key (any type I choose like a string).
2. mapName["key"] = value. The square brackets take the key, and you assign the value to it.
3. The map silently creates a new key with a default value of 0 (for int). This is a real bug to watch out for. Use .find() if I want to check without inserting.
4. I directly used std::string in my code so I should include it directly. It happens to work because <map> pulls it in on most compilers, but I should not rely on that.

## My Understanding
A std::map is a way to store pairs of things, a key and a value. The key is how I look up the value. Instead of remembering that index 0 is apples and index 1 is bread, I can just write inventory["apples"] and get the count.

The syntax has two types inside the angle brackets: std::map<KEY_TYPE, VALUE_TYPE>. That is how it differs from std::vector which only has one type inside.

I built a small inventory program with four items. Each item is a string key and the count is an int value. The map handles all the lookup work for me.

## Mistakes I Fixed
- Forgot to include <string> even though I used std::string as the key type
- Forgot return 0 at the end of main
- Output formatting was inconsistent with capitalization

## Key Insight
A map["key"] = value is doing two things at once: creating the key if it does not exist, and setting the value. This is also why reading a missing key silently inserts it.

## My Takeaway
Maps are useful when the natural way to find something is by name or label, not by position. Vectors are useful when order matters or when I need to loop through everything in sequence.

## Summary
Wrote a small inventory program using std::map<std::string, int>. Practiced declaring a map, adding key value pairs, and reading values out. First time writing this from blank file with no peeking at yesterday's example.