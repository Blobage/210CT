#include <iostream>
#include <random>
#include <array>
#include <vector>
#include <time.h>

using namespace std;

array<int, 8> shuffle(array<int, 8 > shuffle_list)
{
	for (int i = 0; i < 7; i++)
	{
		int index = rand() % 8;
		int a;
		int b;

		a = shuffle_list[index];
		b = shuffle_list[i];
		shuffle_list[index] = b;
		shuffle_list[i] = a;

	}
	return shuffle_list;
}

int main()
{
	srand(time(NULL));
	float random = (float)rand() / (float)RAND_MAX;
	array<int, 8> ary;

	cin >> ary[0] >> ary[1] >> ary[2] >> ary[3] >> ary[4] >> ary[5] >> ary[6] >> ary[7];
	int check = ary[3];
	cout << endl;
	cout << endl;
	cout << ary[0] << ary[1] << ary[2] << ary[3] << ary[4] << ary[5] << ary[6] << ary[7];

	ary = shuffle(ary);


	cout << endl;
	cout << endl;
	cout << ary[0] << ary[1] << ary[2] << ary[3] << ary[4] << ary[5] << ary[6] << ary[7];


	return 0;
}

