#include <iostream>

using namespace std;
int main()
{
	int a;
	int b;
	float c;
	int highest = 1;
	cin >> a;
	
	for (int i = 1; i <= a; i++)
	{
		b = sqrt(i);
		c = sqrtf(i);
		cout << endl << i << endl;
		cout << b;
		cout << endl;
		cout << c;
		if (c == b)
		{
			if (i > highest)
			{
				highest = i;
				
			}
		}
	}
	cout << endl;
	cout << "The highest is: "<<highest;

	return 0;
}