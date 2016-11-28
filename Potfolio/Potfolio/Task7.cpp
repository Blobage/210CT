#include <iostream>


using namespace std;
bool recursive(int a, int b, int c);

int main()
{
	int a;
	int b;
	bool prime;

	b = 1;
	cin >> a;
	cout << endl << endl;
	
	prime = recursive(a, b, 0);
	
	if (prime == true)
	{
		cout << a << " is a prime number" << endl << endl;
	}
	else 
	{
		cout << a << " is not a prime number" << endl << endl;
	}

	return 0;
}

bool recursive(int number1 , int number2, int prime_Count)
{
	int notprimeCount = 0;
	int primeCount = prime_Count;
	int c = number1 % number2;

	//cout << endl <<primeCount;
	if (c == 0)
	{
		primeCount += 1;
		//cout << "boop" << endl;
	}
	else
	{
		notprimeCount += 1;
		//cout << "boop2" << endl;
	}

	if (number2 < number1)
	{
		//cout << primeCount;
		recursive(number1, (number2 + 1), primeCount);
	}
	else 
	{
		//cout << primeCount;
		if (primeCount == 2)
		{
			//cout << "here"<< endl;
			return true;
		}
		else
		{
			//cout << "here"<< endl;
			return false;
		}
	}
}