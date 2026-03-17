// #include<iostream>
// using namespace std;

// int main(){
//     int M,N;
//     cin>>M>>N;
//     int mat[100][100];
//     for(int i=0;i<M;i++){
//         for(int j=0;j<N;j++){
//             cin>>mat[i][j];
//         }
//     }
//     int row[100]={0};
//     int col[100]={0};

//     for(int i=0;i<M;i++){
//         for(int j=0;j<N;j++){
//             if(mat[i][j]==1){
//                 row[i]=1;
//                 col[j]=1;

//             }
//         }
//     }
//     //modified matrix
//     for(int i=0;i<M;i++){
//         for(int j=0;j<N;j++){
//             if(row[i]==1 || col[j]==1){
//                 mat[i][j]==1;
//             }
//         }
//     }

//     //print matrix
//     for(int i=0;i<M;i++){
//         for(int j=0;j<N;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }