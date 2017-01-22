/*! @file radio_config.h
 * @brief This file contains the automatically generated
 * configurations.
 *
 * @n WDS GUI Version: 3.2.9.0
 * @n Device: Si4455 Rev.: C2
 *
 * @b COPYRIGHT
 * @n Silicon Laboratories Confidential
 * @n Copyright 2015 Silicon Laboratories, Inc.
 * @n http://www.silabs.com
 */

#ifndef SI4455_RADIO_CONFIG_H_
#define SI4455_RADIO_CONFIG_H_

// USER DEFINED PARAMETERS
// Define your own parameters here

// INPUT DATA
/*
// Crys_freq(Hz): 30000000    Crys_tol(ppm): 30    IF_mode: 2    High_perf_Ch_Fil: 1    OSRtune: 0    Ch_Fil_Bw_AFC: 0    ANT_DIV: 0    PM_pattern: 17
// MOD_type: 1    Rsymb(sps): 500    Fdev(Hz): 5000    RXBW(Hz): 185000    Manchester: 0    AFC_en: 0    Rsymb_error: 0.0    Chip-Version: 2
// RF Freq.(MHz): 433.92    API_TC: 28    fhst: 250000    inputBW: 0    BERT: 0    RAW_dout: 0    D_source: 1    Hi_pfm_div: 0
// API_ARR_Det_en: 0    Fdev_error: 0    API_ETSI: 0
//
// # WB filter 3 (BW = 185.22 kHz);  NB-filter 3 (BW = 185.22 kHz)

//
// Modulation index: 20
*/


// CONFIGURATION PARAMETERS
#define RADIO_CONFIGURATION_DATA_RADIO_XO_FREQ                     30000000L
#define RADIO_CONFIGURATION_DATA_CHANNEL_NUMBER                    0x00
#define RADIO_CONFIGURATION_DATA_RADIO_PACKET_LENGTH               0x00
#define RADIO_CONFIGURATION_DATA_RADIO_STATE_AFTER_POWER_UP        0x03
#define RADIO_CONFIGURATION_DATA_RADIO_DELAY_CNT_AFTER_RESET       0xF000

#include "si4455_patch.h"
#include "si4455_defs.h"


// CONFIGURATION COMMANDS

/*
// Command:                  RF_POWER_UP
// Description:              Command to power-up the device and select the operational mode and functionality.
*/
#define RF_POWER_UP 0x02, 0x81, 0x00, 0x01, 0xC9, 0xC3, 0x80

/*
// Set properties:           RF_INT_CTL_ENABLE_1
// Number of properties:     1
// Group ID:                 0x01
// Start ID:                 0x00
// Default values:           0x04,
// Descriptions:
//   INT_CTL_ENABLE - This property provides for global enabling of the three interrupt groups (Chip, Modem and Packet Handler) in order to generate HW interrupts at the NIRQ pin.
*/
#define RF_INT_CTL_ENABLE_1 0x11, 0x01, 0x01, 0x00, 0x00

/*
// Set properties:           RF_FRR_CTL_A_MODE_4
// Number of properties:     4
// Group ID:                 0x02
// Start ID:                 0x00
// Default values:           0x01, 0x02, 0x09, 0x00,
// Descriptions:
//   FRR_CTL_A_MODE - Fast Response Register A Configuration.
//   FRR_CTL_B_MODE - Fast Response Register B Configuration.
//   FRR_CTL_C_MODE - Fast Response Register C Configuration.
//   FRR_CTL_D_MODE - Fast Response Register D Configuration.
*/
#define RF_FRR_CTL_A_MODE_4 0x11, 0x02, 0x04, 0x00, 0x08, 0x06, 0x04, 0x0A

/*
// Set properties:           RF_EZCONFIG_XO_TUNE_1
// Number of properties:     1
// Group ID:                 0x24
// Start ID:                 0x03
// Default values:           0x40,
// Descriptions:
//   EZCONFIG_XO_TUNE - Configure the internal capacitor frequency tuning bank for the crystal oscillator.
*/
#define RF_EZCONFIG_XO_TUNE_1 0x11, 0x24, 0x01, 0x03, 0x47

