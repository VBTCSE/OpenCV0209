// OpenCV0210

// The purpose of this program is to capture a video stream from a camera
// and to show the motion in the field of view.  The motion video is saved to a file.


// Correct usage: OpenCV0210.exe output_video_filename



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
	// Test whether the number of arguments (argc) is not equal to 2.
	// If it is not equal to 2, output a message showing what the correct
	// usage of this program is, then pause for the user response and return -1.
	//-------------------------------------------------------------------------

	if (argc != 2)
	{
		cout << " Usage: " << argv[0] << "output_video_filename" << endl;
		system("pause");
		return -1;
	}



	//-------------------------------------------------------------------------
	// Declare char* (c-strings) to hold the output filename.
	//-------------------------------------------------------------------------

	char* filenameVideo = argv[1];		// output file name for video



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
	// 1. Create a Size object whose x value is the width of the video frame and
	//    whose y value is the height of the video frame.
	//
	// 2. Create a VideoWrite object.
	//
	// 3. Use the open method of the VideoWriter class to open the output avi file
	//    a. Use the function CV_FOURCC('M', 'J', 'P', 'G') as the second argument, get generate the 
	//       fourcc code for the motion-jpeg codec.
	//    b. The normal frame rate is 30 frames per second.
	//    c. Use the Size object created here, as the size of the video frames.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	//-------------------------------------------------------------------------
	// Declare three Mat objects to contain the image of:
	// 1. the video input stream,
	// 2. the previous frame of the input video stream,
	// 3. the difference between the above two images.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the video.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	//-------------------------------------------------------------------------
	// Use the extraction operator (>>) to input one frame from the video stream
	// (the VideoCapture object allocated above), into the image (the Mat object
	// allocated above).
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



	//-------------------------------------------------------------------------
	// Use a "forever" loop to step through each frame of the video file.
	//-------------------------------------------------------------------------

	for (;;)
	{



		//-------------------------------------------------------------------------
		// Copy the input image frame to the previous frame Mat object.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Use the extraction operator (>>) to input one frame from the video stream
		// (the VideoCapture object allocated above), into the image (the Mat object
		// allocated above).
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Subtract the previous frame from the current frame, putting the result
		// in the difference frame Mat object.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Use the imshow function to display the video image in the window created above.
		//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code



		//-------------------------------------------------------------------------
		// Insert (<<) the difference frame into the VideoWriter stream.
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