static int divisibleSumPairs(int n, int k, int[] ar) {
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if((ar[i]+ar[j])%k==0 && i<j)
                 count++;
            }
        }
    
      return count;
    }