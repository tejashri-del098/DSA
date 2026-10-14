class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>miss;

        for(int j = 1; j < arr[0]; j++){
            miss.push_back(j);
        }

        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]+1){
                for(int j = arr[i-1]+1; j < arr[i]; j++){
                    miss.push_back(j);
                }
            }
        }
        int j = arr[n-1]+1;
        /*if(miss.size() < k){
          miss.push_back(j);
           j++;
        }*/
        while(miss.size() < k){
            miss.push_back(j);
            j++;
        }
        /*while (miss.size() < k) {
            miss.push_back(j);
            j++;
        }*/
        
        return miss[k - 1];

    }
};
// i will make arrray miss in which i store the element that not present in arr .
// and push till kth value , return kth value 