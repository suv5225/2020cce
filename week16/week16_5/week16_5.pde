void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);  
}

float shift = 0;
float v = 10; //一開始速度10

void draw() // 畫,每秒60次
{
  background(128,128,128); // RGB三色
  float start = radians(90+shift); 
  float stop = radians(180+shift); 
  arc(100,100, 180,180, start,stop);
  if( v > 0.0001 )
  {
    shift += v; //轉動速度
    v = v * 0.99; //會慢慢減速
    text(shift,200,100); //印出shift
    text(v,200,150); //印出轉動速度
  }
}
 
