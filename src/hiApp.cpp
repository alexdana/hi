#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class hiApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void hiApp::setup()
{
}

void hiApp::mouseDown( MouseEvent event )
{
}

void hiApp::update()
{
}

void hiApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 1.0, 1.0, 0 ) ); 
}

CINDER_APP_BASIC( hiApp, RendererGl  )
