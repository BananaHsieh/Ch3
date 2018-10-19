#include<stdio.h>
#include<stdlib.h>

int f_1(int U);

int main(void)
{
	int m, n, a, b, c;
	printf("排列組合C(m,n)，輸入m,n\n");
	printf("m=  "); scanf_s("%d", &m);
	printf("n=  "); scanf_s("%d", &n);

	a = f_1(m);
	b = f_1(n);
	c = f_1(m - n);

	printf("C(%d,%d)=  %d\n", m, n, a / b / c);

	system("pause");
	return 0;
}

int f_1(int U) {
	int ans ;
	if (U > 1) {
		ans = U * f_1(U - 1);
		return ans;
	}
	else
		return 1;
}