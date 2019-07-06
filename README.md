# Exporting Arduino Data

This is a tutorial for migrating serial data from Arduino IDE to Google Sheets using the CoolTerm application.  
  
## Before getting started:  
1. Locate, download and install the appropriate version of [CoolTerm](https://freeware.the-meiers.org/), an application that acts like a  "terminal" interface.  
2. Be sure your Arduino IDE code is writing data to the serial port in a format suitable for export, with each data value separated by a comma with no spaces. 


## Collecting Serial Data for Export:  

1. In the Arduino IDE, compile and upload your code to the Arduino to begin gathering sensor data, but do not launch the Serial Monitor.  
2. Launch the CoolTerm application.  
3. Click the *Options* icon, select the serial port the Arduino is using and click OK.  
4. Click the *Connect* icon; data will begin to appear in the terminal window.  
5. Now, to start saving the data to a file, click the *Connection* menu at the top of the application, click *Capture to TextFile*, and *Start*.  
6. Name the file, note its location, and click *OK*. Note: at the bottom left of the CoolTerm application window it will say *Connected* with a timer, and *Capturing*. Your data is now being written to a .txt file.  
7. When you have collected the data you want, click the *Connection* menu, click *Capture to TextFile* again, and click *Stop*.  
8. You can then elect to click *Disconnect* or keep gathering data, though that data won't be included in your capture.
  
Now, check to be sure you have a .txt file titled "CoolTerm Capture..." wherever you sent it.  
  
## Importing Data into Google Sheets:

1. File/Import  
2. In the Import pop-up window...click the Upload menu on the top right  
3. Drag or locate your .txt file, and click *Open*  
4. In the new Import pop-up window, select *Replace Spreadsheet* and  *Comma* as the Separator Type. Click *OK*  

Once the file loads, your data will populate the sheet in columns.








