#include<iostream>
#include<iomanip>

int main()
{
	using namespace std;
	for (int a = 1, b = 1; a != 10; ++b)
	{
		cout << a << "*" << b << "=" << setfill(' ') << setw(2) << a*b << "  ";
		if (a == b)
		{
			++a; b = 0; cout << endl;
		}
	}
	return EXIT_SUCCESS;
}