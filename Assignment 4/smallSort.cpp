/*********************************************************************
** Author: Daniel Olivas
** Date: 10/21/2015
** Description: smallSort
*********************************************************************/

#include <iostream>

using namespace std;
/*********************************************************************
** Description: smallSort takes three int parameters
**
*********************************************************************/

void smallSort(int &numa, int &numb, int &numc);

/*int main()
{
	int a, b, c;

	cout << "Please enter 3 integers." << endl;
	cout << "int a = ";
	cin >> a;
	cout << "int b = ";
	cin >> b;
	cout << "int c = ";
	cin >> c;

	smallSort(a, b, c);

	cout << "From smallest to largest: " << a << ", " << b << ", " << c << endl;

	return 0;
}
*/
/*********************************************************************
** Description: smallSort sorts values into ascending order
**
*********************************************************************/

void smallSort(int &numa, int &numb, int &numc)
{
	if (numa > numb)
	{
		int temp = numa;
		numa = numb;
		numb = temp;
	}
	if (numa > numc)
	{
		int temp = numa;
		numa = numc;
		numc = temp;
	}
	if (numb > numc)
	{
		int temp = numb;
		numb = numc;
		numc = temp;
	}

}