#include "task3.h"

int main() {
	setlocale(LC_ALL, "russian");

	char buf[256] = { 0 };
	unsigned int value = 0;

	printf("������� ����� ������������� �����(�� ����� 9-�� ����): ");
	scanf("%u", &value);

	printf("buf = %s\n", int2str(buf, value));

	return 0;
}