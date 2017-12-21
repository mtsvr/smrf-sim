#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_

#include "net/ipv6/multicast/uip-mcast6-engines.h"


#define UIP_MCAST6_CONF_ENGINE UIP_MCAST6_ENGINE_SMRF
// Avaliable engines are UIP_MCAST6_ENGINE_ESMRF and UIP_MCAST6_ENGINE_SMRF

#define ROLL_TM_CONF_IMIN_1         64
#undef UIP_CONF_IPV6_RPL
#undef UIP_CONF_ND6_SEND_RA
#undef UIP_CONF_ROUTER
#define UIP_CONF_ND6_SEND_RA         0
#define UIP_CONF_ROUTER              1
#define UIP_MCAST6_ROUTE_CONF_ROUTES 1

#undef UIP_CONF_TCP
#define UIP_CONF_TCP 0

#undef NBR_TABLE_CONF_MAX_NEIGHBORS
#undef UIP_CONF_MAX_ROUTES
#define NBR_TABLE_CONF_MAX_NEIGHBORS  10
#define UIP_CONF_MAX_ROUTES           10

#endif
