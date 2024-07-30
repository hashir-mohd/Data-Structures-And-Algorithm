vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        int i=0,j=0;
        vector <int> ans;
        while(i<n && j <m){
            if(arr1[i]<arr2[j]){
                if(ans.empty()){
                    ans.push_back(arr1[i]);
                }
                else if(arr1[i]!=ans.back()){
                    ans.push_back(arr1[i]);
                }
                i++;
            }
            else if(arr1[i]>arr2[j]){
                if(ans.empty()){
                    ans.push_back(arr2[j]);
                }
                else if(arr2[j] != ans.back()){
                    ans.push_back(arr2[j]);
                }
                j++;
            }
            else{
                if(ans.empty()){
                    ans.push_back(arr1[i]);
                }
                else if(arr1[i]!=ans.back()){
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        while(i <n){
            if(ans.empty()){
                    ans.push_back(arr1[i]);
                }
                else if(arr1[i]!=ans.back()){
                    ans.push_back(arr1[i]);
                }
                i++;   
        }
        while(j<m){
            if(ans.empty()){
                    ans.push_back(arr2[j]);
                }
                else if(arr2[j] != ans.back()){
                    ans.push_back(arr2[j]);
                }
                j++;
        }
        return ans;
        