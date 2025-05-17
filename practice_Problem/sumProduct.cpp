#include <iostream>
using namespace std;
void inputArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int arrSum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;

}

int arrPro(int arr[], int n){
    int product = 1;
    for(int i=0; i<n; i++){
        product=product*arr[i];
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    inputArr(arr,n);
    int sum=arrSum(arr,n);
    int product =arrPro(arr,n);
    cout<<"The sum is : "<<sum<<endl;
    cout<<"The product is : "<<product<<endl;


}