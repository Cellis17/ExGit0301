string randomWord()
{
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS] =
	{
		"wall",
		"glasses",
		"labored",
		"persistant",
		"jumble"
	};

	int choice = (rand() % NUM_WORDS;
	string word = WORDS[choice];

	return word;
}