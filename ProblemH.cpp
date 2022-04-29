
/*
	Author: Amir Aghazadeh
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{    
	string chars;
	
	cin >> chars;
	
	int size = chars.size();
	
	size = size / 2 + 1;
	
	int numbers[size];
	
	for(int i = 0; i < size; i++)
	{
		numbers[i] = chars[i * 2] - '0';
	}
	
	sort(numbers, numbers + size);
	
	for(int i = 0; i < size; i++)
	{
		if(i + 1 == size)
		{
			cout << numbers[i];
		}
		else
		{
			cout << numbers[i] << "+";
		}
	}
	
	return 0;
}