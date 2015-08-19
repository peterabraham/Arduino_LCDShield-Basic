#include <ColorLCDShield.h>

LCDShield lcd; // Creates an LCDShield, named lcd 
 int nScr = 0; 
void setup() 
{  
  lcd.init( PHILIPS ); // Initializes lcd, using an PHILIPS driver   
  lcd.contrast( -51 ); // -51's usually a good contrast value   
  lcd.clear( WHITE ); // clear the screen      
  lcd.setCircle( 66, 66, 55, RED ); // Circle in the mid, 55 radius   
  lcd.setCircle( 66, 66, 54, RED ); // Circle in the mid, 54 radius  
  lcd.setRect( 55, 34, 77, 98, 1, BLACK );   
  lcd.setRect( 34, 55, 98, 77, 1, BLACK );   
  lcd.setLine( 27, 27, 105, 105, RED );   
  lcd.setLine( 26, 27, 104, 105, RED );   
  lcd.setLine( 28, 27, 106, 105, RED ); 
} 
void loop() 
{ 
  if( nScr == 0 )
  {
    for( int i=0; i<132; ++i )
      for( int j=0; j<132; ++j )
        lcd.setPixel( BLUE, i, j );
    nScr = 1;    
  }
  else  
  {
    for( int i=132; i > 0; --i )
      for( int j=132; j > 0; --j )
        lcd.setPixel( WHITE, i, j );      
    nScr = 0;    
  }
}

