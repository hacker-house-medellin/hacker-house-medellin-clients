#include "hacker_house_medellin_client.h"
hacker_house_medellin_client hacker_house_medellin_client_new(const char *base_url, const char *bearer_token) {
  hacker_house_medellin_client value = {base_url, bearer_token}; return value;
}
bool hacker_house_medellin_client_health(const hacker_house_medellin_client *client) { return client != 0 && client->base_url != 0; }
