#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> 
#include <string>
#include "StringSorter.hpp"

using namespace std;

const string yesPrompts[4] = { "y", "Y", "yes", "Yes" };

bool is_prompt_yes(string prompt) {
	for (string yesPrompt : yesPrompts) {
		if (prompt == yesPrompt) {
			return true;
		}
	}

	return false;
}

int main() {

	cout << "Welcome to the Business Name Sorter." << endl;

	bool continuePromptingNames = true;
	StringSorter stringSorter = StringSorter();

	while (continuePromptingNames) {
		string userBusinessNamePrompt;

		cout << "Enter the name of the business: ";
		getline(cin, userBusinessNamePrompt);
		//cin.ignore();

		stringSorter.add_new_string(userBusinessNamePrompt);
		stringSorter.cout_sorted_strings();

		string userContinuePrompt;

		cout << "Do you want to add another business? ";
		getline(cin, userContinuePrompt);
		//cin.ignore();

		if (!is_prompt_yes(userContinuePrompt)) {
			continuePromptingNames = false;
		}
	}

	cout << "Goodbye!" << endl;

	return 0;
}