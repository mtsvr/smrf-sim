#include "contiki.h"
#include "contiki-net.h"
#include "net/ipv6/multicast/uip-mcast6.h"

PROCESS(mcast_intermediate_process, "Intermediate Process");
AUTOSTART_PROCESSES(&mcast_intermediate_process);
PROCESS_THREAD(mcast_intermediate_process, ev, data)
{
  PROCESS_BEGIN();
  PROCESS_END();
}
