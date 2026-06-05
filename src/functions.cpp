#include "functions.h"



int winkel_berechnen(int x_pos,int y_pos)
{
  int Winkel = -1;
  int x_neu = x_pos - 519;
  int y_neu = y_pos - 506;
 
  // Deadzone (erhöht auf 50 gegen das Zittern)
  if(abs(x_neu) > 25 || abs(y_neu) > 25)
  {
      double phie = atan2(y_neu, x_neu);
      Winkel = (phie * 180) / PI;

      // Negative Werte korrigieren
      if (Winkel < 0) {
          Winkel = Winkel + 360;
      }

      // Drehrichtung spiegeln, damit Stepper dem Joystick exakt folgt
      Winkel = 360 - Winkel;
      if (Winkel == 360) {
          Winkel = 0;
      }
  }

  return Winkel;
}
