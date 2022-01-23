// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String s = sc.next();
                    Solution obj = new Solution();
                    System.out.println(obj.arrangeString(s));
                }
                
        }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    public String arrangeString(String s)
        {
            //code here.
            int sum = 0  ; 
            for(int i=0;i<s.length();i++){
                
                if(s.charAt(i)>='0' && s.charAt(i)<='9'){
                    sum+=s.charAt(i)-'0'  ; 
                }
            }
            
            char ch[] = s.toCharArray()  ;  
            Arrays.sort(ch)  ; 
            String res=""  ; 
            for(int i=0;i<ch.length;i++){
                if(ch[i]>='A' && ch[i]<='Z'){
                    res+=ch[i]  ; 
                }
            }
            
            String j = sum + "" ;  
            return (res+j) ; 
        }
}
