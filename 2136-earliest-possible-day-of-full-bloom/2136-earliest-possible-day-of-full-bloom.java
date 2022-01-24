class Solution {
    public int earliestFullBloom(int[] plantTime, int[] growTime) {
      
        PriorityQueue<int[]>pq = new PriorityQueue<>((a,b)->a[0]-b[0]) ; 
        
        for(int i=0;i<growTime.length ; i++){
            pq.add(new int[]{growTime[i],plantTime[i]})  ; 
        }
        
        int sum = 0 ; 
        while(!pq.isEmpty()){
            int[]t = pq.poll()  ; 
            sum=Math.max(sum,t[0]) + t[1]  ; 
            
        }
        
        return sum ; 
    }
}