#include<stdio.h>
#include<stdlib.h>

int f(int U);

int main(void)
{
	int m, n,a,b,c;
	printf("排列組合C(m,n)，輸入m,n\n");
	printf("m=  "); scanf_s("%d", &m);
	printf("n=  "); scanf_s("%d", &n);

	a = f(m);
	b = f(n);
	c = f(m - n);

	printf("C(%d,%d)=  %d\n", m, n, a / b / c);

	system("pause");
	return 0;
}

int f(int U) {
	int ans=1;
	for (int i = 1; i <= U; i++) {
		ans = ans * i;
	}
	return ans;
}