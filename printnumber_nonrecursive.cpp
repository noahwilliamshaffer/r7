#include <iostream>
#include <cstdlib>

using namespace std;

void print_number(size_t k) {
    for (size_t i = 0; i <= k; ++i) {
	cout << i << " ";
    }
}
int main(int argc, char *argv[]) {

    if (argc != 2) {
	cout << argv[0] << " k" << endl;
	exit(EXIT_FAILURE);
    }

    int k = atoi(argv[1]);
    
    print_number(k);
    cout << endl;
}
