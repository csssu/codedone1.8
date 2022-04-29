
/*
	Author: Amir Aghazadeh
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int compare (const void * num1, const void * num2)
{
  if(*(char*)num1 > *(char*)num2)
	{
    return 1;
  }
	else
	{
		return -1;
	}
}

int main()
{    
	char chars[MAX_SIZE];
	int size;
  
	for(int i = 0; i < MAX_SIZE; i++)
	{
		char newChar;
		scanf("%c", &newChar);
		
		if(newChar > '0' && newChar < '9' || newChar == '+')
		{
			chars[i] = newChar;
		}
		else
		{
			size = i;
			break;
		}
	}
	
	size = size / 2 + 1;
	
	char numbers[size];
	
	for(int i = 0; i < size; i++)
	{
		numbers[i] = chars[i * 2];
	}
	
	qsort(numbers, size, sizeof(char), compare);
	
	for(int i = 0; i < size; i++)
	{
		if(i + 1 == size)
		{
			printf("%c", numbers[i]);
		}
		
		else
		{
			printf("%c%c", numbers[i], '+');
		}
	}
	
	return 0;
}