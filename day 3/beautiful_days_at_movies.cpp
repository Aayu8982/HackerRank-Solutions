int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int beautifulDays(int i, int j, int k) {
    int count=0;
  for(int x=i;x<=j;x++)
  {
      if(abs((x-reverse(x))%k==0))
        count++;
  }
  return count;
}
