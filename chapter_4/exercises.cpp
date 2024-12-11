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

// Question 4
int main()
{
	cout << "Hold a number in your head and I will try to guess it\n";
	cout << "Ready? (hit enter)";
	int guess = 50;
	string answer;

	for(int i = 0; i < 7; ++i)
	{
		cout << "Is the number " << guess << " or greater or less than?\n";

		cin >> answer; 
		if (answer == "less")
		{
			guess = guess / 2;
		}
		else if (answer == "greater")
		{
			guess = guess + ((100 - guess) / 2);
		}
		else if (answer == "correct")
		{
			cout << "Whoot I got it in only " << i << " guesses!";
			break;
		}
	}
}

// Question 5 very simple calculator 

int main()
{
	double first_input = 0; 
	double second_input = 0; 
	string operand = "";
	double result = 0;

	cout << "input two numbers with either +, -, / or * \n";
	cin >> first_input >> operand >> second_input; 

	if (operand == "+")
	{
		result = first_input + second_input;

	}
	else if (operand == "-")
	{
		result = first_input - second_input;

	}
	else if (operand == "/")
	{ 
		if (second_input == 0)
		{
			cout << "Ope, can't divide by zero!\n";
		}
		else 
		{
			result = first_input / second_input;
		}
	}
	else if (operand == "*")
	{
		result = first_input * second_input;

	}
	cout << result; 
	return 0; 
}

// Questions 6 
// program that spells out number e.g. 7 becomes 7 using a vector 

int main()
{
	vector<string> numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int input = 0; 
	cout << "gimme the numbers! \n";
	while (cin)
	{
		cin >> input; 
		if (input <= 9 && input >= 0)
		{
			cout << "no sanitization! " << input << " becomes " << numbers[input] << "\n";
		} 
		else
		{
			cout << "Ope, can't count that hight.... Try again!\n";
		}
	}
}

// 7 Modify the calculator from above to accept single spelled out digits
int main()
{
	vector<string> numbers = { "zero","one", "two", "three", "four", "five", "six" , "seven", "eight", "nine", "ten" };
	string first_input = "";
	string operand = "+";
	string second_input = "";

	cout << "Spell out two numbers and and +, -, * or / and I will do that operation \n";

	cin >> first_input >> operand >> second_input; 

	int first_number = 0; 
	int second_number = 0; 
	int output = 0;
	for (int i = 0; i < numbers.size(); ++i)
	{
		if (numbers[i] == first_input)
			first_number = i;
		if (numbers[i] == second_input)
			second_number = i;
	}
	
	if (operand == "+")
	{
		output = first_number + second_number; 
	}
	else if (operand == "-")
	{
		output = first_number - second_number;
	}
	else if (operand == "*")
	{
		output = first_number * second_number;
	}
	else if (operand == "/")
	{
		if (second_number == 0)
		{
			cout << "ope, can't divide by zero \n";
			
		}
		else
		{
			output = first_number / second_number;
		}
	}

	cout << "The result is " << output;
}

// Question 8 grains of rice 

int main()
{
	int square = 1; 
	int grains_of_rice = 1;
	int target_rice_count_thousand = 1000; 
	int target_rice_count_million = 1000000;
	int target_rice_count_billion = 1000000000;
	int squares_for_thousand = 0; 
	int squares_for_million = 0;
	int squares_for_billion = 0;

	while (grains_of_rice > 0 && squares_for_billion == 0)
	{
		grains_of_rice = grains_of_rice * 2;

		if (grains_of_rice >= target_rice_count_thousand && squares_for_thousand == 0)
		{
			squares_for_thousand = square;
			cout << "For a thousand grains of rice " << squares_for_thousand << grains_of_rice << "\n";
		}

		if (grains_of_rice >= target_rice_count_million && squares_for_million == 0)
		{
			squares_for_million = square;
			cout << "For a million grains of rice " << squares_for_million << grains_of_rice << "\n";
		}

		if (grains_of_rice >= target_rice_count_billion && squares_for_billion == 0)
		{
			squares_for_billion = square;
			cout << "For a billion grains of rice " << squares_for_billion << grains_of_rice << "\n";
		}
		++square;
	}
}
 // Questions 9 
