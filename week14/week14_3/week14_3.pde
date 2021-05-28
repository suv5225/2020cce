int []a = {1,2,3,4,5,6,7,8,9,10}; //Java

void setup()
{
  size(400,200);
  textSize(30);
}

void draw()
{ 
  background(#9f9f9f);
  
  for( int i = 0 ; i < 10 ; i++ )
  {
    text( a[i] , i * 40 , 100 );  
  }
}

void mousePressed ()
{ 
  int i1 = (int) random(10);
  int i2 = (int) random(10);
  ///交換
  int temp = a[i1];
  a[i1] = a[i2];
  a[i2] = temp;
}
