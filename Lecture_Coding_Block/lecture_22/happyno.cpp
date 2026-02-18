 #include<iostream>
 using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    if (n==1 || n==7){
        cout<<"Happy number";
    }
    else if(n<10){
        cout<<"Not a happy number";
    }
      while(n!=1){
            int r=n%10;
            sum=sum+r*r;
            n=n/10;
        }

 }
 
 
 