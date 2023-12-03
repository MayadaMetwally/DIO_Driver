# DIO Module README

This README file provides an overview and usage instructions for the DIO (Digital Input/Output) module, which includes the DIO driver and the Port driver. The DIO module allows you to control digital input and output operations on specific pins and ports of your microcontroller. It also includes example task files that demonstrate different applications using the DIO driver. Below, you will find information about the module's files, functions, and usage.

## Files Description

## Files Description

The DIO module consists of the following files:

### DIO Driver:

- `DIO.c`: This source file contains the implementation of the DIO driver's functions. It includes the logic and code required to perform various operations such as setting pin directions, setting pin values, and retrieving pin values.

- `DIO.h`: This header file contains function prototypes and definitions required for using the DIO driver. It serves as the interface for accessing the driver's functionality.

- `DIO_Config.c`: This source file contains the implementation of the DIO driver's configuration functions. It includes the code for configuring the behavior of the DIO driver based on the specified configuration method.

- `DIO_Config.h`: This header file contains the configuration parameters for the DIO driver. It allows you to define the number of ports and pins and choose the configuration method (pre-processor or post-compile).

### Port Driver:

- `PORT.c`: This source file contains the implementation of the Port driver's functions. It includes the logic and code required to configure the microcontroller's ports and pins based on the specified configuration.

- `PORT.h`: This header file contains function prototypes and definitions required for using the Port driver. It serves as the interface for accessing the driver's functionality.

- `PORT_Config.c`: This source file contains the implementation of the port configuration functions. It includes the code for configuring the microcontroller's ports and pins based on the specified configuration method.

- `PORT_Config.h`: This header file contains the configuration parameters for the Port driver. It allows you to define the number of ports and pins and choose the configuration method (pre-processor or post-compile).

### 3. App

The `App` directory contains two task files: `task1.c` and `task2.c`, which demonstrate the usage of the DIO module in different scenarios.

#### a. task1.c

The `task1.c` file demonstrates how to toggle between two LEDs using the DIO module. It utilizes the functions provided by the DIO module to control the state of the LEDs connected to specific pins. This file serves as an example usage of the DIO module for basic LED toggling.

#### b. task2.c

The `task2.c` file demonstrates how to count the number of times a switch is pressed and convert the count into a 4-bit binary representation. Each bit of the binary representation corresponds to an LED, which is controlled by the DIO module. The DIO module functions are used to set the LED states based on the binary value. This file serves as an example usage of the DIO module for more advanced applications involving switches and LEDs.

## DIO module Functions

The DIO module provides the following functions:

### 1. `u8 DIO_u8SetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8PinDirection)`

This function is used to set the direction of a specific pin on a given port. It takes three parameters:
- `Copy_u8Port`: The port number to which the pin belongs.
- `Copy_u8Pin`: The pin number whose direction will be set.
- `Copy_u8PinDirection`: The desired direction of the pin (input or output).

### 2. `u8 DIO_u8SetPortDirection(u8 Copy_u8Port, u8 Copy_u8PortDirection)`

This function is used to set the direction of an entire port. It takes two parameters:
- `Copy_u8Port`: The port number whose direction will be set.
- `Copy_u8PortDirection`: The desired direction of the port (input or output).

### 3. `u8 DIO_u8SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8PinValue)`

This function is used to set the value of a specific pin on a given port. It takes three parameters:
- `Copy_u8Port`: The port number to which the pin belongs.
- `Copy_u8Pin`: The pin number whose value will be set.
- `Copy_u8PinValue`: The desired value of the pin (high or low).

### 4. `u8 DIO_u8SetPortValue(u8 Copy_u8Port, u8 Copy_u8PortValue)`

This function is used to set the value of an entire port. It takes two parameters:
- `Copy_u8Port`: The port number whose value will be set.
- `Copy_u8PortValue`: The desired value of the port (high or low).

### 5. `u8 DIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 *Copy_pu8PinValue)`

This function is used to retrieve the value of a specific pin on a given port. It takes three parameters:
- `Copy_u8Port`: The port number to which the pin belongs.
- `Copy_u8Pin`: The pin number whose value will be retrieved.
- `Copy_pu8PinValue`: A pointer to a variable where the pin value will be stored.

### 6. `void DIO_DelayMs(uint32_t TimeMs)`

This function introduces a delay in milliseconds using the `NOP` instruction. It can be used to pause the execution of your code for a specific duration.

- `TimeMs`: The delay duration in milliseconds.

## Usage

To use the DIO module in your project, follow these steps:

1. Include the necessary header files in your source file:

   `c
   #include "DIO.h"
   #include "PORT.h"
   

2. Configure the DIO driver by modifying the `DIO_Config.h` file. Specify the number of ports and pins according to your microcontroller's specifications. Choose the configuration method (`DIO_PREPROCESSOR_CONFIG` or `DIO_POSTCOMPILE_CONFIG`) that suits your needs.

3. Implement the required initialization functions:

   - If you are using the pre-processor configuration method, implement the `DIO_InitPreProcessor()` function in `DIO_Config.c` to initialize the DIO driver.

   - If you are using the post-compile configuration method, implement the `DIO_InitPostCompiler()` function in `DIO_Config.c` to initialize the DIO driver. This function should return an `ErrorStatus` value indicating the success or failure of the initialization.

4. Implement the required initialization functions for the Port driver:

   - Implement the `PortInitPreProcessor()` function in `PORT.c` to initialize the ports and pins if you are using the pre-processor configuration method.

   - Implement the `PortInitPostCompiler()` function in `PORT.c` to initialize the ports and pins if you are using the post-compile configuration method. This function should return an `ErrorStatus` value indicating the success or failure of the initialization.

5. Build and compile your project.

6. Utilize the DIO and Port driver functions to perform digital input/output operations on the desired pins and ports. Refer to the function descriptions and examples in the respective header and source files for guidance.

7. To run the example tasks, include the appropriate task file in your project and build it. Upload the compiled code to your microcontroller and observe the behavior described in the respective task's description.

Please refer to the provided examples and modify the code according to your specific hardwareconfiguration and requirements.

Note: Make sure to configure the microcontroller's ports and pins before using the DIO module functions to ensure proper operation.

## Conclusion

The DIO module provides a convenient interface for controlling digital input/output operations on microcontroller ports and pins. By using the provided functions, you can easily set pin directions, set pin values, retrieve pin values, and control entire port directions and values. The example tasks in the `App` directory demonstrate how to use the DIO module for basic LED toggling and more advanced applications involving switches and LEDs.

We hope you find the DIO module and Port driver useful for your project. Happy coding
