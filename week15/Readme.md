
## 複習倒數計時
```c
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
```

## 倒數計時
```c
//秒數s:0,1,2,3.....9
//     59,58,57.....0 (幫手)59-s
//倒數 :9,8,7,6,5,4,3,2,1,0

void setup() // 設定 只做一次
{
  size(400,200);
  textSize(40); //字型大小
}

void draw()
{
   background(#808080);
  int s = second(); //秒鐘
  //text(59-s,100,100);
  text(9-s%10,100,100);
}
// 原: 0,1,2,3,4,5,6,7,8,9
// 倒: 9,8,7,6,5,4,3,2,1,0
```

## tada
```c
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
```

## 倒數完播音樂
```c
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
```

## bell
```c
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
```

## p5 js模式
```c
function setup() {
    createCanvas(400,200);
  textSize(40);
}


function draw() {
    background(41,199,207);
  let s = second();
  text(s,100,100);
}
```
