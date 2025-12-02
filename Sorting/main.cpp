#include <bits/stdc++.h>
using namespace std;

vector<int> input(){
    int n;
    cin>> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    return arr;
}

void print(vector<int> arr){
    for (int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
}

void selectionSort(vector<int>&arr){
    int n = arr.size();
    int minIndex;
    for (int i = 0; i <n -1; i++) {
        minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        if(minIndex!=i){
            swap(arr[i],arr[minIndex]);
        }
    }
}

void bubbleSort(vector<int>&arr){
    int n = arr.size();
    bool swaped;
    for (int i = 0; i < n-1; i++) {
        swaped = false;
        for(int j = 0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swaped = true;
                swap ( arr[j],arr[j+1]);
            }
        }
        if(!swaped)
        break;
    }
    
    
}

void insertionSort(vector<int>&arr){
    int key;
    for (int i = 1; i < arr.size(); i++) {
        int j = i-1;
        key = arr[i];
        while(arr[j]>key&& j>=0){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}



int main()
{   
    vector<int> arr = input();


    
    // bubbleSort(arr);
    // selectionSort(arr);
    // insertionSort(arr);
    
    
    print(arr);
    
    
    
    return 0;
}