#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);
void change(int* a, int* b);
void insertionSort(int arr[], int z);
void versa(int *w, int *u);
//------------------------------------------BUBBLESORT-----------------------------------------------------
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
//-----A function to implement bubble sort------------
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)
for (j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}
/*-----Function to print an array------------- */
void printArray(int arr[], int size)
{
	int i;
		for (i=0; i < size; i++)
			printf("%d ", arr[i]);
}

//----------------------------------------------QUICKSORT-----------------------------------------------
void change(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[], int l, int h)
{
	int pivot = arr[h]; // pivot
	int i
		= (l
		- 1);		
	for (int j = l; j <= l - 1; j++) {
		// If current element is smaller than the pivot
		if (arr[j] < pivot) {
			i++; // increment index of smaller element
			change(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[h]);
	return (i + 1);
}
void quickSort(int arr[], int l, int h)
{
	if (l < h) {
		/* pi is partitioning index, arr[p] is now at right place */
		int pi = partition(arr, l, h);

		// Separately sort elements before
		quickSort(arr, l, pi - 1);
		quickSort(arr, pi + 1, h);
	}
}
void printArry(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	printf("\n %d", arr[i]);
	printf("n");
}
//---------------------------------------------------------INSERTIONSORT------------------------------------------------------
void insertionSort(int arr[], int z)
{
	int i, key, j;
	for (i = 1; i < z; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
// of size z
void printAray(int arr[], int z)
{
	int i;
	for (i = 0; i < z; i++)
		printf("%d", arr[i]);
	printf(" z ");
}
//----------------------------------------------------SELECTIONSORT--------------------------------------------------
void versa(int *w, int *u)
{
	int temp = *w;
	*w = *u;
	*u = temp;
}

void selectionSort(int arr[], int v)
{
	int k, g, min_idx;
	
	for (k = 0; k < v-1; k++)
	{
		// Find the minimum element in
		// unsorted array
		min_idx = k;
		for (g = k+1; g < v; g++)
		if (arr[g] < arr[min_idx])
			min_idx = g;

		// Swap the found minimum element with the first element
		if(min_idx!=k)
			versa(&arr[min_idx], &arr[k]);
	}
}

void printAry(int arr[], int siz)
{
	int k;
	for (k=0; k < siz; k++)
		printf(" %d ", arr[k]);
}
#define Length 1000

int main()
{
	int length;	
	int n;
	int ar[100];
	int ary[1000];
	int arry[10000];
    int arr[] = {};
    
   
    
    
	{
	printf("\n====================================BUBBLE SORT==================================== \n");	
			
        int arr[100];
		int array[100], array2[1000], array3[10000];
    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
   		int upper = 100, lower = -100;
		   
		for (int j = 0; j < 100; j++)
    {
        array[j] =(rand()% (upper - lower +1)) + lower;
    
    }
    
       					double time;
						    clock_t start, end;
						    clock_t clock();
						    start = clock();
			int n = sizeof(arr)/sizeof(arr[0]);
					bubbleSort(array, size_100);
						
						end = clock();
						printf("\n Time for 100 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					}
					{
						
						 int arr[100];
							int array[100], array2[1000], array3[10000];
					    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
					   		int upper = 100, lower = -100; 
					   		
											 for (int j = 0; j < 1000; j++)
					    {
					        array2[j] =(rand()% (upper - lower +1)) + lower;
					    }
    
						double time;
						    clock_t start, end;
						    clock_t clock();
						    start = clock();
						    int n = sizeof(arr)/sizeof(arr[0]);
								
							bubbleSort(array2, 1000);
				
						end = clock();
						printf("\n Time for 1000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					}
						{
							 int arr[100];
						int array[100], array2[1000], array3[10000];
				    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
				   		int upper = 100, lower = -100;
				   		
						for (int j = 0; j < 10000; j++)
				    {
				        array3[j] =(rand()% (upper - lower +1)) + lower;
				    }
						double time;
						    clock_t start, end;
						    clock_t clock();
						    start = clock();
						    int n = sizeof(arr)/sizeof(arr[0]);
							bubbleSort(array3, 10000);
												
							end = clock();
						printf("\n Time for 10000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					}
				
				
				{
				
					printf("\n====================================QUICK SORT:===================================== \n");	
	                
	
	double time;
    clock_t start, end;
    clock_t clock();
    start = clock();
    
        int arr[100];
		int arra[100], arra2[1000], arra3[10000];
    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
   		int upper = 100, lower = -100;
		   
		for (int i = 0; i < 100; i++)
    {
        arra[i] =(rand()% (upper - lower +1)) + lower;
    
    }
					size_100 = sizeof(arr)/sizeof(arr[0]);
					quickSort(arra,0 , 100 - 1);
						end = clock();
						printf("\n Time for 100 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					
					{
						int arr[100];
						int arra[100], arra2[1000], arra3[10000];
				    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
				   		int upper = 100, lower = -100;
				   		
				   		 for (int j = 0; j < 1000; j++)
				    {
				        arra2[j] =(rand()% (upper - lower +1)) + lower;
				    }
				   		
						double time;
						clock_t start, end;
					    clock_t clock();
					    start = clock();
						size_1000 = sizeof(arr)/sizeof(arr[0]);
						
						quickSort(arra,0 , 1000 - 1);
				
						end = clock();
						printf("\n Time for 1000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					}
					{
						
						int arr[100];
							int arra[100], arra2[1000], arra3[10000];
					    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
					   		int upper = 100, lower = -100;
					   		
					   		 for (int j = 0; j < 10000; j++)
					    {
					        arra3[j] =(rand()% (upper - lower +1)) + lower;
					    }
   		
						double time;
						clock_t start, end;
					    clock_t clock();
					    start = clock();
				
						size_10000 = sizeof(arr)/sizeof(arr[0]);
						
						quickSort(arra,0 , 10000 - 1);
						
						end = clock();
						printf("\n Time for 10000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					}
			}
				
				{
				printf("\n====================================INSERTION SORT:====================================\n");
	
				double time;
    clock_t start, end;
    clock_t clock();
    start = clock();
    
				  
				   int arr[100];
		int arras[100], arras2[1000], arras3[10000];
    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
   		int upper = 100, lower = -100;
		   
		for (int j = 0; j < 100; j++)
    {
        arras[j] =(rand()% (upper - lower +1)) + lower;
    
    }
    	size_100 = sizeof(arr)/sizeof(arr[0]);

					insertionSort(arras , 100);
					end = clock();
						printf("\n Time for 100 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
						
						{ 
						 
				   int arr[100];
					int arras[100], arras2[1000], arras3[10000];
			    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
			   		int upper = 100, lower = -100;
									
									 for (int j = 0; j < 1000; j++)
			    {
			        arras2[j] =(rand()% (upper - lower +1)) + lower;
			    }

						
						double time;
				    clock_t start, end;
				    clock_t clock();
				    start = clock();
				    	size_1000 = sizeof(arr)/sizeof(arr[0]);
						insertionSort(arras2 , 1000);
					end = clock();
						printf("\n Time for 1000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					}
					{
								   int arr[100];
							int arras[100], arras2[1000], arras3[10000];
					    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
					   		int upper = 100, lower = -100;
											 for (int j = 0; j < 10000; j++)
					    {
					        arras3[j] =(rand()% (upper - lower +1)) + lower;
					    }
					double time;
				    clock_t start, end;
				    clock_t clock();
				    start = clock();
						size_10000 = sizeof(arr)/sizeof(arr[0]);	
						insertionSort(arras3 , 10000);
				end = clock();
						printf("\n Time for 10000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
					}
			}
			{
					printf("\n===================================SELECTION SORT:====================================== \n");
				
					 int arr[100];
		int arrad[100], arrad2[1000], arrad3[10000];
    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
   		int upper = 100, lower = -100;
   		
		   	double time;
				    clock_t start, end;
				    clock_t clock();
				    start = clock();
				    
		for (int j = 0; j < 100; j++)
    {
        arrad[j] =(rand()% (upper - lower +1)) + lower;
    
    }
    
    
					size_100 = sizeof(arr)/sizeof(arr[0]);
						selectionSort(arrad, 100);
					end = clock();
						printf("\n Time for 100 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
						
					{  
					
					 int arr[100];
		int arrad[100], arrad2[1000], arrad3[10000];
    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
   		int upper = 100, lower = -100;
		   
		   	double time;
				    clock_t start, end;
				    clock_t clock();
				    start = clock();
				    
						 for (int j = 0; j < 1000; j++)
    {
        arrad2[j] =(rand()% (upper - lower +1)) + lower;
    }
							size_1000 = sizeof(arr)/sizeof(arr[0]);
						selectionSort(arrad3 , 1000);
						end = clock();
						printf("\n Time for 1000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
				
					}
						{
							
					 int arr[100];
		int arrad[100], arrad2[1000], arrad3[10000];
    	int size_100 = 100, size_1000 = 1000, size_10000 = 10000;
   		int upper = 100, lower = -100;
   		
   			double time;
				    clock_t start, end;
				    clock_t clock();
				    start = clock();
		   
							for (int j = 0; j < 10000; j++)
    {
        arrad3[j] =(rand()% (upper - lower +1)) + lower;
    }
							size_10000 = sizeof(arr)/sizeof(arr[0]);
						
							selectionSort(arrad3 , 10000);
							end = clock();
						printf("\n Time for 10000 values:\t%f", (double)(end - start)/CLOCKS_PER_SEC);
						}
					
			}
				
			return 0;
 }
