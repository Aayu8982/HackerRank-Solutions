string kangaroo(int x1, int v1, int x2, int v2) {

  while(x1!=x2)
  {
      x1=x1+v1;
      x2=x2+v2;
      if(x2<x1)
      {
          return "NO";
      }
  }
 return "YES";
}
