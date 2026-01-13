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


## Off-the-shelf Parts
<table>
  <thead>
    <tr>
      <th>Component</th>
      <th>Purpose</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Arduino Uno</td>
      <td>Main microcontroller for pump control</td>
    </tr>
    <tr>
      <td>Stepper motor + stepper driver</td>
      <td>Drives the lead screw to move the plunger holder</td>
    </tr>
    <tr>
      <td>Lead screw</td>
      <td>Converts motor rotation into linear motion (sets displacement per revolution)</td>
    </tr>
    <tr>
      <td>Linear rod</td>
      <td>Guides the moving carriage to keep motion constrained and stable</td>
    </tr>
    <tr>
      <td>Aluminum extrusion</td>
      <td>Structural frame for the linear actuator assembly</td>
    </tr>
    <tr>
      <td>Power supply</td>
      <td>Provides power to the motor and electronics</td>
    </tr>
    <tr>
      <td>I2C LCD display</td>
      <td>Displays programmed flow rate and remaining time</td>
    </tr>
    <tr>
      <td>LEDs (RGB)</td>
      <td>Status indication (running / paused / stopped)</td>
    </tr>
    <tr>
      <td>Latching pushbutton</td>
      <td>Start/pause control for the pump</td>
    </tr>
    <tr>
      <td>Limit switch</td>
      <td>Stops motion at end-of-travel to prevent over-compression / damage</td>
    </tr>
    <tr>
      <td>Breadboard</td>
      <td>Organizes circuit connections</td>
    </tr>
    <tr>
      <td>Jumper wires / hookup wire</td>
      <td>Electrical interconnects between components</td>
    </tr>
    <tr>
      <td>Heat-set inserts + M3 screws/bolts</td>
      <td>Fasteners for removable lid/panels and securing electronics</td>
    </tr>
    <tr>
      <td>Clear tubing (for syringe outlet)</td>
      <td>Directs fluid into the receiving vessel</td>
    </tr>
  </tbody>
</table>





## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a1b84a38a6c3e09a?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Syringe Pump Gallery" %}
