# 🤖 Autonomous Maze-Solving Robot Using ESP32

This project is an **autonomous 4-wheel maze solver robot** built using an **ESP32**, **L298N motor driver**, and **ultrasonic sensors**.  
The robot detects walls, makes navigation decisions, and solves mazes **without any manual control**.

---

## 📂 Project Files

- **maze.ino** → Main ESP32 code for autonomous maze solving  
- **Circuit Diagram.png** → Complete wiring diagram of ESP32, L298N, sensors, and motors  
- **Result.mp4** → Demo video showing maze-solving performance  
- **README.md** → Project documentation  

---

## ⚡ Features

- 🔄 **Fully Autonomous Navigation**  
  No Wi-Fi, Bluetooth, or mobile app required.

- 📡 **Ultrasonic Wall Detection**  
  Front, left, and right sensors detect maze walls.

- 🚗 **4-Wheel Drive System**  
  Improved torque, stable movement, and accurate turning.

- 🔋 **Ni-MH Battery Powered**  
  Reliable power for both motors and ESP32.

- 💡 **Low-Cost and Compact**  
  Ideal for students, hobbyists, and robotics learning.

---

## 🔧 Hardware Used

- ESP32 Development Board  
- L298N Motor Driver  
- 4 × DC Motors (4-wheel chassis)  
- HC-SR04 Ultrasonic Sensors (Front, Left, Right)  
- 6 × 1.2V Ni-MH Battery Pack  
- Jumper wires / chassis / common ground setup

---

## 🛠 Working Principle

The ESP32 continuously reads distances from ultrasonic sensors.  
Based on wall detection, the robot decides:

- **Move Forward** when path is clear  
- **Turn Left / Turn Right** when a wall is detected  
- **Stop** when required  
- Follow **wall-following maze algorithm** until exit is reached

The L298N controls the motor directions as decided by the algorithm.

---

## 🔌 Circuit Diagram

📌 View diagram here → **[Circuit Diagram.png](https://github.com/kashyappatel0111/Maze-Solving-Autonomous-Robot/blob/main/Circuit%20Diagram%20.png)**

---

## 🎥 Demo Video

📌 Watch the maze-solving demo → **[Result.mp4](https://github.com/kashyappatel0111/Maze-Solving-Autonomous-Robot/blob/main/Result.mp4)**

---

## 📊 Results

- Successfully solved multiple maze layouts  
- Accurate left/right turns  
- Stable movement using 4-motor drive  
- Reliable wall detection  
- No external network required  

---

## 🚀 Future Improvements

- Add camera for visual navigation  
- Add wheel encoders for odometry  
- AI-based decision making using Raspberry Pi  
- SLAM or A* path optimization  

---

## 📝 Author

Kashyap Patel 
CHARUSAT University  
2025–26

