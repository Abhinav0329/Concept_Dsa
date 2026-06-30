/*
Input Example: nums = [5, 125, 45, 999, 1024]
Expected Output: 2
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    int shuffle(vector<int>& nums){
        int n = nums.size();
        int exactdigit = 0;
        for(int i=0;i<n;i++){
            int temp = nums[i];
            int count = 0;
            while(temp>0){
                count++;
                temp/=10;
            }
            if(count==3){
                exactdigit++;
            }
        }
        return exactdigit;
    }
};

int main(){
    structure solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements: ";
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    int result = solver.shuffle(nums);
    
    cout << "result : " << result << endl;
    
    return 0;
}