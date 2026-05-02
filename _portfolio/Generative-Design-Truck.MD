---
title: "Generative Design Truck"
excerpt: "Generative design–optimized skateboard truck hanger with integrated motor mount"
header:
  image: 
  teaser: 
gallery:
 
---

## Generative Design Overview
Generative design is a design approach where you define constraints,like loads, materials, and regions to preserve,and an algorithm automatically generates optimized geometries that meet those requirements. Instead of manually modeling a shape, the software explores many possible solutions and finds forms that efficiently handle forces, often reducing weight while maintaining strength.

## Table of Forces Used
<table>
  <thead>
    <tr>
      <th>Name</th>
      <th>Magnitude</th>
      <th>Location</th>
      <th>Rationale</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Rider's Weight Bearing Load</td>
      <td>600N</td>
      <td>At the axle</td>
      <td>Hanger must be able to support the weight of the rider</td>
    </tr>
    <tr>
      <td>Turning/Carving</td>
      <td>600N</td>
      <td>At the axle</td>
      <td>Hanger must be able to support the weight of the rider on each side hypothetically if turning occurs by pressing weight to one side</td>
    </tr>
    <tr>
      <td>Belt-driven Propulsion</td>
      <td>400N</td>
      <td>At the motor mount</td>
      <td>Hanger must be able to support torque at the section near motor mount because of the belt's movement</td>
    </tr>
    <tr>
      <td>Weight of Motor</td>
      <td>400N</td>
      <td>Remote load where motor sits</td>
      <td>Hanger mass needs to support a motor that would be attached to the system</td>
    </tr>
    <tr>
      <td>Bump/jolt force</td>
      <td>600N</td>
      <td>At the axles</td>
      <td>Hanger must be able to support the weight of the rider feeling suddenly up instead of a bearing load in case bumps occur</td>
    </tr>
  </tbody>
</table>


## Disucssion
Generative design and powder bed fusion (PBF) work especially well together because each solves the limitations of the other. Generative design produces highly optimized shapes based on loads, constraints, and materials, but those shapes are often too complex to manufacture using traditional methods. Powder bed fusion, a form of additive manufacturing, allows those complex geometries to actually be built layer by layer. Because the surrounding powder supports the part during printing, PBF can create internal features, organic shapes, and thin structures that would not be possible with machining or casting. Together, these technologies allow engineers to design purely for performance rather than manufacturing limitations.

This combination is already being used in industry, particularly in aerospace and mechanical spaces where weight savings are critical. One well-known example is General Motors engineers used generative design and simulation to redesign a [seat bracket](https://www.autodesk.com/customer-stories/general-motors-generative-design), consolidating eight separate components into a single 3D-printed part after exploring 150 AI-driven design iterations.nThe final bracket was 40% lighter and 20% stronger than the original part.

A key part of generative design is defining the correct load cases. The software will only optimize for the conditions it is given, so if important loads are missing or unrealistic, the final design will not perform well in real life. For this project, the loads were chosen to represent how a skateboard hanger actually functions. A vertical load was applied to represent rider weight. A lateral load was included to simulate turning and carving. Torque was applied at the motor mount to represent propulsion from the belt-driven system. Additional loads, such as impacts and turning, were included to better reflect real riding conditions.

These loads were not measured directly but estimated using reasonable assumptions, such as typical rider weight and expected forces during motion. This is a limitation, but it reflects how early-stage engineering problems are often approached. To improve this process, more accurate data could be collected through experiments or simulations. For example, force sensors or motion analysis could provide better estimates of real-world loading. In industry, engineers often iterate between simulation and testing to refine these inputs and ensure the final design is reliable.

The comparison between AlSi10Mg aluminum and 17-4 PH stainless steel shows how material choice affects the outcome of generative design. AlSi10Mg is lighter but less strong, so the algorithm tends to create thicker, more spread-out structures to handle the loads. This results in a design that distributes forces across a larger area. In contrast, 17-4 PH stainless steel is much stronger and stiffer, so the algorithm can use less material in more focused regions. This leads to a more compact design with clearer load paths. However, because steel is denser, the final part may still be heavier even if it looks more efficient. This highlights an important point: generative design finds the best shape for a given material, but the material itself still plays a major role in overall performance.

While generative design is powerful, it is not perfect. One major limitation is that it depends heavily on the inputs. If the loads or constraints are wrong, the output will also be wrong. This makes engineering judgment very important, even when using advanced software. Another issue is that the resulting shapes can be difficult to interpret and validate. Unlike traditional designs, which follow more familiar geometries, generative designs often look organic and complex, making them harder to analyze and trust without additional testing.

There are also practical challenges. Powder bed fusion can produce these complex parts, but it is still relatively expensive and slow compared to traditional manufacturing. Parts may require post-processing, such as support removal, heat treatment, or surface finishing. These steps add time and cost. Because of this, generative design is not always the best choice for high-volume or cost-sensitive products.

Overall, generative design is most useful in applications where performance is more important than cost. This includes aerospace, high-performance automotive components, and medical devices. In these areas, reducing weight, improving efficiency, or customizing geometry can justify the added complexity and cost. It is especially valuable when multiple parts can be combined into a single component, reducing assembly and potential failure points.

In conclusion, generative design is a very powerful tool, but it works best when used thoughtfully. It depends heavily on strong engineering-judgement. When combined with powder bed fusion, it allows for designs that would not be possible otherwise. However, its usefulness depends on having accurate inputs, a clear understanding of the problem, and a manufacturing process that can support the final design. 

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811b11733f7638a30ca?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="Generative Design Truck Gallery" %}