// calculate grains of rice until overflow 
//  grains_of_rice becomes zero! 
int main()
{
	int grains_of_rice_int = 1;
	double grains_of_rice_double = 1; 

	for (int i = 0; i < 64; ++i)
	{
		grains_of_rice_int = grains_of_rice_int * 2;
		grains_of_rice_double = grains_of_rice_double * 2; 

		cout << "Grains of rice int: " << grains_of_rice_int << "\t grains of rice double: " << grains_of_rice_double << " square: "<< i << "\n";
	}
}

// Question 10 
// Rock paper scissors 

int main()
{
	Vector<char> next_move = { 'p', 'r', 's', 's'};
	char player_move = 'r';
	cout << "Let's play rock paper scissors, input your move when you are ready! (r = rock, s = scissors, p = paper)\n";

	for( int move_index = 0; move_index < next_move.size(); ++move_index)
	{
		cout << "Let's play!\n";
		cin >> player_move;
		char current_computer_move = next_move[move_index];
		if (current_computer_move == player_move)
		{
			cout << "we picked the same!\n";
			continue;
		}

		switch (player_move)
		{
			case 'r':
				if (current_computer_move == 'p')
					cout << "I win! " << current_computer_move << " beats " <<  player_move << "\n";
				break; 
			case 'p':
				if (current_computer_move == 's')
					cout << "I win! " << current_computer_move << " beats " << player_move << "\n";
				break; 
			case 's':
				if (current_computer_move == 'r')
					cout << "I win! " << current_computer_move << " beats " << player_move << "\n";
				break; 
			default:
				cout << "Please input r, s, or p\n";
				continue;
		}

		cout << "You win " << player_move << " beats " << current_computer_move << "\n";

	}
	
}

// fine all  prime numbers between 1 adn 100, this is exercise 11 to 14!  

vector<int> add_all_future_multiples(vector<int> sieved_list, int siev_number, int max)
{
	int current_multiple = siev_number;
	for (int index = siev_number; current_multiple < max; ++index)
	{
		sieved_list[current_multiple] = 1;
		current_multiple = index * siev_number;
	}

	return sieved_list;
}

int main()
{
	cout << "what is the max?\n";

	int max = 100;
	cin >> max;

	vector<int> primes = {};
	vector<int> sieved(max);

	for (int num = 2; num < max; ++num)
	{
		if (sieved[num] == 0)
		{
			primes.push_back(num);
			sieved = add_all_future_multiples(sieved, num, max);
		}
	}
	cout << "All the primes between 1 and 100 \n";

	for (int num : primes)
	{
		cout << num << "\n";
	}

}
*/
// 12 
vector<int> find_all_multiples(vector<int> sifted, int num, int max)
{
	int current_multiple = num; 
	for (int ind = 1; current_multiple < max; ++ind)
	{
		sifted[current_multiple] = 1;
		current_multiple = num * ind;

	}
	return sifted; 
}

vector<int> find_primes_between(vector<int> primes, int start, int end)
{

	vector<int> sifted(end);

	for (int num = start; num < end; ++num)
	{
		if (sifted[num] == 0)
		{
			primes.push_back(num);
			sifted = find_all_multiples(sifted, num, end);
		}
	}

	return primes; 
}

// this does not work. I think I need to do like just the old fasioned method of dividing by everything under it 
int main()
{
	int total_primes_length = 0;
	cout << "How many primes do you want me to find?"; 
	cin >> total_primes_length; 

	vector<int> primes = {}; 
	int start = 2; 
	int end = 100; 

	while (primes.size() < total_primes_length)
	{
		primes = find_primes_between(primes, start, end); // concat here. 
		int temp = end;
		start = primes[primes.size() -1 ];
		end = temp + 100;
		//cout << end << "\n";
	}
	cout << "Found them!";

	for (int i = 0; i < total_primes_length; ++i)
	{
		cout << primes[i] << "\n";
	}
}