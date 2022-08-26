class Solution {
public:
    bool reorderedPowerOf2(int n) {
       
        vector<int>freq1(31,0) ; 
        
        while(n>0){
          //  if(n%10!=0){
                int m = n % 10 ; 
                freq1[m]++ ; 
           // }
            n=n/10 ; 
        }
  
       
        for(int bit = 0 ; bit < 31 ; bit++){
            
            int expectedNum = (1<<bit)  ; 
            cout << expectedNum <<"\n" ; 
            vector<int>freq2(31,0) ;  
            //freq2.clear()  ; 
            while(expectedNum > 0){
                
                //if(expectedNum % 10 !=0){
                   int m = expectedNum % 10 ; 
                   freq2[m]++ ;  
               // }
                expectedNum /= 10 ;
            }

            if(freq1==freq2) return 1;  
        }
        return 0 ; 
    }
};