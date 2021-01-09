#include <iostream>
#include <cstdlib>

using namespace std;

void print_number(size_t k) {
    if (k == 0) {
	cout << k << " ";
    } else {
	print_number(k-1);
	cout << k << " ";
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
