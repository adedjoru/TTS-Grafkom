#include<GL/glut.h>
#include <Math.h>     // Needed for sin, cos
#define PI 3.14159265f

GLfloat ballRadius = 0.02f;   // radius
int triangles = 100; //jumlah segitiga yg digunakan untuk menggambar circle
GLfloat angle;

void init()
{
    glClearColor(1.0, 0.0, 0.0, 0.0); // set background jadi warna merah
    glColor3f(1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

void myDisplay()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //----------------------------------------------------------------------------------------------
    //daun
    glBegin(GL_POLYGON);
    glColor3f(1.90, 90.0, 1.00);//make the color lavender
    glVertex2f(-0.10, 0.30);
    glVertex2f(-0.15, 0.60);
    glVertex2f(0.00, 0.75);
    glVertex2f(0.15, 0.60);
    glVertex2f(0.10, 0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.90, 90.0, 1.00);//make the color lavender
    glVertex2f(-0.10, -0.30);
    glVertex2f(-0.15, -0.60);
    glVertex2f(0.00, -0.75);
    glVertex2f(0.15, -0.60);
    glVertex2f(0.10, -0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-0.10, 0.20);
    glVertex2f(-0.30, 0.50);
    glVertex2f(-0.50, 0.50);
    glVertex2f(-0.50, 0.30);
    glVertex2f(-0.20, 0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(0.10, 0.20);
    glVertex2f(0.30, 0.50);
    glVertex2f(0.50, 0.50);
    glVertex2f(0.50, 0.30);
    glVertex2f(0.20, 0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-0.10, -0.20);
    glVertex2f(-0.30, -0.50);
    glVertex2f(-0.50, -0.50);
    glVertex2f(-0.50, -0.30);
    glVertex2f(-0.20, -0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(0.10, -0.20);
    glVertex2f(0.30, -0.50);
    glVertex2f(0.50, -0.50);
    glVertex2f(0.50, -0.30);
    glVertex2f(0.20, -0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-0.75, -0.00);
    glVertex2f(-0.60, 0.15);
    glVertex2f(-0.35, 0.10);
    glVertex2f(-0.35, -0.10);
    glVertex2f(-0.60, -0.15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(0.75, -0.00);
    glVertex2f(0.60, 0.15);
    glVertex2f(0.35, 0.10);
    glVertex2f(0.35, -0.10);
    glVertex2f(0.60, -0.15);
    glEnd();
    //--------------------------------------------------------------------------------------------------
    //circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(0.0, 0.0);       // Center of circle

    for (int i = 0; i <= triangles; i++)
    { // Last vertex same as first vertex
        angle = i * 2.0f * PI / triangles;  // 360 deg for all segments
        glVertex2f(cos(angle) * 0.4, sin(angle) * 0.4);
    }
    glEnd();
    //--------------------------------------------------------------------------------------------------
    //atas
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.10, -0.10);
    glVertex2f(0.00, -0.35);
    glVertex2f(0.10, -0.10);
    glEnd();
    //bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.10, 0.10);
    glVertex2f(0.00, 0.35);
    glVertex2f(0.10, 0.10);
    glEnd();
    glBegin(GL_TRIANGLES);
    //kanan
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.10, 0.10);
    glVertex2f(0.35, 0.00);
    glVertex2f(0.10, -0.10);
    glEnd();
    //kiri
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.10, 0.10);
    glVertex2f(-0.35, 0.00);
    glVertex2f(-0.10, -0.10);
    glEnd();
    //kanan atas 
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.00, 0.15);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.15, 0.00);
    glEnd();
    //kanan bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.00, -0.15);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.15, 0.00);
    glEnd();
    //kiri bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.00, -0.15);
    glVertex2f(-0.25, -0.25);
    glVertex2f(-0.15, 0.00);
    glEnd();
    //kiri atas 
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.00, 0.15);
    glVertex2f(-0.25, 0.25);
    glVertex2f(-0.15, 0.00);
    glEnd();
    //kotak
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.15, 0.15);
    glVertex2f(0.15, 0.15);
    glVertex2f(0.15, -0.15);
    glVertex2f(-0.15, -0.15);
    glEnd();
    //---------------------------------------------------------------------------------------------------
    //circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 1.0, 1.0);//make the color white
    glVertex2f(0.0, 0.0);       // Center of circle

    for (int i = 0; i <= triangles; i++)
    { // Last vertex same as first vertex
        angle = i * 2.0f * PI / triangles;  // 360 deg for all segments
        glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
    }
    glEnd();
    //------------------------------------------------------------------------------------------------------
      //..pojok kanan atas
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(0.20, 1.00);
    glVertex2f(0.30, 0.85);
    glVertex2f(0.65, 0.92);
    glVertex2f(0.65, 1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(1.00, 0.20);
    glVertex2f(0.82, 0.30);
    glVertex2f(0.95, 0.80);
    glVertex2f(1.00, 0.80);
    glEnd();
    //..pojok kiri atas
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-0.20, 1.00);
    glVertex2f(-0.30, 0.85);
    glVertex2f(-0.65, 0.92);
    glVertex2f(-0.65, 1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-1.00, 0.20);
    glVertex2f(-0.82, 0.30);
    glVertex2f(-0.95, 0.80);
    glVertex2f(-1.00, 0.80);
    glEnd();
    //..pojok kiri bawah
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-0.20, -1.00);
    glVertex2f(-0.30, -0.85);
    glVertex2f(-0.65, -0.92);
    glVertex2f(-0.65, -1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-1.00, -0.20);
    glVertex2f(-0.82, -0.30);
    glVertex2f(-0.95, -0.80);
    glVertex2f(-1.00, -0.80);
    glEnd();
    //..pojok kanan bawah
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(0.20, -1.00);
    glVertex2f(0.30, -0.85);
    glVertex2f(0.65, -0.92);
    glVertex2f(0.65, -1.00);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(1.00, -0.20);
    glVertex2f(0.82, -0.30);
    glVertex2f(0.95, -0.80);
    glVertex2f(1.00, -0.80);
    glEnd();
    //------------------------------------------------------------------------------------------------------   
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(1.00, 1.00);
    glVertex2f(0.65, 1.00);
    glVertex2f(0.65, 0.65);
    glVertex2f(1.00, 0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-1.00, 1.00);
    glVertex2f(-0.65, 1.00);
    glVertex2f(-0.65, 0.65);
    glVertex2f(-1.00, 0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(-1.00, -1.00);
    glVertex2f(-0.65, -1.00);
    glVertex2f(-0.65, -0.65);
    glVertex2f(-1.00, -0.65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.90, 0.90, 1.00);//make the color lavender
    glVertex2f(1.00, -1.00);
    glVertex2f(0.65, -1.00);
    glVertex2f(0.65, -0.65);
    glVertex2f(1.00, -0.65);
    glEnd();
    //------------------------------------------------------------------------------------------------------
       //..pojok kiri atas
    //kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-1.00, 0.80);
    glVertex2f(-0.60, 1.00);
    glVertex2f(-1.00, 1.00);
    glEnd();
    //kanan bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.82, 1.00);
    glVertex2f(-0.70, 0.70);
    glVertex2f(-1.00, 0.82);
    glEnd();
    //bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-1.00, 0.60);
    glVertex2f(-0.80, 1.00);
    glVertex2f(-1.00, 1.00);
    glEnd();
    //..pojok kiri bawah
    //kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-1.00, -0.80);
    glVertex2f(-0.60, -1.00);
    glVertex2f(-1.00, -1.00);
    glEnd();
    //kanan bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.82, -1.00);
    glVertex2f(-0.70, -0.70);
    glVertex2f(-1.00, -0.82);
    glEnd();
    //bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-1.00, -0.60);
    glVertex2f(-0.80, -1.00);
    glVertex2f(-1.00, -1.00);
    glEnd();
    //..pojok kanan bawah
    //kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(1.00, -0.80);
    glVertex2f(0.60, -1.00);
    glVertex2f(1.00, -1.00);
    glEnd();
    //kanan bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.82, -1.00);
    glVertex2f(0.70, -0.70);
    glVertex2f(1.00, -0.82);
    glEnd();
    //bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(1.00, -0.60);
    glVertex2f(0.80, -1.00);
    glVertex2f(1.00, -1.00);
    glEnd();
    //..pojok kanan atas
    //kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(1.00, 0.80);
    glVertex2f(0.60, 1.00);
    glVertex2f(1.00, 1.00);
    glEnd();
    //kanan bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.82, 1.00);
    glVertex2f(0.70, 0.70);
    glVertex2f(1.00, 0.82);
    glEnd();
    //bawah
    glBegin(GL_TRIANGLES);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(1.00, 0.60);
    glVertex2f(0.80, 1.00);
    glVertex2f(1.00, 1.00);
    glEnd();
    //----------------------------------------------------------------------------------------------------
      //..atas
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.10, 0.60);
    glVertex2f(0.00, 0.70);
    glVertex2f(0.10, 0.60);
    glVertex2f(0.05, 0.45);
    glVertex2f(-0.05, 0.45);
    glEnd();
    //..bawah
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.10, -0.60);
    glVertex2f(0.00, -0.70);
    glVertex2f(0.10, -0.60);
    glVertex2f(0.05, -0.45);
    glVertex2f(-0.05, -0.45);
    glEnd();
    //..kiri
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.70, 0.00);
    glVertex2f(-0.60, 0.10);
    glVertex2f(-0.40, 0.05);
    glVertex2f(-0.40, -0.05);
    glVertex2f(-0.60, -0.10);
    glEnd();
    //..kanan
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.70, 0.00);
    glVertex2f(0.60, 0.10);
    glVertex2f(0.40, 0.05);
    glVertex2f(0.40, -0.05);
    glVertex2f(0.60, -0.10);
    glEnd();
    //..kiri atas
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.45, 0.35);
    glVertex2f(-0.45, 0.45);
    glVertex2f(-0.35, 0.45);
    glVertex2f(-0.27, 0.32);
    glVertex2f(-0.32, 0.26);
    glEnd();
    //..kanan atas
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.45, 0.35);
    glVertex2f(0.45, 0.45);
    glVertex2f(0.35, 0.45);
    glVertex2f(0.27, 0.32);
    glVertex2f(0.32, 0.26);
    glEnd();
    //..kiri bawah
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.45, -0.35);
    glVertex2f(-0.45, -0.45);
    glVertex2f(-0.35, -0.45);
    glVertex2f(-0.27, -0.32);
    glVertex2f(-0.32, -0.26);
    glEnd();
    //..kanan bawah
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.00, 0.00);//make the color black
    glVertex2f(0.45, -0.35);
    glVertex2f(0.45, -0.45);
    glVertex2f(0.35, -0.45);
    glVertex2f(0.27, -0.32);
    glVertex2f(0.32, -0.26);
    glEnd();
    //---------------------------------------------------------------------------------------------
    //..pojok kanan atas
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.00, 0.00);//make the color black
    glVertex2f(0.97, 0.50);
    glVertex2f(1.00, 0.50);
    glVertex2f(1.00, 0.25);
    glVertex2f(0.93, 0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.00, 0.00);//make the color black
    glVertex2f(0.25, 1.00);
    glVertex2f(0.32, 0.92);
    glVertex2f(0.50, 0.97);
    glVertex2f(0.50, 1.00);
    glEnd();
    //..pojok kiri atas
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.97, 0.50);
    glVertex2f(-1.00, 0.50);
    glVertex2f(-1.00, 0.25);
    glVertex2f(-0.93, 0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.25, 1.00);
    glVertex2f(-0.32, 0.92);
    glVertex2f(-0.50, 0.97);
    glVertex2f(-0.50, 1.00);
    glEnd();
    //..pojok kanan bawah
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.00, 0.00);//make the color black
    glVertex2f(0.97, -0.50);
    glVertex2f(1.00, -0.50);
    glVertex2f(1.00, -0.25);
    glVertex2f(0.93, -0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.00, 0.00);//make the color black
    glVertex2f(0.25, -1.00);
    glVertex2f(0.32, -0.92);
    glVertex2f(0.50, -0.97);
    glVertex2f(0.50, -1.00);
    glEnd();
    //..pojok kiri bawah
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.00, 0.00);//make the color black
    glVertex2f(-0.97, -0.50);
    glVertex2f(-1.00, -0.50);
    glVertex2f(-1.00, -0.25);
    glVertex2f(-0.93, -0.30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.00, .00, 0.00);//make the color black
    glVertex2f(-0.25, -1.00);
    glVertex2f(-0.32, -0.92);
    glVertex2f(-0.50, -0.97);
    glVertex2f(-0.50, -1.00);
    glEnd();
    glFlush();
}

void drawTiling()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            glViewport(i * 120, j * 120, 120, 120); // viewport berukuran 120 x 120

            myDisplay();
        }
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(350, 100);
    glutCreateWindow("Batik Tenun NTT");
    glutDisplayFunc(drawTiling);
    //glutDisplayFunc(myDisplay);
    init();
    glutMainLoop();

}