#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void subarray(int arr[] , int n) {
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            for(int k=i;k<=j;k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

void max_sum(int arr[],int n) {
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int sum = 0;
            for(int k=i;k<=j;k++) {
                sum += arr[k];
                if(sum>max_sum) {
                    max_sum = sum;
                    cout<<arr[k]<<" ";
                }
            }
        }
    }
    cout<<endl;
    cout<<max_sum<<endl;
}
int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    subarray(arr,n);
    cout<<"max sum"<<endl;
    max_sum(arr,n);
    
}