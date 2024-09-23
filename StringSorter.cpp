#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> 
#include "StringSorter.hpp"

using namespace std;

vector<string> stringVector = {};

void StringSorter::add_string_to_string_vector(string stringToAdd) {
	stringVector.push_back(stringToAdd);
}

void StringSorter::sort_strings() {
	vector<string>::iterator first = stringVector.begin();
	vector<string>::iterator last = stringVector.begin();

	sort(first, last);
}

void StringSorter::add_new_string(string stringToAdd) {
	add_string_to_string_vector(stringToAdd);
	sort_strings();
}

void StringSorter::cout_sorted_strings() {
	cout << "Current business names: " << endl;
	for (string string : stringVector) {
		cout << "\t" << string << endl;
	}
}