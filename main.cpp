#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>

int main()
{

    initwindow(1280,700,"MY Graphics Window");
    int i;
    float sunsp=4.5,mooonsp=2,carsp=6,bussp=4,cloudsp1=3, cloudsp2=3.5, cloudsp3=2;
//INTRO Start

        readimagefile("img/loading.jpg",380,270,530,320);
        readimagefile("img/wait.jpg",400,370,600,400);
        for(i=0; i<200; i++)
        {
            setfillstyle(SOLID_FILL,WHITE);
            bar(400,320,400+i,350);
            delay(10);
        }
        setfillstyle(SOLID_FILL,BLACK);
        bar(0,0,1280,700);
        delay(10);
        for(i=0; i<300; i++)
        {
            readimagefile("img/welcome1.jpg",1280-i*7,0,2560-i*5,700);
            delay(0.1);
        }
        setfillstyle(SOLID_FILL,BLACK);
        bar(0,0,1280,700);
        readimagefile("img/eubwel.jpg",0,0,1280,720);
        delay(3000);
        readimagefile("img/myintro.jpg",0,0,1280,720);
        delay(3000);
        readimagefile("img/mamintro.jpg",0,0,1280,720);
        delay(3000);
        setfillstyle(SOLID_FILL,BLACK);
        bar(0,0,1280,700);
        readimagefile("img/letstext1.jpg",0,0,1280,700);
        delay(3000);

        setfillstyle(SOLID_FILL,BLACK);
        bar(0,0,1280,700);
        cleardevice();

//END INTRO

    int page=0;
    for(i=0; i<500; i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

//Sky

        readimagefile("img/sky2.jpg",0,0,1280,410);
        if(i>135)
        {

            setfillstyle(SOLID_FILL,BLACK);
            bar(0,0,1280,410);
        }
//Star
        if(i>=138)
        {
            readimagefile("img/star.jpg",200,100,210,110);
            readimagefile("img/star.jpg",900,100,910,110);
        }
        if(i>=140)
        {
            readimagefile("img/star.jpg",250,90,260,100);
            readimagefile("img/star.jpg",950,90,960,100);
        }
        if(i>=144)
        {
            readimagefile("img/star.jpg",600,20,615,35);
             readimagefile("img/star.jpg",870,50,880,60);
        }

        if(i>=149)
        {
            readimagefile("img/star.jpg",550,90,560,100);
            readimagefile("img/star.jpg",300,70,315,85);
            readimagefile("img/star.jpg",1000,70,1015,85);
        }
        if(i>=155)
        {
            readimagefile("img/star.jpg",20,140,30,150);
            readimagefile("img/star.jpg",50,70,65,85);
        }
        if(i>=159)
        {
            readimagefile("img/star.jpg",1110,140,1120,150);
            readimagefile("img/star.jpg",1150,90,1165,105);
            setcolor(WHITE);
        }
        if(i>=164)
        {
        //Custom Star
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        ellipse(50,100,0,360,1.5,6);
        floodfill(50,100,WHITE);
        ellipse(50,100,0,360,6,1.5);
        floodfill(53,100,WHITE);
        floodfill(47,100,WHITE);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        ellipse(150,200,0,360,1.5,6);
        floodfill(150,200,WHITE);
        ellipse(150,200,0,360,6,1.5);
        floodfill(153,200,WHITE);
        floodfill(147,200,WHITE);
        }
//Star End
//Sun
        if(i<=135)
        {

            readimagefile("img/sun.jpg",40+(i*sunsp),40+i,70+(i*sunsp),70+i);
        }
//Moon
        if(i>138)
        {
           readimagefile("img/moon.jpg",400+(i*mooonsp),300-i,430+(i*mooonsp),330-i);
        }

//National Flag
        if(i<=135)
        {
            setfillstyle(SOLID_FILL,RED);
            bar(620,177,624,130);
            setfillstyle(SOLID_FILL,GREEN);
            bar(624,130,670,155);

            setfillstyle(SOLID_FILL,RED);
            setcolor(RED);
            circle(645,143,7);
            floodfill(646,144,RED);
        }
//Tree
        //Tree-1
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(30,340,27,410);
        line(30,340,33,410);
        line(27,410,33,410);
        floodfill(30,380,RED);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        circle(30,350,15);
        floodfill(33,355,GREEN);
        circle(20,360,15);
        floodfill(22,365,GREEN);
        circle(40,360,15);
        floodfill(42,365,GREEN);

        //Tree-2
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(120,340,117,410);
        line(120,340,123,410);
        line(117,410,123,410);
        floodfill(120,380,RED);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        circle(120,350,15);
        floodfill(123,355,GREEN);
        circle(110,360,15);
        floodfill(112,365,GREEN);
        circle(130,360,15);
        floodfill(132,365,GREEN);

        //Tree-3
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(370,370,367,410);
        line(370,370,373,410);
        line(367,410,373,410);
        floodfill(370,390,RED);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        line(360,382,380,382);
        line(360,382,370,362);
        line(370,362,380,382);
        floodfill(370,372,GREEN);

        line(360,367,380,367);
        line(360,367,370,347);
        line(370,347,380,367);
        floodfill(370,357,GREEN);

        //Tree-4
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(1020,340,1017,410);
        line(1020,340,1023,410);
        line(1017,410,1023,410);
        floodfill(1020,380,RED);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        circle(1020,350,15);
        floodfill(1023,355,GREEN);
        circle(1010,360,15);
        floodfill(1012,365,GREEN);
        circle(1030,360,15);
        floodfill(1032,365,GREEN);

        //Tree-5
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(1120,370,1117,410);
        line(1120,370,1123,410);
        line(1117,410,1123,410);
        floodfill(1120,390,RED);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        line(1110,382,1130,382);
        line(1110,382,1120,362);
        line(1120,362,1130,382);
        floodfill(1120,372,GREEN);

        line(1110,367,1130,367);
        line(1110,367,1120,347);
        line(1120,347,1130,367);
        floodfill(1120,357,GREEN);

        //Tree-6
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(1220,340,1217,410);
        line(1220,340,1223,410);
        line(1217,410,1223,410);
        floodfill(1220,380,RED);

        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        circle(1220,350,15);
        floodfill(1223,355,GREEN);
        circle(1210,360,15);
        floodfill(1212,365,GREEN);
        circle(1230,360,15);
        floodfill(1232,365,GREEN);

//Railing
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(70,380,67,410);
        line(70,380,73,410);
        line(67,410,73,410);
        floodfill(70,390,RED);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(1070,380,1067,410);
        line(1070,380,1073,410);
        line(1067,410,1073,410);
        floodfill(1070,390,RED);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(1170,380,1167,410);
        line(1170,380,1173,410);
        line(1167,410,1173,410);
        floodfill(1170,390,RED);

        //railing line
        setfillstyle(SOLID_FILL,RED);
        bar(0,390,1280,391);
        bar(0,393,1280,394);
        bar(0,396,1280,397);
        setfillstyle(SOLID_FILL,BLUE);
        bar(0,399,1280,440);

        bar(810,470,1280,471);
        bar(810,475,1280,476);
        bar(810,480,1280,481);
        bar(810,485,1280,486);

//Cloud
        //cloud-1
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(40+i*cloudsp1,40,15);
        floodfill(40+i*cloudsp1,40,WHITE);
        circle(48+i*cloudsp1,35,15);
        floodfill(55+i*cloudsp1,42,WHITE);
        circle(55+i*cloudsp1,40,15);
        floodfill(65+i*cloudsp1,40,WHITE);
        circle(70+i*cloudsp1,38,15);
        floodfill(78+i*cloudsp1,40,WHITE);
        delay(0.01);

        //cloud-2
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(1240-i*cloudsp2,80,15);
        floodfill(1240-i*cloudsp2,80,WHITE);
        circle(1248-i*cloudsp2,75,15);
        floodfill(1255-i*cloudsp2,82,WHITE);
        circle(1255-i*cloudsp2,80,15);
        floodfill(1265-i*cloudsp2,80,WHITE);
        circle(1270-i*cloudsp2,78,15);
        floodfill(1278-i*cloudsp2,80,WHITE);
        delay(0.01);

        //cloud-3
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(1040-i,120-(i/cloudsp3),15);
        floodfill(1040-i,120-(i/cloudsp3),WHITE);
        circle(1048-i,115-(i/cloudsp3),15);
        floodfill(1055-i,122-(i/cloudsp3),WHITE);
        circle(1055-i,120-(i/cloudsp3),15);
        floodfill(1065-i,120-(i/cloudsp3),WHITE);
        delay(0.01);

//Eub Ground

        readimagefile("img/eub2.jpg",445,350,470,405);
        readimagefile("img/eub2.jpg",785,350,810,405);
        if(i<=192)
        {
            readimagefile("img/grass3.jpg",0,410,1280,700);
            readimagefile("img/pic.jpg",100,425,170,450);
        }



//Ground Night Mode
        if(i>135)
        {
            setfillstyle(SOLID_FILL,GREEN);
            bar(70,425,200,470);
            bar(0,410,1280,700);
        }

//Main body
        //setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        bar(420,195,835,340);
        bar(500,175,755,195);
        if(i>135)
        {
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            bar(420,195,835,340);
            bar(500,175,755,195);
        }
        setcolor(WHITE);
        outtextxy(512,180,"European University of Bangladesh");

        //left side
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        bar(420,202,495,410);
        readimagefile("img/eub2.jpg",445,350,470,405);
        //left side corner
        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        line(495,430,420,410);
        line(420,410,495,410);
        line(495,410,495,430);
        floodfill(490,425,LIGHTGRAY);

        //right side
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        bar(760,202,835,410);
        readimagefile("img/eub2.jpg",785,350,810,405);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        line(760,430,835,410);
        line(835,410,760,410);
        line(760,410,760,430);
        floodfill(765,415,LIGHTGRAY);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        line(835,195,850,205);
        line(850,205,850,410);
        line(850,410,835,410);
        line(835,195,835,410);
        floodfill(840,200,WHITE);

        if(i>135)
        {
            setcolor(LIGHTGRAY);
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            line(835,195,850,205);
            line(850,205,850,410);
            line(850,410,835,410);
            line(835,195,835,410);
            floodfill(840,200,LIGHTGRAY);
        }

        //floor 1
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(425,208,455,220);
        floodfill(426,211,LIGHTBLUE);
        rectangle(460,208,490,220);
        floodfill(461,211,LIGHTBLUE);


        rectangle(500,204,524,226);
        floodfill(501,205,LIGHTBLUE);
        rectangle(526,204,550,226);
        floodfill(527,205,LIGHTBLUE);
        rectangle(555,204,574,226);
        floodfill(556,205,LIGHTBLUE);
        rectangle(576,204,600,226);
        floodfill(577,205,LIGHTBLUE);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        rectangle(605,204,645,226);
        floodfill(606,205,BLUE);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(650,204,674,226);
        floodfill(651,205,LIGHTBLUE);
        rectangle(676,204,700,226);
        floodfill(677,205,LIGHTBLUE);
        rectangle(705,204,729,226);
        floodfill(706,205,LIGHTBLUE);
        rectangle(731,204,755,226);
        floodfill(732,205,LIGHTBLUE);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(765,208,795,220);
        floodfill(766,211,LIGHTBLUE);
        rectangle(800,208,830,220);
        floodfill(801,211,LIGHTBLUE);

        //divider
        setcolor(WHITE);
        line(420,229,495,229);

        setcolor(WHITE);
        line(760,229,835,229);


        //floor 2
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(425,237,455,249);
        floodfill(426,239,LIGHTBLUE);
        rectangle(460,237,490,249);
        floodfill(461,238,LIGHTBLUE);


        rectangle(500,232,524,254);
        floodfill(501,233,LIGHTBLUE);
        rectangle(526,232,550,254);
        floodfill(527,233,LIGHTBLUE);
        rectangle(555,232,574,254);
        floodfill(556,233,LIGHTBLUE);
        rectangle(576,232,600,254);
        floodfill(577,233,LIGHTBLUE);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        rectangle(605,232,645,254);
        floodfill(606,233,BLUE);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(650,232,674,254);
        floodfill(651,233,LIGHTBLUE);
        rectangle(676,232,700,254);
        floodfill(677,233,LIGHTBLUE);
        rectangle(705,232,729,254);
        floodfill(706,233,LIGHTBLUE);
        rectangle(731,232,755,254);
        floodfill(732,233,LIGHTBLUE);


        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(765,237,795,249);
        floodfill(766,238,LIGHTBLUE);
        rectangle(800,237,830,249);
        floodfill(801,238,LIGHTBLUE);

        //divider
        setcolor(WHITE);
        line(420,257,495,257);

        setcolor(WHITE);
        line(760,257,835,257);

        //floor 3
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(425,265,455,277);
        floodfill(426,267,LIGHTBLUE);
        rectangle(460,265,490,277);
        floodfill(461,266,LIGHTBLUE);


        rectangle(500,260,524,282);
        floodfill(501,261,LIGHTBLUE);
        rectangle(526,260,550,282);
        floodfill(527,261,LIGHTBLUE);
        rectangle(555,260,574,282);
        floodfill(556,261,LIGHTBLUE);
        rectangle(576,260,600,282);
        floodfill(577,261,LIGHTBLUE);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        rectangle(605,260,645,282);
        floodfill(606,261,BLUE);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(650,260,674,282);
        floodfill(651,261,LIGHTBLUE);
        rectangle(676,260,700,282);
        floodfill(677,261,LIGHTBLUE);
        rectangle(705,260,729,282);
        floodfill(706,261,LIGHTBLUE);
        rectangle(731,260,755,282);
        floodfill(732,261,LIGHTBLUE);


        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(765,265,795,277);
        floodfill(766,266,LIGHTBLUE);
        rectangle(800,265,830,277);
        floodfill(801,266,LIGHTBLUE);

        //divider
        setcolor(WHITE);
        line(420,285,495,285);
        setcolor(WHITE);
        line(760,285,835,285);


        //floor 4
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(425,292,455,304);
        floodfill(426,293,LIGHTBLUE);
        rectangle(460,292,490,304);
        floodfill(461,293,LIGHTBLUE);


        rectangle(500,286,524,308);
        floodfill(501,287,LIGHTBLUE);
        rectangle(526,286,550,308);
        floodfill(527,287,LIGHTBLUE);
        rectangle(555,286,574,308);
        floodfill(556,287,LIGHTBLUE);
        rectangle(576,286,600,308);
        floodfill(577,287,LIGHTBLUE);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        rectangle(605,286,645,308);
        floodfill(606,287,BLUE);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(650,286,674,308);
        floodfill(651,287,LIGHTBLUE);
        rectangle(676,286,700,308);
        floodfill(677,287,LIGHTBLUE);
        rectangle(705,286,729,308);
        floodfill(706,287,LIGHTBLUE);
        rectangle(731,286,755,308);
        floodfill(732,287,LIGHTBLUE);



        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(765,292,795,304);
        floodfill(766,293,LIGHTBLUE);
        rectangle(800,292,830,304);
        floodfill(801,293,LIGHTBLUE);

        //divider
        setcolor(WHITE);
        line(420,313,495,313);
        setcolor(WHITE);
        line(760,313,835,313);

//Floor 5
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(425,321,455,333);
        floodfill(426,322,LIGHTBLUE);
        rectangle(460,321,490,333);
        floodfill(461,322,LIGHTBLUE);


        rectangle(500,314,524,336);
        floodfill(501,315,LIGHTBLUE);
        rectangle(526,314,550,336);
        floodfill(527,315,LIGHTBLUE);
        rectangle(555,314,574,336);
        floodfill(556,315,LIGHTBLUE);
        rectangle(576,314,600,336);
        floodfill(577,315,LIGHTBLUE);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        rectangle(605,314,645,336);
        floodfill(606,315,BLUE);

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(650,314,674,336);
        floodfill(651,315,LIGHTBLUE);
        rectangle(676,314,700,336);
        floodfill(677,315,LIGHTBLUE);
        rectangle(705,314,729,336);
        floodfill(706,315,LIGHTBLUE);
        rectangle(731,314,755,336);
        floodfill(732,315,LIGHTBLUE);


        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(765,321,795,333);
        floodfill(766,322,LIGHTBLUE);
        rectangle(800,321,830,333);
        floodfill(801,322,LIGHTBLUE);

        //divider
        setcolor(WHITE);
        line(420,341,495,341);
        setcolor(WHITE);
        line(760,341,835,341);


        // rectangle(450,)


//Ground floor
        //Eub Name
        setfillstyle(SOLID_FILL,WHITE);
        bar(495,340,760,410);

        if(i<=135)
        {
            readimagefile("img/window.jpg",510,370,525,385);
            readimagefile("img/window.jpg",725,370,740,385);
            readimagefile("img/gate3.jpg",550,360,580,410);
            readimagefile("img/gate3.jpg",680,360,710,410);
        }
        if(i>135)
        {
            setfillstyle(4,LIGHTGRAY);
            bar(495,340,760,410);
            setfillstyle(SOLID_FILL,WHITE);
            bar(605,340,650,410);
        }
        readimagefile("img/eublogo.jpg",610,360,645,395);
        setfillstyle(SOLID_FILL,BLACK);
        bar(497,340,759,358);
        outtextxy(512,340,"European University of Bangladesh");

//Eub Stair
        setfillstyle(SOLID_FILL,DARKGRAY);
        bar(495,402,761,412);
        bar(507,416,748,424);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        bar(515,408,740,416);
        bar(495,424,760,430);


//EUB Building End

//EUB Ground Road
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,DARKGRAY);
        line(460,494,495,430);
        line(495,430,760,430);
        line(800,494,760,430);
        line(800,494,460,494);
        floodfill(490,465,DARKGRAY);

//Eub lounge Restaurant
        setfillstyle(SOLID_FILL,LIGHTRED);
        bar(880,335,1020,410);
        bar(865,315,1035,330);
        setfillstyle(SOLID_FILL,RED);
        bar(870,330,1030,335);
        bar(875,335,1025,345);
        setfillstyle(SOLID_FILL,WHITE);
        bar(885,335,895,345);
        bar(905,335,915,345);
        bar(925,335,935,345);
        bar(945,335,955,345);
        bar(965,335,975,345);
        bar(985,335,995,345);
        bar(1005,335,1015,345);
        bar(880,345,1020,350);


        setfillstyle(SOLID_FILL,BLUE);
        bar(896,355,918,385);
        bar(892,385,922,390);
        bar(875,410,1025,420);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(880,395,1020,410);
        setfillstyle(SOLID_FILL,YELLOW);
        bar(898,357,916,383);
        setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        bar(935,410,965,415);
        setfillstyle(SOLID_FILL,MAGENTA);
        bar(930,415,970,420);
        setfillstyle(SOLID_FILL,DARKGRAY);
        bar(935,360,965,410);
        setfillstyle(SOLID_FILL,YELLOW);
        bar(940,365,960,390);
        setfillstyle(SOLID_FILL,BLACK);
        bar(942,393,945,398);

//Restaurant Night Mode
        if(i>135)
        {
            setfillstyle(SOLID_FILL,BLACK);
            bar(940,365,960,390);
            bar(898,357,916,383);
        }

        readimagefile("img/restaurant.jpg",895,316,1005,329);
        readimagefile("img/eublunch.jpg",975,360,1005,380);

//Stationery Shop
        setfillstyle(SOLID_FILL,LIGHTRED);
        bar(140,400,350,407);
        setfillstyle(SOLID_FILL,RED);
        bar(135,407,355,415);
        setfillstyle(SOLID_FILL,DARKGRAY);
        bar(145,310,345,400);
        setfillstyle(SOLID_FILL,WHITE);
        bar(140,396,350,400);
        bar(340,390,350,395);
        bar(340,382,350,387);
        bar(340,374,350,379);
        bar(340,366,350,371);
        bar(340,358,350,363);
        bar(340,350,350,355);
        bar(340,342,350,347);
        bar(340,334,350,339);
        bar(340,326,350,331);

        bar(140,390,150,395);
        bar(140,382,150,387);
        bar(140,374,150,379);
        bar(140,366,150,371);
        bar(140,358,150,363);
        bar(140,350,150,355);
        bar(140,342,150,347);
        bar(140,334,150,339);
        bar(140,326,150,331);

        bar(140,326,350,329);

        setfillstyle(SOLID_FILL,RED);
        bar(140,321,350,325);
        setfillstyle(SOLID_FILL,LIGHTRED);
        bar(130,300,360,321);
        setcolor(WHITE);
        outtextxy(190,305,"img/Stationery Shop");
        if(i<=135)
        {
            readimagefile("img/desk.jpg",245,345,330,395);
            readimagefile("img/maindesk.jpg",160,345,210,370);
        }


        //Stationery Road
        setfillstyle(SOLID_FILL,DARKGRAY);
        bar(240,415,280,430);
        bar(240,430,495,450);

//Stationery Night Mode
        if(i>=135)
        {
            setfillstyle(4,DARKGRAY);
            bar(150,330,340,400);
            setfillstyle(SOLID_FILL,BLUE);
            bar(150,330,340,340);
            setfillstyle(SOLID_FILL,RED);
            bar(237,340,253,400);
        }
//Car-1
        //car body
        setfillstyle(SOLID_FILL,BLACK);
        setcolor(WHITE);
        bar(910,435,960,477);
        outtextxy(912,446,"EUB");
        setfillstyle(SOLID_FILL,WHITE);
        bar(960,445,985,480);
        bar(985,465,1005,480);
        setfillstyle(SOLID_FILL,BLUE);
        bar(968,453,984,462);

        setfillstyle(SOLID_FILL,WHITE);
        setcolor(WHITE);
        line(985,445,1005,465);
        line(1005,465,985,465);
        line(985,465,985,445);
        floodfill(988,458,WHITE);
        circle(1002,472.5,7.5);
        floodfill(1006,475,WHITE);

        //Wheel-1

        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(985,480,8);
        floodfill(985,481,BLACK);

        //Wheel-2
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(935,475,10);
        floodfill(935,478,WHITE);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(935,475,5);
        floodfill(935,476,BLACK);
        circle(935,475,12);
        floodfill(935,478,BLACK);
//Bus-2
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(395,435,530,480);
        bar(530,457,536,480);
        bar(530,435,534,440);


        setfillstyle(SOLID_FILL,RED);
        bar(395,465,520,470);
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        //window
        bar(415,443,435,457);
        bar(445,443,465,457);
        bar(475,443,495,457);
        bar(530,440,534,460);

        bar(508,440,524,478);//door

        bar(400,443,408,444);
        bar(400,446,408,447);
        bar(400,449,408,450);
        bar(400,452,408,453);
        bar(400,455,408,456);

        setfillstyle(SOLID_FILL,WHITE);
        bar(516,442,517,476);

        //wheel-1
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(496,478,10);
        floodfill(496,478,BLUE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(496,478,5);
        floodfill(496,478,WHITE);

        //wheel-2
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(439,478,10);
        floodfill(439,474,BLUE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(439,478,5);
        floodfill(439,474,WHITE);

        //wheel-3
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(416,478,10);
        floodfill(416,474,BLUE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(416,478,5);
        floodfill(416,474,WHITE);

        //Bus Top
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        bar(400,432,410,435);
        bar(415,430,450,435);
        bar(450,432,515,435);

//Street Light
        setfillstyle(SOLID_FILL,RED);
        bar(0,470,448,471);
        bar(0,475,448,476);
        bar(0,480,448,481);
        bar(0,485,448,486);

        bar(810,470,1280,471);
        bar(810,475,1280,476);
        bar(810,480,1280,481);
        bar(810,485,1280,486);

        //light-1
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(90,454,8);
        floodfill(90,454,WHITE);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(90,494,0,180,10,5);
        line(80,494,100,494);
        floodfill(88,492,BLACK);
        bar(88,494,92,460);
        bar(84,460,96,464);

        //light-2
        setcolor(LIGHTMAGENTA);
        setfillstyle(SOLID_FILL,WHITE);
        circle(210,454,8);
        floodfill(210,454,LIGHTMAGENTA);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(210,494,0,180,10,5);
        line(200,494,220,494);
        floodfill(208,492,BLACK);
        bar(208,494,212,460);
        bar(204,460,216,464);

        //light-3
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,WHITE);
        circle(330,454,8);
        floodfill(330,454,YELLOW);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(330,494,0,180,10,5);
        line(320,494,340,494);
        floodfill(328,492,BLACK);
        bar(328,494,332,460);
        bar(324,460,336,464);

        //light-4
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,WHITE);
        circle(450,454,8);
        floodfill(450,454,LIGHTCYAN);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(450,494,0,180,10,5);
        line(440,494,460,494);
        floodfill(448,492,BLACK);
        bar(448,494,452,460);
        bar(444,460,456,464);

        //light-5
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,WHITE);
        circle(810,454,8);
        floodfill(810,454,LIGHTCYAN);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(810,494,0,180,10,5);
        line(800,494,820,494);
        floodfill(808,492,BLACK);
        bar(808,494,812,460);
        bar(804,460,816,464);

        //light-6
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,WHITE);
        circle(930,454,8);
        floodfill(930,454,YELLOW);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(930,494,0,180,10,5);
        line(920,494,940,494);
        floodfill(928,492,BLACK);
        bar(928,494,932,460);
        bar(924,460,936,464);

        //light-7
        setcolor(LIGHTMAGENTA);
        setfillstyle(SOLID_FILL,WHITE);
        circle(1050,454,8);
        floodfill(1050,454,LIGHTMAGENTA);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(1050,494,0,180,10,5);
        line(1040,494,1060,494);
        floodfill(1048,492,BLACK);
        bar(1048,494,1052,460);
        bar(1044,460,1056,464);

        //light-8
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(1170,454,8);
        floodfill(1170,454,WHITE);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(1170,494,0,180,10,5);
        line(1160,494,1180,494);
        floodfill(1168,492,BLACK);
        bar(1168,494,1172,460);
        bar(1164,460,1176,464);

