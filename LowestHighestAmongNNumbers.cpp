// Write the programme for finding out the highest and lowest number among N numbers.
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, lowest, highest, i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int array[n];
	for(i = 0; i<n; i++)
		scanf("%d",&array[i]);
	
	lowest = array[0], highest = array[0];
	for(i = 0; i<n; i++)
	{
		if(array[i]<lowest)
			lowest = array[i];
		if(array[i]>highest)
			highest = array[i];
	}
	printf("Lowest number: %d\n Highest number: %d\n",lowest, highest);
	
	return 0;
}
