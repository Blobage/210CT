#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> ary;

	while(true)
	{
		string word;
		cin >> word;
		if (word != "")
		{
			ary.push_back(word);
		}
		
		
		if (cin.get() == '\n')
		{
			break;
		}
	}
	
	for (int i = ary.size() - 1; i >= 0; i--)
	{
		cout << ary[i] << " ";

	}
	
	return 0;
}