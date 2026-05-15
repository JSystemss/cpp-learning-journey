#include <iostream>
#include <fstream>
#include <string>

int main()
{

	std::string line; 
	int lineCount = 0;

	std::ifstream file("C:\\Users\\justm\\3D Objects\\log.txt"); // ifstream ill go into that directory and read log.txt.

	if (!file.is_open()) // A check if file is open.
	{
		std::cout << "Failed to open File!" << std::endl;
		return 1;
	}

	while (std::getline(file, line)) // A while loop if i can get each line from my file if so i print that line and increment my count.
	{
		std::cout << line << std::endl;
		lineCount++;
	}

	file.close(); // Closes the file.

	std::ofstream output("C:\\Users\\justm\\3D Objects\\summary.txt"); // Creates a file called summary.txt inside of my directory.

	output << "Total lines inside log.txt: " << lineCount << std::endl; // Writes lineCount of log.txt into my summary.txt.

	output.close(); // closes the file.


	std::cout << "There is " << lineCount << " lines in log.txt" << std::endl; // Sends text and count to console.
	std::cin.get(); // Waits for user input to close the console.
	return 0; // exits successfully.
}