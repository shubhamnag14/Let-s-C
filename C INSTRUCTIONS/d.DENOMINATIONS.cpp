#include<stdio.h>
main()
{
	int amt,nohun,nofif,noten,nofive,notwo,noone,totnotes;
	printf("Enter the amount:");
	scanf("%d",&amt);
	nohun = amt/100;
	amt = amt%100;
	nofif = amt/50;
	amt = amt%50;
	noten = amt/10;
	amt = amt%10;
	nofive = amt/5;
	amt = amt%5;
	notwo = amt/2;
	amt = amt%2;
	noone = amt/1;
	amt = amt%1; 
	totnotes = nohun+nofif+noten+nofive+notwo+noone;
	printf("Smallest no of notes:\n");
}
