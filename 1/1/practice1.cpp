#include<iostream>
using namespace::std;
int main()
{
	cout << "please enter three numbers ,i can circulate between them." << endl;
	int a, b, c, d = 0;
	cout << "please enter begin number: " << endl;
	cin >> a;
	cout << "please enter end number: " << endl;
	cin >> b;
	cout << "please enter the gap number: " << endl;
	cin >> c;
	int sum = 0;
	while (a <= b) {
		sum += a;
		a += c;
		d++;
	}
	cout << "sum of " << a - c*d << " to " << b << " is " << sum << endl;
	return 0;
}