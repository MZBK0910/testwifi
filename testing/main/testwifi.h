#include "esp_wifi.h"

namespace WIFI
{
    class WIFI{
public:
enum class state_e{

    NOT_INITIALISED,
    INITIALISED,
    WATING_FOR_CREDS,
    READY_TO_CONNECT,
    CONNECTING,
    WAITING_FOR_IP,
    CONNECTED,
    DISCON,
    ERROR
};
esp_err_t init(void);
esp_err_t begin(void);

state get_state(void);
const char* get_mac(void);
private:
void state_machne(void);

    };
}