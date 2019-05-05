#include <Servo.h> 

Servo myservo[4][2];
int horang = 30;
int verang = 30;
int defang = 80;
int servoangle[4][2];

int da =  0,  // Left Front Pivot
    db =  0,  // Left Back Pivot
    dc =  0,  // Right Back Pivot
    dd =  0;  // Right Front Pivot

// lift servos
int dw =  -15,  // Left Front Lift
    dx =   15,  // Left Back Lift
    dy =  -15,  // Right Back Lift
    dz =   15;  // Right Front Lift
//int dw =  0,  // Left Front Lift
//    dx =  0,  // Left Back Lift
//    dy =  0,  // Right Back Lift
//    dz =  0;  // Right Front Lift

void setup() 
{
  myservo[0][0].attach(2);
  myservo[0][1].attach(3);
  myservo[1][0].attach(4);
  myservo[1][1].attach(5);
  myservo[2][0].attach(6);
  myservo[2][1].attach(7);
  myservo[3][0].attach(8);
  myservo[3][1].attach(9);

  servoangle[0][0] = defang+da;
  servoangle[0][1] = defang+dw;
  servoangle[1][0] = defang+db;
  servoangle[1][1] = defang+dx;
  servoangle[2][0] = defang+dc;
  servoangle[2][1] = defang+dy;
  servoangle[3][0] = defang+dd;
  servoangle[3][1] = defang+dz;

  myservo[0][0].write(servoangle[0][0]+da);
  myservo[0][1].write(servoangle[0][1]+dw);
  myservo[1][0].write(servoangle[1][0]+db);
  myservo[1][1].write(servoangle[1][1]+dx);
  myservo[2][0].write(servoangle[2][0]+dc);
  myservo[2][1].write(servoangle[2][1]+dy);
  myservo[3][0].write(servoangle[3][0]+dd);
  myservo[3][1].write(servoangle[3][1]+dz);
  int x = 4;
  srv(80,80,80,80,
      80,80,80,80,
      x,x,x,x);
  delay(30);
}

void loop() {
  int x=4;
  srv(80,80,80,80,
      80,80,80,80,
      x,x,x,x);
  delay(30);

///////////////////////////////////////////////////////////////////////////////////
//To change
//  
//  for(int f=0;f<5;f++)
//  {
//    forward();
//    forward();
//    forward();
//    forward();
//    forward();
//    forward();
//    forward();
//    forward();
//    turnleft();
//    turnleft();
//    turnleft();
//    turnleft();
//    turnleft();
//    backward();
//    backward();
//    backward();
//    backward();
//    backward();
//    backward();
//    backward();
//    backward();
//  }
  delay(10000);

///////////////////////////////////////////////////////////////////////////////////
  
}

void forward()
{
  int x = 4;
  dw =   15;  // Left Front Lift
  dx =  -15;  // Left Back Lift
  dy =   15;  // Right Back Lift
  dz =  -15;  // Right Front Lift

  srv(100,60,60,100,
      50,80,50,80,
      x,x,x,x);
  delay(30);
  srv(60,100,100,60,
      50,80,50,80,
      x,x,x,x);
  delay(30);
  srv(60,100,100,60,
      80,110,80,110,
      x,x,x,x);
  delay(30);
  srv(100,60,60,100,
      80,110,80,110,
      x,x,x,x);
  delay(30);
}

void backward()
{
  int x = 4;
  dw =   15;  // Left Front Lift
  dx =  -15;  // Left Back Lift
  dy =   15;  // Right Back Lift
  dz =  -15;  // Right Front Lift

  srv(60,100,100,60,
      50,80,50,80,
      x,x,x,x);
  delay(30);
  srv(100,60,60,100,
      50,80,50,80,
      x,x,x,x);
  delay(30);
  srv(100,60,60,100,
      80,110,80,110,
      x,x,x,x);
  delay(30);
  srv(60,100,100,60,
      80,110,80,110,
      x,x,x,x);
  delay(30);
  
}

