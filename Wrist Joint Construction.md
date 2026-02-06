WRIST JOINT CONSTRUCTION: 

This part of the project moves the gripper up and down, adding more flexibility to the arm. The wrist joint mounts on top of the shoulder joint's 4-bar linkage slope, creating a third axis of movement so the arm can pick up objects at a wider range. It's powered by a Spektrum A330 servo motor. This design was the most challenging, going through three iterations. I originally wanted to use another MG996R, but it would be too heavy for the shoulder joint to handle. My first design used revolute joints with a bracket holding two SG90 servos working together to lift the gripper. I used two servos instead of one because the gripper I was building would be heavy. I got pre-made servo cases from Thingiverse.com and fit them into my custom bracket, however testing showed this didn't work. I had already printed the 3-finger gripper design, so I used it for wrist joint trialing. I mounted the bracket with tape on the shoulder joint's end panel for prototyping. The SG90s could carry the gripper's weight at first, but they soon fell apart. One servo lost its starting position, making both servos out of sync, which broke the synchronized servo. I later had to scrap that idea. Design #2 used a completely different motor—the 28BYJ-48 stepper motor because I thought one stronger motor would be more efficient. I then set up the ULN2003 stepper driver module and motor. This design worked well when I taped the stepper motor to the gripper. I used a pre-made case from Thingiverse again for the stepper motor and taped it to the shoulder joint's end panel. The stepper motor was strong and easy to code for moving the gripper. It seemed perfect until I connected all the motors to finish the project. I had already glued the stepper shaft to the gripper, making it hard to go back. When I tested the stepper with all the other servos, it wouldn't move. I think this was due to a power or current shortage. The problem was me intitially powering everything through the servo driver board but i couldnt increase the power and current because the board had a limit(PCA9865). I moved to final design #3 needing a motor that could handle the gripper's weight without using too much power. After searching for days, I found a Spektrum A330 motor in my parts. I didn't think a servo that size would be powerful enough, but it actually had higher torque than the average SG90 and used less voltage. I taped it to the shoulder joint's end panel and attached the gripper to its shaft. It moved the gripper perfectly and met all my requirements, so I hot-glued everything together. After gluing, I had a fully working wrist joint, and the arm's mechanical part was mostly done since I'd already designed the 3-finger gripper.

I lost the CAD design for design #1's Bracket due to a mistaken refresh on my computer but here is the picture:
<img width="300" alt="WNTW9386 1" src="https://github.com/user-attachments/assets/f5e14806-3930-4bde-892b-813bd4f03306" />

This is design #2's stepper motor case link I took from thingiverse as well as the 28BYJ-48 stepper motor + ULN2003 stepper motor driver module picture:

Link: thingiverse.com/thing:5145361

<img width="300" height="300" alt="image" src="https://github.com/user-attachments/assets/7c7cbc90-dce2-4f66-b86b-9feefd62b593" />

Pictures for the stepper motor design #2 on the robotic arm along with the gripper from later: 

<img src="https://github.com/user-attachments/assets/afe47898-ca04-483e-b984-eb0172f3c60b" width="300">
<img src="https://github.com/user-attachments/assets/34176abb-5626-4b88-872c-f8c1ac456451" width="300">

Design #3 is in the final product.




