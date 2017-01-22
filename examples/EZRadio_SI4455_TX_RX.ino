#include <EZRadio_Si4455.h>
#include <Si4455_radio_config.h>
#include <si4455_defs.h>
#include <si4455_patch.h>

/* Object for accessing member functions */
EZRadio_Si4455 Si4455_Radio;

void setup()
{

  Serial.begin(115200);
  Si4455_Radio.SPI_Init();
  Si4455_Radio.SPI_SI4455_Init();

/* Define to enable TX Mode */
#ifdef ENABLE_TX_OR_RX
  Si4455_Radio.StartTx(NULL);
#else
  Si4455_Radio.Radio_StartRx();
#endif
}

void loop()
{


}
