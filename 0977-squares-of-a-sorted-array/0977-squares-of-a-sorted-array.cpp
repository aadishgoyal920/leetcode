class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
       int n=a.size();
       vector<int> neg;
       vector<int> pos;

       for(int i=0;i<n;i++){
        if(a[i]<0){
            neg.push_back(a[i]);
        }
        else{
            pos.push_back(a[i]);
        }
       }  

       if(neg.size()==0){  // no negative element
          for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
          }
            return pos;
          
       }
       if(pos.size()==0){  //no positive element
          for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
          }
            reverse(neg.begin(),neg.end());
            return neg;
          
       }

        int i=0,j=0;
        int id=0;
        int p=neg.size();
        int q=pos.size();
        
        vector<int>res(p+q);

        for(int i=0; i<p;i++){
            neg[i]=neg[i]*neg[i];
        }
            reverse(neg.begin(),neg.end());
        
        for(int i=0;i<q;i++){
            pos[i]=pos[i]*pos[i];
        }

        while(i<p and j<q){
            if(neg[i]<=pos[j]){
                res[id]=neg[i];
                id++;
                i++;
            }
            else{
                res[id]=pos[j];
                id++;
                j++;
            }
        }  // while loop khatam

        while(i<p){
            res[id]=neg[i];
            id++;
            i++;
        }
        while(j<q){
            res[id]=pos[j];
            id++;
            j++;
        }

        return res;

    }
};