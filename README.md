
# 🌊 RIVERATHON 1.0 - High-Precision Flood Prediction System

A self-powered, always-on flood prediction system that uses 3D riverbed mapping and real-time rainfall data to provide early warnings, even in the most remote, network-less areas.

---

### 🚨 The Real-World Problem: Why This Matters

In June 2013, Kedarnath’s sudden floods from heavy rain and glacier melt claimed over 5,000 lives. Remote areas like this lack real-time river monitoring and reliable communication, leaving communities unprepared. A self-powered, LiDAR-based alert system can give precious minutes of warning—enough to save lives and reduce damage. Our system is designed to prevent such tragedies by providing a crucial head start.

---

### 💡 Our Solution

We've developed a system that combines **LiDAR-based 3D riverbed mapping** with **real-time rainfall data** to predict flood risks with high precision. An ESP32 microcontroller processes this data locally, and if a high-risk threshold is met, it triggers multi-channel alerts.

For remote areas with no connectivity, the system uses **LoRa and Satellite IoT** to transmit alerts and ensures data integrity by logging events on a **blockchain**. The entire unit is **solar-powered**, making it self-sufficient and reliable during disasters when power grids fail.

---

### ✨ Key Features

- **High-Precision Prediction**: LiDAR scans create a detailed 3D map of the riverbed, showing exactly how much water it can hold.
- **Real-Time Risk Assessment**: Combines river capacity with live rainfall data for immediate and accurate flood risk analysis.
- **Works Anywhere**: Utilizes LoRa and Satellite communication to send alerts from remote, off-grid locations.
- **Always-On & Self-Sufficient**: Solar panels combined with battery backup ensure the system runs 24/7, even during power outages.
- **Tamper-Proof Data**: Blockchain logging ensures that all sensor readings and alerts are secure, immutable, and auditable.
- **Multi-Channel Alerts**: Instantly warns communities through hardwired local sirens and sends data to a mobile/web application for authorities.

---

### 🏗️ System Architecture

This diagram illustrates the high-level hardware and software components of our system.

![WhatsApp Image 2025-08-15 at 23 17 25_731c2001](https://github.com/user-attachments/assets/cbae2a4b-3329-4c2e-a06d-f36d0b705677)



### ⚙️ Technical Flowchart

This flowchart details the step-by-step process from data collection to alert dissemination.

<img width="1024" height="1536" alt="image" src="https://github.com/user-attachments/assets/cc1c2035-b856-4076-9ee6-d36d4323c85c" />


---

### 🎯 Target Users & Impact

**Who We Help:**
- **Disaster Management Teams**: Get the right information at the right time to move people to safety faster.
- **Families Living Near Rivers**: Receive early alerts so they can protect loved ones and valuables before the water rises.

**How We Help Them:**
- **Predicts Danger Before It Strikes**: By combining LiDAR mapping and real-time rainfall tracking.
- **Warns Through Multiple Channels**: Loud local sirens, satellite messages, and LoRa signals ensure no one is left unaware.

**Our Impact:**
- **Social**: Fewer lives lost, less panic, and more time to act during emergencies.
- **Economic & Environmental**: Cuts down on property losses and helps care for our rivers in a sustainable way.

---

### 🔬 Research & References

Our methodology is supported by cutting-edge research in flood detection and remote sensing.

1.  **SEN12-FLOOD - A SAR and Multispectral Dataset for Flood Detection**: A dataset that provides valuable satellite imagery for training flood detection models using SAR and multispectral data.
    - [Link to Paper](https://ieee-dataport.org/open-access/sen12-flood-sar-and-multispectral-dataset-flood-detection)

2.  **Flood Extent Mapping from Bitemporal Sentinel-1 SAR Images with a Deep Learning Model**: Research on using deep learning with Sentinel-1 SAR images to accurately map the extent of floods.
    - [Link to Paper](https://www.mdpi.com/2073-4441/14/3/364)

3.  **A LiDAR-Based Approach for Monitoring and Quantifying River Bank Erosion**: A study demonstrating the effectiveness of LiDAR in monitoring riverbank erosion, which is crucial for understanding long-term changes in river capacity.
    - [Link to Paper](https://www.mdpi.com/2076-3417/15/13/7563)

---

### 🛠️ Hardware & Software Components

**Hardware:**
- ESP32 with GSM/LoRa/Satellite Module
- Rain Sensor
- LiDAR Sensor (for initial mapping)
- Solar Panel & Li-ion Battery
- Local Siren

**Software:**
- On-device Machine Learning Model
- Blockchain for Data Logging
- Node.js Backend Server
- React/Flutter Mobile & Web Application

---


