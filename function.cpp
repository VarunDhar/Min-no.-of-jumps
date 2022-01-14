//Only function
int minJumps(int arr[], int n){
        int maxi,jump,limit;
        //maxi is maximum range we can jump
        //jump keeps count for no. of jumps
        //limit is the max index we can jump to
        if(arr[0]==0 and n!=1)
        {
            return -1;
        }
        if(n==1)
        {
            return 0;
        }
        if(arr[0]>=n-1)
        {
            return 1;
        }
        if(n==1)
        {
            return 0;
        }
        maxi=0;//maxi is the max range from that position
        limit=0;
        jump=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,arr[i]+i);
            if(i>limit)
            {
                return -1;
            }
            if(arr[i]+i>=n-1)
            {
                jump+=1;
                return jump;
            }
            
            if(i==limit)
            {
                jump++;
                limit=maxi;
            }   
        }  
    }
