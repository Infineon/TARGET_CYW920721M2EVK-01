/*
 * Copyright 2016-2021, Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
 *
 * This software, including source code, documentation and related
 * materials ("Software") is owned by Cypress Semiconductor Corporation
 * or one of its affiliates ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products.  Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */

#include "wiced_bt_dev.h"
#include "wiced_bt_trace.h"
#include "wiced_platform.h"
#include "platform_led.h"
#include "wiced_hal_pwm.h"
#include "wiced_rtos.h"
#include "wiced_hal_aclk.h"

platform_led_config_t platform_led_config[PLATFORM_LED_MAX] =
{
    /* CYW920721M2EVK-01 does not support LED */
    [PLATFORM_LED_1] =
    {
        .gpio_pin = 0xffffffff,
        .channel = PWM0,
        .invert = WICED_TRUE,
    },
    [PLATFORM_LED_2] =
    {
        .gpio_pin = 0xffffffff,
        .channel = PWM1,
        .invert = WICED_TRUE,
    },
};

wiced_result_t platform_led_clk_init(void)
{
    return WICED_SUCCESS;
}

/* pwm        - platform led config (PWM config to use)
 * frequency  - frequency of PWM to be generated
 * duty_cycle - duty cycle of the PWM in % (1 to 100)
 *
 */
wiced_result_t
platform_led_init( const platform_led_config_t* pwm, uint32_t frequency, uint32_t duty_cycle )
{
    return WICED_SUCCESS;
}

wiced_result_t
platform_led_reinit( const platform_led_config_t* pwm, uint32_t frequency, uint32_t duty_cycle )
{
    return WICED_SUCCESS;
}

wiced_result_t
platform_led_start( const platform_led_config_t* pwm )
{
    return WICED_SUCCESS;
}

wiced_result_t
platform_led_stop( const platform_led_config_t* pwm )
{
    return WICED_SUCCESS;
}

wiced_result_t
platform_led_deinit( const platform_led_config_t* pwm )
{
    return WICED_SUCCESS;
}
