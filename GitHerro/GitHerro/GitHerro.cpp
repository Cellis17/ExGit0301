// GitHerro.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <time.h>

using namespace std;


int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string word = RandomWord();
	string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);

	system("pause");
	return 0;
}

