#include "omp.h"
#include <iostream>
#include "submit.h"
using namespace std;

void vec_random_norm(float* rand_arr, int n)
{
	float min = 100;
	float max = -1;
	#pragma omp single
	{
		for (int i = 0; i < n; i++) {
			if (rand_arr[i] > max)
				max = rand_arr[i];
			if (rand_arr[i] < min)
				min = rand_arr[i];
		}
	}
	rand_arr[omp_get_thread_num()] = (rand_arr[omp_get_thread_num()] - min) / (max- min);
	Submit_test();
}