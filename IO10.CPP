#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	clrscr();
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	fp = fopen("EMP.DAT","rb");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	while(fread(&e,sizeof(e),1,fp)==1)
	{
		printf("\n%s %d %f",e.name,e.age,e.bs);
	}
	fclose(fp);
	getch();
}