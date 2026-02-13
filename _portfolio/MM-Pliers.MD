---
title: "Multimaterial Pliers"
excerpt: "Print-in-place multimaterial pliers with flexible material for spring component."
header:
  image: /assets/img/pliers-rendering-2.png
  teaser: /assets/img/pliers-FINAL-RENDER.png
gallery:
  - image_path: /assets/img/pliers-iteration-1.jpg
  - image_path: /assets/img/pliers-iteration-2.jpg
  - image_path: /assets/img/pliers-iteration-3.jpg
  - image_path: /assets/img/pliers-final-iteration.jpg
  - image_path: /assets/img/pliers-final-iteration-ontable.jpg
---

## Project Description and Background
This project explores a **multi-material, print-in-place needle-nose pliers** design combining a **rigid structural body** with a **flexible TPU spring region** to enable compliant motion and automatic return. **Print-in-place** refers to mechanisms that are fabricated in a single print with moving or functional elements already integrated, minimizing post-print assembly and reducing part count. This approach is widely used in applications such as [geared hinges](https://www.printables.com/model/120766-print-in-place-geared-hinge) and [chainmail-style flexible fabrics](https://all3dp.com/2/3d-printed-chainmail-best-models/#i-13-13-print-in-place). A common and effective material pairing for print-in-place purposes is a rigid polymer such as PLA or PETG for dimensional stability combined with TPU (~95A) for elastic deformation and durability. This combination is what was used for these multimaterial pliers, and it enabled both structural precision and controlled flexibility within a single printed mechanism.

## Rendering of Final Pliers
![final-rendering](/assets/img/pliers-FINAL-RENDER.png)

## Design Overview
This multi-material pliers design uses a rigid PLA body for structural alignment and a flexible TPU (95A) spring region to generate compliant motion and automatic return. The spring component was designed as a lattice-style flexible middle section, printed separately in TPU and mechanically captured within the rigid frame so that deformation occurs in a controlled direction. The rigid jaws and handles maintain dimensional stability, while the flexible insert stores elastic energy during compression and drives reopening when released. Rather than relying on a traditional pinned hinge, the mechanism depends on controlled material deformation and geometric constraint to translate handle compression into jaw motion.

## Iterative Process
### Iteration 1: Baseline
The initial flexible section was printed with 25% grid infill, no top or bottom layers, and an overall extrusion thickness of 5 mm. The goal was to allow sufficient deformation while keeping the geometry simple. However, jaw motion was limited and did not provide meaningful grip force.
![iteration-1](/assets/img/pliers-iteration-1.jpg)

### Iteration 2: Reduce Infill and Add Clearance
To increase flexibility, infill was reduced to 18% (grid pattern maintained) while keeping the 5 mm perimeter intact. Corner cutouts were introduced to provide additional clearance for handle motion. While the handles gained more room to move, the still jaws didn't move far enough. This suggested that reducing stiffness alone was not solving the directional deformation problem. The system lacked the rigidity needed to transfer force effectively to the jaws.
![iteration-2](/assets/img/pliers-iteration-2.jpg)

### Iteration 3: Increase Perimeters
Instead of continuing to soften the structure, the next approach increased the number of perimeters to approximately 7, allowing more solid material between structural pegs and the internal lattice. Infill remained at 18%, and corner gaps were retained. The intent was to introduce directional rigidity so that deformation would occur in the correct region rather than dissipating throughout the lattice. This improved structural behavior slightly but still did not produce sufficient jaw travel.
![iteration-3](/assets/img/pliers-iteration-3.jpg)

### Aside: Debated Last Resort Solution
At this point, the strategy considered was reducing the overall scale of the pliers (jaws, flexible section, and handles). The reasoning was that smaller geometry would require less deformation to achieve full closure. However, this would require re-aligning the entire assembly and redesigning clearances, which is less than ideal.

### Iteration 4: Final Iteration
Rather than scaling everything down, the successful solution came from reducing jaw capacity by 10 mm and modifying the jaw geometry to improve gripping efficiency at smaller deformation levels. This reduced the amount of elastic travel required from the spring region while increasing mechanical effectiveness at the tip. The result was sufficient jaw motion for gripping small objects without excessive deformation of the TPU insert.
![iteration-4](/assets/img/pliers-final-iteration.jpg)

### Key Specifications
* TPU square length: 35 mm
* Handle top length: TPU square length x 2
* Handle side length: TPU square length x 3
* Jaw length: ~62.5 mm
* Jaw capacity: 7 mm
* Note: TPU square diagonal length and jaw capacity needed a minimum 2:1 ratio to ensure effective plier functionality.

## Print Settings
<table>
  <thead>
    <tr>
      <th>Setting</th>
      <th>Purpose</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>PLA Material Selection</td>
      <td>Strong and durable material for rigid plier components (jaws and handles).</td>
    </tr>
    <tr>
      <td>TPU 95A Material Selection</td>
      <td>Flexible material for elastic deformation of the middle spring region. Still durable under repeated bending.</td>
    </tr>
    <tr>
      <td>Sparse Infill Pattern: Grid (TPU middle)</td>
      <td>Grid pattern allows compression in the weakest direction (shear) to result in easier opening and closing of pliers when assembled.</td>
    </tr>
    <tr>
      <td>Infill Density: 18% (TPU middle)</td>
      <td>Lower infill to allow for larger motion of the plier jaws with a smaller deformation of the TPU region.</td>
      <td></td>
    </tr>
    <tr>
      <td>Horizontal Shells Solid Layers: Top and Bottom layers set to zero (TPU middle)</td>
      <td>Must remove top and bottom layers so that the grid infill is main thing resulting in deformation of the middle region. No restriction due to extra layers.</td>
    </tr>
    <tr>
      <td>Vertical Shells Perimeters: Set to 7 (TPU middle)</td>
      <td>Allows more solid material between structural pegs and the internal lattice for stability.</td>
    </tr>
</tbody>
</table>
* Note: All other settings not mentioned above were left at their default values.

## Final Working Pliers
![working-gif](/assets/img/ak30tk.gif)

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b60281128b7bd3b78350891?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Multimaterial Pliers Gallery" %}
