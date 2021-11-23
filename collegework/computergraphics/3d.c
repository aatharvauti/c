#include<stdio.h>
#include<graphics.h>
#include<math.h>

void trans();
void scale();
void rotate();

int maxx,maxy,midx,midy;

void axis()
{
      line(midx,0,midx,maxy);
      line(0,midy,maxx,midy);
}

void scale()
{
      int x,y,z,o,x1,x2,y1,y2;

      maxx=getmaxx();
      maxy=getmaxy();

      midx=maxx/2;
      midy=maxy/2;

      //axis();

      bar3d(midx+50,midy-100,midx+60,midy-90,5,1);

      printf("Enter scaling factors\n:");
      scanf("%d %d %d", &x,&y,&z);

      bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);

}

void rotate()
{
      int x,y,z,o,x1,x2,y1,y2;

      maxx=getmaxx();
      maxy=getmaxy();

      midx=maxx/2;
      midy=maxy/2;

      //axis();

      bar3d(midx+50,midy-100,midx+60,midy-90,5,1);

      printf("Enter Rotation Angle: ");
      scanf("%d",&o);

      x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
      y1=50*sin(o*3.14/180)+100*cos(o*3.14/180);
      x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);
      y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);

      bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1);

      //axis();

      bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1);
}
