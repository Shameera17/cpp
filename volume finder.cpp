#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	double rad, prad, height, vol, fvol; /*prad is r^2 and fvol is vol in terms of litres*/
	const double pi = 3.142;

	cout << "\nEnter the radius of the tank\n";
	cin >> rad;
    cout << "Enter the height of the tank\n";
	cin >> height;

	prad = pow(rad, 2);

	vol = pi * prad;/*volume of the tank in m^3*/
	fvol = vol * 1000;/*volume of the tank in litres*/

	cout << "the volume of the tank" << fvol << "L(" << vol << "m^3)\n";
	system("pause");
return 0;







}



