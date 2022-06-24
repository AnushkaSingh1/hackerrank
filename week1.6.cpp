int divisibleSumPairs(int n, int k, vector<int> ar) {
    unordered_map<int, int> um;
    int ans = 0;

    for(int i = 0; i < ar.size(); i++) {
    int remainder = ar[i] % k;
    int diff = k - remainder;
    if (diff == k) {
      diff = 0;
    }
    
    ans += um[diff];
    um[remainder]++;
  }

  return ans;
}
