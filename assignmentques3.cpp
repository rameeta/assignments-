#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
//3 merging two sorted arrays
vector<int>mergingTwoSortedArrays(vector<int>& arr1, vector<int>& arr2){
    vector<int> merged;
    int i =0 , j=0;
    int n1= arr1.size();
    int n2= arr2.size();
    while(i < n1 && j < n2){
        //if elements in arr1 is less than arr2 then push it 
        if(arr1[i] < arr2[j]){
            merged.push_back(arr1[i]);
            i++;
        }
        else{
            //if elements in arr2 is less than arr1 then push it 
            merged.push_back(arr2[j]);
            j++;
        }
    }
        //remaining elements in arr1
        while(i < n1){
            merged.push_back(arr1[i]);
            i++;
        }
        //remaining elements in arr2
        while(j < n2){
            merged.push_back(arr2[j]);
            j++;
        }
    
    return merged;
}
int main(){
    cout << " enter no of elements of arr1 " << endl;
    int n1 ;
    cin >> n1;
    cout << " enter no of elements of arr2 " << endl;
    int n2 ;
    cin >> n2;
    cout << " enter the elements of the arr1 " << endl;
    vector<int> arr1(n1);
    for(int i =0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << " enter the elements of the arr2 " << endl;
    vector<int> arr2(n2);
    for(int j =0; j < n2; j++){
        cin >> arr2[j];
    }
     vector<int> merged = mergingTwoSortedArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
    
}
