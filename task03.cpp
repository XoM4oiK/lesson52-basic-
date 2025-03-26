//#include <iostream>
//#include <string>
//using namespace std;
//
//int is_power_of_three(int num) {
//	if (num < 0) { num = -num; }
//	if (num < 10) { return num % 3 == 0; }
//
//	int d = num % 10;
//
//	int sum = is_power_of_three(num / 10) + d;
//	return sum / 3 == 0;
//}
//
//int main() {
//
//	int num;
//	cout << "enter number" << endl;
//	cin >> num;
//	cout << (is_power_of_three(num) == 1 ? "True" : "False");
//
//	return 0;
//}