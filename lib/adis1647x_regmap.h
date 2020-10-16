////////////////////////////////////////////////////////////////////////////////////
//  October 2020
//  Author: Juan Jose Chong <juan@highcurrent.io>
////////////////////////////////////////////////////////////////////////////////////
//  adis1647x_regmap.h
////////////////////////////////////////////////////////////////////////////////////
//
//  Permission is hereby granted, free of charge, to any person obtaining
//  a copy of this software and associated documentation files (the
//  "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish,
//  distribute, sublicense, and/or sell copies of the Software, and to
//  permit persons to whom the Software is furnished to do so, subject to
//  the following conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
//  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
//  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
////////////////////////////////////////////////////////////////////////////////////

/* #define [15:8] = page id, [7:0] = reg addr */
/* Example: REG_PAGE_ID 0x0000 -> 0x  00  00
                                      ^   ^
                                      |   |   
                                      |   This byte is the register address
                                      This byte is the page ID
*/

// User Register Memory Map from Table 6
#define FLASH_CNT   	0x0000  //Flash memory write count
#define DIAG_STAT   	0x0002  //Diagnostic and operational status
#define X_GYRO_LOW  	0x0004  //X-axis gyroscope output, lower word
#define X_GYRO_OUT  	0x0006  //X-axis gyroscope output, upper word
#define Y_GYRO_LOW  	0x0008  //Y-axis gyroscope output, lower word
#define Y_GYRO_OUT  	0x000A  //Y-axis gyroscope output, upper word
#define Z_GYRO_LOW  	0x000C  //Z-axis gyroscope output, lower word
#define Z_GYRO_OUT  	0x000E  //Z-axis gyroscope output, upper word
#define X_ACCL_LOW  	0x0010  //X-axis accelerometer output, lower word
#define X_ACCL_OUT  	0x0012  //X-axis accelerometer output, upper word
#define Y_ACCL_LOW  	0x0014  //Y-axis accelerometer output, lower word
#define Y_ACCL_OUT  	0x0016  //Y-axis accelerometer output, upper word
#define Z_ACCL_LOW  	0x0018  //Z-axis accelerometer output, lower word
#define Z_ACCL_OUT  	0x001A  //Z-axis accelerometer output, upper word
#define TEMP_OUT    	0x001C  //Temperature output (internal, not calibrated)
#define TIME_STAMP  	0x001E  //PPS mode time stamp
#define DATA_CNTR       0x0022  //New data counter
#define X_DELTANG_LOW	0x0024  //X-axis delta angle output, lower word
#define X_DELTANG_OUT	0x0026  //X-axis delta angle output, upper word
#define Y_DELTANG_LOW	0x0028  //Y-axis delta angle output, lower word
#define Y_DELTANG_OUT	0x002A  //Y-axis delta angle output, upper word
#define Z_DELTANG_LOW	0x002C  //Z-axis delta angle output, lower word
#define Z_DELTANG_OUT	0x002E  //Z-axis delta angle output, upper word
#define X_DELTVEL_LOW	0x0030  //X-axis delta velocity output, lower word
#define X_DELTVEL_OUT	0x0032  //X-axis delta velocity output, upper word
#define Y_DELTVEL_LOW	0x0034  //Y-axis delta velocity output, lower word
#define Y_DELTVEL_OUT	0x0036  //Y-axis delta velocity output, upper word
#define Z_DELTVEL_LOW	0x0038  //Z-axis delta velocity output, lower word
#define Z_DELTVEL_OUT	0x003A  //Z-axis delta velocity output, upper word
#define XG_BIAS_LOW		0x0040  //X-axis gyroscope bias offset correction, lower word
#define XG_BIAS_HIGH	0x0042  //X-axis gyroscope bias offset correction, upper word
#define YG_BIAS_LOW		0x0044  //Y-axis gyroscope bias offset correction, lower word
#define YG_BIAS_HIGH	0x0046  //Y-axis gyroscope bias offset correction, upper word
#define ZG_BIAS_LOW		0x0048  //Z-axis gyroscope bias offset correction, lower word
#define ZG_BIAS_HIGH	0x004A  //Z-axis gyroscope bias offset correction, upper word
#define XA_BIAS_LOW		0x004C  //X-axis accelerometer bias offset correction, lower word
#define XA_BIAS_HIGH	0x004E  //X-axis accelerometer bias offset correction, upper word
#define YA_BIAS_LOW		0x0050  //Y-axis accelerometer bias offset correction, lower word
#define YA_BIAS_HIGH	0x0052  //Y-axis accelerometer bias offset correction, upper word
#define ZA_BIAS_LOW		0x0054  //Z-axis accelerometer bias offset correction, lower word
#define ZA_BIAS_HIGH	0x0056  //Z-axis accelerometer bias offset correction, upper word
#define FILT_CTRL    	0x005C  //Filter control
#define MSC_CTRL    	0x0060  //Miscellaneous control
#define UP_SCALE    	0x0062  //Clock scale factor, PPS mode
#define DEC_RATE    	0x0064  //Decimation rate control (output data rate)
#define NULL_CFG    	0x0066  //Auto-null configuration control
#define GLOB_CMD    	0x0068  //Global commands
#define FIRM_REV    	0x006C  //Firmware revision
#define FIRM_DM    		0x006E  //Firmware revision date, month and day
#define FIRM_Y    		0x0070  //Firmware revision date, year
#define PROD_ID    		0x0072  //Product identification 
#define SERIAL_NUM      0x0074  //Serial number (relative to assembly lot)
#define USER_SCR1    	0x0076  //User scratch register 1 
#define USER_SCR2    	0x0078  //User scratch register 2 
#define USER_SCR3    	0x007A  //User scratch register 3 
#define FLSHCNT_LOW     0x007C  //Flash update count, lower word 
#define FLSHCNT_HIGH    0x007E  //Flash update count, upper word 