//Street Light Night Mode
        if(i>135)
        {
            //light-1
            setcolor(LIGHTRED);
            setfillstyle(SOLID_FILL,LIGHTRED);
            circle(90,454,8);
            floodfill(90,454,LIGHTRED);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(90,494,0,180,10,5);
            line(80,494,100,494);
            floodfill(88,492,BLACK);
            bar(88,494,92,460);
            bar(84,460,96,464);

            //light-2
            setcolor(LIGHTMAGENTA);
            setfillstyle(SOLID_FILL,LIGHTMAGENTA);
            circle(210,454,8);
            floodfill(210,454,LIGHTMAGENTA);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(210,494,0,180,10,5);
            line(200,494,220,494);
            floodfill(208,492,BLACK);
            bar(208,494,212,460);
            bar(204,460,216,464);

            //light-3
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            circle(330,454,8);
            floodfill(330,454,YELLOW);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(330,494,0,180,10,5);
            line(320,494,340,494);
            floodfill(328,492,BLACK);
            bar(328,494,332,460);
            bar(324,460,336,464);

            //light-4
            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            circle(450,454,8);
            floodfill(450,454,LIGHTCYAN);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(450,494,0,180,10,5);
            line(440,494,460,494);
            floodfill(448,492,BLACK);
            bar(448,494,452,460);
            bar(444,460,456,464);

            //light-5
            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            circle(810,454,8);
            floodfill(810,454,LIGHTCYAN);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(810,494,0,180,10,5);
            line(800,494,820,494);
            floodfill(808,492,BLACK);
            bar(808,494,812,460);
            bar(804,460,816,464);

            //light-6
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            circle(930,454,8);
            floodfill(930,454,YELLOW);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(930,494,0,180,10,5);
            line(920,494,940,494);
            floodfill(928,492,BLACK);
            bar(928,494,932,460);
            bar(924,460,936,464);

            //light-7
            setcolor(LIGHTMAGENTA);
            setfillstyle(SOLID_FILL,LIGHTMAGENTA);
            circle(1050,454,8);
            floodfill(1050,454,LIGHTMAGENTA);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(1050,494,0,180,10,5);
            line(1040,494,1060,494);
            floodfill(1048,492,BLACK);
            bar(1048,494,1052,460);
            bar(1044,460,1056,464);

            //light-8
            setcolor(LIGHTGREEN);
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            circle(1170,454,8);
            floodfill(1170,454,LIGHTGREEN);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            ellipse(1170,494,0,180,10,5);
            line(1160,494,1180,494);
            floodfill(1168,492,BLACK);
            bar(1168,494,1172,460);
            bar(1164,460,1176,464);
        }

