
/*  ev3_led.h was generated by yup.py (yupp) 0.7b5
    out of ev3_led.yu-h at 2014-09-19 15:07
 *//**
 *  \file  ev3_led.h (ev3_led.yu-h)
 *  \brief  ev3dev LEDs.
 *  \author  Vitaly Kravtsov (in4lio@gmail.com)
 *  \copyright  See the LICENSE file.
 */

#ifndef EV3_LED_H
#define EV3_LED_H

#ifdef  EV3_LED_IMPLEMENT
#define EV3_LED_EXT
#define EV3_LED_EXT_INIT( dec, init ) \
	dec = init
#else
#define EV3_LED_EXT extern
#define EV3_LED_EXT_INIT( dec, init ) \
	extern dec
#endif

#ifndef COMMA
#define COMMA   ,
#endif

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  \addtogroup ev3dev
 *  \{
 */

enum {
	EV3_GREEN_LEFT,
	EV3_GREEN_RIGHT,
	EV3_RED_LEFT,
	EV3_RED_RIGHT,

	LED__COUNT_
};

enum {
	TRIGGER_NONE,
	TRIGGER_MMC0,
	TRIGGER_TIMER,
	TRIGGER_HEARTBEAT,
	TRIGGER_DEFAULT_ON,
	TRIGGER_LEGOEV3_BATTERY_CHARGING_OR_FULL,
	TRIGGER_LEGOEV3_BATTERY_CHARGING,
	TRIGGER_LEGOEV3_BATTERY_FULL,
	TRIGGER_LEGOEV3_BATTERY_CHARGING_BLINK_FULL_SOLID,
	TRIGGER_PHY0RX,
	TRIGGER_PHY0TX,
	TRIGGER_PHY0ASSOC,
	TRIGGER_PHY0RADIO,
	TRIGGER_PHY0TPT,

	TRIGGER__COUNT_
};

#define LED_ATTR__COUNT_ 4

extern const char * const led_attr_brightness[];
EV3_LED_EXT size_t get_led_brightness( uint8_t id, int *buf );
EV3_LED_EXT size_t set_led_brightness( uint8_t id, int value );
extern const char * const led_attr_delay_off[];
EV3_LED_EXT size_t get_led_delay_off( uint8_t id, int *buf );
EV3_LED_EXT size_t set_led_delay_off( uint8_t id, int value );
extern const char * const led_attr_delay_on[];
EV3_LED_EXT size_t get_led_delay_on( uint8_t id, int *buf );
EV3_LED_EXT size_t set_led_delay_on( uint8_t id, int value );
extern const char * const led_attr_trigger[];
EV3_LED_EXT size_t get_led_trigger( uint8_t id, char *buf, size_t sz );
EV3_LED_EXT size_t set_led_trigger( uint8_t id, char *value );

extern const char * const led_trigger[];
EV3_LED_EXT uint8_t get_led_trigger_inx( uint8_t id );
EV3_LED_EXT size_t set_led_trigger_inx( uint8_t id, uint8_t inx );

/** \} */

#ifdef __cplusplus
}
#endif

#endif
