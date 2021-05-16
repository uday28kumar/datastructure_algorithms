#include <iostream>
#include <vector>
#include <map>
using namespace std;

void sortBinaryArray(vector<int> &arr){
    int k = 0;
    for(int i=0;i<arr.size(); i++){
        if(arr[i] == 0){
            arr[k++] = 0;
        }
    }
    for(int i=k; i<arr.size(); i++){
        arr[i] = 1;
    }
}
int main(){
    vector<int> arr {1, 0, 1, 0, 0, 1};

    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
