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
 
