int pylons(int k, std::vector<int> a) {
	std::vector<int>::iterator it = std::find(a.begin(), a.end(), 1);
	if (it == a.end())
		return -1;
	int begin = it - a.begin();
	int lp = -k;
	int la = begin;
	int cnt = 0;
	for (int i = begin; i < a.size(); i++) {
		if (a[i]) {
			if (i - la >= 2 * k)
				return -1;
			if (i - lp >= 2 * k) {
				lp = la;
				la = i;
				cnt++;
			}
			else
				la = i;
		}
	}
	if (lp + k < a.size()) {
		cnt++;
		if (la + k < a.size())
			return -1;
	}
	return cnt;
}
