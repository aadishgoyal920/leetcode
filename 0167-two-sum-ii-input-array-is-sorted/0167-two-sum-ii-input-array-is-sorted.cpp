class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        int low=0;
        int high=n-1;
        vector<int> res(2);
        while(low<high){
            int sum = a[low]+a[high];
            if(sum<target){
                low++;
            }
            else if(sum>target){
                high--;
            }
            else{
                res[0]=low+1;
                res[1]=high+1;
                break;
            }
        }
        return res;
    }
};