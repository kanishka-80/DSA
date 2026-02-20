#include<iostream>
using namespace std;

int main(){
    int n,start=0,end,key;
    cin>>n;
    int arr[n];
    end=n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    while (start <= end) {
        int mid = start + (end - start) / 2;
         if (arr[mid] == key) {
            return mid;   // element mil gaya
        }
        else if (arr[mid] < key) {
            start = mid + 1;   // right side search
            return key;
        }
        else {
            end = mid - 1;     // left side search
                return key; 
        }
    }

    return -1;  // element nahi mila

    }
