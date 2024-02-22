#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// void stockSpan(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     };
//     cout <<endl;
//     stack <int> s;
//     s.push(0);
//     cout <<"1" << "  ";
//     for(int i=1;i<n ;i++){
//         while(s.empty()==false && arr[s.top()] <= arr[i]){
//             s.pop();
//         }
//         int span = s.empty()? i+1 :i-s.top();
//         cout << span << "  ";
//         s.push(i);
//     };

// }

// int main(){
//     int arr[10] ={13,15,12,14,16,12,11,10,10,30};
//     stockSpan(arr,10);
//     return 0;
// }

class StockSpanner {
     stack <pair<int,int>>s;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span =0;
        if(s.empty()){
            s.push({price,1});
            return 1;
        }
        else{
            while(s.top().first<=price){
                span+=s.top().second;
                s.pop();
            }
        }
        s.push({price,span+s.top().second});
        return s.top().second;
    }
};