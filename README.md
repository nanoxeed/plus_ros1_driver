# plus_ros1_driver

LifeTechRoboticsの[Plus](https://ltrobo.com/%e5%b0%8f%e5%9e%8b%e8%b5%b0%e8%a1%8c%e3%83%ad%e3%83%9c%e3%83%83%e3%83%88-plus/)をGUIもしくはジョイスティックで動かすためのROSパッケージです。

ROS2版はこちら(https://github.com/takemoto-ltr/plus_joypad)

## Getting started

```sh
cd $CATKIN_WS/src
git clone https://github.com/neka-nat/plus_ros1_driver.git
catkin build
```

## PS4コントローラを使用する場合

```sh
sudo apt install bluez
pip install ds4drv
ds4drv
# PS4コントローラのホームとSHAREを同時押して接続
```

## Launch

PS4コントローラを使用する場合

```sh
roslaunch plus_ros1_driver joy_control.launch ip:=<plusのIPアドレス>
```

GUIを使用する場合

```sh
roslaunch plus_ros1_driver ui_control.launch ip:=<plusのIPアドレス>
```
