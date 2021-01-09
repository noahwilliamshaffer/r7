#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <unordered_set>

using namespace std;

template <typename T>
void remove_duplicate(vector<T> & v) {
    unordered_set<T> ht;
    vector<T> v1;

    for (auto & x : v) {
	if (ht.find(x) == ht.end()) {
	    v1.push_back(x);
	    ht.insert(x);
	}
    }

    v = v1;
}
int main() {
    vector<int> v1 = {10, 20, 30, 40, 10, 10, 40, 50, 40, 60};

    cout << "Original: ";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    remove_duplicate(v1);
    cout << "After removing duplicates: ";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    exit(EXIT_SUCCESS);
}
