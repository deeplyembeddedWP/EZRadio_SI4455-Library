# EZRadio_SI4455-Library
This is an Arduino Library for using the EZRadio SI4455 Wireless Tranciever Chip with the
NodeMCU/ESP8266. The library enables users to initialize and configure the Radio Chip to
either transmit or recieve data. For more details, please do refer the EZRadio 
SI4455 Application Guide by Silicon Labs. The following library was ported from the
example projects generated by WDS.

The radio configuration file was generated using WDS 3.2.11.0. The below is the
main configuration parameters that is supported by the configuration file -->
  1. Base Frequency	:	433 MHz
  2. GPIO 0		:	INPUT - Pull Up Disabled
  3. GPIO 1		:	RX_DATA

Below is connections between the NodeMCU and EZRadio SI4455
  		
		NodeMCU			EZRadio SI4455
		-------			--------------
		HSCLK			     SCLK
		HMISO			     SDO
		HMOSI			     SDI
		HCS			     NSEL
		GPIO4			     SDN
		GND			     GND			    
