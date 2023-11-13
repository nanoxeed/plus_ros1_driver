# plus_ros1_driver

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
```

## Launch

```sh
roslaunch plus_ros1_driver joy_control.launch ip:=<plusのIPアドレス>
```
