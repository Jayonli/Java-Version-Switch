#include "stdio.h"
#include "stdlib.h"

void main(int argc, char *argv[])
{
    int ver = atoi(argv[1]);
    if (argc == 2) {
        char cmd[64];
        switch(ver) {
            case 6:
            case 7:
            case 8:
            case 11:
            sprintf(cmd, "D:/Java/JavaSwitch/sw.bat %d", ver);
            system(cmd);
        default:
        	printf("[*] Only Support 6/7/8/11\n");
        return;
        }
    } else if (argc >= 2) {
        printf("[-] Too many arguments.\n[*] see: sw ?");
    } else {
        printf("[*] Please input Java_Version...\n[*] eg:sw 6/7/8/11\n");
    }
 }