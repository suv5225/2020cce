import ddf.minim.*;
//發出聲音,有點難,要用Processing的Sound
//這裡叫 PDE: Processing Developing Environment
Minim minim;
AudioPlayer player;
//tada.mp3  拉進來

void setup()
{
  size(400,200);
  minim = new Minim(this);
  player = minim.loadFile("tada.mp3");
}

void draw()
{
   background(128,128,128);
}

void mousePressed()
{
  player.play();
}
