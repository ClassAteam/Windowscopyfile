/* ����� 1. ������� ��������� ����������� ������ cp. ����������, � ������� ��� ��������� �������� ������������� � ������������������ ��������� ������������ ������� Windows CopyFile. */

/* cpCF ����1 ����2: ���������� ����1 � ����2. */

#include <windows.h>

#include <stdio.h>


int main(int argc, LPTSTR argv[]) {

    if (argc != 3) {

        printf("�������������: cpCF ����1 ����2\n");

        return 1;

    }

    if (!CopyFile(argv[1], argv[2], FALSE)) {

        printf("������ ��� ���������� ������� CopyFile: %x\n", GetLastError());

        return 2;

    }

    return 0;

}