double my_pow(double base, unsigned degree) {
	double count = 1;
	if (!degree) return 1;
	while (degree)
	{
		if (degree % 2 == 0)
		{
			degree /= 2;
			base *= base;
		}
		else
		{
			degree--;
			count *= base;
		}
	}
	return count;

}