#include "std_lib_facilities.h"

/*
int main()
{
	// conver yen, kroner and pounds into dollars 

	constexpr double yen_to_dollar = 500; 
	constexpr double kroner_to_dollar = 0.5; 
	constexpr double pounds_tp_dollar = 1.2; 
	double amount = 0;
	char currency = ' ';
	cout << "Please enter an amount followed by yen (y), kroner(k) or pounds (p)\n"; 
	cin >> amount >> currency;

	if (currency == 'y')
	{
		cout << "You have " << yen_to_dollar * amount << " dollars";
	}
	else if (currency == 'k')
	{
		cout << "You have " << kroner_to_dollar * amount << " dollars";

	}
	else if (currency == 'p')
	{
		cout << "You have " << pounds_tp_dollar * amount << " dollars";
	}
	else 
	{
		cout << "ope, don't know that currency!"; // got a little midwestern there...
	}

	return 0;
}

// rewritten as a switch statement 

int main()
{
	// conver yen, kroner and pounds into dollars 

	constexpr double yen_to_dollar = 500;
	constexpr double kroner_to_dollar = 0.5;
	constexpr double pounds_tp_dollar = 1.2;
	double amount = 0;
	char currency = ' ';
	cout << "Please enter an amount followed by yen (y), kroner(k) or pounds (p)\n";
	cin >> amount >> currency;

	switch (currency) {
	case 'y':
		cout << "You have " << yen_to_dollar * amount << " dollars";
		break;
	case 'k':
		cout << "You have " << kroner_to_dollar * amount << " dollars";
		break;
	case 'p':
		cout << "You have " << pounds_tp_dollar * amount << " dollars";
		break;
	default:
		cout << "ope, don't know that currency!"; // got a little midwestern there...
		break;
	}

	return 0;
}

int main()
{
	// list out all the char values. Okay, not gonna lie
	// using a loop when you have not for so long feels really good. 

	char current = 'a';
	int index = 0; 
	while (index < 26)
	{
		cout << char(current + index) << "\t" << int{ current + index } << "\n";
		++index;
	}

	return 0;
}

int main()
{
	// and now a for loop

	char current = '1';
	
	for( int index = 0; index < 42; ++index)
	{
		cout << char(current + index) << "\t" << int{ current + index } << "\n";
	}

	return 0;
}

// square function with addition x 

int square(int input)
{
	int output = 0;
	for (int i = 1; i <= input; ++i)
	{
		output += input;
	}
	return output;
}

int main()
{

	for (int i = 0; i < 100; ++i)
	{
		cout << i << " squared is " << square(i) << "\n";
	}
	return 0;
}

// bleeping disliked words
int main()
{
	vector<string> words; 
	string bleeped_word = "michaela";

	for (string word; cin >> word;)
		words.push_back(word);

	for (string word : words)
	{
		if (word == bleeped_word)
		{
			cout << "BLEEP\n";
		}
		else 
		{
			cout << word << "\n";
		}
	}

	return 0;
}
*/
