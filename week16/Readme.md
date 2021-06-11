## W16-1 畫出圓盤

```c

void setup() // 設定,只做一次
{
  size(400,200);
}

 void draw() // 畫,每秒60次
 {
   background(128,128,128); // RGB三色
   ellipse(50,50, 80,80); //圓的位置
 }//畫圓    圓心  寬 高
 
```


## W16-2 畫出圓弧

```c

void setup() // 設定,只做一次
{
  size(400,200);
}

 void draw() // 畫,每秒60次
 {
   background(128,128,128); // RGB三色
   fill(255); //白
   ellipse(100,100, 180,180); //圓的位置 大小
//  畫圓    圓心     寬  高
   
   fill(255,0,0); //紅色
   float stop = mouseX/50.0; 
//             滑鼠座標
   text(stop, 200,100);  
   arc(100,100, 180,180,    0,      stop); //都用弧度
// 畫圓  圓心   寬   高  起始角度  結束角度 
 }
 
```

## W16-2-radians

```c
void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);
}

int degree = 0;

void draw() // 畫,每秒60次
{
  background(128,128,128); // RGB三色
  fill(255); //白
  ellipse(100,100, 180,180); //圓的位置 大小
// 畫圓    圓心     寬  高
   
  fill(255,0,0); //紅色
  float stop = radians(degree); // 弧度 徑度
  text( degree, 200, 100); // 360度,航海
  text(stop, 200,150);  
  arc(100,100, 180,180,    0,      stop); //都用弧度
//畫圓  圓心   寬  高   起始角度  結束角度 
  if(mousePressed) degree++;
}
 
```


## W16-3 使用radians()

```c
void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);
}

void draw() // 畫,每秒60次
{
  background(128,128,128); // RGB三色
  arc(100,100, 180,180, radians(90), radians(180)); //弧度
                       // 開始角度     結束角度
}
 
```


## W16-4 使用shift移動量的變數,每秒轉60度

```c
void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);  
}

float shift = 0; // global變數

void draw() // 畫,每秒60次
{
// float shift = 0; // local變數,每次都會被設定成0,扇形就不會動了
  background(128,128,128); // RGB三色
// float start = radians(90+mouseX);
// float stop = radians(180+mouseX);
  float start = radians(90+shift); 
  float stop = radians(180+shift); 
  arc(100,100, 180,180, start,stop);
  shift += 1; //每秒轉60度 //轉動速度
}
 
```


## W16-5 用v調整轉速,最後會停下來

```c

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
```


## W16-6 亂數v

```c
void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);  
}

float shift = 0;
float v = 0; //一開始速度0

void mousePressed()
{
//v = random(10);   // 0...10.0 , 10以下
  v = random(10)+5; // 5...15.0 
}            // +5 讓v介於5~15

void draw()
{
  background(128,128,128);
  float start = radians(90+shift); 
  float stop = radians(180+shift); 
  arc(100,100, 180,180, start,stop);
  if( v > 0.1 )//還有速度時,就轉動
  {
    shift += v; //轉動速度
    v = v * 0.99; //會慢慢減速
    text(shift,200,100); //印出shift
    text(v,200,150); //印出轉動速度
  }
}
```


## W16-7 轉盤分格填顏色

```c
void setup()
{
  size(400,200);
  fill(255,0,0);
  textSize(40);  
}

float shift = 0;
float v = 0; //一開始速度0

void mousePressed()
{
//v = random(10);   // 0...10.0 , 10以下
  v = random(10)+5; // 5...15.0 
}            // +5 保底有5 ㄋ讓v介於5~15 

void draw()
{
  background(128,128,128);
  for( int i = 0 ; i < 24 ; i++ )
  {
    if( i % 3 == 0 ) fill(0); //黑
    if( i % 3 == 1 ) fill(255); //白
    if( i % 3 == 2 ) fill(200,180,0); //黃綠色
    float start = radians(    0+shift+i*360/24); 
    float stop = radians(360/24+shift+i*360/24); //跟start永遠差15度(360/24)
    arc(100,100, 180,180, start,stop);
  
  }
 
  if( v > 0.1 )//還有速度時,就轉動
  {
    shift += v; //轉動速度
    v = v * 0.99; //會慢慢減速
    text(shift,200,100); //印出shift
    text(v,200,150); //印出轉動速度
  }
}
```
