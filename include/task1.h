//Clab6 task1

/*�������� ���������, ������� ��������� � ��������� ���������� ������� ����������� ����������� � ������� ��� �� �������.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 100
#define DEPTH 1

void drawFractal(char(*arr)[M], int x, int y, int size);	
void drawSmall(char(*arr)[M], int x, int y);

// �������, ����������� ����������� � ������� arr, ����� �������� ������������(x, y) � ������� ����������� �������� size
