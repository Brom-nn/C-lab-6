/*
unsigned int seqCollatz(unsigned int *maxlen) - �������, ������������ ����� � ������������ �� ������ maxlen �����
unsigned int collatz(unsigned long long num) - �������, ������������ ����� ������������������ �������� ��� ����� num
*/

#include "task2.h"

unsigned int collatz(unsigned long long num) {
	unsigned int cnt = 1;
	
	if (num == 1)
		return cnt;

	if(num & 1){
		return collatz(3 * num + 1);
	}
	else {
		return collatz(num >> 1);
	}

/* 	while (num != 1) {
		num = (num & 1) ? (3 * num + 1) : (num >> 1);
		cnt++;
	}

	return cnt; */
}

unsigned int seqCollatz(unsigned int* maxlen) {
	unsigned int len = 0;
	int i = 0;
	int num = 0;

	for (i = 2; i <= MAX_NUM; i++) {
		len = collatz(i);
		if (*maxlen < len) {
			*maxlen = len;
			num = i;
		}
	}

	return num;
}
