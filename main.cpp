double my_pow(double base, unsigned degree) {
	double count = 1;
	bool flag = 0;

	if (degree == 0) return 1;
	if (degree < 0) {
		degre = degree * -1;
		flag = 1;
	}

	for (int i = 0; i < degree; i++) {
		count = count * degree;
	}

	if (flag) {
		return count;
	}
	else
	{
		return 1 / count;
	}

}