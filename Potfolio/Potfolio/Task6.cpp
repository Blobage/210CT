#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> sentence;

	while(true)
	{
		string word;
		cin >> word;
		if (word != "")
		{
			sentence.push_back(word);
		}
		
		
		if (cin.get() == '\n')
		{
			break;
		}
	}
	
	for (int i = sentence.size() - 1; i >= 0; i--)
	{
		cout << sentence[i] << " ";

	}
	
	return 0;
}