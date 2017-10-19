/*
MIT License
Copyright (c) 2017 DeeplyEmbedded
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
