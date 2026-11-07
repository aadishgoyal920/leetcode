class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        int start=0;
        int i;
        for(int i=0;i<n;i++){
            int num=a[i];
            if(num==0){
                swap(a[start],a[i]);
                start++;
            }
        }
            // 0 is sorted , now remaining array
            i=start;
            int j=n-1;
            while(i<j){
                if(a[i]==1&&a[j]==1){
                    i++;
                }
                else if(a[i]==1&&a[j]==2){
                    j--;
                }
                else if(a[i]==2&&a[j]==1){
                    swap(a[i],a[j]);
                    i++;
                    j--;
                }
                else
                    j--;

            }
            return;
    }
};