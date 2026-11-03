class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        int leader=a[0]-1;
        int start=0;
        int i;
        for(int i=0;i<n;i++){
            int num=a[i];
            if(num==leader){
                continue;
            }

            leader=a[i];
            swap(a[i],a[start]);
            start++;
        }
        return start;
    }
};