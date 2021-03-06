#include <stdio.h>
#include <stdlib.h>
int N=8;
char b[8][8];

int main(){
char t1,t2,t3;
int i, j, p1,p2;
	//printf("\nfigura: ");
	//scanf("%c",&t1);
	//printf("\npole_1: ");
	//scanf(" %d",&p1);
	//printf("\ntype (- / x / 0-0 / 0-0-0 / + / #): ");
	//scanf("%c", &t2);
	//printf("\npole_2: ");
	//scanf("%d",&p2);
	

	//вывод шахматной доски
	//черные фигуры
	b[0][0]='r';
	b[0][1]='n';
	b[0][2]='b';
	b[0][3]='q';
	b[0][4]='k';
	b[0][5]='b';
	b[0][6]='n';
	b[0][7]='r';
	//белые фигуры
	b[6][0]='R';
	b[6][1]='N';
	b[6][2]='B';
	b[6][3]='Q';
	b[6][4]='K';
	b[6][5]='B';
	b[6][6]='N';
	b[6][7]='R';
	//пешки
	for (i=1;i<=N;i++){
		b[1][i]='p';
		b[6][i]='P';
	}	
	for (i=0; i<N; i++)
		for (j=0; j<N; j++){
		printf 
		}
		
	//system ("PAUSE");
	return 0;
}

