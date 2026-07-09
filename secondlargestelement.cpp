#include<bits/stdc++.h>
using namespace std;
void secondlargestelement(const vector<int> &arr){
    int largest=arr[0];
    int slargest = -1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];

        }
        else if(arr[i] < largest && arr[i]> slargest){
            slargest = arr[i];
        }
    }
    cout<<"second largest element is"<<slargest<<endl;
}
void secondsmallest(const vector<int> &arr){
    int smallest = arr[0];
    int ssmallest =-1;
    for(int i =1 ; i< arr.size();i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]> smallest && arr[i]< ssmallest){
            ssmallest = arr[i];
        }
    }
    cout<<"The second smallest element is"<<ssmallest<<endl;
}
int main(){
    int num;
    cout<<"enter the number of elements";
    cin>>num;
    vector<int> array;
    cout<<"enter numbers";
    for(int i=0;i<num;i++){
            int x;
            cin>> x;
            array.push_back(x);
    }
    secondlargestelement(array);
    secondsmallest(array);
}