void setup()
{
  size(400,200);
  textSize(40);
}

String line = "";
String Q = "hello";

void draw()
{//每秒60次
  background(0);
  text("Score: " + score,100,50); //畫出score
  text( "Q:  "+Q,     100,100);
  text( "A:  "+line,  100,150);
}  

int score = 0; // 分數

void keyPressed()
{
  int len = line.length();
  if( key >= 'a' && key <= 'z' ) line = line + key; // 小寫
  if( key >= 'A' && key <= 'Z' ) line = line + key; // 大寫
  if( key == BACKSPACE && len > 0 ) line = line.substring(0,len-1); 
             //退一格
  if( key == ENTER )
  {
    if( line.equals(Q) == true )
    {
      score++;
    }
    
    else  score--;
  }
}
