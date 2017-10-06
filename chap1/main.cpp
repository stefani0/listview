#include "opencv2/highgui.hpp"

using namespace cv;

int main( int argc, char** argv ) {
Mat img = imread( argv[1], -1 );
if( img.empty() ) return -1;
namedWindow( "Example2", WINDOW_AUTOSIZE );
imshow( "Example2", img );
waitKey( 0 );
destroyWindow( "Example2" );
}
