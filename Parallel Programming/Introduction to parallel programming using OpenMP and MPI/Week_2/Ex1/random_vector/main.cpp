#include "ex_function.h"
#include "submit.h"
#include <iostream>

using namespace std;
int main()
{
	float* rand_arr = vec_random(10, true);

	for (int i = 0; i < 10; i++)
		cout << " " << rand_arr[i];
	cout << endl;

//  Проверка вервого задания
	//Submit_Part1(vec_random);
	Submit_Part2(vec_random);

	delete[] rand_arr;
	return 0;
}