# Enabling Semihosting Printf() debugging in Vscode + PlatformIO for ARM CORTEX STM32 BLUEPILL board

ARM Cortex M3 STM32 Bluepill Semihosting-Enabled PlatformIO Project by Mohammed Alsada
Please first read all instructions, then follow them carefully!

**Connection:**

![bluepill_connections_stlink](https://user-images.githubusercontent.com/83306663/117422706-95b2ae80-af28-11eb-863c-024f09d68188.png)
credits:https://www.onetransistor.eu/2020/01/stm32-bluepill-arduino-support.html


**Ignore the optional "Enable Hardware rest mode" Line and don't connect it, and connect the rest of the wires as shown in the image.**

0- Connect Your STlink debugger to USB and to the bluepill board (Drivers must be installed before, if needed.).

1- Click on the "Run and Debug" Icon (Left Side) or SHIFT+CMD+D (Mac OS) or SHIFT+CTRL+D (Windows OS)

2- Debugging session will start and will halt on the reset handler file, click on "continue" or press "F5" to move to the breakpoint in the main.c file 

Enjoy a Painless debugging session ;)

Please let me know if there are any issues. Thank you!
