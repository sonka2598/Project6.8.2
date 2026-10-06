#include <iostream>
#include <vector>
#include <list>
#include <set>

using namespace std;

template <typename T>
void print_container(const T& container) {
	for (auto it = container.begin(); it != container.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	set<string> test_set = {"one", "two", "three", "four"};
	print_container(test_set); 

	list<string> test_list = {"one", "two", "three", "four"};
	print_container(test_list); 

	vector<string> test_vector = {"one", "two", "three", "four"};
	print_container(test_vector); 

	return 0;
}