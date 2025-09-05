// [3,5,8,10,3,6,3], target=3

#include<iostream>
using namespace std;
#include<vector>

void repitition(vector<int> arr, int target){
    vector<int> res;

    for(int i =0; i<arr.size(); i++){
        if(arr[i]==target){
            res.push_back(i);
        }
    }

    if(res.size()==0){
        cout<<"No matching elements";
    }

    for(auto it: res){
        cout<<it<<endl;
    }
}

int main(){
    vector<int> arr = {3,4,5,3,6,7,3};
    int target =3;
    repitition(arr,target);
}