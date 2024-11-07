#include "std_lib_facilities.h"

int age_prompt() 
{
	int age = 0;
	cout << "Enter age of recipient \n";
	cin >> age;

	if (age < 0 || age > 110)
	{
		simple_error("You're kidding!");
	}

	return age;
}

int main()
{
	string first_name = "";
	string friend_name = "";
	char friend_pronoun = 'f';
	string age_response = "";
	int age = 0; 

	cout << "Enter the name of the person you want to write to: \n";
	cin >> first_name; 
	
	cout << "Enter another friend name: \n";
	cin >> friend_name;
	
	cout << "Enter friend pronoun (m/f/n)";
	cin >> friend_pronoun;

	age = age_prompt();

	cout << "Dear " << first_name << ",\n";
	cout << "	How are you? I am fine. I miss you \n";

	cout << "Have you seen " << friend_name << " recently? \n";
	cout << "If you see " << friend_name;

	if (friend_pronoun == 'f')
	{
		cout << " please ask her to call me\n";
	}
	else if (friend_pronoun == 'm')
	{
		cout << " please ask him to call me\n";
	}
	else
	{
		cout << " please ask them to call me\n";
	}

	if (age < 12)
	{
		cout << "You will be " << age + 1 << " next year!\n";
	}
	if (age == 17)
	{
		cout << "Next year you will be able to vote! \n";
	}
	if (age > 70)
	{
		cout << "I hope you are enjoying retirment! \n";
	}

	cout << "Yours sincerly, \n\nMichaela";

	return 0;
}
