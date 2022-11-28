#include<iostream>
#include<math.h>
#include <GL/glut.h>

GLint day = 0;
bool rotate = true;

void draw_ellipse(int r_x, int r_y);

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);

    if (rotate) day += 1;
    glClear(GL_COLOR_BUFFER_BIT);

    //>>>>>mercury>>>>>
    glPushMatrix();
    glRotatef(7, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(100, 100);
    glRotatef(-90, 1.0, 0.0, 0.0);

    glRotatef(day * 360.0 / 87.7, 0.0, 1.0, 0.0);
    glTranslatef(100.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 1.0);
    glutSolidSphere(5, 10, 10);
    glPopMatrix();
    //<<<<<mercury<<<<<

    //>>>>>venus<<<<<
    glPushMatrix();
    glRotatef(3.4, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(150, 150);
    glRotatef(-90, 1.0, 0.0, 0.0);

    glRotatef(day * 360.0 / 224.7, 0.0, 1.0, 0.0);
    glTranslatef(150.0, 0.0, 0.0);
    glColor3f(0.0, 0.5, 0.5);
    glutSolidSphere(10, 10, 10);
    glPopMatrix();
    //>>>>>venus<<<<<


    //>>>>>earth>>>>>
    glPushMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(200, 200);
    glRotatef(-90, 1.0, 0.0, 0.0);

    glRotatef(day * 360.0 / 365, 0.0, 1.0, 0.0);
    glTranslatef(200.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 0.5);
    glutSolidSphere(10, 10, 10);
    {//>>>>>moon>>>>>
        glColor3f(0.8, 0.8, 0.8);
        glRotatef(90, 1.0, 0.0, 0.0);
        draw_ellipse(20, 20);
        glRotatef(-90, 1.0, 0.0, 0.0);
        glRotatef(5, 0.0, 0.0, 1.0);
        glRotatef(day / 27.32 * 360, 0.0, 1.0, 0.0);
        glTranslatef(20, 0.0, 0.0);
        glColor3f(0.9, 0.9, 0.9);
        glutSolidSphere(3, 10, 10);
    }//<<<<<moon<<<<<
    glPopMatrix();
    //<<<<<earth<<<<<

    //>>>>>mars>>>>>
    glPushMatrix();
    glRotatef(1.8, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(250, 250);
    glRotatef(-90, 1.0, 0.0, 0.0);

    glRotatef(day * 360.0 / 686.98, 0.0, 1.0, 0.0);
    glTranslatef(250.0, 0.0, 0.0);
    glColor3f(0.8, 0.3, 0.3);
    glutSolidSphere(5, 10, 10);
    glPopMatrix();
    //<<<<<mars<<<<<

    //>>>>>jupiter>>>>>
    glPushMatrix();
    glRotatef(1.303, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(350, 350);
    glRotatef(-90, 1.0, 0.0, 0.0);

    glRotatef(day * 360.0 / 4329.63, 0.0, 1.0, 0.0);
    glTranslatef(350.0, 0.0, 0.0);
    glColor3f(0.3, 0.8, 0.8);
    glutSolidSphere(30, 25, 25);
    glPopMatrix();
    //<<<<<jupiter<<<<<

    //>>>>>saturn>>>>>
    glPushMatrix();
    glRotatef(2.485, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(400, 400);
    glRotatef(-90, 1.0, 0.0, 0.0);

    glRotatef(day * 360.0 / 10751.8415, 0.0, 1.0, 0.0);
    glTranslatef(400.0, 0.0, 0.0);
    glColor3f(0.5, 0.7, 0.7);
    glutSolidSphere(20, 20, 20);
    glPopMatrix();
    //<<<<<saturn<<<<<

    //>>>>>uranus>>>>>
    glPushMatrix();
    glRotatef(0.772, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(450, 450);
    glRotatef(-90, 1.0, 0.0, 0.0);

    glRotatef(day * 360.0 / 30660, 0.0, 1.0, 0.0);
    glTranslatef(450.0, 0.0, 0.0);
    glColor3f(0.2, 0.2, 0.9);
    glutSolidSphere(15, 10, 10);
    glPopMatrix();
    //<<<<<uranus<<<<<

    //>>>>>neptune>>>>>
    glPushMatrix();
    glRotatef(1.76, 0.0, 0.0, 1.0);

    glColor3f(1.0, 1.0, 1.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    draw_ellipse(600, 500);
    glRotatef(-90, 1.0, 0.0, 0.0);

    GLdouble rou = sqrt(2500 + 1100 * pow(cos(day * 2 * 3.14 / 60152), 2)) * 10;
    glRotatef(day * 360.0 / 60152, 0.0, 1.0, 0.0);
    glTranslatef(rou, 0.0, 0.0);
    glColor3f(0.8, 0.3, 0.3);
    glutSolidSphere(15, 10, 10);
    glPopMatrix();
    //<<<<<neptune<<<<<



    //sun
    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glutSolidSphere(50, 35, 35);
    glPopMatrix();


    Sleep(50);
    glutSwapBuffers();

}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 0.01f, 2000.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 200.0, 1000.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

void key(unsigned char key, int x, int y)
{
    switch (key) {
    case 'r':
        rotate = !rotate;
    default:
        break;
    }
}

void idle()
{
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1000, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("solar");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}


void draw_ellipse(int r_x, int r_y) {
    int pow_a = (r_x * r_x);
    int pow_b = (r_y * r_y);
    int x = 0, y = r_y;
    int pow_a_mul_y = pow_a * r_y;
    int pow_b_mul_x = 0;
    int f = pow_b - pow_a_mul_y + (pow_a >> 2);
    while (pow_b_mul_x - pow_a_mul_y <= 0) {
        glBegin(GL_POINTS);
        {
            glVertex2i(x, y);
            glVertex2i(x, -y);
            glVertex2i(-x, -y);
            glVertex2i(-x, y);
        }
        glEnd();
        x++;
        pow_b_mul_x += pow_b;
        if (f < 0) {
            f += (pow_b_mul_x << 1) + pow_b;
        }
        else {
            y--;
            pow_a_mul_y -= pow_a;
            f += (pow_b_mul_x << 1) - (pow_a_mul_y << 1) + pow_b;
        }
    }
    while (y != 0) {
        glBegin(GL_POINTS);
        {
            glVertex2i(x, y);
            glVertex2i(x, -y);
            glVertex2i(-x, -y);
            glVertex2i(-x, y);
        }
        glEnd();
        y--;
        pow_a_mul_y -= pow_a;
        if (f < 0) {
            x++;
            pow_b_mul_x += pow_b;
            f += (pow_b_mul_x << 1) - (pow_a_mul_y << 1) + pow_a;
        }
        else f += pow_a - (pow_a_mul_y << 1);
    }
}