![](https://conowego.pl/wp-content/uploads/2022/04/new-logo-share-1400x788-03-1400x788-c9d09f067a09.jpg)
# EOSTemplate
My UE5 Template for future Epic Online Services (EOS) Projects.

# Setup
Open the UE project and go to Project Settings.
There you have to scroll on the left hand side to plugins and choose Epic Online Services (EOS) or something like that. Now fillout/add a Artifact with your Epic Dev Portal, Application Details.

# Where is the Code ?
Everything you need is inside the Source Folder. There you only have to search for the GameInstance, called something with EOS and GameInstance. You'll find it.

# How can I test the EOS Functionality ?
This Git Repository includes a EOS_Testing.bat file. Edit it! The first path should be the folder path to your UnrealEditor.exe. The secound Path is the Path to your uproject of that Project. When executing this batch file the game will start and you only have to press TAB inside of the Game. Therefore is a menu with some functionalities like creating a session.

# What is important to take notice of ?
When testing, the Epic Games Overlay and Steams Overlay should always pop up. If not, your Artifact is probably wrong, maybe in the log window are some important informations.

# What does it contain ?
It contains a GameInstance with some essential EOS Functions, like creating a session.
Inside the UE Project, is a simple Game with the ThridPersonTemplate and a Menu where you can Execute the GameInstance Functions that are exposed.
Last but not least a small Server Browser inside the Menu, but because of limations that aren't actual sessions. 
What do I mean by that? Yeah, I couldn't find a way how I could expose those EOS Sessions from C++ to Blueprint, so I just wrote some helper functions that handle everything by the Index of that sessions Array. Just a little workaround.

# Where is the EOS functionality ?
All of the Functions can be found under the Source Folder, the EOSGameInstance contains all of the Code for the Epic Online Services and exposes most of them to Blueprint. So you can use these inside of Blueprint. 
