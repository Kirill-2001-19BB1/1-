#include <stdio.h>
#include <time.h>
#include <iostream>
int main()
{
system("chcp 1251");
system("cls");
int x;
printf("Введите размер массива:");
scanf("%d",&x);
int *p=new int[x];
printf("Ваш массив: ");
srand(time(NULL));
for (int i=0;i<x;i++){
	p[i]=rand()%30;
	printf(" %d",p[i]);
}
int max=0,min=36;

for(int i=0;i<x;i++){
	if (p[i]>max){max=p[i];}
	if (p[i]<min){min=p[i];}
}
printf("\nРазница между наибольшим и наименьшим значениями массива=%d\n",max-min);
system("pause");
system("cls");
int m,n;
int** arr;
int *sum;
printf("Введите колиество  столбцов: ");
scanf("%d",&m);
printf("Введите колиество  строк: ");
scanf("%d",&n);
sum = (int*)malloc(m * sizeof(int));
arr = (int**)malloc(n * sizeof(int));
for(int i=0;i<n;i++)
{
	sum[i]=0;
	arr[i]=(int*)malloc(m * sizeof(int));
	for(int j=0;j<m;j++)
	{
	arr[i][j]=rand() %15;
	printf("%d\t",arr[i][j]);
	sum[i]=sum[i]+arr[i][j];
	}
	printf("\t Cумма строки=%d\t\n",sum[i]);

}

system("pause");
system("cls");

setvbuf(stdin, NULL, _IONBF, 0);
setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

	for(i=0;i<3;i++)
	{
		printf("Введите фамилию студента\n"); scanf ("%20s",stud[i].famil);
		printf("Введите имя студента %s\n",stud[i].famil); scanf ("%20s",stud[i].name);
		printf("Введите название факультета студента %s %s\n",stud[i].famil,stud[i].name); scanf ("%20s",stud[i].facult);
		printf("Введите номер зачётной книжки студента %s %s\n",stud[i].famil,stud[i].name); scanf ("%d",&stud[i].Nomzach);
		system("cls");
	}
	for(i=0;i<3;i++)
		{
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name,
					stud[i].facult,stud[i].Nomzach);
	}

	char str[20];
	int K=0;
	printf("\nВведите фамилию студента которого вы хотите найти:");
	scanf("%20s",str);
	for(i=0;i<3;i++){
		if(strcmp(str,stud[i].famil)==0){
		K=1;
		printf("Студент которого вы искали: \nСтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name,
			stud[i].facult,stud[i].Nomzach);}
		}
	if (K==0)
	printf("Такой студент не найден.");



	system("pause");



} 



