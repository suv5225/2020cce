## 倒數計時器

```c
void setup()
{
  size( 1024 , 400 );
  textFont( createFont( "標楷體" , 50 )  ) ;
}

void draw()
{
  background( 112 , 146 , 190 );
  textSize(50);
  int h = hour(); //小時
  int m = minute(); //分鐘
  int s = second(); //秒
  fill( 255 , 255 , 255 ); //填充墨水顏色,文字顯示的顏色
  text( "Now:" + nf( h , 2 ) + ":" +nf( m , 2 )+ ":" + nf( s , 2 ) , 100 , 100 ); ///現在的時間,後面數字是座標,在(100,100)的地方畫出來
      //字串     數  字串  數  字串  數  
  int total = h * 60 * 60 + m * 60 + s; // 現在時間總秒數
  int total2 = 12 * 60 * 60 + 0 * 60 + 0; // 目標時間( 12:00:00)總秒數
  text( "總秒數:" + total , 100 , 200 );
  int ans = total2 - total;
  int hh = ans / 60 / 60; ///換算小時
  int mm = ans / 60 % 60; /// 換算分鐘
  int ss = ans % 60; ///換算秒數
  text( "還剩下:" + nf( hh , 2)  + ":" + nf( mm , 2 ) + ":" + nf( ss , 2 ) , 100 , 300 );
}
```

nf( hh , 2 ) 是指要空2格給hh  

   全部換成總秒數  
   目標時間 12:00:00 => 總秒數  
 -現在時間 11:15:15 => 總秒數  
- - - - - - - - - - - - - - -
 剩多少時間(借位,不會寫)
