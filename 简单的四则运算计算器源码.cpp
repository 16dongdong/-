#include <stdio.h>
int main()
{
	char a;
	
	double b, c, d;
	int f = 1;
	while (f != 2)
	{
		printf(" 1.加法\n 2.减法\n 3.乘法\n 4.除法\n 请选择的运算法则:");
		getchar();
		scanf_s("%c", &a);
		printf("请输入第一个数字:");
		scanf_s("%lf", &b);
		printf("请输入第二个数字:");
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
				printf("除数不能为零\n");
				continue;
			}
			d = b / c;
			break;
		default:
			printf("错误\n");
			continue;



		}
		printf("计算完成\n");
		printf("结果是%.2lf\n", d);
		printf("2. 退出\n1. 继续计算\n");
		scanf("%d", &f);
	}
		return 0;



}

