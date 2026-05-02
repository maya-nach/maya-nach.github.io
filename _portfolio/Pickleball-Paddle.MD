---
title: "Pickleball Paddle"
excerpt:
header:
  image: 
  teaser: 
gallery:
  - image_path: /assets/img/IMG_5400.jpeg
  - image_path: /assets/img/IMG_5401.jpeg
  - image_path: /assets/img/IMG_5402.jpeg
  - image_path: /assets/img/IMG_5403.jpeg
  - image_path: /assets/img/IMG_5404.jpeg
---

## Top-Down Modeling Description
Top-down modeling is a CAD design approach where a system is built by first defining the overall assembly and reference geometry, then creating individual components within that context so they are driven by shared dimensions and relationships. Instead of designing parts separately and assembling them later, parts are modeled in place and maintain alignment through projected geometry and parametric constraints.

In this project, a top-down approach was used by first modeling the handlebar and importing a phone model to establish key reference dimensions such as diameter, position, and viewing angle. These references guided the design of the clamp, phone holder, and rotating mechanism directly within the assembly. As a result, all components remained aligned and could be easily adjusted by modifying a few key parameters, improving both the efficiency of iteration (less printing required to test assembly and part compatibility) and the overall functionality of the mount.

## Design Rationale
### Detent Mechanism
The detent mechanism was implemented using a spring and ball bearing intended to engage with recessed notches to create a “click” between portrait and landscape orientations. However, the mechanism did not perform as effectively as intended. A key limitation of the design was that all components rotated around a single screw, which was responsible for both securing the assembly and enabling rotation of the detent mechanism. This reduced stability and limited the consistency of the detent engagement. A more effective design would separate these roles, using one fastener to provide structural stability and another dedicated axis to control rotation.

Additionally, the spring and ball bearing were exposed rather than enclosed within the assembly. This made the mechanism prone to popping-out during use and reduced its durability for long-term application. Overall, while the detent concept was successfully integrated, its execution revealed major design trade-offs and adjustments that would need to be made for future use.

### Iterations/Dimension Adjustments
A few adjustments were needed for 3D printing. The clamp components and their M3 screw holes were made larger to improve fit to the handlebar and ease of assembly, since initial tolerances and sizes were too small. Fillets were also added to the gear part of the detent mechanism to make it easier for the ball bearing to move, and "click" between orientations.

### 3D Printing Technology
All components were produced using filament (FDM) printing due to its accessibility and ability to support rapid iteration and testing. Most parts were printed in PLA for ease of printing and sufficient rigidity, while the phone holder band was printed in TPU to provide flexibility, allowing the phone to be inserted and held securely without damage.

## Assembly and Use Instrusctions


## Final Rendering of Phone Holder
![final-rendering-bike-mount](/assets/img/bike-phone-mount-render-TEASER.png)

## Section View of Detent Mechanism
![detent-mech-section-view](/assets/img/bike-phone-mount-detent-mech-SECTION.png)

## Photos of Each Top-Down Component
![top-down-components](/assets/img/top-down-components.jpeg)

## Final Working Phone Holder GIF
<div style="width:360px;max-width:100%;"><div style="height:0;padding-bottom:56.11%;position:relative;"><iframe width="360" height="202" style="position:absolute;top:0;left:0;width:100%;height:100%;" frameBorder="0" src="https://imgflip.com/embed/ak30tk"></iframe></div><p><a href="https://imgflip.com/gif/ak30tk">via Imgflip</a></p></div>

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a7dc1baa130e4f7f?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Bike Phone Holder Gallery" %}

