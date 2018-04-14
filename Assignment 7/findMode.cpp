/*********************************************************************
** Author: Daniel Olivas
** Date: 11/11/15
** Description: findMode.cpp
*********************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*********************************************************************
** Description: Vector function takes as parameters an array of int 
** and the size of the array.
*********************************************************************/

vector<int> findMode(int array[], int size)
{
	int count = 1;
	int maxCount = 0;
	int curNum;
	sort(array, array + size);
	vector<int> modes;

	for(int i = 0; i < size; i++){
		if(array[i] == array[i+1])
			count++;
		else if(count > maxCount){
			maxCount = count;
			count = 1;
		}
		else count = 1;
	}

	count = 1;
	for(int i = 0; i < size; i++){
		if(array[i] == array[i+1]){
			curNum = array[i];
			count++;
		}
		else if(count == maxCount){
			modes.push_back(array[i]);
			count = 1;
		}
		else count = 1;
	}
	return modes;
}


int main()
{
	vector<int> val;
	int array[] = { 1, 1, 3, 4, 5, 6, 7, 7, 7, 8, 9, 9, 9, 4, 3, 3 };
	int size = sizeof(array) / sizeof(array[0]);
	val = findMode(array, size);
	
	for(int i = 0; i < val.size(); i++){
		cout << val[i] << " ";
	}
	cout << "\n";

	return 0;
}

