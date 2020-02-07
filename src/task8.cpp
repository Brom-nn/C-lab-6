/*
- int main(int argc, char* argv[]) - ������� �������, � ������� �������������� ����� ����������� ������� eval ��� ���������� ���������
- int eval(char *buf) - �������, ����������� ������, ������������ � buf
- char partition(char *buf, char *expr1, char *expr2) - �������, ������� ��������� ������, ������������ � buf �� ��� �����: 
	������ � ������ ���������, ���� �������� � ������ �� ������ ���������
*/

#include "task8.h"

#define printf //

int eval(const char* buf) {
    if (buf[0] != '(') {
        printf("buf[0] = %c\n", buf[0]);
        return atoi(buf);
    }

    char exp1[BUF], exp2[BUF];
    char part;
	part = partition((char *)buf, exp1, exp2);
	printf("eval part = %c\n", part);

    switch (part) {
		case '+':
			return eval(exp1) + eval(exp2);
		case '-':
			return eval(exp1) - eval(exp2);
		case '*':
			return eval(exp1) * eval(exp2);
		case '/':
			return eval(exp1) / eval(exp2);
    }
}

char partition(char* buf, char* expr1, char* expr2) {
    int i = 1, count = 0;
    char part = '\0';

    while (buf[i]) {
        if (buf[i] == '(')
            count++;
        else if (buf[i] == ')')
            count--;
        else if (count == 0 && !(buf[i] >= '0' && buf[i] <= '9')) {
			part = buf[i];
			printf("while part = %c\n", part);
            // ������ �������
            int j = 0;
            while (j < i - 1) {
                expr1[j] = buf[j + 1];
                j++;
            }
            expr1[j] = '\0';
			printf("expr1 = %s\n", expr1);

            // ������ �������
            int k = i + 1, n = 0;
            while (k < strlen(buf)) {
                expr2[n] = buf[k];
                k++;
                n++;
            }
            expr2[n] = '\0';
			printf("expr2 = %s\n", expr2);
            break;
        }
        i++;
    }
	printf("part = %c\n", part);
    return part;
}