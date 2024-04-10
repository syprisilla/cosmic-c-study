#include<stdio.h>
int main()
{
	int b, c, d, e;
	int max=0, secondmax=0;
	while (1) {
		printf("입력: Enter 5 integers >> ");
		//scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e); //%d%d이렇게 해야함 , %d %d는 안됨!!
		//max = second = a;
		//if (a == 0)
			//break;

		/*if (b > max)
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		if (d > max)
		{
			max = d;
		}
		if (e > max)
		{
			max = e;
		}
		if (max > b && b > second)
		{
			second = b;
		}
		if (max > c && c > second)
		{
			second = c;
		}
		if (max > d && d > second)
		{
			second = d;
		}
		if (max > e && e > second)
		{
			second = e;
		}*/
		int a;
		int temp = 0;
		
		for (int i = 0; i < 5; i++)
		{
			
			scanf_s("%d", &a);	
			if (a == 0)
				return 0;
			if (a > max)
			{
				secondmax = max;
				max = a;
				
			}
			else if(a>secondmax && max>a)
			{
				
				secondmax = a;
			
			}

		
	
		}
		
		
		
		printf("출력: first = %d, second = %d\n", max, secondmax);
		max = 0;
		secondmax = 0;

	}
	



	return 0;
}
