#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char a[100], b[100];
	int f[26] = {0};
	int s[26] = {0};
	
	int i = 0, j = 0, l, isAnagram = 1;
	
	printf("Enter the first string\n");
	gets(a);
	
	printf("Enter the second string\n");
	gets(b);
	
	while(a[i] != '\0'){
		f[a[i] - 'a']++;
		i++;
	}
	while(a[j] != '\0'){
		s[b[j] - 'a']++;
		j++;
	}
	
	for(l=0; l<26; l++){
		if(f[l] != s[l])
		{
			isAnagram = 0;
			break;
		}
	}
	
	if(isAnagram == 1)
	{
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
	
	return 0;
}
