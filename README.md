# EOSTemplate
My UE5 Template for future Epic Online Services (EOS) Projects.

# What does it contain ?
It contains a GameInstance with some essential EOS Functions, like creating a session.
Inside the UE Project, is a simple Game with the ThridPersonTemplate and a Menu where you can Execute the GameInstance Functions that are exposed.
Last but not least a small Server Browser inside the Menu, but because of limations that aren't actual sessions. 
What do I mean by that? Yeah, I couldn't find a way how I could expose those EOS Sessions from C++ to Blueprint, so I just wrote some helper functions that handle everything by the Index of that sessions Array. Just a little workaround.

# Where is the EOS Code ?
All of the Functions can be found under the Source Folder, the EOSGameInstance contains all of the Code for the Epic Online Services and exposes most of them to Blueprint. So you can use these inside of Blueprint. 