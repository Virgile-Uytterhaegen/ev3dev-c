
/*  ev3_tacho.h was generated by yup.py (yupp) 0.7b5
    out of ev3_tacho.yu-h at 2014-09-19 15:07
 *//**
 *  \file  ev3_tacho.h (ev3_tacho.yu-h)
 *  \brief  ev3dev tacho-motors.
 *  \author  Vitaly Kravtsov (in4lio@gmail.com)
 *  \copyright  See the LICENSE file.
 */

#ifndef EV3_TACHO_H
#define EV3_TACHO_H

#ifdef  EV3_TACHO_IMPLEMENT
#define EV3_TACHO_EXT
#define EV3_TACHO_EXT_INIT( dec, init ) \
	dec = init
#else
#define EV3_TACHO_EXT extern
#define EV3_TACHO_EXT_INIT( dec, init ) \
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
	OUTPUT_A,
	OUTPUT_B,
	OUTPUT_C,
	OUTPUT_D,

	OUTPUT__COUNT_
};

typedef struct {
	bool     connected;
	uint32_t id;
	uint32_t type_id;

} EV3_TACHO_T;

EV3_TACHO_EXT EV3_TACHO_T ev3_tacho[ OUTPUT__COUNT_ ];

enum {
	TACHO = 7,
	MINITACHO = 8,

};

EV3_TACHO_EXT size_t get_tacho_duty_cycle( uint8_t id, int *buf );

EV3_TACHO_EXT size_t get_tacho_duty_cycle_sp( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_duty_cycle_sp( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_polarity_mode( uint8_t id, char *buf, size_t sz );

EV3_TACHO_EXT size_t get_tacho_port_name( uint8_t id, char *buf, size_t sz );

EV3_TACHO_EXT size_t get_tacho_position( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_position( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_position_mode( uint8_t id, char *buf, size_t sz );
EV3_TACHO_EXT size_t set_tacho_position_mode( uint8_t id, char *value );

EV3_TACHO_EXT size_t get_tacho_position_sp( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_position_sp( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_pulses_per_second( uint8_t id, int *buf );

EV3_TACHO_EXT size_t get_tacho_pulses_per_second_sp( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_pulses_per_second_sp( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_ramp_down_sp( uint8_t id, dword *buf );
EV3_TACHO_EXT size_t set_tacho_ramp_down_sp( uint8_t id, dword value );

EV3_TACHO_EXT size_t get_tacho_ramp_up_sp( uint8_t id, dword *buf );
EV3_TACHO_EXT size_t set_tacho_ramp_up_sp( uint8_t id, dword value );

EV3_TACHO_EXT size_t get_tacho_regulation_mode( uint8_t id, char *buf, size_t sz );
EV3_TACHO_EXT size_t set_tacho_regulation_mode( uint8_t id, char *value );

EV3_TACHO_EXT size_t set_tacho_reset( uint8_t id, bool value );

EV3_TACHO_EXT size_t get_tacho_run( uint8_t id, bool *buf );
EV3_TACHO_EXT size_t set_tacho_run( uint8_t id, bool value );

EV3_TACHO_EXT size_t get_tacho_run_mode( uint8_t id, char *buf, size_t sz );
EV3_TACHO_EXT size_t set_tacho_run_mode( uint8_t id, char *value );

EV3_TACHO_EXT size_t get_tacho_speed_regulation_D( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_speed_regulation_D( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_speed_regulation_I( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_speed_regulation_I( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_speed_regulation_K( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_speed_regulation_K( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_speed_regulation_P( uint8_t id, int *buf );
EV3_TACHO_EXT size_t set_tacho_speed_regulation_P( uint8_t id, int value );

EV3_TACHO_EXT size_t get_tacho_state( uint8_t id, char *buf, size_t sz );

EV3_TACHO_EXT size_t get_tacho_stop_mode( uint8_t id, char *buf, size_t sz );
EV3_TACHO_EXT size_t set_tacho_stop_mode( uint8_t id, char *value );

EV3_TACHO_EXT size_t get_tacho_stop_modes( uint8_t id, char *buf, size_t sz );

EV3_TACHO_EXT size_t get_tacho_time_sp( uint8_t id, dword *buf );
EV3_TACHO_EXT size_t set_tacho_time_sp( uint8_t id, dword value );

EV3_TACHO_EXT size_t get_tacho_type( uint8_t id, char *buf, size_t sz );

EV3_TACHO_EXT char *ev3_tacho_type( uint8_t type_id );
EV3_TACHO_EXT int ev3_tacho_port( uint8_t type_id );
EV3_TACHO_EXT EV3_TACHO_T *ev3_get_tacho( uint8_t port );

EV3_TACHO_EXT int ev3_tacho_init( void );

/** \} */

#ifdef __cplusplus
}
#endif

#endif
