#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "c_kernel.h"


extern float dotProduct();

//Need to check for times for the following: 2^20, 2^24, 2^26

int main() {

	float cVectorDotProduct, asmVectorDotProduct;
	double cOperationTime, asmOperationTime;
	clock_t starttime, endtime;

	//start of C kernel
	
	starttime = clock();

	//c kernel code here
	cVectorDotProduct = vectorDotProduct();

	endtime = clock();
	cOperationTime = (double)(endtime - starttime) / CLOCKS_PER_SEC;

	//end of C kernel






	//start of nasm kernel


	starttime = clock();

			//nasm code here
	asmVectorDotProduct = dotProduct();

	endtime = clock();
	asmOperationTime = (double)(endtime - starttime) / CLOCKS_PER_SEC;

	//end of nasm kernel



	//print results

	printf("Vector1 value: 2.0 Vector2 value: 3.0\n");
	printf("Vector Size N = 2^26\n");
	printf("C Kernel Result: %f\n", cVectorDotProduct);
	printf("ASM Kernel Result: %f\n", asmVectorDotProduct);
	printf("C Kernel Time: %f\n", cOperationTime);
	printf("ASM Kernel Result: %f\n", asmOperationTime);

	return 0;
}

