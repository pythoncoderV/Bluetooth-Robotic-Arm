GRIPPER CONSTRUCTION :

The part of the project woould be responsible for picking things up and putting them down as well as moving objects. I wanted this design to be specifically for gripping circular 
objects. This is becuase I wanted the main focus of my robotic arm to be picking things up like balls and other round 3d-shapes. I originally started to think about 2 finger grippers
as they are the default gripper design for most robotic arms but I did not think that design would be efficient enough at picking circular objects. I later came to the idea of using
3 fingers equally spaced apart in the formation of a triangle. This left no space for the objects to get out of the grip. The next thing I had to think about was how I was going to 
turn the rotational movement of the sg90 servo motor, into the motion where a gripper can close it's fingers in. I started researching different types of gears for this too. I looked
at spur gears, rack and pinion gears, bevel gears untill I found a type of gear called a Helical Gear. These gears proved to be the most efficient of all the ones I researched on. 
They had the propoerty of rotating and meshing on perpendicular axis. This meant if I had my servo motor with a helical gear attached to it, and a finger with a helical gear attached 
to it, when I orient it properly the finger will move up and down when th eservo rotates. Another plus side to this type of gear was due to how it doesnt just rotate perpendicularly,
it can rotate side by side just like normal gears. I discovered if you reflect the direction of which the grooves on a helical gear are positioned, that reflected gear meshes side by
side with a normal un-reflected gear. I soon got to work designing the chamber for the a single rotating helical gear to sit and 3 helical gears meshing with that one rotating gear
around it(un-reflected). I designed this by taking a pre-made file on printables.com. The printables.com file was a fidget toy design that had a chamber and 2 helical gears in it that
already rotated on vertical axis. I then had to duplicate the chamber 3 times so I could create a traingular shape where 3 gears could fit perpendicularly. I made sure that the inner 
rotating gear was meshing all 3 of the helical gears so that when the inner helical gear rotates, all 3 of the outer ones rotate too moving the fingers in and out/ up and down. I 
designed circular poles with the right tolerences to keep the helical gears in place while they could still rotate. 

<img width="880" height="438" alt="Screenshot 2026-02-05 205540" src="https://github.com/user-attachments/assets/3614c17a-d5cd-44fd-b794-e9d415c5869d" />

I then took each of the 3 helical gears on the outer radius of the chamber and attached beams to them or, "finger" with curves on the tops so that they could grip circular objects better.
The next thing I had to think of was where and how I was going to mount the motor. I could not mount the sg90 motor shaft directly to the inner helical gear because of the chamber 
enclosing the helical gear. My idea was to use a sg90 servo pre-made motor case/enclosure and then mount that on the bottom of the base like this:

<img width="542" height="476" alt="image" src="https://github.com/user-attachments/assets/6dae5d78-e36f-4ed4-a432-d5af714433cc" />

I mounted the motor in this orientation due to how I would be able to attach another reflected helical gear to the sg90 motor shaft so that the sg90 helical gear meshes with the 
inner rotating gear in the chamber of the gripper. Since a reflected gear would be attached to the sg90 motor, the sg90 motor will not be turning the inner rotating gear 
perpendicularly, but side by side. The only problem was when I tried to attach the reflected helical gear on the sg90 motor shaft, the hole of the gear did not reach the shaft
due to the height offset. In the design, the chamber is the enclosure around the inner rotating gear meaning the bottom of the gear and the top is covvered to keep that inner gear 
in place. Because of that, the helical gear will not mesh with the inner rotating gear nor attach to the sg90 servo becuase of the chamber. This is easy to fix because all I have to
do is add height to the center of the sg90's helical gear to it can mesh with the inner rotating gear of the chamber. Once I added height to the sg90's helical gear, I 
was able to superglue the heightened gear to the sg90 shaft and it was able to perfectly mesh with the inner rotaating gear of the chamber. This is what the gear looked like after 
being heightened and how it looked in the final construction:

<img width="250" height="250" alt="image" src="https://github.com/user-attachments/assets/14569f94-dcf1-44b3-9ae8-c3ea8b871733" />







