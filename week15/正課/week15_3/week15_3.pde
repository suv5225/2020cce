//發出聲音,有點難,要用Processing的Sound
//這裡叫 PDE: Processing Developing Environment

import processing.sound.*;
SoundFile player;
//tada.mp3  拉進來

void setup() // 設定 只做一次
{
  size(400,200);
  player = new SoundFile( this , "tada.mp3" );
}

void draw()
{
   background(#808080);
}

void mousePressed()
{
  player.play();
}
