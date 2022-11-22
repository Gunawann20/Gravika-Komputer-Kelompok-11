#include<stdlib.h>
#include<GL/glut.h>

void init(void){
    glClearColor(0.5,0.5,0.5,0.0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    
    glFlush();
}
void reshape(int w, int h){
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, 1.0 * (GLfloat) w / (GLfloat) h, 1.0, 40.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, 0.0);
    gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

int main(int argc,char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(20,75);
    glutCreateWindow("Project Kelompok 11");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    

    glutMainLoop();
    return 0;
}