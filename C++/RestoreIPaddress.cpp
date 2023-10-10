//letcodeProblem Restore IP Address
class Solution {
public:  
 
bool subpart(string s, int i, int j){
         int len = j-i+1;
         if(len >3) return false;
         if(s[i] == '0'){
             if(len == 1) return true;
             return false;
                     }
         int num = stoi(s.substr(i,j-i+1));
         if(num>=0 && num<=255) return true;
         return false;
                          
   }

  bool issafe(string s, int len, int i, int j, int k){
     if(subpart(s,0,i) && subpart(s,i+1,j) && subpart(s,j+1,k) && subpart(s,k+1,len-1))//checking each four part whether all these part is valid or not
        return true;
     else{
         return false;
         } 
  }


void addstring(string s, int n, int i, int j, int k,vector<string> &res){//adding substring part along with . in our result string
    string temp;
    temp.append(s.substr(0,i+1));
    temp.push_back('.');
    temp.append(s.substr(i+1,j-i));
    temp.push_back('.');
    temp.append(s.substr(j+1,k-j));
    temp.push_back('.');
    temp.append(s.substr(k+1,n-k-1));
    res.push_back(temp);
}
    
    vector<string> restoreIpAddresses(string s) {
        int n=s.size();
        vector<string>res;
        int i,j,k;
        for(i=0;i<n-3;++i){//checking position of i,j,k in the string which can produce the required result
            for(j=i+1;j<n-2;++j){
                for(k=j+1;k<n-1;++k){
                    if(issafe(s,n,i,j,k))
                        addstring(s,n,i,j,k,res);
                }
            }
        }
          
        return res;
    }
};


