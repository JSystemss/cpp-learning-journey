#include <iostream>
#include <string>

int main()
{
	std::string sentence = "Word Counter Project File";
	int wordCount = 0;
	std::string longestWord = "";

	
	while (!sentence.empty()) // Will enter loop if sentence is not empty.. 
	{
		int spacePos = sentence.find(" "); // Sets spacePos to the index of my first space.
		std::string word; // Declares a variable of type string called word.

		if (spacePos == std::string::npos) // Checks if spacePos returns npos which means there is no more spaces left ( won't untill it returns npos. ) 
		{
			word = sentence;
			sentence = "";
		}
		else // Space was found so grab the word before the space and chop it off sentence
		{
			word = sentence.substr(0, spacePos);
			sentence = sentence.substr(spacePos + 1); 
		}

		wordCount++; // Increments my word, so now wordCount is 1.

		if (word.length() > longestWord.length()) // Checks if my word length is greater than my longest word first run longest word is a empty string so 0 and first word is ofcourse greater than 0.
		{
			longestWord = word; // if so then set longest word to that word.
		}
	} // end of while so will jump back to condition.

	std::cout << "Longest word: " << longestWord << std::endl;
	std::cout << "Word count: " << wordCount << std::endl;
	std::cin.get();
	return 0;

}
