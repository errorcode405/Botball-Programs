#include <kipr/wombat.h>
#include "library.h"
int main()
{
    printf("Hello World\n");
    wait_for_light(3);
    shut_down_in(119);
    enable_servos();
    set_servo_position(0,2047);
    msleep(250);
    ao();
    while(analog(0) < 3800)
    {
        motor(0,-100);
        motor(3,-100);
    }
    ao();
    msleep(500);
    cmpc(3);
    while(gmpc(3) > -250)
    {
        motor(3,-50);
        motor(0,50);
    }
    ao();
    cmpc(1);
    while(gmpc(1) > -800)
    {
        motor(1,-50);
    }
    ao();
    cmpc(3);
    while(gmpc(3) < 1000)
    {
        motor(3,100);
        motor(0,-20);
    }
    ao();
    cmpc(0);
    while(gmpc(0) < 2500)
    {
        motor(0,100);
        motor(3,90);
    }
    ao();
    msleep(250);
    cmpc(3);
    while(gmpc(3) > -2000)
    {
        motor(3,-100);
        motor(0,-10);
    }
    ao();
    motor(0,-90);
    motor(3,-100);
    msleep(1000);
    ao();
    msleep(250);
    linefollow();
    ao();
    msleep(250);
    motor(0,50);
    motor(3,50);
    msleep(750);
    ao();
    motor(0,5);
    motor(3,-30);
    msleep(3750);
    ao();
    motor(0,-25);
    motor(3,-25);
    msleep(4000);
    ao();
    motor(3,-50);
    msleep(1000);
    motor(3,-50);
    msleep(2250);
    while(analog(0) < 3800)
    {
        motor(0,-50);
        motor(3,-50);
    }
    ao();
    msleep(250);
    printf("end of demo code");
    cmpc(1);
    while(gmpc(1) < 800)
        motor(1,25);
    ao();
    while(analog(1) < 3000)
    {
        motor(0,50);
        motor(3,50);
    }
    ao();
    motor(3,100);
    msleep(1600);
    ao();
    while(analog(0) < 3800)
    {
        motor(0,75);
        motor(3,75);
    }
    ao();
    motor(3,100);
    msleep(1300);
    ao();
    cmpc(0);
    while(gmpc(0) < 2500)
    {
        while(analog(0) < 3800)
        {
            motor(0,5);
            motor(3,100);
        }
        while(analog(0) > 3800)
        {
            motor(3,5);
            motor(0,100);
        }
    }
    ao();
    motor(0,100);
    msleep(750);
    ao();
    motor(0,100);
    motor(3,100);
    msleep(250);
    ao();
    motor(0,100);
    msleep(1100);
    ao();
    motor(0,-100);
    motor(3,-100);
    msleep(1750);
    ao();
    motor(0,90);
    motor(3,100);
    msleep(1750);
    ao();
    motor(0,50);
    motor(3,50);
    msleep(250);
    ao();
    motor(3,100);
    msleep(1600);
    ao();
    motor(0,100);
    motor(3,100);
    msleep(500);
    ao();
    printf("end of ramp");
    motor(0,-100);
    motor(3,-100);
    msleep(500);
    ao();
    motor(0,-50);
    motor(3,-50);
    msleep(3000);
    printf("turn/n");
    ao();
    motor(0,-25);
    motor(3,25);
    msleep(250);
    ao();
    while(analog(2) < 1800)
    {
        while(analog(1) < 3000)
        {
            motor(0,-100);
            motor(3,-5);
        }
        while(analog(1) > 3000)
        {
            motor(3,-100);
            motor(0,-5);
        }
    }
    ao();
    msleep(250);
    enable_servos();
    set_servo_position(0,0);
    msleep(250);
    ao();
    motor(3,-50);
    motor(0,-50);
    msleep(1000);
    ao();
    motor(3,-100);
    msleep(650);
    ao();
    motor(0,-100);
    motor(3,-100);
    msleep(250);
    ao();
    motor(3,-100);
    msleep(650);
    ao();
    motor(0,-100);
    motor(3,-100);
    msleep(1500);
    ao();
    motor(0,100);
    motor(3,-100);
    msleep(1600);
    ao();
    while(digital(1) == 0)
    {
        while(analog(0) < 3900)
        {
            motor(0,100);
            motor(3,5);
        }
        while(analog(0) > 3900)
        {
            motor(3,100);
            motor(0,5);
        }
    }
    ao();
    set_servo_position(0,1015);
    msleep(250);
    ao();
    motor(0,-100);
    motor(3,-100);
    msleep(1000);
    ao();
    set_servo_position(0,500);
    msleep(250);
    ao();
    set_servo_position(0,2046);
    msleep(250);
    disable_servos();

    return 0;
}
