#include <stdio.h>
 int main()
{
	char choice;
	int num1,num2,total;
	scanf("%d %d",&num1,&num2);
	getchar();
	printf("choice");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':
			total=num1+num2;
			printf("%d\n",total);
			break;
			
	}
}
