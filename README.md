# RollMarker

RollMarker -  is an exciting arcade game where the player controls a marker sphere that needs to paint all 40 targets within 45 seconds.  
Coloring of the targets occurs when the player collides with them. Spotted targets, when colliding with clean targets, are also painted in the player's color.
There are also "cleaners" on the stage - these are targets that can revert painted targets to their original state. Targets move randomly around the stage, adding complexity to the gameplay.
The game ends when all targets, including the cleaners, have been painted in the player's color.

# Player
![player](https://github.com/Nazar-1k/RollMarker/assets/82716260/609c11fd-7484-456e-b6c7-f3b5debb610b)
The player (sphere) can use the W, A, S and D keys to move the character forward, left, back and right. Movement is performed using a physical mover.   
The camera rotates with the mouse around the character to ensure proper orientation.  
An arrow is displayed above the player, indicating the direction of movement of the character, the higher the movement speed, the longer the arrow.
# Targets
![Targets](https://github.com/Nazar-1k/RollMarker/assets/82716260/8ebc61c8-2927-4a59-bb8c-5a83183190c8)
There are three types of targets in the game (Clear, Cleaner and Marked).Targets jump around the stage chaotically in a random direction. At the beginning of the game they are clean, and some of them can have the cleaner property.

When the character collides with clean or cleaner targets, they are painted in the player's color.  
When a target marked in the player's color collides with a clean target, the clean target is painted in the player's color.    
![Marked TArget](https://github.com/Nazar-1k/RollMarker/assets/82716260/cfe00d0e-f0c6-46d4-8007-2d507dbb9586)  
Marked Target

When the cleaner collides with a spotted target, the spotted target is cleaned.  
![CleanerTarget](https://github.com/Nazar-1k/RollMarker/assets/82716260/6896ae6b-8051-4630-9f95-ddbf47d7f035)  
Cleaner Target

![ClearTarget](https://github.com/Nazar-1k/RollMarker/assets/82716260/9b8ea422-bac2-4c9f-806e-083afedd91cb)  
Clear Target


All objectives will spawn in a random location in the selected area (Across the level)  

# User Interface
The game starts with a countdown (At this time you cannot control the player)
![StartTimer](https://github.com/Nazar-1k/RollMarker/assets/82716260/af1f6ae4-0d0b-4c2b-ae89-9dea685eda5a)  

The game has a simple user interface (HUD) that displays the following information:  

Countdown Timer: This timer displays how much time is left for the player to complete the level. After the time expires, the player loses and the game restarts automatically after 5 seconds.  

Spotted Targets Counter: This counter shows the number of targets that the player has successfully painted in their color. The main goal of the game is to paint all the targets.  

Cleaner Counter: This counter displays the number of "cleaners" or targets that can return spotted targets to their original state.  
![HUD](https://github.com/Nazar-1k/RollMarker/assets/82716260/68e0d2cc-bd65-46f9-be83-505f579a611e)


# Sound and Effects
Stressful music is added to the game, which adds tension and makes the game more interesting  
At each collision of the character with the target, reproduce the sound and visual effect.

# Link to the game

https://drive.google.com/drive/folders/17ni_5cFSr_3nVQq2-kbtVI9-CpzHHVtq?usp=sharing
