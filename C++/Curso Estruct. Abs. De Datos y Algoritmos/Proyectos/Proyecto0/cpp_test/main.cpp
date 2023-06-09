//#include "./Magick++.h"
#include <Magick++.h> 
#include <iostream>

using namespace std; 
using namespace Magick; 

int main(int argc,char **argv) 
{ 
  InitializeMagick(*argv);

  // Construct the image object. Seperating image construction from the 
  // the read operation ensures that a failure to read the image file 
  // doesn't render the image object useless. 
  Image image;
  Image imagen;
  try { 
    // Read a file into image object 
    image.read( "./prueba.gif" );
    
    // Crop the image to specified size (width, height, xOffset, yOffset)
    //image.crop( Geometry(250,250));//;, 100, 100) );

    // Write the image to a file 
    image.write( "prueba.bmp" ); 
  } 
  catch( Exception &error_ ) 
    { 
      cout << "Caught exception: " << error_.what() << endl; 
      return 1; 
    } 


  try { 
    // Read a file into image object 
    image.read( "./bordes.jpg" );
    
    // Crop the image to specified size (width, height, xOffset, yOffset)
    //image.crop( Geometry(250,250));//;, 100, 100) );

    // Write the image to a file 
    image.write( "pruebita.gif" ); 
  } 
  catch( Exception &error_ ) 
    { 
      cout << "Caught exception: " << error_.what() << endl; 
      return 1; 
    } 
  return 0; 
}
