#include "task8.h"


int main(int argc, char * argv[]) {
	setlocale(LC_ALL, "russian");

    char buf[BUF];

    if (argc < 2) {
        printf("����������� ��������� � ��������� ������!\n");
        return 1;
    }

    printf("���������  = %s \n�������� = %d\n", argv[1], eval(argv[1]));

    return 0;
}