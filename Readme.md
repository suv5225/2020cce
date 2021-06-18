## W17-1

```c
void setup()
{
  size(400,200);
  textSize(40);
}

String line = "world";

void draw() //每秒60次
{
  background(0);
  text( "hello", 100,100);
  text(   line,  100,150);
}
```

## W17-2

```c
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
  text( "Q:  "+Q,     100,100);
  text( "You:"+line,  100,150);
}

void mousePressed()
{
  line = line + "a";
}
```

## W17-3

```c
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
  text( "Q:  "+Q,     100,100);
  text( "A:  "+line,  100,150);
}

void keyPressed()
{
  line = line + key;  // key:有意義的按鍵
}
```

## W17-4 可以刪字

```c
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
  text( "Q:  "+Q,     100,100);
  text( "A:  "+line,  100,150);
}

void keyPressed()
{
  int len = line.length();
  if( key >= 'a' && key <= 'z' ) line = line + key; // 小寫
  if( key >= 'A' && key <= 'Z' ) line = line + key; // 大寫
  if( key == BACKSPACE) line = line.substring(0,len-1);
}
```

## W17-5

```c
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
  int len = line.length();
  text(len,100,50);
  text( "Q:  "+Q,     100,100);
  text( "A:  "+line,  100,150);
}

void keyPressed()
{
  int len = line.length();
  if( key >= 'a' && key <= 'z' ) line = line + key; // 小寫
  if( key >= 'A' && key <= 'Z' ) line = line + key; // 大寫
  if( key == BACKSPACE && len > 0 ) line = line.substring(0,len-1); 
}
```

## W17-6

```c
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
  if( key == ENTER )
  {
    if( line.equals(Q) == true )
    {
      score++;
    }
    
    else  score--;
  }
}
```

## W17-7

```c

```


