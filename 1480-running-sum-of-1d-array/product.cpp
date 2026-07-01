/*
Input Example: nums = [2, 3, 4]
Expected Output Vector: [2, 6, 24]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> product(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n);
        int prd=1;
        for(int i=0;i<n;i++){
            ans[i]=prd*nums[i];
            prd *= nums[i];
        }
        return ans;
    }
};
/*
we can use recursion too:-
nums[i] *= nums[i-1];
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

    vector<int> result = solver.product(input);

    cout << "Result: [";
    int count=0;
    for(int num : result){
        cout << num;
        if(count++ < result.size()-1){
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}