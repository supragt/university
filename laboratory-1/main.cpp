#include <iostream>
#include <clocale>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

void main() {
	/* ������� - 1 */
    cout << "Hello World! \n";
	setlocale(LC_ALL, "Russian");
	cout << "������, ���!" << endl;

	/* ������� - 2 */
	int a = 12;
	int b = 16;

	cout << "a+b=" << a << "+" << b << "=" << sum(12, 16);

	/* ������� - 3 */

}