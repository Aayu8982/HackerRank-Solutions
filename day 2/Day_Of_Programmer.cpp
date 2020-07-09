string dayOfProgrammer(int year) {
    string str=to_string(year);
   if(year>=1700 && year<=1917)
   {
       if(year%4==0)
       {
           
           return "12.09."+str ;
       }
       else
       {
           return "13.09."+str;
       }
   }
   if(year>=1919 && year<=2700)
   {
       if(year%400==0 || year%4==0 && year%100!=0)
       {
           return "12.09."+str;
       }
       else
       {
           return "13.09."+str;
       }
   }
     return "26.09."+str;
}
