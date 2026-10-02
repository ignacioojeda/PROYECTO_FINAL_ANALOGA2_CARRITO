# 🏎️ Carro a control remoto con ESP32

Proyecto final de **Electrónica Análoga II y Básica** — Universidad de Antioquia (UdeA).
Carro de dos ruedas controlado con un **ESP32** y un **control de Xbox Series S** por Bluetooth, para una competencia de carros a control remoto.

![Arduino](https://img.shields.io/badge/Arduino-IDE-00979D?logo=arduino&logoColor=white)
![ESP32](https://img.shields.io/badge/ESP32-Lolin32%20Lite-E7352C)
![Estado](https://img.shields.io/badge/estado-en%20desarrollo-yellow)

---

## 📋 Descripción

El ESP32 genera las señales de dirección y velocidad (PWM) para un driver de motores **TB6612FNG**, que mueve dos motorreductores DC en configuración diferencial (tracción 2WD). El carro avanza, retrocede y gira sobre su propio eje.

```mermaid
flowchart LR
    X[Control Xbox Series S] -. Bluetooth .-> E[ESP32 Lolin32 Lite]
    E -->|AIN, BIN y PWM| D[Driver TB6612FNG]
    D --> M1[Motor izquierdo]
    D --> M2[Motor derecho]
    B[2 x 18650 en serie, ~7,4 V] --> D
    P[Power bank 5 V] --> E
```
