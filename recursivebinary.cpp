#include <bits/stdc++.h>
using namespace std;
int binaryrecurse(int arr[], int low,int high,int target){
      if(low>high) return -1;
      int mid = (low+high)/2;
      if(arr[mid]== target){
        return mid;
      }
      else if(arr[mid]< target){
        return binaryrecurse(arr,mid +1,high,target);
      }
      else return binaryrecurse(arr,low,mid -1, target);
};
int main(){
       int array[10] = {1,5,7,9,10,12,15,45,89,98};
       cout << binaryrecurse(array,0,9,12);
}