#include "std_lib_facilities.h"
/*
// Question 2
int main()
{
	vector<double> temps;

	for (double temp;cin >> temp;)
	{
		temps.push_back(temp);
	}

	sort(temps);
	double median; 
	if (temps.size() % 2 == 0)
	{
		// find the average of the middle two elements 
		int higher_middle = temps.size() / 2.0;
		int lower_middle = higher_middle - 1;
		median = (temps[lower_middle] + temps[higher_middle]) / 2.0; 
	}
	else 
	{
		median = temps[temps.size() / 2];
	}
	cout << "The median is: " << median; 
}
*/

// Question 3 
int main()
{
	vector<double> inputs; 
	cout << "input a bunch of distances seperated by spaces. when you are done enter a non digit input\n";

	for (double input; cin >> input;)
		inputs.push_back(input);

	double total_distance = 0;
	double smallest_distance = 0;
	double greatest_distance = 0;
	double mean_distance_between_all_cities = 0;

	sort(inputs);

	for (double val : inputs)
		total_distance += val;

	cout << inputs[0];

	if (inputs.size() >= 2)
	{
		smallest_distance = inputs[0];
		greatest_distance = inputs[inputs.size() - 1];
	}

	mean_distance_between_all_cities = total_distance / inputs.size();

	cout << "The total distance = " << total_distance;
	cout << "\nThe smallest distance = " << smallest_distance;
	cout << "\nThe greatest distance = " << greatest_distance;
	cout << "\nThe mean distance between all cities = " << mean_distance_between_all_cities;
	
}