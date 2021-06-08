void setup()
{
  size(400,200);
  textSize(40); //字型大小
}

void draw()
{
  background(#808080);
  int s = second(); //秒鐘
  text(s,100,100);
}
