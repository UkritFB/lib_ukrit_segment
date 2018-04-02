#include<ukrit_segment.h>
int data = A0;
int i = 1, x;
void setup()
{
  setup_pin_seg(2, 3, 4, 5, 6, 7, 8);
  setup_pin_com(9, 10, 11, 12);
  analogReference(INTERNAL);
  Serial.begin(9600);
  pinMode(data, INPUT);
}

void loop()
{

  int a = analogRead(data);
  int temp = a / 9.31;
  int d1 = temp / 10;
  int d2 = temp - (d1 * 10);
  if (i == 2) {
    print_segment(i, 0);
  };
  if (i == 3) {
    print_segment(i, 0);
  };
  if (i == 4) {
    print_segment(i, d1);
  };
  if (i == 1) {
    print_segment(i, d2);
  };
  if (i < 4)
  {
    i++;
  }
  else
  {
    i = 1;
  }
}
