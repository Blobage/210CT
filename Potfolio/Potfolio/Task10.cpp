#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> mainList;
	vector<int> largestSubSequence;
	vector<int> secondaryList;

	while (true)
	{
		int value;
		cin >> value;
		mainList.push_back(value);
		cout << "added" << endl;
		if (cin.get() == '\n')
		{
			break;
		}
	}

	secondaryList.push_back(mainList[0]);
	cout << secondaryList[0]<< endl;
	for (int i = 1; i < (mainList.size() - 1); i++)
	{
		if (mainList[i]>mainList[i-1])
		{
			secondaryList.push_back(mainList[i]);
			cout << "True " << endl;
		}
		else
		{
			if (secondaryList.size() > largestSubSequence.size())
			{
				largestSubSequence.clear();
				largestSubSequence = secondaryList;
				cout << "False 1" << endl;
				secondaryList.clear();
				cout << "False 2" << endl;
				secondaryList.push_back(mainList[i]);
				cout << "False 3" << endl;
			}
		}
		/* 
			if (secondaryList.size() > largestSubSequence.size())
			{
				largestSubSequence.clear();
				largestSubSequence = secondaryList;
				cout << "False 3" << endl;
				secondaryList.clear();
				cout << "False 4" << endl;
				secondaryList.push_back(mainList[i]);
				cout << "False 5" << endl;
			}
		*/
		
	}

	if (secondaryList.size() > largestSubSequence.size())
	{
		secondaryList.push_back(mainList[(mainList.size()-1)]);
		largestSubSequence.clear();
		largestSubSequence = secondaryList;
		cout << "False 6" << endl;
		secondaryList.clear();
	}

	for (int i = 0; i < (largestSubSequence.size()); i++)
	{
		cout << largestSubSequence[i] << " ";

	}
	return 0;
}