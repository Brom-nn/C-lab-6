/*
unsigned int seqCollatz(unsigned int *maxlen) - �������, ������������ ����� � ������������ �� ������ maxlen �����
unsigned int collatz(unsigned long long num) - �������, ������������ ����� ������������������ �������� ��� ����� num
*/

#include "task2.h"

#define printf //

unsigned int collatz(unsigned long long num) {
	if (num == 1) {
		printf("num = %llu\n", num);
		return num;
	}

	//while (num != 1) {
	//	num = (num & 1) ? (3 * num + 1) : (num >> 1);
	//	cnt++;
	//}

	if (num & 1) {
		printf("!(num % 2)= %llu\n", num);
		return collatz(num * 3 + 1) + 1;
	}
	else {
		printf("(num % 2)= %llu\n", num);
		return collatz(num >> 1) + 1;
	}
}

unsigned int seqCollatz(unsigned int* maxlen) {
	*maxlen = 0;
	unsigned int len = 0;
	unsigned long long i = 0;
	unsigned long long num = 0;

	for (i = 2; i <= MAX_NUM; i++) {
		len = collatz(i);
		if (*maxlen < len) {
			*maxlen = len;
			num = i;
		}
	}

	return num;
}
