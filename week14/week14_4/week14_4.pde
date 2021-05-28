//int []a = {1,2,3,4,5,...寫49很累}

int []a = new int[49]; //Jave的陣列宣告

void setup()
{
  size(400,200);
  textSize(30);
    for( int i = 0 ; i < 49 ; i++ )  a[i] = i + 1; //人類:1
}                               //電腦:0

void draw()
{ 
  background(#9f9f9f);
  
  for( int i = 0 ; i < 6 ; i++ ) //49顆只抽6顆
  {
    text( a[i] , i * 50 , 100 );  
  }//大樂透 抽獎時 , 會掉下球 , 49球挑6球

}

void mousePressed ()
{ 
  for( int i = 0 ; i < 10000 ; i++ )
  {
  int i1 = (int) random(49);
  int i2 = (int) random(49);
  
  ///交換
  int temp = a[i1];
  a[i1] = a[i2];
  a[i2] = temp;
  }
}
