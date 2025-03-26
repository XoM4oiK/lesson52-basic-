#include <iostream>
#include <string>
using namespace std;

bool power_of_numbers(int num, int n) {
	if (n < 0) { return 0; }
	if (num < 10) { return num; }
	if (n == 0) { return 1; }
	int d = num % 10;
	return num * power_of_numbers(num, n - 1);


}

int main() {

	int num;
	cout << "enter number" << endl;
	cin >> num;
	cout << power_of_numbers(num);

	return 0;
}