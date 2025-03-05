Hello! Thank you for viewing this. This is a WIP project of mine for a Suikoden 2 Autosplitter. PC games typically read RAM values to determine the correct time to split,
but that would be a little awkward to have to hook something up to your PS1 to do so for Suikoden 2. So instead I plan on using OpenCV to read capture card imagery and check
if a portion of the BGR values matches the desired frame to split on. It's still in its very early stages as I am a college student still, but I plan on working on it when I can.

Currently there is no actual functionality with capture cards or livesplit, just some of the base functions.

Thanks!

-Carter / Gentrum

Configure the build:

mkdir build
cmake -S . -B build

Build in debug
cmake --build build
.\build\Debug\runTests.exe