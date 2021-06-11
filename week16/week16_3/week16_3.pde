void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);
}

void draw() // 畫,每秒60次
{
  background(128,128,128); // RGB三色
  arc(100,100, 180,180, radians(90), radians(180)); //弧度
                       // 開始角度     結束角度
}
 
