#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<vector<int> > findPairOfSum(vector<int>arr, int sum){
  map<int, int> m;
  vector<vector<int> > res;
  for(int i = 0; i<arr.size(); i++){
    if(m.find(arr[i])!=m.end()){
        vector<int> pr {arr[i], arr[m[arr[i]]]};
        res.push_back(pr);
    }else{
        m[sum-arr[i]] = i;
    }
  }
  return res;
}
int main(){
    vector<int> arr {1, 4, 6, 8, 3, 5, 9};
    int sum = 14;
    vector<vector<int> > res = findPairOfSum(arr, sum);
    if(res.size()){
        for(int i =0; i<res.size(); i++){
            cout<<res[i][0]<<", "<<res[i][1]<<endl;
        }
    }else{
        cout<<"pair not found"<<endl;
    }
}
