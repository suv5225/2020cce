//從第二步的程式開始增加
import processing.sound.*; //Step03的程式
SoundFile player;//Step03的程式

void setup()
{
  size(400,200);
  textSize(40);
  player = new SoundFile( this , "tada.mp3" );
  //Step03的程式 記得把tada.mp3拉進來
}

void draw() // 每秒60次
{
   background(#808080); //背景顏色隨便
   int s = second(); //秒鐘
   //text( 59-s , 100 ,100 );
   text( 9-s%10 , 100 , 100 );
   if( 9-s%10 == 0 ) player.play(); //Step03的程式
} //0秒的時候,if()會進去60次,吵死了
