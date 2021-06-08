//Step03的程式出發,做Step05
import processing.sound.*; 
SoundFile player;

void setup()
{
  size(400,200);
  player = new SoundFile( this , "bell.mp3" );
}//bell.mp3  拉進來

void draw()
{
   background(#808080);
}

void mousePressed() //2種:play(),stop()
{
  if( player.isPlaying() )
  {
    player.stop();
  }
  else
  {
    player.play();
  }
}
