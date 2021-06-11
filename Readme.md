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


## W16-3 

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


## W16-4

```c

```


## W16-5

```c

```


## W16-6

```c

```




