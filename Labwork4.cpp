#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int A, B;
	cout << "Введіть значення чисел А і В: ";
	cin >> A >> B;
	cout << "\nЧисла A і B мають однакову парність?  " << boolalpha << (A % 2 == B % 2);
	return 0;
}
