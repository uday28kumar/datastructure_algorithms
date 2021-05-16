#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int findMaxProductOf2Integer(vector<int> arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return max(arr[0] * arr[1], arr[n-1]*arr[n-2]);
}
int main(){
    vector<int> arr {-10, -8, 5, 6, -2};

    cout<<findMaxProductOf2Integer(arr);
    return 0;
}
