#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
//4 leaders in an array
 vector<int> findLeaders(vector<int>& arr){
    vector<int> leaders;
    int n = arr.size();
    if(n ==0)
    return leaders;
    int maxLeader = arr[n-1];
    leaders.push_back(maxLeader);
    //right to left transversal to find the great
    for(int i = n-2; i >=0; i--){
        if(arr[i] >= maxLeader){
            leaders.push_back(arr[i]);
            maxLeader = arr[i];
        }

    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
int main(){
cout << " enter the no of elements " << endl;
int n;
cin >>n;
cout << " enter the elements " << endl;
vector<int> arr(n);
for(int i =0; i < n; i++){
    cin >> arr[i];
}
vector<int> result = findLeaders(arr);

cout << " leaders in an array is "<< endl;
for(int num : result ){
    cout << num << " ";
}
cout << endl;
return 0;

}
