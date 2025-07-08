#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
//2 Left rotate the array d places 
void rotateLeft(vector<int>& nums, int d){
    int n = nums.size();
    d %= n;
    //step by step reverse
    reverse(nums.begin(), nums.begin()+d);
    reverse(nums.begin() +d, nums.end());
    reverse(nums.begin(), nums.end()); 
}
int main(){
    int n ;
    cout << "enter no of elements" << endl;
    cin >> n;
    vector<int> nums(n);
    cout << " enter the elements " << endl;
    for(int i =0; i < n; i++){
        cin >> nums[i];
    }
    int d;
    cout << " enter the rotation point" << endl;
    cin >>d;

    rotateLeft(nums, d);

    cout << " array after rotation " << endl;
    for(int num: nums){
        cout << num << " ";
    }
cout << endl;
}
