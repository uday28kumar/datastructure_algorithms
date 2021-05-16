#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> equilibriumIndex(vector<int> arr){
    int n = arr.size();
    int total = 0;
    vector<int>res;
    for(int i =0; i<n; i++){
        total+=arr[i];
    }
    if(total == 0){
        res.push_back(0);
    }
    for(int i=1; i<n; i++){
        if(arr[i-1] == total - (arr[i] + arr[i-1])){
            res.push_back(i);
        }
        arr[i]= arr[i] + arr[i-1];
    }
    return res;
}
int main(){
    vector<int> arr {0, -3, 5, -4, -2, 3, 1, 0};

    vector<int>res = equilibriumIndex(arr);
    for(int e: res){
        cout<<e<<" ";
    }
    return 0;
}
