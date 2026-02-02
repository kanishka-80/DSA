#include<iostream>
using namespace std;


int main() {

	int n;
	cin>>n;
    //left pattern 
	for(int i=1;i<=n;i++){
         //outer space
		for(int sp=1;sp<=n-i;sp++){
			cout<<"  ";
		}
		cout<<"* ";  
        //inner space
        if(i==1 || i==5){
        //to avoid extra space at the end and at the beginning
        for(int sp=1;sp<=n-1;sp++){
                cout<<"* ";
            }
        }	
        else{
            for(int sp=1;sp<=n-2;sp++){
            cout<<"  ";
            }
            cout<<"* ";  
        }
       
            cout<<endl;
    }
   
	return 0;
}