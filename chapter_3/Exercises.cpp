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
	// but I'm not sure what it is... (oh, I figured it out down below in a 
	// waaay better way lol. yay!

	cout << lowest << ", " << middle << ", " << highest; 
}

int main()
{
	// sorting names 
	string word1 = "";
	string word2 = "";
	string word3 = "";
	cout << "Please input three words";
	cin >> word1 >> word2 >> word3;

	if (word1 > word2)
	{
		string temp = word2; 
		word2 = word1; 
		word1 = temp; 
	}

	if (word2 > word3) 
	{
		string temp = word3; 
		word3 = word2; 
		word2 = temp;
	}

	if (word1 > word2)
	{
		string temp = word2;
		word2 = word1;
		word1 = temp;
	}

	cout << word1 << ", " << word2 << ", " << word3;
	return 0;
}

int main()
{
	// finding even and odd 
	int user_input = 0;
	cout << "Please type in a integer\n";
	cin >> user_input; 

	if (user_input % 2 == 0)
	{
		cout << user_input << " is even!";
	}
	else
	{
		cout << user_input << " is odd!";
	}

	return 0;
}

int main()
{
	// spells out number 
	string user_input = "";
	cout << "Spell out a number between 0 and 4\n";
	cin >> user_input;

	if (user_input == "zero")
	{
		cout << "0";
	}
	else if (user_input == "one")
	{
		cout << "1";

	}
	else if (user_input == "two")
	{
		cout << "2";

	}
	else if (user_input == "three")
	{
		cout << "3";

	}
	else if (user_input == "four")
	{
		cout << "4";
	}
	else
	{
		cout << "not a number I know :(";
	}
	return 0;
}

int main()
{
	// operation followed by two operands and computs the result
	string operation = "";
	double operand1 = 0;
	double operand2 = 0;
	cout << "Please input an operant followed by two numbers\n";
	cin >> operation >> operand1 >> operand2;

	if (operation == "+")
	{
		cout << operand1 + operand2;
	} else 	if (operation == "-")
	{
		cout << operand1 - operand2;
	} else 	if (operation == "*")
	{
		cout << operand1 * operand2;
	} else 	if (operation == "/")
	{
		cout << operand1 / operand2;
	}
	else {
		cout << "Malformed input";
	}

	return 0;
}
*/

int query(string denomination)
{
	int coins_in = 0;
	cout << "How many " << denomination << " do you have ?\n";
	cin >> coins_in;
	return coins_in;
}

int read_out(string denomination, string singular, int number_of_coins)
{
	if (number_of_coins == 1)
	{
		cout << "\nYou have " << number_of_coins << " " << singular;
	}
	else {
		cout << "\nYou have " << number_of_coins << " " << denomination;
	}

	return 0;
}

int main()
{
	int pennies = query("pennies");
	int nickles = query("nickles");
	int dimes = query("dimes");
	int quarters = query("quarters");
	int half_dollar = query("half dollars");

	read_out("pennies", "penny", pennies);
	read_out("nickeles", "nickel", nickles);
	read_out("dimes", "dime", dimes);
	read_out("quarters", "quarter", quarters);
	read_out("half dollars", "half dollar", half_dollar);

	double total = pennies + (nickles * 5) + (dimes * 10) + (quarters * 25) + (half_dollar * 50);
	cout << "\n\nThe value of all of your coins is " << int(total) << " cents";
	double total_in_dollars = total / 100.0;
	cout << "\n\n And you have $" << total_in_dollars << " dollars";
}