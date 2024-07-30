//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
      n=n>>k;
      if(n%2==0) return false;
      else return true;
    }
};