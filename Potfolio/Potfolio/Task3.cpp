#include <iostream>
#include <array>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int highest = 1;
	array<int, 8> ary;
	cout << "Enter values: " << endl;
	cin >> ary[0] >> ary[1] >> ary[2] >> ary[3] >> ary[4] >> ary[5] >> ary[6] >> ary[7];
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		
		b = ary[i] * ary[i];
		if (b > highest)
		{
			highest = b;
			c = i;
		}
		
	}
	cout << endl << "The highest square number is: " << c << " at " << highest;

	return 0;
}