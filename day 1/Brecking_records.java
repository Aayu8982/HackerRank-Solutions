static int[] breakingRecords(int[] scores) {
        int minimum=scores[0],maximum=scores[0];
           int min=0,max=0;
           for(int i=0;i<scores.length;i++)
           {
               if(scores[i]<minimum)
               {
                   minimum=scores[i];
                   min++;
               }
               if(scores[i]>maximum)
               {
                   maximum=scores[i];
                   max++;
               }
           }
       int[] arr={max,min};
       return arr;
}