#include <iostream>
#include <list>
#include <array>
#include <string>

using namespace std;

int main()
{
	array<string, 50> ary;

	for (int i = 0; i < 50; i++)
	{
		cin >> ary[i];
		if (ary[i] == ".")
		{
			break;
		}
	}

	for (int i = 9; i >= 0; i--)
	{
		if (ary[i] != "")
		{
			if (ary[i] == ".")
			{
				cout << ary[i];
			}
			else
			{
				cout << ary[i] << " ";

			}
		}
	}
	
	return 0;
}