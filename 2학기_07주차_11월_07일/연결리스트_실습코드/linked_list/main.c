#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int choice;
	while (1)
	{
		system("cls"); //�ܼ�ȭ�� ����� (�ʱ�ȭ)
		printf("\n\n  *** ���� ���� ����Ʈ ***\n\n");
		printf("=====================================\n");
		printf("1. ��� ����\n");
		printf("2. ��� ���� (free)\n");
		printf("3. ���� ���� ����Ʈ ��� (��� ��ȸ)\n");
		printf("0. ���α׷� ����\n");
		printf("=====================================\n");
		printf("\n�޴� ���� : ");

		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			exit(0); //���α׷� ���� ����
		}
		//switch���� ���� ������ �Ͻ� ��� ��Ų��.
		printf("\n\n\t\t");
		system("pause"); //�Ͻ� ���
	}
	return 0;
}