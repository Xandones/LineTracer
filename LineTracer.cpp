void LineTracer(void) // Creates a horizontal line for maximum terminal screen size
{
	int width = 237; // The width depends of the screen resolution and also of the size of the font. In this case: Resolution 1920 X 1080; Font Size: 16  
	char c = '_'; // The underline character will be used to make the line. The minus signal can also be an option.
	
	for (int i = 0; i < width; ++i) 
	{
		cout << c;
	}
	
	cout << "\n";
}
