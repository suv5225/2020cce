void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);  
}

float shift = 0;

void draw() // 畫,每秒60次
{
  background(128,128,128); // RGB三色
// float start = radians(90+mouseX);
// float stop = radians(180+mouseX);
  float start = radians(90+shift); 
  float stop = radians(180+shift); 
  arc(100,100, 180,180, start,stop);
  shift += 1; //每秒轉60度
}
 
