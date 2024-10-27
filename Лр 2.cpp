


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 // Завдання 1 
	cout << setw(10) << right << showpos << 4 << endl;
	cout << setw(15) << setprecision(4) << right << internal << -67.09124 << endl;
	cout << setw(10) << right << showpos << 235 << endl;
	cout << hex << 2209 << endl;
	cout << fixed << setprecision(2) << -121.0 << endl;
	cout << dec << showpos << 1 << 24 << endl;
 // Завдання 2
	cout << "String1" << '\n' << setw(15) << right << "String2" << '\n' << setw(23) << right << "String3" << endl;
	cout << setw(15) << right << "String1" << '\n' << "String2" << endl;
	cout << "3";
	cout << '*';
	cout << setw(12) << right << "String" << '\n' << '1';


}


