# STM32_HAL_Jpeg_ST7789
Use STM32F407 to draw some picture

In CubeMX ,choose Makefile Project

# Structure
The STM32F4 read the picture from SD card and decode with libjpeg.and then the data in the buffer will be write into ST7789(my teacher wrote the driver).Thanks to the high speed processor,you can even run vedio on it (update the SPI Speed lower than 100MHz).

# How to USE?
Edit Hardware interface to fit your project.Build and flash into your microcontroller.Save a set of pictures from a vedio(about every 0.2 second is fit) named with **%d.jpg** (1,2,3,4,,,).Then Save them all into your microSD card.You will see the video display on you screen.

# Contact me
emmm,Welcome to send email to me and i may not reply _ <

534459497@qq.com