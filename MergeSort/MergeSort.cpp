#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i = 0;
    int j= 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) {
            res[k++] = a[i++];
          
        }
        else {
            res[k++] = b[j++];
        
        }
    }
        if(i==a.size()){
            while(j<b.size()) {
                res[k++] = b[j++];
            }
        }
        if(j==b.size()){
            while(i<a.size()){
                res[k++] = a[i++];
            }
        }
    }
    

int main(){
    int arr[] = {1,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n1);// it copy the arr into vector this is method
    // for(int i=0;i<n1;i++){
    //     cout<<a[i]<<" ";
    // }
    int brr[] = {2,3,6,7,10,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    vector<int>b(brr,brr+n2);
    // for(int i=0;i<n2;i++){
    //     cout<<b[i]<<" ";
    // }
    vector<int>res(n1+n2);
    merge(a,b,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
