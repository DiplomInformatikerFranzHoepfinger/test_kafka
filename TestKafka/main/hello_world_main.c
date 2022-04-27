
#include <stdio.h>
#include "sdkconfig.h"

#include "rdkafka.h"


void app_main(void)
{

    rd_kafka_conf_t *conf;   /* Temporary configuration object */


    /*
     * Create Kafka client configuration place-holder
     */
    conf = rd_kafka_conf_new();



    printf("Hello world!\n");

}
