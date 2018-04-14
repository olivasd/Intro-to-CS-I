/*********************************************************************
** Author: Daniel Olivas
** Date: 10/21/15
** Description:hailstone.cpp
*********************************************************************/

#include <iostream>

using namespace std;
/*********************************************************************
** Description: hailstone takes the starting integer as a parameter
**
*********************************************************************/

int hailstone(int n);

/*int main()
{
	int n;
		
	cout << "Please enter a positive integer." << endl;
	cin >> n;

	int number = hailstone(n);

	return 0;
}*/
int hailstone(int n)
{
	int steps = 0;

	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = n * 3 + 1;
		}

	steps++;
	}

	return steps;

}
