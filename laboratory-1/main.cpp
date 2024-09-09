#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int getSeconds(int days, int hours, int minutes, int seconds) {
	return (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
};

double getLength(int radius) {
	return 2 * 3.14 * radius;
};

double getSquare(int radius) {
	return 3.14 * pow(radius, 2);
};


void main() {
	/* Задание - 1 */
	cout << "Hello World! \n";
	setlocale(LC_ALL, "Russian");
	cout << "Привет, мир!" << endl;

	/* Задание - 2 */
	int a = 12;
	int b = 16;

	cout << "a+b=" << a << "+" << b << "=" << sum(12, 16) << "\n";

	/* Задание - 3 */
	int days, hours, minutes, seconds;

	cout << "Введите дни, часы, минуты и секунды:";

	cin >> days >> hours >> minutes >> seconds;

	cout << days << " дней, " << hours << " часов, " << minutes << " минут, " << seconds << " секунд = " << getSeconds(days, hours, minutes, seconds) << " секунд\n";

	/* Задание - 4 */
	int gallons;

	cout << "Введите галлоны: ";

	cin >> gallons;

	cout << gallons << " галлонов = " << gallons * 4 << " литров";

	/* Задание - 5 */
	int radius;

	cout << "\nВведите радиус = ";

	cin >> radius;

	cout << "l = " << getLength(radius) << "\n";

	cout << "s = " << getSquare(radius);
}