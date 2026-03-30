---

# 📡 Temperature Monitoring System (Arduino)
This repository contains a proof of concept (POC) for a temperature monitoring system using Arduino, LEDs, and a buzzer.

## 📖 Overview

This project is a simple temperature monitoring system built with an Arduino Uno.
It reads temperature data from a sensor and reacts in real time using LEDs and a buzzer.


---

## ⚙️ How it works

* The temperature sensor sends analog data to the Arduino
* The Arduino converts this data into temperature (°C)
* Based on the temperature, the system classifies it into 3 states:

  * Cold
  * Normal
  * Hot

---

## 🚦 System Feedback

| Temperature Range | LED       | Buzzer Behavior      |
| ----------------- | --------- | -------------------- |
| Below 20°C        | Blue LED  | Low frequency sound  |
| 20°C - 30°C       | Green LED | No sound             |
| Above 30°C        | Red LED   | High frequency sound |

---

## 🔊 Features

* Real-time temperature reading
* Visual feedback using LEDs
* Sound alerts using a buzzer
* Simple and scalable architecture

---

## 🧪 Prototype

You can test the simulation here:
👉 [https://www.tinkercad.com/things/g12cUYuosL0-temperatura-com-buzzer](https://www.tinkercad.com/things/g12cUYuosL0-temperatura-com-buzzer)
![alt text](<Temperatura com buzzer.png>)

---

## 🛠️ Components Used

* Arduino Uno
* Temperature sensor (TMP36)
* LEDs (Blue, Green, Red)
* Resistors
* Buzzer
* Breadboard & jumper wires

---

## 🚀 Future Improvements

* Data logging (history)
* Real-time graphs
* Integration with Wi-Fi (ESP32)
* Cloud monitoring system

---

## 💡 Purpose

This project is part of a larger idea: building a smart fermentation monitoring system, where temperature and other variables can be tracked and analyzed in real time.

---


