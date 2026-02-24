//
// Created by Clément Charbonnel on 21/02/2026.
//

#include "odometry.h"

#include "cmsis_os2.h"
#include "main.h"
#include "stm32f4xx_hal_gpio.h"

void odometry_task_func(void *argument) {
    int ticks = osKernelGetTickCount();

    while(1) {
        HAL_GPIO_TogglePin(ERROR_LED_GPIO_Port, ERROR_LED_Pin);
        osDelay(10);
        HAL_GPIO_TogglePin(ERROR_LED_GPIO_Port, ERROR_LED_Pin);

        ticks += 500;
        osDelayUntil(ticks);
    }
}
