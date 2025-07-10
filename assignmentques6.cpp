#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


//6 Move all zeroes to end in an array 
void moveZeroes(vector<int>& arr){
    int pos=0;
    for(int i =0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[pos]);
            pos++;
        }
    }
} 
int main(){
    int n; 
    cout <<" enter the no of elements " << endl;
    cin >> n;
    cout << " enter the elements of the arrray " << endl;
    vector<int> arr(n);
    for(int i =0; i <n; i++){
        cin >>arr[i];
}
moveZeroes(arr);
for(int num: arr){
    cout << num << " ";
}
cout << endl;
return 0;
}
