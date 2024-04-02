#include "c_kernel.h"

float vectorDotProduct() {

	int size = 1 << 26;
	float *vector1 = (float*)malloc(size * sizeof(float));
	float *vector2 = (float*)malloc(size * sizeof(float));
	float result = 0;

	for (int i = 0; i < size; i++) {
		vector1[i] = 2.0;
		vector2[i] = 3.0;
		result += (vector1[i] * vector2[i]);

	}

	return result;
}