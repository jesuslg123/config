/*
* This file is part of Betaflight.
*
* Betaflight is free software. You can redistribute this software
* and/or modify this software under the terms of the GNU General
* Public License as published by the Free Software Foundation,
* either version 3 of the License, or (at your option) any later
* version.
*
* Betaflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this software.
*
* If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#define FC_TARGET_MCU     STM32F7X2

#define BOARD_NAME        HUMMINGBIRD_FC305
#define MANUFACTURER_ID   HBRD 

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P

#define USE_BARO
#define USE_BARO_DPS310
#define USE_SDCARD
#define USE_SDCARD_SPI
#define USE_MAX7456
#define USE_GYRO_CLKIN

#define BEEPER_PIN           PC15
#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB5
#define MOTOR3_PIN           PB4
#define MOTOR4_PIN           PB1
#define LED0_PIN             PA15
#define LED_STRIP_PIN        PA8
#define UART1_RX_PIN         PB7
#define UART2_RX_PIN         PA3
#define UART2_TX_PIN         PA2
#define UART3_RX_PIN         PB11
#define UART3_TX_PIN         PB10
#define UART4_RX_PIN         PA1
#define UART4_TX_PIN         PA0
#define UART5_TX_PIN         PC12
#define UART5_RX_PIN         PD2
#define UART6_RX_PIN         PC7
#define UART6_TX_PIN         PC6
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
#define SPI1_NSS_PIN         PA4
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15
#define SPI2_NSS_PIN         PB12 
#define SPI3_SCK_PIN         PC10
#define SPI3_SDI_PIN         PC11
#define SPI3_SDO_PIN         PB2
#define SPI3_NSS_PIN         PC13

#define GYRO_1_CLKIN_PIN     PB3
#define ADC_VBAT_PIN         PC0
#define ADC_CURR_PIN         PC1
#define PINIO1_PIN           PC14  //VTX 9V
#define SDCARD_SPI_CS_PIN    SPI1_NSS_PIN
#define GYRO_1_CS_PIN        SPI2_NSS_PIN
#define GYRO_1_EXTI_PIN      PB6
#define MAX7456_SPI_CS_PIN   SPI3_NSS_PIN

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, LED_STRIP_PIN, 1, 0) \
    TIMER_PIN_MAP( 1, MOTOR1_PIN   , 2, 0 ) \
    TIMER_PIN_MAP( 2, MOTOR2_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 3, MOTOR3_PIN   , 1, 0 ) \
    TIMER_PIN_MAP( 4, MOTOR4_PIN   , 2, 0 ) \
    TIMER_PIN_MAP( 5, GYRO_1_CLKIN_PIN , 1,  -1) 

#define ADC_INSTANCE        ADC1    
#define ADC1_DMA_OPT        1

#define BARO_I2C_INSTANCE            I2CDEV_1
#define SDCARD_SPI_INSTANCE          SPI1
#define GYRO_1_SPI_INSTANCE          SPI2
#define MAX7456_SPI_INSTANCE         SPI3
#define ESC_SENSOR_UART              SERIAL_PORT_USART3
#define SERIALRX_UART                SERIAL_PORT_USART6
#define DEFAULT_BLACKBOX_DEVICE      BLACKBOX_DEVICE_SDCARD
#define DEFAULT_RX_FEATURE           FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER            SERIALRX_CRSF
#define DEFAULT_DSHOT_BITBANG        DSHOT_BITBANG_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE  110
#define DEFAULT_CURRENT_METER_SCALE  800
#define BEEPER_INVERTED
#define SYSTEM_HSE_MHZ 8

#define PINIO1_CONFIG 129
#define PINIO1_BOX 40
