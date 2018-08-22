#include <stdio.h>
#include <stdint.h>
#include "helper.h"
#include "config.h"

const char *ip2str(void *ip)
{
    const uint8_t *sip = (uint8_t *)ip;
    static char str[IP_STR_LEN];
    sprintf(str, "%d.%d.%d.%d", sip[0], sip[1], sip[2], sip[3]);
    return str;
}
void *str2ip(const char *ip)
{
    static uint8_t bin[4];
    int p[4];
    int i;
    sscanf(ip, "%d.%d.%d.%d", &p[0], &p[1], &p[2], &p[3]);
    for (i=0; i<4; i++) {
        bin[i] = p[i];
    }
    return bin;
}