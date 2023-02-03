class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows ==1 || numRows> s.size()) return s;

	    int i=1,j=0,k=0,dis=(numRows-1)*2;
	    string res="";

	     while(i<=numRows){
	     	j=i-1;
	    	if(i==numRows||i==1){
	 		while(j<s.size()){
				res += s[j];
		 		j+=dis;
			}
			i++;
		   }else{ 
			  k=(i-1)*2;
			  while(j<s.size()){
				res += s[j];
				k = dis-k;
				j += k;
			}
			i++;
		  }
	   }
	   return res;
    }
};