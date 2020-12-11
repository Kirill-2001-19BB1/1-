/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/*setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	system("chcp 1251");
	system("cls");
	clock_t start, end; // объ€вл€ем переменные дл€ определени€ времени выполнени€

	int i=0, j=0, r;


	

	int m,xxx;
int** A;
int** B;
printf("¬ведите размер: ");
scanf("%d",&m);
A = (int**)malloc(m * sizeof(int));
B = (int**)malloc(m * sizeof(int));
for(int i=0;i<m;i++)
{
	
	
	A[i]=(int*)malloc(m * sizeof(int));
	B[i]=(int*)malloc(m * sizeof(int));
	for(int j=0;j<m;j++)
	{
	A[i][j]=rand() %100+1;
	B[i][j]=rand() %100+1;
	}

}

int** C;
C = (int**)malloc(m * sizeof(int));	
	unsigned int start_time =  clock();
	for(i=0;i<m;i++)
	{
		C[i]=(int*)malloc(m * sizeof(int));
		for(j=0;j<m;j++)
		{
			xxx=0;
			for(r=0;r<m;r++)
			{
				xxx=xxx+A[i][r]*B[r][j];
				C[i][j]=xxx;	
			}
		}
	}
	unsigned int end_time = clock();
    double search_time = (end_time - start_time)/1000.0;
	printf("%lf\n\n",search_time);
	system("pause");
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void qs(int *items, int left, int right)
{
  int i, j;
  int x, y;



  i = left; j = right;

  x = items[(left+right)/2];
  
  do {
    while((items[i] < x) && (i < right)) i++;
    while((x < items[j]) && (j > left)) j--;

    if(i <= j) {
      y = items[i];
      items[i] = items[j];
      items[j] = y;
      i++; j--;
    }
  } while(i <= j);

  if(left < j) qs(items, left, j);
  if(i < right) qs(items, i, right);
}

void shell(int *items, int count)
{

  int i, j, gap, k;
  int x, a[5];

  a[0]=9; a[1]=5; a[2]=3; a[3]=2; a[4]=1;

  for(k=0; k < 5; k++) {
    gap = a[k];
    for(i=gap; i < count; ++i) {
      x = items[i];
      for(j=i-gap; (x < items[j]) && (j >= 0); j=j-gap)
        items[j+gap] = items[j];
      items[j+gap] = x;
    }
  }
}

int main(void)
{
	srand(time(NULL));
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	system("chcp 1251");
	system("cls");
	clock_t start, end; // объ€вл€ем переменные дл€ определени€ времени выполнени€
	clock_t start1, end1;
	clock_t start2, end2;
	clock_t start3, end3;
	clock_t start4, end4;
	clock_t start5, end5;
	clock_t start6, end6;
	clock_t start7, end7;
	clock_t start8, end8;
	int a[100000],b[100000],n=100000;
	
	for(int i=0;i<n;i++)
	{
		a[i]=rand() %800;
		b[i]=a[i];
	}
	/*for(int i=0;i<n;i++){
	printf(" %d", a[i] );
	}*/
	
	printf("\n\n\n");
	unsigned int start_time =  clock();
	shell(a,n);
	unsigned int end_time = clock();
    double search_time = (end_time - start_time)/1000.0;
	printf("¬рем€ сортировки рандомного массива shell :%lf\n",search_time);
	/*for(int i=0;i<n;i++){
	printf(" %d", a[i] );
	}*/

	unsigned int start4_time =  clock();
	qs(b,0,n-1);
	unsigned int end4_time = clock();
    double search4_time = (end4_time - start4_time)/1000.0;
	printf("¬рем€ сортировки рандомного массива qs:%lf\n",search4_time);

	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
		b[i]=a[i];
	}
	unsigned int start1_time =  clock();
	shell(a,n);
	unsigned int end1_time =  clock();
	 double search1_time = (end1_time - start1_time)/1000.0;
	 printf("¬рем€ сортировки возрастающего массива shell :%lf\n",search1_time);

	 unsigned int start5_time =  clock();
	qs(b,0,n-1);
	unsigned int end5_time = clock();
    double search5_time = (end5_time - start5_time)/1000.0;
	printf("¬рем€ сортировки возрастающего массива qs:%lf\n",search5_time);

	 for(int i=0;i<n;i++)
	{
		a[i]=100000-i;
		b[i]=a[i];
	}
	 unsigned int start2_time =  clock();
	shell(a,n);
	unsigned int end2_time =  clock();
	 double search2_time = (end2_time - start2_time)/1000.0;
	 printf("¬рем€ сортировки убывающего массива shell :%lf\n",search2_time);

	 unsigned int start6_time =  clock();
	qs(b,0,n-1);
	unsigned int end6_time = clock();
    double search6_time = (end6_time - start6_time)/1000.0;
	printf("¬рем€ сортировки убывающего массива qs:%lf\n",search6_time);

	 for(int i=0;i<n;i++)
	{
		if(i<50000){a[i]=i;}
		if(i>=50000){a[i]=a[i-1]-1;}
		b[i]=a[i];
	}
	 unsigned int start8_time =  clock();
	shell(a,n);
	unsigned int end8_time =  clock();
	 double search8_time = (end8_time - start8_time)/1000.0;
	 printf("¬рем€ сортировки сначала возрастающего а потом убывающего массива shell :%lf\n",search8_time);

	  unsigned int start7_time =  clock();
	/*qs(b,0,n-1);*/
	unsigned int end7_time = clock();
    double search7_time = (end7_time - start7_time)/1000.0;
	printf("¬рем€ сортировки сначала возрастающего а потом убывающего массива qs:%lf\n",search7_time);

	system("pause");
}