void turnleft()
{
  dw =  -15;  // Left Front Lift
  dx =   15;  // Left Back Lift
  dy =  -15;  // Right Back Lift
  dz =   15;  // Right Front Lift
  int x = 4;
  
  srv(40,80,80,80,
      50,80,80,80,
      x,x,x,x);
  delay(30);
  srv(40,80,80,80,
      80,80,80,80,
      x,x,x,x);
  delay(30);

  srv(40,80,80,80,
      80,110,80,80,
      x,x,x,x);
  delay(30);
  srv(40,40,80,80,
      80,110,80,80,
      x,x,x,x);
  delay(30);
  srv(40,40,80,80,
      80,80,80,80,
      x,x,x,x);
  delay(30);

  srv(40,40,80,80,
      80,80,50,80,
      x,x,x,x);
  delay(30);
  srv(40,40,40,80,
      80,80,50,80,
      x,x,x,x);
  delay(30);
  srv(40,40,40,80,
      80,80,80,80,
      x,x,x,x);
  delay(30);

  srv(40,40,40,80,
      80,80,80,110,
      x,x,x,x);
  delay(30);
  srv(40,40,40,40,
      80,80,80,110,
      x,x,x,x);
  delay(30);
  srv(40,40,40,40,
      80,80,80,80,
      x,x,x,x);
  delay(30);

  srv(80,80,80,80,
      80,80,80,80,
      x,x,x,x);
  delay(30);

}
void srv( int  p11, int p21, int p31, int p41, int p12, int p22, int p32, int p42, int sp1, int sp2, int sp3, int sp4)
{
  while ((servoangle[0][0] != p11) || (servoangle[1][0] != p21) || (servoangle[2][0] != p31) || (servoangle[3][0] != p41) || (servoangle[0][1] != p12) || (servoangle[1][1] != p22) || (servoangle[2][1] != p32) || (servoangle[3][1] != p42)) {

    // Front Left Pivot Servo
    if (servoangle[0][0] < p11)            // if servo position is less than programmed position
    {
      if ((servoangle[0][0] + sp1) <= p11)
        servoangle[0][0] = servoangle[0][0] + sp1;      // set servo position equal to servo position plus speed constant
      else
        servoangle[0][0] = p11;
    }

    if (servoangle[0][0] > p11)            // if servo position is greater than programmed position
    {
      if ((servoangle[0][0] - sp1) >= p11)
        servoangle[0][0] = servoangle[0][0] - sp1;      // set servo position equal to servo position minus speed constant
      else
        servoangle[0][0] = p11;
    }

    // Back Left Pivot Servo
    if (servoangle[1][0] < p21)
    {
      if ((servoangle[1][0] + sp2) <= p21)
        servoangle[1][0] = servoangle[1][0] + sp2;
      else
        servoangle[1][0] = p21;
    }

    if (servoangle[1][0] > p21)
    {
      if ((servoangle[1][0] - sp2) >= p21)
        servoangle[1][0] = servoangle[1][0] - sp2;
      else
        servoangle[1][0] = p21;
    }

    // Back Right Pivot Servo
    if (servoangle[2][0] < p31)
    {
      if ((servoangle[2][0] + sp3) <= p31)
        servoangle[2][0] = servoangle[2][0] + sp3;
      else
        servoangle[2][0] = p31;
    }

    if (servoangle[2][0] > p31)
    {
      if ((servoangle[2][0] - sp3) >= p31)
        servoangle[2][0] = servoangle[2][0] - sp3;
      else
        servoangle[2][0] = p31;
    }

    // Front Right Pivot Servo
    if (servoangle[3][0] < p41)
    {
      if ((servoangle[3][0] + sp4) <= p41)
        servoangle[3][0] = servoangle[3][0] + sp4;
      else
        servoangle[3][0] = p41;
    }

    if (servoangle[3][0] > p41)
    {
      if ((servoangle[3][0] - sp4) >= p41)
        servoangle[3][0] = servoangle[3][0] - sp4;
      else
        servoangle[3][0] = p41;
    }

    // Front Left Lift Servo
    if (servoangle[0][1] < p12)
    {
      if ((servoangle[0][1] + sp1) <= p12)
        servoangle[0][1] = servoangle[0][1] + sp1;
      else
        servoangle[0][1] = p12;
    }

    if (servoangle[0][1] > p12)
    {
      if ((servoangle[0][1] - sp1) >= p12)
        servoangle[0][1] = servoangle[0][1] - sp1;
      else
        servoangle[0][1] = p12;
    }

    // Back Left Lift Servo
    if (servoangle[1][1] < p22)
    {
      if ((servoangle[1][1] + sp2) <= p22)
        servoangle[1][1] = servoangle[1][1] + sp2;
      else
        servoangle[1][1] = p22;
    }

    if (servoangle[1][1] > p22)
    {
      if ((servoangle[1][1] - sp2) >= p22)
        servoangle[1][1] = servoangle[1][1] - sp2;
      else
        servoangle[1][1] = p22;
    }

    // Back Right Lift Servo
    if (servoangle[2][1] < p32)
    {
      if ((servoangle[2][1] + sp3) <= p32)
        servoangle[2][1] = servoangle[2][1] + sp3;
      else
        servoangle[2][1] = p32;
    }

    if (servoangle[2][1] > p32)
    {
      if ((servoangle[2][1] - sp3) >= p32)
        servoangle[2][1] = servoangle[2][1] - sp3;
      else
        servoangle[2][1] = p32;
    }

    // Front Right Lift Servo
    if (servoangle[3][1] < p42)
    {
      if ((servoangle[3][1] + sp4) <= p42)
        servoangle[3][1] = servoangle[3][1] + sp4;
      else
        servoangle[3][1] = p42;
    }

    if (servoangle[3][1] > p42)
    {
      if ((servoangle[3][1] - sp4) >= p42)
        servoangle[3][1] = servoangle[3][1] - sp4;
      else
        servoangle[3][1] = p42;
    }

    // Write Pivot Servo Values
    myservo[0][0].write(servoangle[0][0] + da);
    myservo[1][0].write(servoangle[1][0] + db);
    myservo[2][0].write(servoangle[2][0] + dc);
    myservo[3][0].write(servoangle[3][0] + dd);

    // Write Lift Servos Values
    myservo[0][1].write(servoangle[0][1] + dw);
    myservo[1][1].write(servoangle[1][1] + dx);
    myservo[2][1].write(servoangle[2][1] + dy);
    myservo[3][1].write(servoangle[3][1] + dz);
    delay(50);
  }
}
