#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int value = 1;
	int highCount = 0;
	int valueCount = 0;
	for (int i = 1; i <= a; i++)
	{		
		value *= i;
		cout << value << "," << endl;
	}

	string valueString = std::to_string(value);
	int valueSize = valueString.size();
		
	for (int j = valueSize - 1; j >= 0; j--)
	{
		if (valueString[j] == '0')
		{
			valueCount += 1;
		}
		/*else if (valueString[j] != '0')
		{
			highCount = valueCount;
		}*/
		else
		{
			break;
		}
	}
	
	cout<< endl<< valueCount << " trailing zeros";
		
	return 0;

}