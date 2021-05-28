void setup()
{
  size(300,200);
  textSize(30);
}

int ans = 0;

void draw() // 畫圖 , 每秒60次 60fps
{ 
  background(#9f9f9f);
  //int ans = (int)random(60); 強制轉型casting
  text( ans , 30 , 30 ); //會跳太快
}

void mousePressed()
{ // mouse按下去 . 才做亂數
  ans = (int)random(60);
}
