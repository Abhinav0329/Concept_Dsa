/*
Input Example: nums = [1, 2, 3]
Expected Output Vector: [1, 2, 3, 1, 2, 3, 1, 2, 3]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> threetimesconcatenation(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n * 3);
        for(int i=0;i<n;i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
            ans[i+n*2] = nums[i];
        }
        return ans;
    }
};

/*
we can use this also:-
   for(int i=0;i<n*3;i++){
        ans[i]=nums[i%n];
       }
*/

int main(){
    structure solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> input(size);
    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> input[i]; 
    }
    vector<int> result = solver.threetimesconcatenation(input);

    cout << "Result: [ ";
    int count=0;
    for(int num : result) {
        cout << num;
        if(count++ < result.size()-1){
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}