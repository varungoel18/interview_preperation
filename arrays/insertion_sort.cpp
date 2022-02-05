#include<iostream>
using namespace std;
int main() {
    int arr[] = {5,4,3,2,1,0};
    int n = 6;
    int i,j;
    for(i=0;i<n;i++) {
        int picked_card = arr[i];
        for(j=i-1;j>=0 and arr[j]>picked_card;j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = picked_card;
    }
for(int i=0;i<n;i++) {
    cout<<arr[i]<<endl;
}
}