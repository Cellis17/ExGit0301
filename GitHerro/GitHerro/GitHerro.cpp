string mixUp(const string& aWord)
{
	string aJumble = aWord;
	int length = static_cast<int>(aJumble.size());

	for (int i = 0; i < length; i++)
	{
		int randomIndex = (rand() % length);
		char temp = aJumble[i];
		aJumble[i] = aJumble[randomIndex];
		aJumble[randomIndex] = temp;
	}
	return aJumble;
}
