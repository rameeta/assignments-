#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


//reverse array
void reverseArray(vector<int>& arr){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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
    reverseArray(arr);
    for(int ans: arr){
        cout << ans << " ";
    }
    cout << endl;
    
}
