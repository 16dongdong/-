#include <stdio.h>
int main()
{
	char a;
	
	double b, c, d;
	int f = 1;
	while (f != 2)
	{
		printf(" 1.�ӷ�\n 2.����\n 3.�˷�\n 4.����\n ��ѡ������㷨��:");
		getchar();
		scanf_s("%c", &a);
		printf("�������һ������:");
		scanf_s("%lf", &b);
		printf("������ڶ�������:");
		scanf("%lf", &c);

		switch (a)
		{
		case'1':
			d = b + c;
			break;
		case'2':
			d = b - c;
			break;
		case'3':
			d = b * c;
			break;
		case'4':
			if (c == 0)
			{
				printf("��������Ϊ��\n");
				continue;
			}
			d = b / c;
			break;
		default:
			printf("����\n");
			continue;



		}
		printf("�������\n");
		printf("�����%.2lf\n", d);
		printf("2. �˳�\n1. ��������\n");
		scanf("%d", &f);
	}
		return 0;



}

