#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// 7 check if array is sorted 
bool isSorted (vector<int> arr){
    int n = arr.size();
    for(int i = n-1; i >=0 ; i--){
        if(arr[i]< arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << " enter the no of elements " << endl;
    cin >> n;
    cout << " enter the elements " << endl;
    vector<int> arr(n);
    for(int i=0 ; i <n ; i++ ){
        cin >> arr[i];
    }
    if (isSorted(arr)){
        cout << " the array is sorted " << endl;
    }
    else{
        cout << " the array is not sorted " << endl;
    }
    return 0;
}
