
SMRF Cooja Simulation
=====================

This README explains how to set up and run a Cooja SMRF simulation on Contiki. 

## Overview

In this README you will find instructions on how to modify the basic Cooja files contained in the `ipv6/multicast` of the examples section, in order to set up a working simulation. You will also find instructions on how to set up the simulation motes, and load the right scripts for them to communicate.

## Installing Files

Before installing the files of this repository, it's important to mention that these files work only with the git version of the Contiki core files. This is because the files relevant to ipv6 that come with the OS installation are outdated. So, before installation, you must first clone the contents of [this git repository](https://github.com/contiki-os/contiki).

Clone the contents of this repository into a new folder in the examples section, in `examples/ipv6/SMRF`. This version of the cooja multicast example files has modified settings in order to achieve a working SMRF simulation, hence the name. The most important files used for this purpose are `root.c`, `sink.c` and `project-conf.h`, which have all been modified to work.

## Setting up the Simulation

After running Cooja, you have to create a new simulation with default settings. After a new simulation is created you must add two kinds of motes:

- The fisrt kind is a root mote. Click on `Motes`, `Add mote`, `Create new mote type`, select a Sky Mote and name it `root`. When selecting the firmware go to your `examples/ipv6/SMRF` folder, inside the Contiki Git files, and select `root.c` and then compile. After this, click `create` and add 1 instance of the root mote.

![alt text](https://raw.githubusercontent.com/mtsvr/smrf-sim/master/imgs/create_mote.png " ")

![alt text](https://raw.githubusercontent.com/mtsvr/smrf-sim/master/imgs/compile_root.png " ")

- The second kind is a sink mote. Go to `add mote`, select a Sky Mote and name it `sink`. When selecting the firmware go to `examples/ipv6/SMRF` and select `sink.c` and compile it. After it's compiled, click `create` and add any number of instances of the sink mote.

![alt text](https://raw.githubusercontent.com/mtsvr/smrf-sim/master/imgs/compile_sink.png " ")

There exists a third kind of mote: the intermediate. These motes, when added into the simulation, only forward the multicast packets but donot subscribe to the multicast group, so they dont receive the message themselves. To create these motes, it's only needed to load the `intermediate.c` firmware.

## Running the Simulation

After you have added the necessary motes for the simulation (which can be in any position), you can start the simulation by clicking on `start`. 

![alt text](https://raw.githubusercontent.com/mtsvr/smrf-sim/master/imgs/mote_view.png " ")

After you have started running the simulation, you can go to the `view` window Tools and select `radio messages`, which will allow you to visualize the communication between motes. At first no multicast messages will be sent, but once the RPL tree has converged the root mote (which, if you created it first, will be mote number 1), will start sendind multicast messages. The multicast communication can be seen on the Mote Output window, as shown in the next figure.

![alt text](https://raw.githubusercontent.com/mtsvr/smrf-sim/master/imgs/mote_output.png " ")

The multicast communication will be shown as a message originating from the root node, and then Mote Output will list all the motes to which the message has arrived, in order of arrival.

![alt text](https://raw.githubusercontent.com/mtsvr/smrf-sim/master/imgs/mote_output_short.png " ")

## Extras

Included in this repository there is a document that can be used as guidelines to understand the behaviour of the different RPL based multicast schemes out there (SMRF, ESMRF and BMRF).



