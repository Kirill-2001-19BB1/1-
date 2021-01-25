#include <iostream>
#include <stdio.h>
#include <locale>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int main()
{
system("chcp 1251");
system("cls");
srand(time(NULL));

int m,n,z,z1,z2,z3;
int** arr;
int** arr4;
int** arr5;
int** arr6;
int** arr7;

printf("Введите количество вершин ");
scanf("%d",&m);
z=m-1;
z1=z;
z2=m+1;
z3=z2;
printf("Матрица M1:\n ");
for(int i=1;i<m+1;i++){printf("%d ",i);}
printf("\n-----------\n");
n=m;
arr = (int**)malloc(n * sizeof(int));
arr5 = (int**)malloc(n * sizeof(int));
arr4 = (int**)malloc(z2 * sizeof(int));
for(int i=0;i<m+1;i++){
	if(i<m){arr[i]=(int*)malloc(m * sizeof(int));
	arr5[i]=(int*)malloc(m * sizeof(int));}
	arr4[i]=(int*)malloc(z3 * sizeof(int));
	for(int j=0;j<m;j++){
	
		if(i<m){arr[i][j]=rand()%2;
	if(i==j){arr[i][j]=0;}
		if(j<i){arr[i][j]=arr[j][i];}
		printf(" %d",arr[i][j]);
		arr4[i][j]=arr[i][j];arr5[i][j]=arr[i][j];}
	
	}
	
	printf("\n");
}
int** arr1;
printf("Матрица M2:\n");
n=m;
arr1 = (int**)malloc(n * sizeof(int));
arr6 = (int**)malloc(n * sizeof(int));
for(int i=0;i<m;i++){
	arr1[i]=(int*)malloc(m * sizeof(int));
	arr6[i]=(int*)malloc(m * sizeof(int));
	for(int j=0;j<m;j++){
	arr1[i][j]=rand()%2;
	if(i==j){arr1[i][j]=0;}
		if(j<i){arr1[i][j]=arr1[j][i];}
	printf(" %d",arr1[i][j]);
	arr6[i][j]=arr1[i][j];
	}
	
	printf("\n");
}
int h,k,h1;
for(int i=0;i<1;){
printf("Введите 2 вершины которые хотие отождествить:");
scanf("%d %d",&h,&k);
if(k==h||h>m||k>m||k==0||h==0){printf("Вы ввели вершины неправильно. Попробуйте ещё раз\n");}
else i++;
}
if(k<h){h1=k;k=h;h=h1;}
h--;
k--;

int** arr2;
printf("Отождествлённая матрица:\n");
arr[h][k]=0;
		arr[k][k]=0;
		arr[h][h]=0;
		arr[k][h]=0;
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++){
		if(h==i){
			if(arr[h][j]==1||arr[k][j]==1){arr[h][j]=1;arr[k][j]=0;}
		}
		if (h==j){
		if(arr[i][h]==1||arr[i][k]==1){arr[i][h]=1;arr[i][k]=0;}
		}
		
	}
	
}

printf("\n");

arr2 = (int**)malloc(z * sizeof(int));
for(int i=0;i<z;i++){
	arr2[i]=(int*)malloc(z1 * sizeof(int));
	for(int j=0,p;j<z1;j++){
		p=i;
		if(i>=k){p=i+1;}
		if(j<k){arr2[i][j]=arr[p][j];}
		if(j>=k){arr2[i][j]=arr[p][j+1];}
		
		printf(" %d", arr2[i][j]);	
	
}
	printf("\n");
}

for(int i=0;i<1;){
printf("Введите ребро которое хотите стянуть:");
scanf("%d %d",&h,&k);
if((k>m||h>m||k<0||h<0)||(arr1[h-1][k-1]!=1)||(h==k)){printf("Вы ввели вершины неправильно или такой вершины нет. Попробуйте ещё раз\n");}
else i++;
}

if(k<h){h1=k;k=h;h=h1;}
h--;
k--;


printf("Стянутая матрица:\n");
arr1[h][k]=0;
		arr1[k][k]=0;
		arr1[h][h]=0;
		arr1[k][h]=0;
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++){
		if(h==i){
			if(arr1[h][j]==1||arr1[k][j]==1){arr1[h][j]=1;arr1[k][j]=0;}
		}
		if (h==j){
		if(arr1[i][h]==1||arr1[i][k]==1){arr1[i][h]=1;arr1[i][k]=0;}
		}
		
	}
	
}

printf("\n");

arr2 = (int**)malloc(z * sizeof(int));
for(int i=0;i<z;i++){
	arr2[i]=(int*)malloc(z1 * sizeof(int));
	for(int j=0,p;j<z1;j++){
		p=i;
		if(i>=k){p=i+1;}
		if(j<k){arr2[i][j]=arr1[p][j];}
		if(j>=k){arr2[i][j]=arr1[p][j+1];}
		
		printf(" %d", arr2[i][j]);	
	
}
	printf("\n");
}
for(int i=0;i<1;){
printf("Введите вершину которую хотите расщепить");
scanf("%d",&k);
if(k<=0||k>n){printf("Вы ввели вершину которой нет, введите ещё раз:\n");}
else i++;
}
k--;
for(int i=0;i<z2;i++){
	for(int j=0;j<z2;j++){
		if(i==z2-1||j==z2-1){
			if(i==j){arr4[i][j]=0;}
			if(i==z2-1&&arr4[i][j]!=0){arr4[i][j]=arr4[k][j];}
			if(j==z2-1&&arr4[i][j]!=0){arr4[i][j]=arr4[i][k];}
		}
		
		printf(" %d", arr4[i][j]);	
	
}
	printf("\n");
}

printf("Объединение матриц:\n");
arr7 = (int**)malloc(n * sizeof(int));
for(int i=0;i<n;i++){
	arr7[i]=(int*)malloc(m * sizeof(int));
	for(int j=0;j<n;j++){
		if(arr5[i][j]==1||arr6[i][j]==1){arr7[i][j]=1;}
		else arr7[i][j]=0;

		printf(" %d", arr7[i][j]);	
}
	printf("\n");
}
printf("Пересечение матриц:\n");

for(int i=0;i<n;i++){
	
	for(int j=0;j<n;j++){
		if(arr5[i][j]==1&&arr6[i][j]==1){arr7[i][j]=1;}
		else arr7[i][j]=0;

		printf(" %d", arr7[i][j]);	
}
	printf("\n");
}
printf("Кольцевая сумма:\n");
for(int i=0;i<n;i++){
	
	for(int j=0;j<n;j++){
		if((arr5[i][j]==1&&arr6[i][j]==0)||(arr5[i][j]==0&&arr6[i][j]==1)){arr7[i][j]=1;}
		if(arr5[i][j]==arr6[i][j]){arr7[i][j]=0;}

		printf(" %d", arr7[i][j]);	
}
	printf("\n");
}
system("pause");
}