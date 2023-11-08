// #include<stdio.h>
// int fibo(int n){
//     if(n<=1){
//         return n;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("%d,",fibo(i));
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<",";
    }
    return 0;
}