# Monitoreo de Humedad de Suelo con ESP32 y FC-28

Este repositorio contiene los códigos para la lectura y calibración de un sensor de humedad de suelo FC-28 utilizando un microcontrolador ESP32-D0WD-V3.

## Hardware Utilizado
- Placa: ESP32 Dev Module (3.3V)
- Sensor: Módulo higrómetro FC-28 (Pines A0 y D0)

## Conexiones
| FC-28 | ESP32 |
|-------|-------|
| VCC   | 3.3V  |
| GND   | GND   |
| A0    | GPIO 34 |
| D0    | GPIO 25 |

## Estructura
- **`01_lectura_basica/`**: Código inicial para comprobar la lectura analógica bruta del convertidor analógico a digital (ADC).
- **`02_lectura_calibrada/`**: Código final que convierte los valores del ADC (4095 en estado seco, 880 en tierra húmeda) a un porcentaje (0-100%) e incluye la lectura de la alerta digital.

## Notas de Flasheo
Para cargar el código en este modelo específico de ESP32, es estrictamente necesario mantener presionado el botón **BOOT** físico en la placa en el momento en que el monitor del Arduino IDE muestre el mensaje `Connecting...`.