//Street Light End


//Main Road
        if(i<=135)
        {
            setfillstyle(SOLID_FILL,DARKGRAY);
            bar(0,504,1280,494);

            setfillstyle(9,DARKGRAY);
            bar(0,504,1280,650);
            setfillstyle(SOLID_FILL,LIGHTRED);
            bar(0,512,1280,518);
            setfillstyle(SOLID_FILL,WHITE);
            bar(0,504,20,512);
            bar(40,504,60,512);
            bar(80,504,100,512);
            bar(120,504,140,512);
            bar(160,504,180,512);
            bar(200,504,220,512);
            bar(240,504,260,512);
            bar(280,504,300,512);
            bar(320,504,340,512);
            bar(360,504,380,512);
            bar(400,504,420,512);
            bar(440,504,460,512);
            bar(480,504,500,512);
            bar(520,504,540,512);
            bar(560,504,580,512);
            bar(600,504,620,512);
            bar(640,504,660,512);
            bar(680,504,700,512);

            bar(720,504,740,512);
            bar(760,504,780,512);
            bar(800,504,820,512);
            bar(840,504,860,512);
            bar(880,504,900,512);

            bar(920,504,940,512);
            bar(960,504,980,512);
            bar(1000,504,1020,512);
            bar(1040,504,1060,512);
            bar(1080,504,1100,512);

            bar(1120,504,1140,512);
            bar(1160,504,1180,512);
            bar(1200,504,1220,512);
            bar(1240,504,1260,512);



            setfillstyle(SOLID_FILL,LIGHTRED);
            bar(0,632,1280,626);
            setfillstyle(SOLID_FILL,WHITE);
            bar(0,632,20,640);
            bar(40,632,60,640);
            bar(80,632,100,640);
            bar(120,632,140,640);
            bar(160,632,180,640);
            bar(200,632,220,640);
            bar(240,632,260,640);
            bar(280,632,300,640);
            bar(320,632,340,640);
            bar(360,632,380,640);
            bar(400,632,420,640);
            bar(440,632,460,640);
            bar(480,632,500,640);
            bar(520,632,540,640);
            bar(560,632,580,640);
            bar(600,632,620,640);
            bar(640,632,660,640);
            bar(680,632,700,640);

            bar(720,632,740,640);
            bar(760,632,780,640);
            bar(800,632,820,640);
            bar(840,632,860,640);
            bar(880,632,900,640);

            bar(920,632,940,640);
            bar(960,632,980,640);
            bar(1000,632,1020,640);
            bar(1040,632,1060,640);
            bar(1080,632,1100,640);

            bar(1120,632,1140,640);
            bar(1160,632,1180,640);
            bar(1200,632,1220,640);
            bar(1240,632,1260,640);

            setfillstyle(SOLID_FILL,WHITE);

            bar(0,574,20,578);
            bar(40,574,60,578);
            bar(80,574,100,578);
            bar(120,574,140,578);
            bar(160,574,180,578);
            bar(200,574,220,578);
            bar(240,574,260,578);
            bar(280,574,300,578);
            bar(320,574,340,578);
            bar(360,574,380,578);
            bar(400,574,420,578);
            bar(440,574,460,578);
            bar(480,574,500,578);
            bar(520,574,540,578);
            bar(560,574,580,578);
            bar(600,574,620,578);
            bar(640,574,660,578);
            bar(680,574,700,578);

            bar(720,574,740,578);
            bar(760,574,780,578);
            bar(800,574,820,578);
            bar(840,574,860,578);
            bar(880,574,900,578);

            bar(920,574,940,578);
            bar(960,574,980,578);
            bar(1000,574,1020,578);
            bar(1040,574,1060,578);
            bar(1080,574,1100,578);

            bar(1120,574,1140,578);
            bar(1160,574,1180,578);
            bar(1200,574,1220,578);
            bar(1240,574,1260,578);
        }

