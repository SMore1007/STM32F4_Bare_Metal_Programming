/*
 * adc.h
 *
 *  Created on: Jan 13, 2025
 *      Author: sagar
 */

#ifndef ADC_H_
#define ADC_H_

#include <stdint.h>

void pa1_adc_init(void);
uint32_t adc_read(void);
void start_converstion(void);


#endif /* ADC_H_ */
