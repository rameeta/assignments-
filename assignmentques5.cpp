#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

//count frequency of each element 
int main(){
    int n;
    cout << "enter the no of elements in an array: " << endl;
    cin >> n;
    cout << " enter the elements " << endl;
    vector<int> arr(n);
    for(int i = 0 ; i <n ; i++){
        cin >> arr[i];
    }
    //map the frequency of each element 
    unordered_map<int , int >freq; // int -> key , int -> how many times it appeared 
    for(int num :arr){
        freq[num]++;
    }
    cout << " the frequency of each element is " << endl;
    for(auto pair : freq){
        cout << pair.first << " key " << "->" << pair.second << " value " << endl; // pair.first for key , pair.second for value 
    }
} 