//Main Road Night Mode
        if(i>135)
        {

            setfillstyle(SOLID_FILL,DARKGRAY);
            bar(0,504,1280,494);

            setfillstyle(9,DARKGRAY);
            bar(0,504,1280,650);
            setfillstyle(SOLID_FILL,RED);
            bar(0,512,1280,518);
            setfillstyle(SOLID_FILL,DARKGRAY);
            bar(0,504,20,512);
            bar(40,504,60,512);
            bar(80,504,100,512);
            bar(120,504,140,512);
            bar(160,504,180,512);
            bar(200,504,220,512);
            bar(240,504,260,512);
            bar(280,504,300,512);
            bar(320,504,340,512);
            bar(360,504,380,512);
            bar(400,504,420,512);
            bar(440,504,460,512);
            bar(480,504,500,512);
            bar(520,504,540,512);
            bar(560,504,580,512);
            bar(600,504,620,512);
            bar(640,504,660,512);
            bar(680,504,700,512);

            bar(720,504,740,512);
            bar(760,504,780,512);
            bar(800,504,820,512);
            bar(840,504,860,512);
            bar(880,504,900,512);

            bar(920,504,940,512);
            bar(960,504,980,512);
            bar(1000,504,1020,512);
            bar(1040,504,1060,512);
            bar(1080,504,1100,512);

            bar(1120,504,1140,512);
            bar(1160,504,1180,512);
            bar(1200,504,1220,512);
            bar(1240,504,1260,512);



            setfillstyle(SOLID_FILL,RED);
            bar(0,632,1280,626);
            setfillstyle(SOLID_FILL,DARKGRAY);
            bar(0,632,20,640);
            bar(40,632,60,640);
            bar(80,632,100,640);
            bar(120,632,140,640);
            bar(160,632,180,640);
            bar(200,632,220,640);
            bar(240,632,260,640);
            bar(280,632,300,640);
            bar(320,632,340,640);
            bar(360,632,380,640);
            bar(400,632,420,640);
            bar(440,632,460,640);
            bar(480,632,500,640);
            bar(520,632,540,640);
            bar(560,632,580,640);
            bar(600,632,620,640);
            bar(640,632,660,640);
            bar(680,632,700,640);

            bar(720,632,740,640);
            bar(760,632,780,640);
            bar(800,632,820,640);
            bar(840,632,860,640);
            bar(880,632,900,640);

            bar(920,632,940,640);
            bar(960,632,980,640);
            bar(1000,632,1020,640);
            bar(1040,632,1060,640);
            bar(1080,632,1100,640);

            bar(1120,632,1140,640);
            bar(1160,632,1180,640);
            bar(1200,632,1220,640);
            bar(1240,632,1260,640);

            setfillstyle(SOLID_FILL,DARKGRAY);

            bar(0,574,20,578);
            bar(40,574,60,578);
            bar(80,574,100,578);
            bar(120,574,140,578);
            bar(160,574,180,578);
            bar(200,574,220,578);
            bar(240,574,260,578);
            bar(280,574,300,578);
            bar(320,574,340,578);
            bar(360,574,380,578);
            bar(400,574,420,578);
            bar(440,574,460,578);
            bar(480,574,500,578);
            bar(520,574,540,578);
            bar(560,574,580,578);
            bar(600,574,620,578);
            bar(640,574,660,578);
            bar(680,574,700,578);

            bar(720,574,740,578);
            bar(760,574,780,578);
            bar(800,574,820,578);
            bar(840,574,860,578);
            bar(880,574,900,578);

            bar(920,574,940,578);
            bar(960,574,980,578);
            bar(1000,574,1020,578);
            bar(1040,574,1060,578);
            bar(1080,574,1100,578);

            bar(1120,574,1140,578);
            bar(1160,574,1180,578);
            bar(1200,574,1220,578);
            bar(1240,574,1260,578);

        }

