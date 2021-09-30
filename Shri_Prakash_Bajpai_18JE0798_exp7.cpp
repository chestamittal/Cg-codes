//Shri Prakash Bajpai

#include <bits/stdc++.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

void init()
{
      glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void draw_tree()
{
      // Trunk
      glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(0.5f, -0.1f);
      glVertex2f(0.6f, -0.1f);
      glVertex2f(0.57f, 0.5f);
      glVertex2f(0.53f, 0.5f);
      glEnd();

      // Green Leaves
      glBegin(GL_POLYGON);
      float xc = 0.45, yc = 0.5;
      glColor3f(0.0f, 1.0f, 0.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.1 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.1 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      glBegin(GL_POLYGON);
      xc = 0.65, yc = 0.5;
      glColor3f(0.0f, 1.0f, 0.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.1 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.1 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      glBegin(GL_POLYGON);
      xc = 0.55, yc = 0.6;
      glColor3f(0.0f, 1.0f, 0.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.1 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.1 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      glBegin(GL_POLYGON);
      xc = 0.55, yc = 0.4;
      glColor3f(0.0f, 1.0f, 0.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.1 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.1 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();
}

void draw_windmill()
{
      // stand
      glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.5f, -0.1f);
      glVertex2f(-0.6f, -0.1f);
      glVertex2f(-0.56f, 0.5f);
      glVertex2f(-0.54f, 0.5f);
      glEnd();

      // gola
      glBegin(GL_POLYGON);
      float xc = -0.55, yc = 0.5;
      glColor3f(1.0f, 1.0f, 1.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.03 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.03 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      // wings
      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 0.8f, 0.7f);
      glVertex2f(-0.45f, 0.35f);
      glVertex2f(-0.55f, 0.5f);
      glVertex2f(-0.4f, 0.4f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 0.8f, 0.7f);
      glVertex2f(-0.7f, 0.4f);
      glVertex2f(-0.65f, 0.35f);
      glVertex2f(-0.55f, 0.5f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 0.8f, 0.7f);
      glVertex2f(-0.7f, 0.6f);
      glVertex2f(-0.65f, 0.65f);
      glVertex2f(-0.55f, 0.5f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 0.8f, 0.7f);
      glVertex2f(-0.4f, 0.6f);
      glVertex2f(-0.45f, 0.65f);
      glVertex2f(-0.55f, 0.5f);
      glEnd();
}

void draw_road()
{
      glBegin(GL_QUADS);
      glColor3f(0.4f, 0.4f, 0.4f);
      glVertex2f(-1.0f, -0.8f);
      glVertex2f(1.1f, -0.8f);
      glVertex2f(1.1f, -0.35f);
      glVertex2f(-1.0f, -0.35f);
      glEnd();

      glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-1.0f, -0.575f);
      glVertex2f(1.1f, -0.575f);
      glEnd();
}

void draw_cycle()
{
      /**
      * 	Circles
      */
      // Bada Tyre
      glBegin(GL_LINE_LOOP);
      float xc = -0.25, yc = -0.45;
      glColor3f(1.0f, 0.0f, 1.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.08 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.08 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      glBegin(GL_LINE_LOOP);
      xc = 0.05, yc = -0.45;
      glColor3f(1.0f, 0.0f, 1.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.08 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.08 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      // Tyre ke andar Chote Tyre
      glBegin(GL_POLYGON);
      xc = -0.25, yc = -0.45;
      glColor3f(1.0f, 0.0f, 1.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.015 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.015 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      glBegin(GL_POLYGON);
      xc = 0.05, yc = -0.45;
      glColor3f(1.0f, 0.0f, 1.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.015 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.015 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();

      glBegin(GL_POLYGON);
      xc = -0.1, yc = -0.45;
      glColor3f(1.0f, 0.0f, 1.0f);
      for (float i = 0; i < 360; i = i + 2.0)
      {
            float x = xc + 0.025 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.025 * sin((i * 2 * 3.14) / 360);
            glVertex2f(x, y);
      }
      glEnd();
      /**
      *	Polygons
      */

      glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.22f, -0.3f);
      glVertex2f(0.062f, -0.3f);
      glVertex2f(0.05f, -0.33f);
      glVertex2f(-0.22f, -0.33f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.22f, -0.3f);
      glVertex2f(-0.29f, -0.23f);
      glVertex2f(-0.26f, -0.23f);
      glVertex2f(-0.22f, -0.33f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.255f, -0.45f);
      glVertex2f(-0.245f, -0.45f);
      glVertex2f(-0.22f, -0.3f);
      glVertex2f(-0.23f, -0.33f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.13f, -0.3f);
      glVertex2f(-0.015f, -0.3f);
      glVertex2f(-0.015f, -0.28f);
      glVertex2f(-0.13f, -0.28f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.1f, -0.45f);
      glVertex2f(-0.08f, -0.45f);
      glVertex2f(-0.14f, -0.33f);
      glVertex2f(-0.17f, -0.33f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.1f, -0.45f);
      glVertex2f(-0.08f, -0.45f);
      glVertex2f(0.01f, -0.38f);
      glVertex2f(0.01f, -0.33f);
      glVertex2f(-0.02f, -0.33f);
      glEnd();

      /**
      *	LINES
      */

      glBegin(GL_LINES);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.1f, -0.43f);
      glVertex2f(0.05f, -0.44f);
      glEnd();

      glBegin(GL_LINES);
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex2f(-0.1f, -0.47f);
      glVertex2f(0.05f, -0.46f);
      glEnd();

      glBegin(GL_LINES);
      glColor3f(1.0f, 0.0f, 1.0f);
      xc = 0.05f, yc = -0.45f;
      for (float i = 0; i < 360; i = i + 45.0)
      {
            float x = xc + 0.08 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.08 * sin((i * 2 * 3.14) / 360);
            glVertex2f(xc, yc);
            glVertex2f(x, y);
      }
      glEnd();

      glBegin(GL_LINES);
      glColor3f(1.0f, 0.0f, 1.0f);
      xc = -0.25f, yc = -0.45f;
      for (float i = 0; i < 360; i = i + 45.0)
      {
            float x = xc + 0.08 * cos((i * 2 * 3.14) / 360);
            float y = yc + 0.08 * sin((i * 2 * 3.14) / 360);
            glVertex2f(xc, yc);
            glVertex2f(x, y);
      }
      glEnd();
}

void display(void)
{
      glClear(GL_COLOR_BUFFER_BIT);

      draw_tree();
      draw_windmill();
      draw_road();
      draw_cycle();

      glFlush();
}

int main(int argc, char **argv)
{
      glutInit(&argc, argv);
      glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
      glutInitWindowSize(600, 600);
      glutInitWindowPosition(50, 50);
      glutCreateWindow("square");
      glutDisplayFunc(display);
      init();
      glutMainLoop();
      return 0;
}