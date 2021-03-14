#include<stdio.h>
main()
{
	char x;
	printf("Enter the character:");
	scanf("%c",&x);
	if ((x>64)&&(x<91))
	{
		printf("Character is a CAPITAL LETTER : \n");
	}
	else if ((x>96)&&(x<123))
	{
		printf("Character is a SMALL LETTER:\n");
	}
	else if((x>47)&&(x<58))
	{
		printf("Character is a NUMBER:\n");
	}
	else if ((x>0 && x<48)||(x>57 && x<65)||(x>90 && x<97)||(x>122 && x<128))
	{
		printf("Character is SPECIAL SYMBOL:\n");
	 } 
}