//Table
        //Custom table
        setfillstyle(SOLID_FILL,RED);
        bar(35,482,37,491);
        bar(30,467,32,493);
        bar(61,482,59,491);
        bar(65,467,63,493);
        readimagefile("img/tboard.jpg",28,467,67,469);
        readimagefile("img/tboard.jpg",28,472,67,474);
        readimagefile("img/tboard.jpg",28,477,67,479);
        readimagefile("img/tboard2.jpg",25,480,70,483);
        readimagefile("img/tboard.jpg",25,485,70,487);

//Bus
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(395+i*bussp,535,530+i*bussp,580);
        bar(530+i*bussp,557,536+i*bussp,580);
        bar(530+i*bussp,535,534+i*bussp,540);


        setfillstyle(SOLID_FILL,WHITE);
        bar(395+i*bussp,565,520+i*bussp,570);
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        //window
        bar(415+i*bussp,543,435+i*bussp,557);
        bar(445+i*bussp,543,465+i*bussp,557);
        bar(475+i*bussp,543,495+i*bussp,557);
        bar(530+i*bussp,540,534+i*bussp,560);

        bar(508+i*bussp,540,524+i*bussp,578);//door

        bar(400+i*bussp,543,408+i*bussp,544);
        bar(400+i*bussp,546,408+i*bussp,547);
        bar(400+i*bussp,549,408+i*bussp,550);
        bar(400+i*bussp,552,408+i*bussp,553);
        bar(400+i*bussp,555,408+i*bussp,556);

        if(i>135)
        {
             setfillstyle(SOLID_FILL,YELLOW);
        //window
        bar(415+i*bussp,543,435+i*bussp,557);
        bar(445+i*bussp,543,465+i*bussp,557);
        bar(475+i*bussp,543,495+i*bussp,557);
        bar(530+i*bussp,540,534+i*bussp,560);

        bar(508+i*bussp,540,524+i*bussp,578);//door

        bar(400+i*bussp,543,408+i*bussp,544);
        bar(400+i*bussp,546,408+i*bussp,547);
        bar(400+i*bussp,549,408+i*bussp,550);
        bar(400+i*bussp,552,408+i*bussp,553);
        bar(400+i*bussp,555,408+i*bussp,556);
        }

        setfillstyle(SOLID_FILL,WHITE);
        bar(516+i*bussp,542,517+i*bussp,576);

        //wheel-1
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(496+i*bussp,578,10);
        floodfill(496+i*bussp,578,BLUE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(496+i*bussp,578,5);
        floodfill(496+i*bussp,578,WHITE);

        //wheel-2
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(439+i*bussp,578,10);
        floodfill(439+i*bussp,574,BLUE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(439+i*bussp,578,5);
        floodfill(439+i*bussp,574,WHITE);

        //wheel-1
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(416+i*bussp,578,10);
        floodfill(416+i*bussp,574,BLUE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(416+i*bussp,578,5);
        floodfill(416+i*bussp,574,WHITE);

        //Bus Top
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        bar(400+i*bussp,532,410+i*bussp,535);
        bar(415+i*bussp,530,450+i*bussp,535);
        bar(450+i*bussp,532,515+i*bussp,535);


//Car--2

         //car light
       if(i>140)
       {
        setfillstyle(SOLID_FILL,WHITE);
        bar(105+i*carsp,590,111+i*carsp,594);
        bar(105+i*carsp,596,110+i*carsp,599);
       }
        //car body
        setfillstyle(SOLID_FILL,RED);
        setcolor(WHITE);
        bar(10+i*carsp,560,60+i*carsp,597);
        outtextxy(12+i*carsp,566,"Rozina");
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(60+i*carsp,565,85+i*carsp,600);
        bar(85+i*carsp,585,105+i*carsp,600);
        setfillstyle(SOLID_FILL,BLUE);
        bar(68+i*carsp,573,84+i*carsp,582);

        setfillstyle(SOLID_FILL,LIGHTCYAN);
        setcolor(LIGHTCYAN);
        line(85+i*carsp,565,105+i*carsp,585);
        line(105+i*carsp,585,85+i*carsp,585);
        line(85+i*carsp,585,85+i*carsp,565);
        floodfill(88+i*carsp,578,LIGHTCYAN);
        circle(102+i*carsp,592.5,7.5);
        floodfill(106+i*carsp,595,LIGHTCYAN);



        //Wheel-1
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(85+i*carsp,600,8);
        floodfill(85+i*carsp,603,WHITE);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(85+i*carsp,600,4);
        floodfill(85+i*carsp,601,BLACK);
        circle(85+i*carsp,600,10);
        floodfill(85+i*carsp,601,BLACK);

        //Wheel-1
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(35+i*carsp,595,10);
        floodfill(35+i*carsp,598,WHITE);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(35+i*carsp,595,5);
        floodfill(35+i*carsp,596,BLACK);
        circle(35+i*carsp,595,12);
        floodfill(35+i*carsp,598,BLACK);
//Car--3
        //car body
        setfillstyle(SOLID_FILL,RED);
        setcolor(WHITE);
        bar(910,635,960,677);
        outtextxy(912,646,"Rozina");
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(960,645,985,680);
        bar(985,665,1005,680);
        setfillstyle(SOLID_FILL,BLUE);
        bar(968,653,984,662);

        setfillstyle(SOLID_FILL,LIGHTCYAN);
        setcolor(LIGHTCYAN);
        line(985,645,1005,665);
        line(1005,665,985,665);
        line(985,665,985,645);
        floodfill(988,658,LIGHTCYAN);
        circle(1002,672.5,7.5);
        floodfill(1006,675,LIGHTCYAN);

        //Wheel-1

        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(985,680,8);
        floodfill(985,681,BLACK);

        //Wheel-2
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(935,675,10);
        floodfill(935,678,WHITE);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        circle(935,675,5);
        floodfill(935,676,BLACK);
        circle(935,675,12);
        floodfill(935,678,BLACK);

        if(i>420)
        {
            i=0;
        }
        page=1-page;

    }

    getch();
    return 0;
}

