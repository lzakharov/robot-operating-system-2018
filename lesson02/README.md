# Lesson 2

12.09.2018

## Running ROS

Assign host IP address to environment variable ([`fish`](https://fishshell.com)):

```
set -x HOSTNAME (ifconfig en0 | grep inet | awk '$1=="inet" {print $2}')
```

Create bridge between a network socket with a TCP listener on port 6000 (the default port of the X window system) and the X window server on OS X host:

```
socat TCP-LISTEN:6000,reuseaddr,fork UNIX-CLIENT:\"$DISPLAY\"
```

Build and run ROS nodes with the [Docker Compose](https://docs.docker.com/compose/):

```
docker-compose up
```

Connect to the docker container with `turtlesim`:

```
docker exec -it lesson02_turtlesim_1 bash -c 'source /opt/ros/kinetic/setup.bash && bash'
```

Drive the turtle around:

```
rosrun turtlesim turtle_teleop_key
```

Publish messages to turtlesim telling it how to move. For example:

```
rostopic pub /turtle1/cmd_vel geometry_msgs/Twist -r 1 -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, -1.8]'
```

Bring docker containers with ROS down:

```
docker-compose down
```
