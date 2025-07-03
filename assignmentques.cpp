#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 1 question :  find missing number from 1 to n :
/*int findMissingNumber(vector<int>& nums, int n){
    int xorAll =0;
    int xorArray =0;
    //Xor all elements from 1 to n
    for(int i =1; i <=n ; i++){
        xorAll ^= i;
    }
    cout << xorAll << endl;
    // Xor all the elements in the given array 
    for(int num : nums){
        xorArray ^= num;
    }
    cout << xorArray << endl;
    //Xor both to get the missing number
    return  xorAll ^ xorArray ;
}

    int main() {
    int n;
    cout << "Enter the value of n (numbers from 1 to n, one missing): ";
    cin >> n;

    vector<int> nums(n - 1);
    cout << "Enter " << n - 1 << " numbers:\n";

    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    int missing = findMissingNumber(nums, n);
    cout << "Missing number is: " << missing << endl;

   return 0;

}*/



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

