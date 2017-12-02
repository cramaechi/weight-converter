//Program that converts weight in pounds and ounces to kilograms and grams.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void input(double& input1, double& input2);
//Postcondition: Both the values of input1 and input2 are 
//set equal to the user's input values.

void convertWeight(double pounds, double ounces, double& kilograms, double& grams);
//Precondition: pounds and ounces >= 0.
//Postcondition: Both values of kilograms and grams have been set.

void output(double output1, double output2, char& a);
//Postcondition: a has been set either to either 'y' or 'n'.

//void clearScreen(); //Clears console screen.

int main()
{
	char ans;
	double p, o, kG, g;

	do
	{
		input(p, o);
		convertWeight(p, o, kG, g);
		output(kG, g, ans);
		
		if (ans == 'y' || ans == 'Y')
			cout<<"\n\n";

	}while(ans == 'y' || ans == 'Y');

	return 0;
}

void input(double& input1, double& input2)
{
	cout<<"Enter weight in pounds and ounces: ";
	cin>>input1>>input2;
	cout<<endl;
}

void convertWeight(double pounds, double ounces, double& kilograms, double& grams)
{
	pounds+=(ounces/16);
	kilograms = (pounds/2.2046);
	grams = 1000*kilograms;
}

void output(double output1, double output2, char& a)
{
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<"The equivalent weights in kilograms and grams are\n\n";
	cout<<output1<<" kg\n";
	cout<<output2<<" g\n\n";
	cout<<"Start over? (y/n): ";
	cin>>a;
}

/*
void clearScreen()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
*/
