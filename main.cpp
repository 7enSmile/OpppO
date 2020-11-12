double my_pow(double base, unsigned degree) {
	double count = 1;
	for (int i = 0; i < degree; i++) {
		count = count * degree;
	}
	return count;

}