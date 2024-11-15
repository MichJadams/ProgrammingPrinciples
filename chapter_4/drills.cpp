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


constexpr double meter_to_cm = 100.0; 
constexpr double inch_to_cm = 2.54; 
constexpr double ft_to_inch = 12.0; 

double to_meters(double input, string unit)
{
	if (unit == "cm") 
	{
		return input / 100.0; 
	}
	else if (unit == "in")
	{
		return (input * inch_to_cm) / 100.0; 
	}
	else if (unit == "m")
	{
		return input;
	}
	else if (unit == "ft")
	{
		return (input * ft_to_inch * inch_to_cm) / 100.0;
	}
	else
	{
		throw std::runtime_error("non valid unit");
	}
}

int main()
{

	double first;
	string first_unit; 

	double largest;
	double smallest;
	double sum_of_meters = 0.0;
	vector<double> all_values_entered; 

	cout << "input a list of numbers and units seperated by spaces: \n";
	cin >> first >> first_unit; 
	double in_meters = to_meters(first, first_unit);
	all_values_entered.push_back(in_meters);
	largest = in_meters;
	smallest = in_meters;
	sum_of_meters += in_meters;

	while (cin)
	{
		try
		{
			cin >> first >> first_unit;
			double in_meters = to_meters(first, first_unit);
			all_values_entered.push_back(in_meters);
			sum_of_meters += in_meters; 
			if (in_meters < smallest)
			{
				smallest = in_meters;
			}
			if (in_meters > largest)
			{
				largest = in_meters;
			}

		}
		catch (std::exception &e)
		{
			break; 
		}
	}

	cout << "\n\n ----- Here are the result ----";
	cout << "\n Largest: " << largest <<"m";
	cout << "\n Smallest: " << smallest << "m";
	cout << "\n Sum: " << sum_of_meters << "m";
	sort(all_values_entered);
	for (double val : all_values_entered)
	{
		cout << val << "\n";
	}

	return 0; 
}