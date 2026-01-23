for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){//outer spaces
            cout<<"  ";
        }
        cout<<"*";
        //inner spaces
        for(int sp=1;sp<=2*i-3;sp++){
            cout<<"   ";
        }
        if(i!=1){
            cout<<"*";
        }
        cout<<endl;
        }