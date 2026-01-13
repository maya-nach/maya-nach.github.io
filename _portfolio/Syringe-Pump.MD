---
title: "Syringe Pump"
excerpt: "DIY syringe pump capable of 1 uL / min flow rate up to 10 mL / min."
header:
  image: /assets/img/syringe-pump-rendering-FULL-OG.png
  teaser: /assets/img/syringe-pump-thumbnail.png
gallery:
  - image_path: /assets/img/syringe-pump-irl-semi-finished.png
 
---

## Purpose and Design Overview
Syringe pumps are used in medical and laboratory settings to deliver precise volumes of fluid at controlled flow rates. Commercial systems often cost hundreds to thousands of dollars, limiting access for smaller labs and educational environments. As an alternative, this project presents a low-cost DIY syringe pump that can be made with a combination of 3D printed and off-the-shelf parts.
### Features
* This DIY syringe pump uses a **lead-screw-driven linear actuator** to advance the syringe plunger, converting rotational motor motion into precise linear displacement.
* The pump is driven by a **stepper motor** and controlled by an **Arduino**.
* The system supports **10 and 20 mL syringes**, and allows the user to **specify flow rate and syringe diameter**.
* A **limit switch** and **enclosure** improve safety and reliability of the system.

## Rendering of Final Syringe Pump
![final-rendering](/assets/img/FINAL-SYRINGE-PUMP-RENDER.png)

## Off-the-shelf Parts
<table>
  <thead>
    <tr>
      <th>Component</th>
      <th>Quantity</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>250 mm lead screw with 2 mm pitch and 2 mm lead</td>
      <td>1</td>
    </tr>
    <tr>
      <td>1/4" x 8 mm flexible coupling</td>
      <td>1</td>
    </tr>
    <tr>
      <td>200 mm linear rod with 8 mm diameter</td>
      <td>1</td>
    </tr>
    <tr>
      <td>LM8UU Linear bearing for 8 mm diameter rod</td>
      <td>1</td>
    </tr>
    <tr>
      <td>2040 Aluminum Extrusion 1' Length</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Nema 17 Stepper Motor</td>
      <td>1</td>
    </tr>
    <tr>
      <td>MEAN WELL RQ-65D AC-DC Power Supply Quad Output 5V 12V 24V 12V 4 Amp</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Arduino Uno</td>
      <td>1</td>
    </tr>
    <tr>
      <td>A4988 Stepper Driver</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Small Breadboard</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Panel Mount Latching Push Buttons (On/Off)</td>
      <td>1</td>
    </tr>
    <tr>
      <td>Limit Switch</td>
      <td>1</td>
    </tr>
    <tr>
      <td>RGB Common Cathode LED</td>
      <td>3</td>
    </tr>
  </tbody>
</table>

## 3D Printed Parts
| Part Name             | Quantity | Purpose |
|----------------------|----------|---------|
| Enclosure            | 1        | Houses and protects all electronics, providing a sealed and organized control unit for the syringe pump. |
| Motor Mounting Plate | 1        | Rigidly mounts the stepper motor and aligns it with the lead screw to transmit rotational motion into linear motion. |
| End Support          | 2        | Supports the linear rod and lead screw at both ends of the actuator to maintain alignment and mechanical stability. |
| Barrel Holder        | 1        | Holds and locates the syringe barrel, ensuring the syringe remains fixed during fluid dispensing. |
| Plunger Holder       | 1        | Grips the syringe plunger and translates lead screw motion into controlled plunger movement; also carries the limit switch. |


## Arduino Code


## Operating Instructions
1. In the Arduino code, change the diameter of the syringe and the desired flow rate.  
2. With the power supply unplugged, connect the Arduino to the computer and upload the code. 
3. Once the code is uploaded, unplug the Arduino from the computer. 
4. Fill syringe with the amount of fluid needed. 
5. Attach a clear tube to the end of the syringe to direct the flow of liquid and place its end in the receiving vessel. 
6. Twist the lead screw to move the plunger holder until it is the desired distance from the barrel holder. 
7. Place the desired syringe size (10/20 mL) with the barrel resting on the barrel holder and the end of the plunger in the plunger holder slit. 
8. With the Arduino unplugged, plug the power supply into an outlet. 
9. Press the red button on the front of the enclosure to start the pump, and the LED will turn green when it is running. During movement, the switch can be pressed again the pause the pump, and the LED will turn yellow. 
10. Continue to let the pump run until the LED light turns red and the pump stops moving or desired fluid output is achieved. 
11. Unplug the syringe pump and carefully remove the syringe from the pump. 

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a1b84a38a6c3e09a?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Syringe Pump Gallery" %}
