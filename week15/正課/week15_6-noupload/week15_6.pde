import processing.sound.*; 
SoundFile player;
//tada.mp3  拉進來

void setup()
{
  size(400,200);
  textSize(40);
  player = new SoundFile( this , "tada.mp3" );
}

void draw()
{
  background(#808080);
  int s = second();
  text(9-s%10,100,100);
  if( 9-s%10 == 0 && !player.isPlaying() )
  {
    player.play();
  }
}
