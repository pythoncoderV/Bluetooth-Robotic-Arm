GRIPPER CONSTRUCTION :

This part of the project would be responsible for picking things up and putting them down as well as moving objects. I wanted this design to be specifically for gripping circular objects. This is because I wanted the main focus of my robotic arm to be picking things up like balls and other round 3D shapes. I originally started to think about 2-finger grippers, as they are the default gripper design for most robotic arms, but I did not think that design would be efficient enough at picking circular objects. I later came to the idea of using 3 fingers equally spaced apart in the formation of a triangle. This left no space for the objects to get out of the grip. The next thing I had to think about was how I was going to turn the rotational movement of the SG90 servo motor into the motion where a gripper can close its fingers in. I started researching different types of gears for this too. I looked at spur gears, rack and pinion gears, and bevel gears until I found a type of gear called a helical gear. These gears proved to be the most efficient of all the ones I researched. They had the property of rotating and meshing on perpendicular axes. This meant if I had my servo motor with a helical gear attached to it, and a finger with a helical gear attached to it, when I orient it properly the finger will move up and down when the servo rotates. Another plus side to this type of gear was due to how it doesn't just rotate perpendicularly; it can rotate side by side just like normal gears. I discovered if you reflect the direction in which the grooves on a helical gear are positioned, that reflected gear meshes side by side with a normal un-reflected gear. I soon got to work designing the chamber for a single rotating helical gear to sit and 3 helical gears meshing with that one rotating gear around it (un-reflected). I designed this by taking a pre-made file on printables.com. The printables.com file was a fidget toy design that had a chamber and 2 helical gears in it that already rotated on vertical axes. I then had to duplicate the chamber 3 times so I could create a triangular shape where 3 gears could fit perpendicularly. I made sure that the inner rotating gear was meshing all 3 of the helical gears so that when the inner helical gear rotates, all 3 of the outer ones rotate too, moving the fingers in and out/up and down. I designed circular poles with the right tolerances to keep the helical gears in place while they could still rotate.

<img width="880" height="438" alt="Screenshot 2026-02-05 205540" src="https://github.com/user-attachments/assets/3614c17a-d5cd-44fd-b794-e9d415c5869d" />

I then took each of the 3 helical gears on the outer radius of the chamber and attached beams to them or "fingers" with curves on the tops so that they could grip circular objects better. The next thing I had to think of was where and how I was going to mount the motor. I could not mount the SG90 motor shaft directly to the inner helical gear because of the chamber enclosing the helical gear. My idea was to use an SG90 servo pre-made motor case/enclosure and then mount that on the bottom of the base like this:

<img width="542" height="476" alt="image" src="https://github.com/user-attachments/assets/6dae5d78-e36f-4ed4-a432-d5af714433cc" />

I mounted the motor in this orientation so that I could attach another reflected helical gear to the SG90 motor shaft, allowing it to mesh with the inner rotating gear in the gripper's chamber. Since a reflected gear is attached to the motor, it turns the inner rotating gear side-by-side rather than perpendicularly. The only problem occurred when I tried to attach the reflected helical gear to the motor shaft; the hole of the gear did not reach the shaft due to a height offset. Because the chamber encloses the inner rotating gear, its top and bottom are covered to keep it in place, which prevented the helical gear from meshing with the inner gear or attaching to the servo. I fixed this by adding height to the center of the SG90's helical gear so it could reach the inner rotating gear. Once I added this height, I was able to superglue the gear to the shaft, and it meshed perfectly with the inner rotating gear of the chamber. This is what the gear looked like after being heightened and how it appeared in the final construction:

<img width="250" height="250" alt="image" src="https://github.com/user-attachments/assets/14569f94-dcf1-44b3-9ae8-c3ea8b871733" />

<img width="428" height="362" alt="Screenshot 2026-02-06 203706" src="https://github.com/user-attachments/assets/1e9ef835-1d8f-4116-8cd0-999b7be6427d" />
<img width="485" height="436" alt="Screenshot 2026-02-06 203643" src="https://github.com/user-attachments/assets/4283c3a4-943d-41a1-8aba-8398560349db" />

This is the final 3d-printed structure: 

<img width="400" alt="NVFB4504 1" src="https://github.com" />
<img width="400" alt="HTRB3598 1" src="https://github.com/user-attachments/assets/40804bc7-5069-4936-bbdc-c3b29de78732" /> 






