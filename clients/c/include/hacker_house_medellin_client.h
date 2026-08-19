#ifndef HACKER_HOUSE_MEDELLIN_CLIENT_H
#define HACKER_HOUSE_MEDELLIN_CLIENT_H
#include <stdbool.h>
typedef struct { const char *base_url; const char *bearer_token; } hacker_house_medellin_client;
hacker_house_medellin_client hacker_house_medellin_client_new(const char *base_url, const char *bearer_token);
bool hacker_house_medellin_client_health(const hacker_house_medellin_client *client);
#endif
