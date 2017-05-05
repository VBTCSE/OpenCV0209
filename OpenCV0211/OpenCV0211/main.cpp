// OpenCV0211

// The purpose of this program is to detect motion in the field of view.
// When motion is detected, the computer outputs a beep.


// Correct usage: OpenCV0211.exe



// Refer to http://docs.opencv.org/master for relevant documentation.


#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	//-------------------------------------------------------------------------
	// Test whether the number of arguments (argc) is not equal to 1.
	// If it is not equal to 1, output a message showing what the correct
	// usage of this program is, then pause for the user response and return -1.
	//-------------------------------------------------------------------------

	if (argc != 1)
	{
		cout << " Usage: " << argv[0] << endl;
		system("pause");
		return -1;
	}



	//-------------------------------------------------------------------------
	// Declare a VideoCapture object to provide the video input stream.
	//-------------------------------------------------------------------------

	VideoCapture cap;



	//-------------------------------------------------------------------------
	// Use the open function of the VideoCapture class to open the video
	// from a camera whose index is 0
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	//-------------------------------------------------------------------------
	// Check whether the video capture device was opened.
	// Use the isOpened function of the VideoCapture class.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	//-------------------------------------------------------------------------
	// Declare five Mat objects to contain the image of:
	// 1. a frame of the video input stream,
	// 2. a monochromatic version of the color input frame
	// 3. the previous frame of the monochromatic frame,
	// 4. the difference between the above two images,
	// 5. a threshold image derived from the difference image.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function twice to create two windows for displaying 
	// the video and the motion detection image.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	//-------------------------------------------------------------------------
	// Use the extraction operator (>>) to input one frame from the video stream
	// (the VideoCapture object allocated above), into the image (the Mat object
	// allocated above).
	//
	// Convert this frame to a monochromatic image, using cvtColor.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	//-------------------------------------------------------------------------
	// Use a "forever" loop to step through each frame of the video file.
	//-------------------------------------------------------------------------

	for (;;)
	{



		//-------------------------------------------------------------------------
		// Copy the monochromatic image frame to the previous frame Mat object.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code

		//-------------------------------------------------------------------------
		// Use the extraction operator (>>) to input one frame from the video stream
		// (the VideoCapture object allocated above), into the image (the Mat object
		// allocated above).
		//
		// Convert this frame to a monochromatic image, using cvtColor.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Subtract the previous frame from the current frame, putting the result
		// in the difference frame Mat object.  Use the subtract function.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Apply the threshold function to the difference frame, putting the result
		// in the threshold image.  
		// Experiment with different threshold values.  A reasonable value is 64.
		// Select the remaining two parameters so that all pixels which are above the 
		// threshold are mapped to white.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		int num = 0;
		//-------------------------------------------------------------------------
		// Use the countNonZero function to get the number of white pixels in the 
		// threshold image.  Return its value to num.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Generate a beep whose frequency increases with the amount of motion.
		//-------------------------------------------------------------------------
		if (num > 200)
		{
			_beep(num/2, 200);
		}



		//-------------------------------------------------------------------------
		// 1. Use the imshow function to display the video image in the window created above.
		// 2. Use the imshow function to display the threshold image in the window created above.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Use the waitKey function to wait 33 milliseconds, or until the user 
		// presses a key, in the video window.  Use the return value of waitKey
		// to determine whether a key was pressed by the user.  If a key was pressed,
		// break out of the "forever" loop, ending the program.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code


	}



	//-------------------------------------------------------------------------
	// Use the release method of the VideoCapture class to release the capture object.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	return 0;
}