# Day 19 - File I/O with ifstream and ofstream

## Quiz Me
1. What is the difference between ifstream and ofstream?
2. Why does ifstream fail if the file does not exist but ofstream does not?
3. What does std::getline do and why does it work well as a while loop condition?
4. What happens if you forget to close a file?
5. Why does ofstream almost never fail on is_open() but ifstream does?

## Key Concepts Answers
1. ifstream reads from a file. ofstream writes to a file. Same pattern as cin and cout but for files instead of the console.
2. ifstream needs the file to already exist because it is reading — there is nothing to read if the file is not there. ofstream creates the file automatically because writing just means putting data somewhere new.
3. std::getline reads one line at a time into a string variable. It returns true while there are lines left and false when the file ends. That makes it a natural while loop condition — keep going while you can get a line.
4. The OS holds a lock on the file. Other programs cannot access it, you waste resources, and changes might not be saved to disk properly. Always close what you open.
5. ofstream creates the file if it does not exist as long as the directory exists. ifstream has no way to create a missing file so it fails immediately.

## My Understanding
ifstream and ofstream follow the same pattern as everything else in C++. Open it, check if it opened, use it, close it. The only difference is direction — one reads in, one writes out.

The getline while loop was the thing that clicked. It is the same idea as the entity loop — while there is something valid to process, process it. When there is nothing left, stop.

## Mistakes I Fixed
- Forgot to close the input file before opening the output file — resources should be closed as soon as you are done with them
- Tried to stream the ifstream object directly to print the filename — you need to store the filename as a string first

## Key Insight
ofstream uses the same << operator as cout. Once you know cout, you already know how to write to a file. Just swap cout for your file variable.

## My Takeaway
File I/O is not complicated. It is the same open, check, use, close pattern you use for every resource in C++. ifstream reads, ofstream writes. getline handles the loop naturally.

## Summary
Built a log file reader that opens a text file, reads every line, prints them to console, counts them, then writes the total to a summary file. First program using both ifstream and ofstream together.