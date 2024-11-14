#include "std_lib_facilities.h"

// 1
/*
int main()
{
	string first; 
	string second; 

	while (first != "|" && second != "|")
	{
		cin >> first >> second; 
		cout << "These two numbers: " << first << ", " << second << "\n";
	}
}

//2, 3, 4, 5 
int main()
{
	string first; 
	string second; 

	while (true)
	{
		cin >> first >> second;

		if (first == "|")
			break;
		
		// I googled this. I just couldn't get it without!
		if (stod(first) > stod(second))
		{
			cout << first << " is greater than " << second << "\n";
		}
		else if ((stod(first) - stod(second)) < 1/100.0)
		{
			cout << "They're almost equal!\n";
		}
		else if (stod(first) == stod(second))
		{
			cout << " They're equal!\n";
		}
		else {
			cout << second << " is greater than " << first << "\n";

		}
	}
}


// 6 
int main()
{
	double smallest;
	double largest;
	double current; 

	// ope, feeling pretty clever about this!
	cin >> current; 
	smallest = current;
	largest = current; 
	while (true)
	{
		if (current <= smallest)
		{
			smallest = current; 
			cout << "smallest so far\n";
		}

		if (current >= largest)
		{
			largest = current; 
			cout << "largest so far \n";
		}
		cin >> current;

	}
}
*/


constexpr double meter_to_cm = 100; 
constexpr double inch_to_cm = 2.54; 
constexpr double ft_to_inch = 12; 

double to_meters(double input, string unit)
{
	if (unit == "cm") {
		return input / 100; 
	}
	else if (unit == "in")
	{
		return input * inch_to_cm / 100; 
	}
	else if (unit == "m")
	{
		return input;

	}
	else if (unit == "ft")
	{
		return input * ft_to_inch / 100;

	}
	else
	{

	}


}

int main()
{

	double first;
	string first_unit; 
	double second; 
	string second_unit;

	cin >> first >> first_unit >> second >> second_unit; 
	while (cin)
	{
		
	}


	return 0; 
}