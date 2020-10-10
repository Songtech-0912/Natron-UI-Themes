Natron 
======

[![GPL2 License](http://img.shields.io/:license-gpl2-blue.svg?style=flat-square)](https://github.com/NatronGitHub/Natron/blob/master/LICENSE) [![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-v1.4%20adopted-ff69b4.svg)](code-of-conduct.md) [![Open Hub](https://www.openhub.net/p/Natron/widgets/project_thin_badge?format=gif&ref=Thin+badge)](https://www.openhub.net/p/Natron?ref=Thin+badge) [![Build Status](https://api.travis-ci.org/NatronGitHub/Natron.png?branch=master)](https://travis-ci.org/NatronGitHub/Natron) [![Coverage Status](https://coveralls.io/repos/NatronGitHub/Natron/badge.png?branch=master)](https://coveralls.io/r/NatronGitHub/Natron?branch=master) [![Coverity Scan Build Status](https://scan.coverity.com/projects/15152/badge.svg)](https://scan.coverity.com/projects/natrongithub-natron "Coverity Badge") [![Documentation Status](https://readthedocs.org/projects/natron/badge/?version=rb-2.3)](http://natron.readthedocs.io/en/rb-2.3/) [![Packaging status](https://repology.org/badge/tiny-repos/natron.svg)](https://repology.org/project/natron/badges) [![BountySource Status](https://api.bountysource.com/badge/team?team_id=271309)](https://www.bountysource.com/teams/natrongithub/issues?utm_source=Mozilla&utm_medium=shield&utm_campaign=bounties_received)


Natron is a free open-source (GPLv2 license) video compositing
software, similar in functionality to Adobe After Effects, Nuke by The
Foundry, or Blackmagic Fusion. It is portable and cross-platform (GNU/Linux, OS X, Microsoft Windows). To learn more, go to Natron's [Github](https://github.com/NatronGitHub/Natron).

This repository contains several UI themes for Natron that aim to enhance Natron's UI and user experience. 

* Material Dark Theme
* Material Light Theme
* Cobalt Theme
* Midnight Theme
* Ocean Theme
* Pale Moon Theme

Help wanted
-----------

If you're a designer or Natron enthusiast, come aboard! Expertise in any of the following would benefit this project greatly:

* Compositing
* VFX
* OFX Standard
* UI Design
* UX Design
* Prototyping
* Layout
* Software Packaging & Distribution


Installing
----------

### Binary distribution ###

Standalone binary distributions of Natron are available for [GNU/Linux](https://sourceforge.net/projects/natron/files/Linux/),
[Windows](https://sourceforge.net/projects/natron/files/Windows/) and [macOS](https://sourceforge.net/projects/natron/files/OSX/) from [SourceForge](https://sourceforge.net/projects/natron/files) (releases and examples only) or from [the Natron web site](https://natrongithub.github.io/#download). These distributions contain Natron and three basic sets of OpenFX plugins:
* [openfx-io](https://github.com/NatronGitHub/openfx-io/),
* [openfx-misc](https://github.com/NatronGitHub/openfx-misc),
* [openfx-arena](https://github.com/NatronGitHub/openfx-arena).
* [openfx-gmic](https://github.com/NatronGitHub/openfx-gmic).

For each architecture / operating system, you can either download a stable release, a release candidate (if available), or one of the latest snapshots. Note that snapshots contain the latest features and bug fixes, but may be unstable.

### Building and installing from source ###

There are instructions for building Natron and the basic plugins from source is this directory on various architectures / operating systems:
* [GNU/Linux](INSTALL_LINUX.md)
* [OS X](INSTALL_OSX.md)
* [FreeBSD](INSTALL_FREEBSD.md)
* [Windows](INSTALL_WINDOWS.md)

This documentation may be slightly outdated, so do not hesitate to submit updated build instructions, especially for the various GNU/Linux distributions.

### Automatic build scripts ###

There are automatic build scripts for [GNU/Linux](tools/linux), [OS X](tools/MacOSX), and [Windows](tools/Windows), which are used to build the binary distributions and the snapshots.

These scripts are run on virtual machines running a specific version of each operating system, and setting these up is more complicated than for the basic builds described above.

There is some documentation, which is probably outdated, for [GNU/Linux](tools/linux/README.md), [OS X](tools/MacOSX/README.md), and [Windows](tools/WindowsREADME.md).


Requirements
------------

A machine running one of the supported operating systems (GNU/Linux, OS X,
Microsoft Windows), and a 32-bits x86 or 64-bits x86-64 processor.

An OpenGL 2.0 compatible graphics card is needed to run Natron (2.1+) with hardware-accelerated rendering. Other graphics cards work with software-only rendering (see below).

The following graphics cards are supported for hardware-accelerated rendering:

* Intel GMA 3150 (Linux-only)
* Intel GMA X3xxx (Linux-only)
* Intel GMA X4xxx (Windows 7 & Linux)
* Intel HD (Ironlake) (Windows 7 & Linux)
* Intel HD 2000/3000 (Sandy Bridge) (Windows 7/Linux/Mac)
* Intel HD 4000 and greater (All platforms)
* Nvidia GeForce 6 series and greater
* Nvidia Quadro FX and greater
* Nvidia Quadro NVS 285 and greater
* ATI/AMD Radeon R300 and greater
* ATI/AMD FireGL T2-64 and greater (FirePro)

On Windows and Linux you can enable software rendering. On Linux, enable the environment variable LIBGL_ALWAYS_SOFTWARE=1 before running Natron. On Windows, enable the legacy hardware package in the installer.

Contributing
------------

### Documentation

Currently, this project is in dire need of good documentation. For some examples:

* Theming guidelines need to be made
* Style Guides need to be created
* Standardized QSS themes need to be easily accesible

I would greatly appreciate any contributors to documentaion. Learn more about documentation [here](#).

### Design

Got an idea for a brilliant, cool theme? Share me your designs [here](https://github.com/Songtech-0912/natron-ui-ux-design)!

### Coordination & Planning

### Bug Tracking & Reporting


## Contact

If you have any questions about this project, feel free to contact me at jacky.song1020@gmail.com