/*
// Command:                  RF_WRITE_TX_FIFO
// Description:              Writes data byte(s) to the TX FIFO.
*/
#define RF_WRITE_TX_FIFO 0x66, 0x96, 0x70, 0xAC, 0x57, 0x9F, 0x9C, 0x05, 0x36, 0x57, 0x4D, 0x73, 0x0F, 0x27, 0x3E, 0x51, 0x2C, 0x07, 0xC3, 0xB0, \
0x8B, 0xE9, 0x2F, 0x43, 0x04, 0x5F, 0x5B, 0x3A, 0xEA, 0x1B, 0x22, 0xB2, 0x4F, 0xF1, 0x89, 0xC8, 0x26, 0x06, 0xE8, 0x0E, \
0xDC, 0x67, 0x3B, 0xE8, 0xAA, 0xE2, 0xC5, 0x31, 0x97, 0xC6, 0xE4, 0x33, 0x33, 0x80, 0xE0, 0x0D, 0xC5, 0x8B, 0xB7, 0xA6, \
0xA1, 0xEF, 0xD5, 0xA5, 0xE1, 0x61, 0xDC, 0xEB, 0xEE, 0x40, 0xE7, 0xD4, 0x06, 0x6A, 0x65, 0x48, 0x03, 0xB1, 0xDC, 0x48, \
0x25, 0x6C, 0xB4, 0xF6, 0x2B, 0x49, 0x0A, 0x33, 0x38, 0xB6, 0x08, 0x63, 0x8E, 0x07, 0x52, 0x54, 0xAC, 0x92, 0xA5, 0xEA, \
0xB7, 0x57, 0x4E, 0x14, 0x1B, 0xF0, 0x9F, 0x3B, 0x73, 0x8D, 0xA1, 0x57, 0xF2, 0xAD

/*
// Command:                  RF_NOP
// Description:              No Operation command.
*/
#define RF_NOP 0x00

/*
// Command:                  RF_WRITE_TX_FIFO_1
// Description:              Writes data byte(s) to the TX FIFO.
*/
#define RF_WRITE_TX_FIFO_1 0x66, 0xD2, 0x53, 0x89, 0x58, 0x5B, 0x46, 0xE1, 0x4A, 0x9A, 0xE1, 0x5D, 0x0E, 0xEA, 0x7B, 0xB9, 0x41, 0x4A, 0x9B, 0xA1, \
0x61, 0x64, 0x34, 0xAF, 0x82, 0xDA, 0x9A, 0x01, 0x87, 0x02, 0x24, 0x4D, 0x2B, 0x1A, 0x9C, 0x5E, 0x4A, 0xBF, 0x1A, 0x70, \
0x7B, 0xFB, 0x20, 0x32, 0x91, 0x41, 0xC4, 0xB7, 0xED, 0xEB, 0x99, 0x2A, 0x5B, 0x24, 0x2F, 0x90, 0x76, 0x56, 0xED, 0x36, \
0x27, 0x61, 0xBF, 0x67, 0x2B, 0xA6, 0x00, 0x71, 0xD2, 0xCE, 0x60, 0x48, 0x07, 0xA9, 0xCA, 0xE5, 0x1A, 0x03, 0x78, 0xBF, \
0x6A, 0xF3, 0x7B, 0x9C, 0xAF, 0xAD, 0x27, 0x99, 0x7A, 0x42, 0xBD, 0xB6, 0xE0, 0xAC, 0x43, 0xC9, 0xA7, 0x60, 0xFF, 0xE4, \
0xA4, 0x8C, 0x28, 0x6C, 0x67, 0x3B, 0xE0, 0x38, 0x26, 0xC2, 0x1F, 0x6A

/*
// Command:                  RF_EZCONFIG_CHECK
// Description:              Validates the EZConfig array was written correctly.
*/
#define RF_EZCONFIG_CHECK 0x19, 0xCB, 0x60

/*
// Command:                  RF_GPIO_PIN_CFG
// Description:              Configures the GPIO pins.
*/
#define RF_GPIO_PIN_CFG 0x13, 0x11, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00


