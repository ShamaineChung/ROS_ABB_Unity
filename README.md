# RoSTAR: ROS-based Telerobotic Control via Augmented Reality

- Master dissertation,Chung Xue Er (Shamaine), August 2021. 

- Youtube demo: https://www.youtube.com/watch?v=7X5X7D9xEQE&ab_channel=ShamaineChung

- This project has emanated from research conducted with the financial support of Science Foundation Ireland (SFI) under grant number SFI/16/RC/3918, co-funded by CONFIRM Smart Manufacturing and Robotics & Drives Ltd during the Master Computing by Research program at Athlone Institute of Technology. 

# Project Description

The RoSTAR project bridges the ABB IRB1200_5_90 robot arm with the Microsoft HoloLens 2, through [ROS#](https://github.com/siemens/ros-sharp).RoSTAR enables the user to interact and communicate with an ABB robotic arm (both real and virtual) with a HoloLens 2 headset. Computer vision-based Vuforia SDK is utilized to track and register the virtual robotic arm at a fixed position via the Hololens2 front-facing camera's coordinate system without the need of complex sensors and external RGB cameras. The virtual robot’s end-effector pose at the camera’s local coordinate frame is then transform into the world coordinate frame. The Unity world coordinate frame is converted to ROS world coordinate frame.  This allows the user to teleoperate the ROS-enabled ABB robotic arm seamlessly from a distance through the method of augmented trajectories.

This project heavily relies on ROS# developed and maintained by Siemens. More specifically, it is a fork of siemens/ros-sharp (https://github.com/siemens/ros-sharp)


Please cite using the following BibTex entry:

```
 @MastersThesis{ShamaineChung2021,
  title={RoSTAR: ROS-based Telerobotic Control via Augmented Reality},
  author={Shamaine, Niall, YuanSong},
  school={Athlone Institute of Technology, Ireland},
  year=2021,
  publisher = {GitHub}
  howpublished = {\url{https://github.com/ShamaineChung/ROS_ABB_Unity}},
}
```
# Unity Configuration

## System Requirements
* Unity: LTS Release v. 2019.4.27f1(21 May, 2021), https://unity3d.com/unity/qa/lts-releases.
* MixedRealityToolkit-Unity: v. 2019.2.3.0 
  https://github.com/microsoft/MixedRealityToolkit-Unity
* ROS#: v. 1.5
  https://github.com/siemens/ros-sharp
* Vuforia Engine: v. 9.8.5
  https://developer.vuforia.com/
* Visual Studio: Visual Studio Community 2019 16.6.5
  https://visualstudio.microsoft.com/vs/community/.
  
  Download the Vuforia Image Target in A4 Size here:
  ![LI_TI2](https://user-images.githubusercontent.com/86027470/125611868-ab43e4e7-4667-4a7f-872f-6a2d35a07cac.jpg)

  
# ROS Configuration

ROS Server Catkin_Workspace is available  at the following link: https://github.com/ShamaineChung/ROS_ABB_workspace
