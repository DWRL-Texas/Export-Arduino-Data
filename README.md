# Export-Arduino-Data-to-Excel
Tutorial for migrating serial data from Arduino IDE to Google Sheets or Excel.  
  
Software: Locate, download and install the appropriate version of [CoolTerm](https://freeware.the-meiers.org/).

Collecting and Migrating Serial Data:  

1. In the Arduino IDE, compile and upload your code to the Arduino to begin gathering sensor data, but do not launch the Serial Monitor.  
2. Launch the CoolTerm application.  
3. Click the Options icon, and select the serial port the Arduino is using and click OK.  
4. Click the *Connect* icon; data will begin to appear.  
5. Now, to start saving the data to a file, click the Connection menu at the top of the application, click *Capture to TextFile*, and *Start*.  
6. Name the file and click *OK*. Note: at the bottom left of the CoolTerm application window it will say *Connected* with a timer, and *Capturing*. Your data is now being written to a .txt file.  
7. When you have collected the data you want, click *Disconnect* in the CoolTerm application, and, on the Connection menu, click *Capture to TextFile* again, and click *Stop*.  






