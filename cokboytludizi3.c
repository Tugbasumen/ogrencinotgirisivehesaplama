#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int ogrencinot[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d.ogrencinin %d.notunu giriniz:",i+1,j+1);
			scanf("%d",&ogrencinot[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d.sinavin ortalamasi:%d",i+1,(ogrencinot[0][i]+ogrencinot[1][i]+ogrencinot[2][i])/3);
		printf("\n");
	}
	
	
	
	return 0;
}
