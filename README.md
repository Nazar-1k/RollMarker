# RollMarker

RollMarker -  is an exciting arcade game where the player controls a marker sphere that needs to paint all 40 targets within 45 seconds.  
Coloring of the targets occurs when the player collides with them. Spotted targets, when colliding with clean targets, are also painted in the player's color.
There are also "cleaners" on the stage - these are targets that can revert painted targets to their original state. Targets move randomly around the stage, adding complexity to the gameplay.
The game ends when all targets, including the cleaners, have been painted in the player's color.

# Player
![Player](https://github.com/Nazar-1k/RollMarker/assets/82716260/5c80aeb0-f77b-46bc-b8d2-25b3def42e9b)

The player (sphere) can use the W, A, S and D keys to move the character forward, left, back and right. Movement is performed using a physical mover.   
The camera rotates with the mouse around the character to ensure proper orientation.  
An arrow is displayed above the player, indicating the direction of movement of the character, the higher the movement speed, the longer the arrow.
# Targets

There are three types of targets in the game (Clear, Cleaner and Marked).Targets jump around the stage chaotically in a random direction. At the beginning of the game they are clean, and some of them can have the cleaner property.

![Targets](https://github.com/Nazar-1k/RollMarker/assets/82716260/c9a15bf9-0ec9-4200-a86d-7b8b05fa3f0b)  

When the character collides with clean or cleaner targets, they are painted in the player's color.  
When a target marked in the player's color collides with a clean target, the clean target is painted in the player's color.   

 ![MarkedTArget](https://github.com/Nazar-1k/RollMarker/assets/82716260/72d02012-586a-4315-9ea3-6fa12d263a59)  
Marked Target

When the cleaner collides with a spotted target, the spotted target is cleaned.  
![CleanerTarget](https://github.com/Nazar-1k/RollMarker/assets/82716260/6ad7ee30-3341-4527-9f71-9f4001c31e0c)  
Cleaner Target

 ![ClearTarget](https://github.com/Nazar-1k/RollMarker/assets/82716260/fe27162d-8ac5-4118-b9eb-8fc4076cc6a1)  
Clear Target


All objectives will spawn in a random location in the selected area (Across the level)  

# User Interface
The game starts with a countdown (At this time you cannot control the player)

  ![StartTimer](https://github.com/Nazar-1k/RollMarker/assets/82716260/b8fc8881-0684-4624-ae7d-037bd693dc9f)  


The game has a simple user interface (HUD) that displays the following information:  

Countdown Timer: This timer displays how much time is left for the player to complete the level. After the time expires, the player loses and the game restarts automatically after 5 seconds.  

Spotted Targets Counter: This counter shows the number of targets that the player has successfully painted in their color. The main goal of the game is to paint all the targets.  

Cleaner Counter: This counter displays the number of "cleaners" or targets that can return spotted targets to their original state.  
![HUD](https://github.com/Nazar-1k/RollMarker/assets/82716260/e3ab74d8-a880-4a1a-98c5-2b0e5887c3e1)  


The game has a win/lose screen
![WL](https://github.com/Nazar-1k/RollMarker/assets/82716260/d433315a-73e8-4234-bc00-c51ff3c447d2)


# Sound and Effects
Stressful music is added to the game, which adds tension and makes the game more interesting  
At each collision of the character with the target, reproduce the sound and visual effect.

# Link to the game

https://drive.google.com/drive/folders/17ni_5cFSr_3nVQq2-kbtVI9-CpzHHVtq?usp=sharing
