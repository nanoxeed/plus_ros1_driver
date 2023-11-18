import rospy
from sensor_msgs.msg import Joy
import time


rospy.init_node("joy_test", anonymous=True)
pub = rospy.Publisher("joy", Joy, queue_size=10)
value = 0.2

# Forward
msg = Joy()
msg.axes = [0, value, 0, 0, 0, value]
pub.publish(msg)
time.sleep(2)

# Left
msg = Joy()
msg.axes = [0, -value, 0, 0, 0, value]
pub.publish(msg)
time.sleep(3)

# Forward
msg = Joy()
msg.axes = [0, value, 0, 0, 0, value]
pub.publish(msg)
time.sleep(2)

# Stop
msg = Joy()
msg.axes = [0, 0, 0, 0, 0, 0]
pub.publish(msg)
time.sleep(1)
