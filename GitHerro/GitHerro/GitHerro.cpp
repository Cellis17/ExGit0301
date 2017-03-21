void play(const string& mysteriousWord)
{
	string guess;

	do {
		cout << "Enter guess: ";
		cin >> guess;
		if ((guess != aWord) && (guess != "quit"))
		{
			cout << "WRONG!\n";
		}
	} while ((guess != aWord) && (guess != "quit"));

	if (guess == aWord)
	{
		cout << "CORRECT!\n";
	}

	cout << "Thanks for playing.\n";
}