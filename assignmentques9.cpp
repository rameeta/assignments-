#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

//9 find maximum element 
int main(){
    int n;
    cout << " enter the no of elements " << endl;
    cin >> n;
    cout << " enter the elements " << endl;
    vector<int> arr(n);
    for(int i=0 ; i <n ; i++ ){
        cin >> arr[i];
    }
    int maxVal = *max_element(arr.begin(), arr.end());
    cout << "Maximum element is: " << maxVal << endl;
    return 0;
}
