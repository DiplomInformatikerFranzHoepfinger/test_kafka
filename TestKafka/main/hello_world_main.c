
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"


#include "rdkafka.h"

static void kafka_task(void *param)
{
    rd_kafka_conf_t *conf;   /* Temporary configuration object */


    /*
     * Create Kafka client configuration place-holder
     */
    conf = rd_kafka_conf_new();

}



void app_main(void)
{

    printf("Hello world!\n");

    vTaskDelay(1000 / portTICK_PERIOD_MS);

    xTaskCreate(kafka_task, "kafka_task", 4*1024, NULL, 5, NULL);

}
