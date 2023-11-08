// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",n);
//     int a=0,b=1;
//     printf("%d,%d,",a,b);
//     int nextTerm=a+b;
//     for(int i=2;i<n;i++){
//         nextTerm=a+b;
//         a=b;
//         b=nextTerm;
//         printf("%d,",nextTerm);
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    cout<<a<<","<<b<<",";
    int nextterm;
    for(int i=0;i<n;i++){
        nextterm=a+b;
        a=b;
        b=nextterm;

        cout<<nextterm<<",";
    }
    return 0;
}