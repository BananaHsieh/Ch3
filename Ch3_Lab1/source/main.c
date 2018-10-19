#include<stdio.h>
#include<stdlib.h>

int even(int N);
int odd(int N);
int total(int N);

int main(void)
{
	int n,choose,sum;
	printf("1+2+3+...+n,\t叫块n:");
	scanf_s("%d", &n);
	printf("叫块璶:案计㎝(0)计㎝(1)羆计㎝(2):");
	scanf_s("%d", &choose);

	switch (choose) {
	case 0:
		sum = even(n);
		printf("案计㎝%d\n", sum);
		break;
	case 1:
		sum = odd(n);
		printf("计㎝%d\n", sum);
		break;
	case 2:
		sum = total(n);
		printf("羆计㎝%d\n", sum);
		break;
	}
	
	system("pause");
	return 0;
}

int even(int U) {
	int a=0;
	for (int i = 1; i <= U; i ++) {
		if(i%2==0)
		a += i;
	}
	return a;
}

int odd(int U) {
	int a=0;
	for (int i = 1; i <= U; i++) {
		if (i % 2 == 1)
			a += i;
	}
	return a;
}

int total(int U) {
	int a=0;
	for (int i = 1; i <= U; i++) {
			a += i;
	}
	return a;
}