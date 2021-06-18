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
