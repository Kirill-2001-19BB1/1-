#include <iostream>
#include <stdio.h>
#include <locale>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int vis[5] = {0, 0, 0, 0, 0};
int** arr;
int m;
 void obxod (int s)
 {
	vis[s] = 1;
	printf("%d ",s);
	for(int i = 0; i < m ; i++)
	{
		if((arr[s][i] == 1) && (vis[i] == 0))
		{
		obxod(i);
		}
	}
 }



int main()
{
system("chcp 1251");
system("cls");
srand(time(NULL));


printf("Введите количество вершин ");
scanf("%d",&m);

printf("Матрица M1:\n");
arr = (int**)malloc(m * sizeof(int));
for(int i=0;i<m;i++){
	arr[i]=(int*)malloc(m * sizeof(int));
	for(int j=0;j<m;j++){
	
		if(i<m){arr[i][j]=rand()%2;}
	if(i==j){arr[i][j]=0;}
		if(j<i){arr[i][j]=arr[j][i];}
		printf(" %d",arr[i][j]);
		
	
	}
	
	printf("\n");

}
	int k;
	
	printf("С какой вершины начать обход:");
	for(int i=0;i<1;){

	scanf("%d",&k);
	
	if(k>=m||k<0){i=0;printf("Введено неверно ещё раз:");}else i=1;
	}
  obxod(k);
system("pause");
}