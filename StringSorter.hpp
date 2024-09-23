#include <iostream>

using namespace std;

class StringSorter {

public:
	void add_new_string(string stringToAdd);
	void cout_sorted_strings();


private:
	vector<string> stringVector;
	void sort_strings();
	void add_string_to_string_vector(string stringToAdd);

};
