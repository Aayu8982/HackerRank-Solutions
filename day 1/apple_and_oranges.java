static void countApplesAndOranges(int s, int t, int a, int b, int[] apples, int[] oranges) {
           for(int i=0;i<apples.length;i++)
           {
               apples[i]+=a;
           }
           for(int i=0;i<oranges.length;i++)
           {
               oranges[i]+=b;
           }
           int apple_count=0,orange_count=0;
           for(int i=0;i<apples.length;i++)
           {
               if(apples[i]>=s && apples[i]<=t)
                  apple_count++;
           }
           for(int i=0;i<oranges.length;i++)
           {
               if(oranges[i]>=s && oranges[i]<=t)
                 orange_count++;
           }
            System.out.println(apple_count);
           System.out.println(orange_count);
    }
