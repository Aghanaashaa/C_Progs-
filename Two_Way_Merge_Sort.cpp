#include <stdio.h>
void Mergesort(int r[], int Left, int Right);
void Merge(int r[], int Left, int Mid, int Right); 
int main()
{
	int  n; 
	printf("Please enter the number of elements in the array:");
	scanf("%d", &n);
	putchar('\n'); 
	int r[n];
	printf("Please enter the elements of array you want to arrange :\n");
	for(int i=0;i<n;i++)
	scanf("%d",&r[i]); 
	Mergesort(r, 0, n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d\t", r[i]);
	}
	return 0;
}
void Mergesort(int r[], int Left, int Right)
	{
	int Mid;
	if(Left != Right)
	{
		Mid = (Left+Right)/2; 
		Mergesort(r, Left, Mid);  
		Mergesort(r, Mid+1, Right); 
		Merge(r, Left, Mid, Right); 
	} 
} 
void Merge(int r[], int Left, int Mid, int Right)
{
	int i=Left, j=Mid+1;
	int m=0,n=0;
	int t[Right-Left+1];
	while(i <= Mid && j <= Right)  
	{
		if(r[i] <= r[j])
		t[m++] = r[i++];  
		else
		t[m++] = r[j++];
	}
	while(i <= Mid) 
	t[m++] = r[i++];
	while(j <= Right)
	t[m++] = r[j++];
	m = 0; 
	for(n=Left; n<=Right; n++) 
	r[n] = t[m++];
}
