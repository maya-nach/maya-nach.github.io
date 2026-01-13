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





## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a1b84a38a6c3e09a?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Syringe Pump Gallery" %}
