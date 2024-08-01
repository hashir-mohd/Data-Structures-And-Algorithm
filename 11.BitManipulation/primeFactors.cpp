class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    set<int> primeFactors;
    
    // Check for factor 2
    if (N % 2 == 0) {
        primeFactors.insert(2);
        while (N % 2 == 0) {
            N /= 2;
        }
    }
    
    // Check for odd factors from 3 to sqrt(N)
    for (int i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0) {
            primeFactors.insert(i);
            while (N % i == 0) {
                N /= i;
            }
        }
    }
    
    // If N is still greater than 1, then N is a prime factor
    if (N > 1) {
        primeFactors.insert(N);
    }
    
    // Convert set to vector and return
    vector<int> result(primeFactors.begin(), primeFactors.end());
    return result;
}