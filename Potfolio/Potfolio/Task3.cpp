#include <iostream>

using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int highest = 1;
	cout << "Enter a value: " << endl;
	cin >> a;
	
	for (int i = 1; i<= a ; i++)
	{
		
		b = i * i;
		if (b >= (a*a))
		{
			if (b > highest)
			{
				highest = b;
				c = i;
			}
			
		}
	}
	cout << endl << endl << "The highest square number is: " << c << " at " << highest;

	return 0;
}