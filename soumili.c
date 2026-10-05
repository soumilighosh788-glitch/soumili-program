// W.C.P to calcute sum of digits// 
#include <stdio.h>
int main()
{
	int num,d,i;
	int sum=0;
	printf("Enter the number:");
	scanf("%d", &num);
	while(num!=0){
	d=num%10;
	num=num/10;
	sum=sum+d;
	}
	printf("Sum of digits:%d\n",sum);
	
	return 0;
}
