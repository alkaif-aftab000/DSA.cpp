#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0; i<n; i++) cin>>arr[i];
    insertionsort(arr, n);
    cout<<"Sorted array "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"All changes pushed to git.";
    return 0;
}