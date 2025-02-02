/* 
 * queues.h
 *
 * MIT License
 *
 * Copyright (c) 2020 André Mattos
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/**
 * \brief Queues definition.
 * 
 * \author Andre Mattos <andrempmattos@gmail.com>
 * 
 * \version 0.0.36
 * 
 * \date 18/05/2020
 * 
 * \defgroup queues Queues
 * \{
 */

#ifndef QUEUES_H_
#define QUEUES_H_

#include <FreeRTOS.h>
#include <queue.h>

#include "queue_packages.h"

/* Queue instances */
QueueHandle_t xQueueOBCCommand;
QueueHandle_t xQueueOBCData;
QueueHandle_t xQueueSystemState;
QueueHandle_t xQueueExperimentCommand;
QueueHandle_t xQueueExperimentState;

#define QUEUE_OBC_COMMAND_SIZE        		1
#define QUEUE_OBC_DATA_SIZE              	10
#define QUEUE_SYS_STATE_SIZE            	5
#define QUEUE_EXPERIMENT_COMMAND_SIZE       1
#define QUEUE_EXPERIMENT_STATE_SIZE	        10

/**
 * \brief Creates the system queues.
 *
 * \return None.
 */
void create_queues();

#endif /* QUEUES_H_ */

/** \} End of queues group */
