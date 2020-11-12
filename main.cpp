double my_pow(double base, unsigned degree) {
	double count = 1;
	if (degree == 0) return 1;
	if (degree > 0) {
		for (int i = 0; i < degree; i++) {
			count = count * degree;
		}
	}
	else {
		degree = degree * -1;
		for (int i = 0; i < degree; i++) {
			count = count * degree;
		}
		count = count / 10;

	}
	return count;

}