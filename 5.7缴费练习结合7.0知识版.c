#include<stdio.h>

int main()
{
	int A=574, B=0, C=0;
	printf("欠费金额：%d元",A);
	printf("请输入缴费金额（单位：元）：");
	scanf("%d", &B);

	for (;B<0;) {
		printf("请正确输入缴费金额：（单位：元）");
		scanf("%d", &B);
	}

	if (B>=A) {

		printf("缴费成功！\n");
		printf("余额为%d元。\n",B-A);
	}
	else {
		C = A - B;
		for (;C>0;) {
			printf("当前还需缴费%d元\n",C);
			printf("请再次缴费（单位：元）：");
			scanf("%d", &B);
			    for (;B<0;) {
		        printf("请正确输入缴费金额：（单位：元）");
		        scanf("%d", &B);
	            }
			C = C - B;
		}
		printf("再次缴费成功！\n");
		printf("余额为%d元。\n",- C);
	}
	
return 0;
}