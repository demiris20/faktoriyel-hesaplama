#include <iostream>
#include <math.h>
using namespace std;

int main()                                           
{
	int sayi, x;
	int y = 1;
	cout << "sayi giriniz :";
	cin >> sayi;

	for (x = 1; x <=sayi; x++) {
		y *= x;
	}
	cout << "faktoriyeli =\t" << y;
	
	return 0;
}

