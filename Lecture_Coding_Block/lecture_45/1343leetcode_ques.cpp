#include<iostream>
#include<vector>
using namespace std;

int main(){
    
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k,threshold;
        cin>>k>>threshold;
        int sum = 0;
        int count = 0;
        int target = k * threshold;

        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        if(sum >= target) {
            count++;
        }

        for(int i = k; i < n; i++) {
            sum = sum + arr[i] - arr[i - k];
            if(sum >= target) {
                count++;
            }
        }

        cout<<count;
    }