// AUTOMATICALLY GENERATED CODE!
// DO NOT EDIT/MODIFY BELOW THIS LINE!
// --------------------------------------------

#ifndef FIRMWARE_LOAD_COMPILE
#define RADIO_CONFIGURATION_DATA_ARRAY { \
        SI446X_PATCH_CMDS, \
        0x07, RF_POWER_UP, \
        0x05, RF_INT_CTL_ENABLE_1, \
        0x08, RF_FRR_CTL_A_MODE_4, \
        0x05, RF_EZCONFIG_XO_TUNE_1, \
        0x72, RF_WRITE_TX_FIFO, \
        0x01, RF_NOP, \
        0x70, RF_WRITE_TX_FIFO_1, \
        0x03, RF_EZCONFIG_CHECK, \
        0x08, RF_GPIO_PIN_CFG, \
        0x00 \
 }
#else
#define RADIO_CONFIGURATION_DATA_ARRAY { 0 }
#endif

// DEFAULT VALUES FOR CONFIGURATION PARAMETERS
#define RADIO_CONFIGURATION_DATA_RADIO_XO_FREQ_DEFAULT                     30000000L
#define RADIO_CONFIGURATION_DATA_CHANNEL_NUMBER_DEFAULT                    0x00
#define RADIO_CONFIGURATION_DATA_RADIO_PACKET_LENGTH_DEFAULT               0x10
#define RADIO_CONFIGURATION_DATA_RADIO_STATE_AFTER_POWER_UP_DEFAULT        0x01
#define RADIO_CONFIGURATION_DATA_RADIO_DELAY_CNT_AFTER_RESET_DEFAULT       0x1000

#define RADIO_CONFIGURATION_DATA_RADIO_PATCH_INCLUDED                      0x00
#define RADIO_CONFIGURATION_DATA_RADIO_PATCH_SIZE                          0x00
#define RADIO_CONFIGURATION_DATA_RADIO_PATCH                               {  }

#ifndef RADIO_CONFIGURATION_DATA_ARRAY
#error "This property must be defined!"
#endif

#ifndef RADIO_CONFIGURATION_DATA_RADIO_XO_FREQ
#define RADIO_CONFIGURATION_DATA_RADIO_XO_FREQ          RADIO_CONFIGURATION_DATA_RADIO_XO_FREQ_DEFAULT
#endif

#ifndef RADIO_CONFIGURATION_DATA_CHANNEL_NUMBER
#define RADIO_CONFIGURATION_DATA_CHANNEL_NUMBER         RADIO_CONFIGURATION_DATA_CHANNEL_NUMBER_DEFAULT
#endif

#ifndef RADIO_CONFIGURATION_DATA_RADIO_PACKET_LENGTH
#define RADIO_CONFIGURATION_DATA_RADIO_PACKET_LENGTH    RADIO_CONFIGURATION_DATA_RADIO_PACKET_LENGTH_DEFAULT
#endif

#ifndef RADIO_CONFIGURATION_DATA_RADIO_STATE_AFTER_POWER_UP
#define RADIO_CONFIGURATION_DATA_RADIO_STATE_AFTER_POWER_UP   RADIO_CONFIGURATION_DATA_RADIO_STATE_AFTER_POWER_UP_DEFAULT
#endif

#ifndef RADIO_CONFIGURATION_DATA_RADIO_DELAY_CNT_AFTER_RESET
#define RADIO_CONFIGURATION_DATA_RADIO_DELAY_CNT_AFTER_RESET  RADIO_CONFIGURATION_DATA_RADIO_DELAY_CNT_AFTER_RESET_DEFAULT
#endif

#define RADIO_CONFIGURATION_DATA { \
                            Radio_Configuration_Data_Array,                            \
                            RADIO_CONFIGURATION_DATA_CHANNEL_NUMBER,                   \
                            RADIO_CONFIGURATION_DATA_RADIO_PACKET_LENGTH,              \
                            RADIO_CONFIGURATION_DATA_RADIO_STATE_AFTER_POWER_UP,       \
                            RADIO_CONFIGURATION_DATA_RADIO_DELAY_CNT_AFTER_RESET       \
                            }

#endif /* SI4455_RADIO_CONFIG_H_ */
