Example of using Platform.IO, and the STM32Duino stack with the BTT Octopus mainboard.  

This includes the custom variant definition for the CPU and a board definition needed for Platform.io 

Note: 
- This will build firmware that is offset to match the stock BTT bootloader. 
- The CPU is clocked at 168mhz, as it was the easiest way to get all of the peripheral devices working correctly.  I wasn't able to get 180mhz to work, while keeping USB at 48mhz using the internal osc.
-  Using an STLink is the easiest way to flash firmware/debug.  The setup in the project will allow this, while retaining the stock bootloader.
