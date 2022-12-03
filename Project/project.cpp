//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); //+1
//main program
int main (int argc, char** argv){
 //inisialisasi
 glutInit(&argc, argv);
 glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); //+2 GLUT_DEPTH : mengalokasikan sumbu z
 glutInitWindowPosition(200, 100); //atur sumbu x dan y
 glutInitWindowSize(500, 500); //atur lebar dan tinggi jendela
 glutCreateWindow("Gravika Komputer Kelompok 11");
 glutDisplayFunc(display); //memanggil fungsi display
 glutReshapeFunc(reshape); //memanggil fungsi reshape
 glutKeyboardFunc(keyboard); // +3 memanggil fungsi keyboard
 init();
 glutMainLoop(); //looping program utama
}void init(){
 glEnable(GL_DEPTH_TEST); //+4
 glClearColor(0.4, 0.4, 0.8,1.0);
}
void display(){
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//lantai
    glBegin(GL_QUADS);
    glColor3ub(215, 192, 174);
    glVertex3i(-11,0,16);
    glVertex3i(-11,0,-16);
    glVertex3i(11,0,-16);
    glVertex3i(11,0,16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 234, 230);
    glVertex3i(-11,-1,16);
    glVertex3i(-11,0,16);
    glVertex3i(11,0,16);
    glVertex3i(11,-1,16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 234, 230);
    glVertex3i(11,-1,16);
    glVertex3i(11,0,16);
    glVertex3i(11,0,-16);
    glVertex3i(11,-1,-16);
    glEnd();
//dinding
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(183, 196, 207);
    glVertex3i(-10,0,16);
    glVertex3i(-10,15,16);
    glVertex3i(-10,15,-16);
    glVertex3i(-10,0,-16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(183, 196, 207);
    glVertex3i(-11,0,16);
    glVertex3i(-11,15,16);
    glVertex3i(-11,15,-16);
    glVertex3i(-11,0,-16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 234, 230);
    glVertex3i(-11,0,16);
    glVertex3i(-11,15,16);
    glVertex3i(-10,15,16);
    glVertex3i(-10,0,16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 234, 230);
    glVertex3i(-11,15,16);
    glVertex3i(-11,15,-16);
    glVertex3i(-10,15,-16);
    glVertex3i(-10,15,16);
    glEnd();
    //Belakang
    glBegin(GL_QUADS);
    glColor3ub(237, 237, 237);
    glVertex3i(-11,0,-16);
    glVertex3i(-11,15,-16);
    glVertex3i(11,15,-16);
    glVertex3i(11,0,-16);
    glEnd();
glFlush();
glutSwapBuffers();
}//fungsi untuk setting viewport
void reshape(int w, int h){
 glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
 glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
 glLoadIdentity(); //reset transformasi misalnya rotasi pada display
 //gluOrtho2D(-10, 10, -10, 10); //setting spesifikasi proyeksi yang diinginkan (2D)
 //glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //+6 proyeksi orthografik 3D
 gluPerspective(30.0, w / h, 1.0, 100.0); //proyeksi perspektif
/* set initial position */
glTranslatef(0.0, -5.0, -100.0);
 glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
//+7
void keyboard(unsigned char key, int x, int y)
{
/* this is the keyboard event handler
 the x and y parameters are the mouse
 coordinates when the key was struck */
switch (key)
{
case 'd':
 case 'D':
 glTranslated(-1.0, 0.0, 0.0);//geser kiri
 break;
 case 'a':
 case 'A':
 glTranslated(1.0, 0.0, 0.0);//geser kanan
 break;
 case 's':
 case 'S':
 glTranslated(0.0, 1.0, 0.0);//geser atas
 break;
 case 'w':
 case 'W':
 glTranslated(0.0, -1.0, 0.0);//geser bawah
 break;
 case 'q':
 case 'Q':
 glTranslated(0.0, 0.0, -1.0);//dalam objek
 break;
 case 'e':
 case 'E':
 glTranslated(0.0, 0.0, 1.0);//keluar objek
 break;
 case 'i':
 case 'I':
 glRotatef(2.0, 1.0, 0.0, 0.0);//rotate kanan
 break;
 case 'k':
 case 'K':
 glRotatef(2.0, -1.0, 0.0, 0.0);//rotate kanan
 break;
 case 'j':
 case 'J':
  glRotatef(2.0, 0.0, 1.0, 0.0);//rotate atas
 break;
 case 'l':
 case 'L':
  glRotatef(2.0, 0.0, -1.0, 0.0);//rotate atas
 break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}
