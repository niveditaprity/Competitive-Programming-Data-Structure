// CPP program to remove punctuation from a given string 

#include <iostream> 
using namespace std; 

int main() 
{ 
	// input string 
	string str = "Welcome???@@##$ to#$% Geeks%$^for$%^&Geeks"; 
	int len= str.size();

	for (int i = 0;i < len; i++) 
	{ 
		if (ispunct(str[i])) 
		{ 
			str.erase(i--,1); //delete 1 characters from i
			len = str.size(); 
		} 
	} 
	cout << str; 
	return 0; 
} 
