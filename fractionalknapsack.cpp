// #include<iostream>
// #include<vector>
// #include<Algorithm>
// using namespace std;

// struct Item{
//     int weight;
//     int value;
//     double value_per_weight;

// };

// bool compare(Item a, Item b){
//     return a.value_per_weight >b.value_per_weight;
// }

// double fractionalknapsack(vector<Item>&items,int capacity){
//     sort(items.begin(),items.end(),compare);

//     double totalValue=0.0;
//     for(const Item &item :items){
//         if(capacity==0){
//             break;
//         }

//         double amountTaken=min(item.weight,capacity);
//         totalValue+=(amountTaken*item.value_per_weight);
//         capacity-=amountTaken;
//     }
//     return totalValue;
// }

// int main(){
//     int n,capacity;
//     cout<<"Enter items"<<endl;
//     cin>>n;
//     cout<<"Enter bag Capacity"<<endl;
//     cin>>capacity;

//     vector<Item>items(n);

//     cout<<"Enter Weight and Value of each item "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>items[i].weight>>items[i].value;
//         items[i].value_per_weight=static_cast<double>(items[i].value)/items[i].weight;
//     }

//     double maxValue =fractionalknapsack(items,capacity);
//     cout<<"Max value is "<<maxValue;

//     return 0;


// }

#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;

struct Item{
    int weight;
    int value;
    double value_per_weight;
};

bool compare(Item a,Item b){
    return(a.value_per_weight>b.value_per_weight);
}

double fractionalknapsack(vector<Item>&items,int capacity){
    sort(items.begin(),items.end(),compare);
    double totalvalue=0.0;
    for(const Item item: items){
        if(capacity==0){
            return;
        }

        double amountTaken=min(item.weight,capacity);
        totalvalue+=(amountTaken*item.value_per_weight);
        capacity-=amountTaken;
    }
    return totalvalue;
}
int main(){
    int capacity;
    int n;
    cout<<"Capicity"<<endl;
    cin>>capacity;
    cout<<"Items"<<endl;
    cin>>n;

    vector<Item>items(n);
    for(int i=0;i<n;i++){
        cin>>items[i].weight>>items[i].value;
        items[i].value_per_weight=static_cast<double>(items[i].value/items[i].weight);
    }

    double finalValue=fractionalknapsack(items,capacity);
    cout<<"Final Value is "<<finalValue;

}
