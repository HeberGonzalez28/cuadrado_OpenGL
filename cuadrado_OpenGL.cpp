// Primer programa en OpenGL usando C++ 

#include <GL/GLUT.h>
void myDisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
    glFlush();
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(600, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Hola mundo con OpenGL");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}