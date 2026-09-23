class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        int max_odd = (n % 2 == 0) ? n - 1 : n - 2;
        if (max_odd < 3) {
            return 1;
        }

        int max_idx = max_odd / 2;
        vector<bool> isPrime(max_idx + 1, true);

        for (long long i = 1; (2 * i + 1) * (2 * i + 1) < n; ++i) {
            if (isPrime[i]) {
                long long p = 2 * i + 1;
                for (long long j = (p * p) / 2; j <= max_idx; j += p) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 1;
        for (int i = 1; i <= max_idx; ++i) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};