/**#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void easy(int randomNumber[], int arr)
{
  for(int i = 0 ; i < arr - 1; i++)
  {
       // сравниваем два соседних элемента.
       for(int j = 0 ; j < arr - i - 1 ; j++)
	   {
           if(randomNumber[j] > randomNumber[j+1])
		   {
              // если они идут в неправильном пор€дке, то
              //  мен€ем их местами.
              int tmp = randomNumber[j];
              randomNumber[j] = randomNumber[j+1] ;
              randomNumber[j+1] = tmp;
           }
        }
  }

}


int main(void)
{
	srand(time(NULL));
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	system("chcp 1251");
	system("cls");
	clock_t start, end; // объ€вл€ем переменные дл€ определени€ времени выполнени€
	clock_t start1, end1;
	clock_t start2, end2;
	clock_t start3, end3;
	
	int a[100000],n=100000;
	
	for(int i=0;i<n;i++)
	{
		a[i]=rand() %800;

	}
	/*for(int i=0;i<n;i++){
	printf(" %d", a[i] );
	}*//*
	
	printf("\n\n\n");
	unsigned int start_time =  clock();
	easy(a,n);
	unsigned int end_time = clock();
    double search_time = (end_time - start_time)/1000.0;
	printf("¬рем€ сортировки рандомного массива easy :%lf\n",search_time);
	/*for(int i=0;i<n;i++){
	printf(" %d", a[i] );
	}*//*

	unsigned int start1_time =  clock();
	easy(a,n);
	unsigned int end1_time =  clock();
	 double search1_time = (end1_time - start1_time)/1000.0;
	 printf("¬рем€ сортировки возрастающего массива easy :%lf\n",search1_time);
	
	 unsigned int start2_time =  clock();
	easy(a,n);
	unsigned int end2_time =  clock();
	 double search2_time = (end2_time - start2_time)/1000.0;
	 printf("¬рем€ сортировки убывающего массива easy :%lf\n",search2_time);

	 unsigned int start3_time =  clock();
	easy(a,n);
	unsigned int end3_time =  clock();
	 double search3_time = (end3_time - start3_time)/1000.0;
	 printf("¬рем€ сортировки сначала возрастающего а потом убывающего массива easy :%lf\n",search3_time);

	system("pause");
}*/
