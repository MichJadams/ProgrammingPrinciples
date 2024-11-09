#include "std_lib_facilities.h"
/*

int main()
{
	// Convert miles to kilometers!
	double miles = 0; 
	cout << "Enter miles: ";
	cin >> miles; 
	double kilometers = miles * 1.609; 
	cout << "That is " << kilometers << " kilometers";

	return 0;
}

int main()
{
	// invalid names 
	int double = 0; 
	int 5feet = 0; 
	int^ hello = 0;
	return 0; 
}

int main()
{
	double val1 = 0;
	double val2 = 0; 
	cout << "please enter in two floating point values: \n";
	cin >> val1 >> val2; 

	if (val1 < val2)
	{
		cout << "smaller is " << val1; 

	} 
	else 
	{
		cout << "smaller is " << val2;
	}

	cout << "\nsum is " << val1 + val2; 
	cout << "\ndifference is " << val1 - val2; 
	cout << "\nproduct is " << val1 * val2;
	cout << "\nratio is " << val1 / val2; 

	return 0;
}
*/

int main()
{
	int val1; 
	int val2; 
	int val3; 
	cout << "input three numbers \n";
	cin >> val1 >> val2 >> val3; 
	int lowest = val1;
	int middle = val2;
	int highest = val3; 

	// val1 
	if (val1 < val2)
	{
		if (val1 < val3)
		{
			lowest = val1;
		}
		else 
		{
			middle = val1;
		}
	}
	else if (val1 < val3)
	{
		middle = val1;
	}
	else 
	{
		highest = val1;
	}

	//val2
	if (val2 < val3)
	{
		if (val2 < val3)
		{
			lowest = val2;
		}
		else
		{
			middle = val2;
		}
	}
	else if (val2 < val3)
	{
		middle = val2;
	}
	else
	{
		highest = val2;
	}

	//val3
	if (val3 < val2)
	{
		if (val3 < val2)
		{
			lowest = val3;
		}
		else
		{
			middle = val3;
		}
	}
	else if (val3 < val1)
	{
		middle = val3;
	}
	else
	{
		highest = val3;
	}

	// There is probably a much easier way to do this with functions 
	// but I'm not sure what it is... 

	cout << lowest << ", " << middle << ", " << highest; 

}