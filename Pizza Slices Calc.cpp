/* MUHAMMAD HAYYAN
23I-2041___CY-A
Assignment# 02____Q12 */

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	//Program to calculate number of slices of pizza oof any size
	
	float diameter, slices, radius, area;
	cout<<"\n    -------- Welcome to Joe's Pizza Palace -------- ";
	
	cout<< "\n\nEnter the diameter of pizza in inches:\t";
	cin>> diameter;
	
		//calculating radius
	radius = diameter/2;
	
		//calculating area
	area = M_PI * (radius * radius);
	
		//calculating pizza slices
	slices = area/14.125;
	
	cout<< "Number of Slices:\t"<<setprecision(1)<<fixed<<slices;
	
	return 0;
}
	 
