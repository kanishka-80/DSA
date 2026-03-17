#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[100][100];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }       
    }

    bool isLower = true;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i < j && arr[i][j] != 0){
                isLower = false;
                break;
            }
        }
        if(!isLower) break;
    }

    if(isLower)
        cout << "true";
    else
        cout << "false";

    return 0;
}