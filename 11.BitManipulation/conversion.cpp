

class Solution {
public:
    void convert(int x) {
        string ans="";
        while(x>0){
            int rem=x%2;
            ans+=to_string(rem);
            x/=2;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
};