int a , b, c, d, e, f, g;
int com1, com2, com3, com4;
int p_delay = 3.5;

void setup_pin_com(int com11, int com22, int com33, int com44)
{
  com1 = com11; com2 = com22; com3 = com33; com4 = com44;
  pinMode(com1, OUTPUT);
  pinMode(com2, OUTPUT);
  pinMode(com3, OUTPUT);
  pinMode(com4, OUTPUT);
}

void setup_pin_seg(int aa, int bb, int cc, int dd, int ee, int ff, int gg)
{
  a = aa; b = bb; c = cc ; d = dd; e = ee; f = ff; g = gg;
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

}
void seg_off()
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
}

void print_segment(int com, int data)
{
  switch (data)
  {
    case 0:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      delay(p_delay);
      seg_off();
      break;
    case 1:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(p_delay);
      seg_off();
      break;
    case 2:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(p_delay);
      seg_off();
      break;
    case 3:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(p_delay);
      seg_off();
      break;
    case 4:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(p_delay);
      seg_off();
      break;
    case 5:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(p_delay);
      seg_off();
      break;
    case 6:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(p_delay);
      seg_off();
      break;
    case 7:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(p_delay);
      seg_off();
      break;
    case 8:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(p_delay);
      seg_off();
      break;
    case 9:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(p_delay);
      seg_off();
      break;
  }
  switch (com)
  {
    case 1:
      digitalWrite(com1, LOW);
      digitalWrite(com2, HIGH);
      digitalWrite(com3, HIGH);
      digitalWrite(com4, HIGH);
      delayMicroseconds(p_delay);
      seg_off();
      break;
    case 2:
      digitalWrite(com1, HIGH);
      digitalWrite(com2, LOW);
      digitalWrite(com3, HIGH);
      digitalWrite(com4, HIGH);
      delayMicroseconds(p_delay);
      seg_off();
      break;
    case 3:
      digitalWrite(com1, HIGH);
      digitalWrite(com2, HIGH);
      digitalWrite(com3, LOW);
      digitalWrite(com4, HIGH);
      delay(p_delay);
      seg_off();
      break;
    case 4:
      digitalWrite(com1, HIGH);
      digitalWrite(com2, HIGH);
      digitalWrite(com3, HIGH);
      digitalWrite(com4, LOW);
      delayMicroseconds(p_delay);
      seg_off();
      break;
  }

}

