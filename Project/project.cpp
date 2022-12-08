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
    glColor3ub(172, 161, 141);
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
    glColor3ub(138, 145, 153);
    glVertex3i(-10,0,16);
    glVertex3i(-10,15,16);
    glVertex3i(-10,15,-16);
    glVertex3i(-10,0,-16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(138, 145, 153);
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
    glColor3ub(211, 212, 207);
    glVertex3i(-11,0,-16);
    glVertex3i(-11,15,-16);
    glVertex3i(11,15,-16);
    glVertex3i(11,0,-16);
    glEnd();
//pintu
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 83);
    glVertex3f(-9.95,0.0,12.0);
    glVertex3f(-9.95,13.0,12.0);
    glVertex3f(-9.95,13.0,8.0);
    glVertex3f(-9.95,0.0,8.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(197, 83, 0);
    glVertex3f(-10.0,0.0,12.0);
    glVertex3f(-10.0,13.0,12.0);
    glVertex3f(-9.95,13.0,12.0);
    glVertex3f(-9.95,0.0,12.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(197, 83, 0);
    glVertex3f(-10.0,0.0,12.3);
    glVertex3f(-10.0,13.5,12.3);
    glVertex3f(-9.95,13.5,12.3);
    glVertex3f(-9.95,0.0,12.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 0);
    glVertex3f(-9.95,0.0,12.3);
    glVertex3f(-9.95,13.0,12.3);
    glVertex3f(-9.95,13.0,12.0);
    glVertex3f(-9.95,0.0,12.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(197, 83, 0);
    glVertex3f(-10.0,0.0,8.0);
    glVertex3f(-10.0,13.5,8.0);
    glVertex3f(-9.95,13.5,8.0);
    glVertex3f(-9.95,0.0,8.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(197, 83, 0);
    glVertex3f(-10.0,0.0,7.7);
    glVertex3f(-10.0,13.5,7.7);
    glVertex3f(-9.95,13.5,7.7);
    glVertex3f(-9.95,0.0,7.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 0);
    glVertex3f(-9.95,0.0,8.0);
    glVertex3f(-9.95,13.0,8.0);
    glVertex3f(-9.95,13.0,7.7);
    glVertex3f(-9.95,0.0,7.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(197, 83, 0);
    glVertex3f(-10.0,13.0,8.0);
    glVertex3f(-10.0,13.0,12.0);
    glVertex3f(-9.95,13.0,12.0);
    glVertex3f(-9.95,13.0,8.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(197, 83, 0);
    glVertex3f(-10.0,13.5,8.0);
    glVertex3f(-10.0,13.5,12.0);
    glVertex3f(-9.95,13.5,12.0);
    glVertex3f(-9.95,13.5,8.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 0);
    glVertex3f(-9.95,13.0,12.3);
    glVertex3f(-9.95,13.5,12.3);
    glVertex3f(-9.95,13.5,7.7);
    glVertex3f(-9.95,13.0,7.7);
    glEnd();
    //gagang pintu
    glBegin(GL_QUADS);
    glColor3ub(57, 62, 70);
    glVertex3f(-9.8,5.5,11.5);
    glVertex3f(-9.8,5.8,11.5);
    glVertex3f(-9.8,5.8,11.0);
    glVertex3f(-9.8,5.5,11.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(57, 62, 70);
    glVertex3f(-9.95,5.5,11.5);
    glVertex3f(-9.95,5.8,11.5);
    glVertex3f(-9.95,5.8,11.1);
    glVertex3f(-9.95,5.5,11.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(57, 62, 70);
    glVertex3f(-9.95,5.5,11.5);
    glVertex3f(-9.95,5.8,11.5);
    glVertex3f(-9.8,5.8,11.5);
    glVertex3f(-9.8,5.5,11.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(5, 62, 70);
    glVertex3f(-9.95,5.8,11.5);
    glVertex3f(-9.95,5.8,11.3);
    glVertex3f(-9.8,5.8,11.3);
    glVertex3f(-9.8,5.8,11.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(5, 62, 70);
    glVertex3f(-9.95,5.5,11.5);
    glVertex3f(-9.95,5.5,11.3);
    glVertex3f(-9.8,5.5,11.3);
    glVertex3f(-9.8,5.5,11.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(5, 62, 70);
    glVertex3f(-9.9,5.8,11.5);
    glVertex3f(-9.9,5.8,11.0);
    glVertex3f(-9.8,5.8,11.0);
    glVertex3f(-9.8,5.8,11.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(5, 62, 70);
    glVertex3f(-9.9,5.5,11.5);
    glVertex3f(-9.9,5.5,11.0);
    glVertex3f(-9.8,5.5,11.0);
    glVertex3f(-9.8,5.5,11.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(57, 62, 70);
    glVertex3f(-9.9,5.5,11.0);
    glVertex3f(-9.9,5.8,11.0);
    glVertex3f(-9.8,5.8,11.0);
    glVertex3f(-9.8,5.5,11.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(57, 62, 70);
    glVertex3f(-9.95,5.5,11.5);
    glVertex3f(-9.95,5.8,11.5);
    glVertex3f(-9.8,5.8,11.5);
    glVertex3f(-9.8,5.5,11.5);
    glEnd();
//Rak lampu
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-8.0,12.5,-13.0);
    glVertex3f(-8.0,13.0,-13.0);
    glVertex3f(-4.0,13.0,-13.0);
    glVertex3f(-4.0,12.5,-13.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-8.0,12.5,-13.0);
    glVertex3f(-8.0,13.0,-13.0);
    glVertex3f(-8.0,13.0,-16.0);
    glVertex3f(-8.0,12.5,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-4.0,12.5,-13.0);
    glVertex3f(-4.0,13.0,-13.0);
    glVertex3f(-4.0,13.0,-16.0);
    glVertex3f(-4.0,12.5,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-8.0,13.0,-13.0);
    glVertex3f(-8.0,13.0,-16.0);
    glVertex3f(-4.0,13.0,-16.0);
    glVertex3f(-4.0,13.0,-13.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-8.0,12.5,-13.0);
    glVertex3f(-8.0,12.5,-16.0);
    glVertex3f(-4.0,12.5,-16.0);
    glVertex3f(-4.0,12.5,-13.0);
    glEnd();
    //penyangga1
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-7.5,11.5,-16.0);
    glVertex3f(-7.5,12.5,-13.5);
    glVertex3f(-7.1,12.5,-13.5);
    glVertex3f(-7.1,11.5,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-7.5,11.8,-16.0);
    glVertex3f(-7.5,12.5,-13.8);
    glVertex3f(-7.1,12.5,-13.8);
    glVertex3f(-7.1,11.8,-16.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-7.5,11.5,-16.0);
    glVertex3f(-7.5,12.5,-13.5);
    glVertex3f(-7.5,12.5,-13.8);
    glVertex3f(-7.5,11.8,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-7.1,11.5,-16.0);
    glVertex3f(-7.1,12.5,-13.5);
    glVertex3f(-7.1,12.5,-13.8);
    glVertex3f(-7.1,11.8,-16.0);
    glEnd();
    //penyangga2
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-4.7,11.5,-16.0);
    glVertex3f(-4.7,12.5,-13.5);
    glVertex3f(-4.3,12.5,-13.5);
    glVertex3f(-4.3,11.5,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-4.7,11.8,-16.0);
    glVertex3f(-4.7,12.5,-13.8);
    glVertex3f(-4.3,12.5,-13.8);
    glVertex3f(-4.3,11.8,-16.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-4.3,11.5,-16.0);
    glVertex3f(-4.3,12.5,-13.5);
    glVertex3f(-4.3,12.5,-13.8);
    glVertex3f(-4.3,11.8,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(67, 66, 66);
    glVertex3f(-4.7,11.5,-16.0);
    glVertex3f(-4.7,12.5,-13.5);
    glVertex3f(-4.7,12.5,-13.8);
    glVertex3f(-4.7,11.8,-16.0);
    glEnd();
// Lampu
    glBegin(GL_QUADS);
//Jendela
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 83);
    glVertex3f(-3.0,12.0,-15.8);
    glVertex3f(-3.0,12.8,-15.8);
    glVertex3f(1.0,12.8,-15.8);
    glVertex3f(1.0,12.0,-15.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 0);
    glVertex3f(-3.0,12.8,-15.8);
    glVertex3f(-3.0,12.8,-16.0);
    glVertex3f(1.0,12.8,-16.0);
    glVertex3f(1.0,12.8,-15.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 0);
    glVertex3f(-3.0,12.0,-15.8);
    glVertex3f(-3.0,12.0,-16.0);
    glVertex3f(1.0,12.0,-16.0);
    glVertex3f(1.0,12.0,-15.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(239, 154, 83);
    glVertex3f(-3.0,6.0,-15.8);
    glVertex3f(-3.0,6.8,-15.8);
    glVertex3f(1.0,6.8,-15.8);
    glVertex3f(1.0,6.0,-15.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 0);
    glVertex3f(-3.0,6.0,-15.8);
    glVertex3f(-3.0,6.0,-16.0);
    glVertex3f(1.0,6.0,-16.0);
    glVertex3f(1.0,6.0,-15.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239, 154, 0);
    glVertex3f(-3.0,6.8,-15.8);
    glVertex3f(-3.0,6.8,-16.0);
    glVertex3f(1.0,6.8,-16.0);
    glVertex3f(1.0,6.8,-15.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(239,154,83);
    glVertex3f(-3.0,6.8,-15.8);
    glVertex3f(-3.0,12.0,-15.8);
    glVertex3f(-2.5,12.0,-15.8);
    glVertex3f(-2.5,6.8,-15.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239,154,0);
    glVertex3f(-3.0,6.0,-15.8);
    glVertex3f(-3.0,12.8,-15.8);
    glVertex3f(-3.0,12.8,-16.0);
    glVertex3f(-3.0,6.0,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239,154,0);
    glVertex3f(-2.5,6.0,-15.8);
    glVertex3f(-2.5,12.8,-15.8);
    glVertex3f(-2.5,12.8,-16.0);
    glVertex3f(-2.5,6.0,-16.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(239,154,83);
    glVertex3f(0.5,6.8,-15.8);
    glVertex3f(0.5,12.0,-15.8);
    glVertex3f(1.0,12.0,-15.8);
    glVertex3f(1.0,6.8,-15.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239,154,0);
    glVertex3f(1.0,6.0,-15.8);
    glVertex3f(1.0,12.8,-15.8);
    glVertex3f(1.0,12.8,-16.0);
    glVertex3f(1.0,6.0,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239,154,0);
    glVertex3f(0.5,6.0,-15.8);
    glVertex3f(0.5,12.8,-15.8);
    glVertex3f(0.5,12.8,-16.0);
    glVertex3f(0.5,6.0,-16.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(239,154,83);
    glVertex3f(-1.1,6.8,-15.8);
    glVertex3f(-1.1,12.0,-15.8);
    glVertex3f(-0.9,12.0,-15.8);
    glVertex3f(-0.9,6.8,-15.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239,154,0);
    glVertex3f(-1.1,6.0,-15.8);
    glVertex3f(-1.1,12.8,-15.8);
    glVertex3f(-1.1,12.8,-16.0);
    glVertex3f(-1.1,6.0,-16.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(239,154,0);
    glVertex3f(-0.9,6.0,-15.8);
    glVertex3f(-0.9,12.8,-15.8);
    glVertex3f(-0.9,12.8,-16.0);
    glVertex3f(-0.9,6.0,-16.0);
    glEnd();
//kaca jendela
    glBegin(GL_QUADS);
    glColor3ub(74,74,71);
    glVertex3f(-2.5,6.8,-15.9);
    glVertex3f(-2.5,12.0,-15.9);
    glVertex3f(-1.1,12.0,-15.9);
    glVertex3f(-1.1,6.8,-15.9);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(74,74,71);
    glVertex3f(-0.9,6.8,-15.9);
    glVertex3f(-0.9,12.0,-15.9);
    glVertex3f(0.5,12.0,-15.9);
    glVertex3f(0.5,6.8,-15.9);
    glEnd();
//Meja
    glBegin(GL_QUADS);
    glColor3ub(127,108,95);
    glVertex3f(-9.9,6.0,0.0);
    glVertex3f(-9.9,6.0,-15.0);
    glVertex3f(-4.5,6.0,-15.0);
    glVertex3f(-4.5,6.0,0.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(127,108,95);
    glVertex3f(-9.9,5.2,0.0);
    glVertex3f(-9.9,5.2,-15.0);
    glVertex3f(-4.5,5.2,-15.0);
    glVertex3f(-4.5,5.2,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(106,80,65);
    glVertex3f(-9.9,5.2,0.0);
    glVertex3f(-9.9,6.0,0.0);
    glVertex3f(-9.9,6.0,-15.0);
    glVertex3f(-9.9,5.2,-15.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(106,80,65);
    glVertex3f(-4.5,5.2,0.0);
    glVertex3f(-4.5,6.0,0.0);
    glVertex3f(-4.5,6.0,-15.0);
    glVertex3f(-4.5,5.2,-15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(106,80,65);
    glVertex3f(-9.9,5.2,0.0);
    glVertex3f(-9.9,6.0,0.0);
    glVertex3f(-4.5,6.0,0.0);
    glVertex3f(-4.5,5.2,0.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(106,80,65);
    glVertex3f(-9.9,5.2,-15.0);
    glVertex3f(-9.9,6.0,-15.0);
    glVertex3f(-4.5,6.0,-15.0);
    glVertex3f(-4.5,5.2,-15.0);
    glEnd();
    //kaki meja1
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-9.4,0.0,-1.0);
    glVertex3f(-9.4,6.0,-1.0);
    glVertex3f(-8.8,6.0,-1.0);
    glVertex3f(-8.8,0.0,-1.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-9.4,0.0,-1.6);
    glVertex3f(-9.4,6.0,-1.6);
    glVertex3f(-8.8,6.0,-1.6);
    glVertex3f(-8.8,0.0,-1.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-9.4,0.0,-1.0);
    glVertex3f(-9.4,6.0,-1.0);
    glVertex3f(-9.4,6.0,-1.6);
    glVertex3f(-9.4,0.0,-1.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-8.8,0.0,-1.0);
    glVertex3f(-8.8,6.0,-1.0);
    glVertex3f(-8.8,6.0,-1.6);
    glVertex3f(-8.8,0.0,-1.6);
    glEnd();
    //kaki meja2
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.6,0.0,-1.0);
    glVertex3f(-5.6,6.0,-1.0);
    glVertex3f(-5.0,6.0,-1.0);
    glVertex3f(-5.0,0.0,-1.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.6,0.0,-1.6);
    glVertex3f(-5.6,6.0,-1.6);
    glVertex3f(-5.0,6.0,-1.6);
    glVertex3f(-5.0,0.0,-1.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.6,0.0,-1.0);
    glVertex3f(-5.6,6.0,-1.0);
    glVertex3f(-5.6,6.0,-1.6);
    glVertex3f(-5.6,0.0,-1.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.0,0.0,-1.0);
    glVertex3f(-5.0,6.0,-1.0);
    glVertex3f(-5.0,6.0,-1.6);
    glVertex3f(-5.0,0.0,-1.6);
    glEnd();
    //kaki meja3
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-9.4,0.0,-14.5);
    glVertex3f(-9.4,6.0,-14.5);
    glVertex3f(-8.8,6.0,-14.5);
    glVertex3f(-8.8,0.0,-14.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-9.4,0.0,-13.9);
    glVertex3f(-9.4,6.0,-13.9);
    glVertex3f(-8.8,6.0,-13.9);
    glVertex3f(-8.8,0.0,-13.9);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-9.4,0.0,-13.9);
    glVertex3f(-9.4,6.0,-13.9);
    glVertex3f(-9.4,6.0,-14.5);
    glVertex3f(-9.4,0.0,-14.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-8.8,0.0,-13.9);
    glVertex3f(-8.8,6.0,-13.9);
    glVertex3f(-8.8,6.0,-14.5);
    glVertex3f(-8.8,0.0,-14.5);
    glEnd();
    //kaki meja2
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.6,0.0,-14.5);
    glVertex3f(-5.6,6.0,-14.5);
    glVertex3f(-5.0,6.0,-14.5);
    glVertex3f(-5.0,0.0,-14.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.6,0.0,-13.9);
    glVertex3f(-5.6,6.0,-13.9);
    glVertex3f(-5.0,6.0,-13.9);
    glVertex3f(-5.0,0.0,-13.9);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.6,0.0,-13.9);
    glVertex3f(-5.6,6.0,-13.9);
    glVertex3f(-5.6,6.0,-14.5);
    glVertex3f(-5.6,0.0,-14.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(50,50,50);
    glVertex3f(-5.0,0.0,-13.9);
    glVertex3f(-5.0,6.0,-13.9);
    glVertex3f(-5.0,6.0,-14.5);
    glVertex3f(-5.0,0.0,-14.5);
    glEnd();
//tikar meja
    glBegin(GL_QUADS);
    glColor3ub(141,166,186);
    glVertex3f(-9.9,0.01,0.0);
    glVertex3f(-9.9,0.01,-15.0);
    glVertex3f(0.0,0.01,-15.0);
    glVertex3f(0.0,0.01,0.0);
    glEnd();
//Komputer
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-7.0,6.0,-7.0);
    glVertex3f(-7.0,6.5,-7.0);
    glVertex3f(-7.0,6.5,-9.0);
    glVertex3f(-7.0,6.0,-9.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-9.0,6.0,-7.0);
    glVertex3f(-9.0,6.5,-7.0);
    glVertex3f(-9.0,6.5,-9.0);
    glVertex3f(-9.0,6.0,-9.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-9.0,6.0,-7.0);
    glVertex3f(-9.0,6.5,-7.0);
    glVertex3f(-7.0,6.5,-7.0);
    glVertex3f(-7.0,6.0,-7.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-9.0,6.0,-9.0);
    glVertex3f(-9.0,6.5,-9.0);
    glVertex3f(-7.0,6.5,-9.0);
    glVertex3f(-7.0,6.0,-9.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-9.0,6.5,-7.0);
    glVertex3f(-9.0,6.5,-9.0);
    glVertex3f(-7.0,6.5,-9.0);
    glVertex3f(-7.0,6.5,-7.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.5,6.5,-7.3);
    glVertex3f(-8.5,7.2,-7.3);
    glVertex3f(-8.5,7.2,-8.7);
    glVertex3f(-8.5,6.5,-8.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-7.3,6.5,-7.3);
    glVertex3f(-8.0,7.2,-7.3);
    glVertex3f(-8.0,7.2,-8.7);
    glVertex3f(-7.3,6.5,-8.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.5,6.5,-7.3);
    glVertex3f(-8.5,7.2,-7.3);
    glVertex3f(-8.0,7.2,-7.3);
    glVertex3f(-7.3,6.5,-7.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.5,6.5,-8.7);
    glVertex3f(-8.5,7.2,-8.7);
    glVertex3f(-8.0,7.2,-8.7);
    glVertex3f(-7.3,6.5,-8.7);
    glEnd();
    //monitor
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.4,7.2,-5.3);
    glVertex3f(-8.4,10.2,-5.3);
    glVertex3f(-8.4,10.2,-10.7);
    glVertex3f(-8.4,7.2,-10.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.4,10.2,-5.3);
    glVertex3f(-8.4,10.2,-10.7);
    glVertex3f(-8.2,10.2,-10.7);
    glVertex3f(-8.2,10.2,-5.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.4,7.2,-5.3);
    glVertex3f(-8.4,7.2,-10.7);
    glVertex3f(-8.2,7.2,-10.7);
    glVertex3f(-8.2,7.2,-5.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.4,7.2,-5.3);
    glVertex3f(-8.4,10.2,-5.3);
    glVertex3f(-8.2,10.2,-5.3);
    glVertex3f(-8.2,7.2,-5.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-8.4,7.2,-10.7);
    glVertex3f(-8.4,10.2,-10.7);
    glVertex3f(-8.2,10.2,-10.7);
    glVertex3f(-8.2,7.2,-10.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex3f(-8.2,7.2,-5.3);
    glVertex3f(-8.2,7.4,-5.3);
    glVertex3f(-8.2,7.4,-10.7);
    glVertex3f(-8.2,7.2,-10.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex3f(-8.2,10.0,-5.3);
    glVertex3f(-8.2,10.2,-5.3);
    glVertex3f(-8.2,10.2,-10.7);
    glVertex3f(-8.2,10.0,-10.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex3f(-8.2,7.2,-5.3);
    glVertex3f(-8.2,10.2,-5.3);
    glVertex3f(-8.2,10.2,-5.5);
    glVertex3f(-8.2,7.2,-5.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex3f(-8.2,7.2,-10.5);
    glVertex3f(-8.2,10.2,-10.5);
    glVertex3f(-8.2,10.2,-10.7);
    glVertex3f(-8.2,7.2,-10.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex3f(-8.2,7.4,-5.5);
    glVertex3f(-8.2,10.0,-5.5);
    glVertex3f(-8.2,10.0,-10.5);
    glVertex3f(-8.2,7.4,-10.5);
    glEnd();
//Tempat sampah
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(-9.0,0.0,6.0);
    glVertex3f(-9.0,5.0,6.0);
    glVertex3f(-8.0,5.0,7.0);
    glVertex3f(-8.0,0.0,7.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,100);
    glVertex3f(-8.0,0.0,7.0);
    glVertex3f(-8.0,5.0,7.0);
    glVertex3f(-7.0,5.0,7.0);
    glVertex3f(-7.0,0.0,7.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(-7.0,0.0,7.0);
    glVertex3f(-7.0,5.0,7.0);
    glVertex3f(-6.0,5.0,6.0);
    glVertex3f(-6.0,0.0,6.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,100);
    glVertex3f(-6.0,0.0,6.0);
    glVertex3f(-6.0,5.0,6.0);
    glVertex3f(-6.0,5.0,5.0);
    glVertex3f(-6.0,0.0,5.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,100);
    glVertex3f(-9.0,0.0,6.0);
    glVertex3f(-9.0,5.0,6.0);
    glVertex3f(-9.0,5.0,5.0);
    glVertex3f(-9.0,0.0,5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(-9.0,0.0,5.0);
    glVertex3f(-9.0,5.0,5.0);
    glVertex3f(-8.0,5.0,4.0);
    glVertex3f(-8.0,0.0,4.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,100);
    glVertex3f(-8.0,0.0,4.0);
    glVertex3f(-8.0,5.0,4.0);
    glVertex3f(-7.0,5.0,4.0);
    glVertex3f(-7.0,0.0,4.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(-7.0,0.0,4.0);
    glVertex3f(-7.0,5.0,4.0);
    glVertex3f(-6.0,5.0,5.0);
    glVertex3f(-6.0,0.0,5.0);
    glEnd();
//Lemari
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(0.5,0.0,-15.5);
    glVertex3f(0.5,5.0,-15.5);
    glVertex3f(3.5,5.0,-15.5);
    glVertex3f(3.5,0.0,-15.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(0.5,0.0,-13.5);
    glVertex3f(0.5,5.0,-13.5);
    glVertex3f(3.5,5.0,-13.5);
    glVertex3f(3.5,0.0,-13.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,90);
    glVertex3f(0.5,5.0,-13.5);
    glVertex3f(0.5,5.0,-15.5);
    glVertex3f(3.5,5.0,-15.5);
    glVertex3f(3.5,5.0,-13.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(0.5,0.0,-13.5);
    glVertex3f(0.5,5.0,-13.5);
    glVertex3f(0.5,5.0,-15.5);
    glVertex3f(0.5,0.0,-15.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex3f(3.5,0.0,-13.5);
    glVertex3f(3.5,5.0,-13.5);
    glVertex3f(3.5,5.0,-15.5);
    glVertex3f(3.5,0.0,-15.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,0.5,-13.35);
    glVertex3f(0.7,1.8,-13.35);
    glVertex3f(3.3,1.8,-13.35);
    glVertex3f(3.3,0.5,-13.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,2.2,-13.35);
    glVertex3f(0.7,3.5,-13.35);
    glVertex3f(3.3,3.5,-13.35);
    glVertex3f(3.3,2.2,-13.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,3.9,-13.35);
    glVertex3f(0.7,4.8,-13.35);
    glVertex3f(3.3,4.8,-13.35);
    glVertex3f(3.3,3.9,-13.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,4.8,-13.35);
    glVertex3f(0.7,4.8,-13.5);
    glVertex3f(3.3,4.8,-13.5);
    glVertex3f(3.3,4.8,-13.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,3.9,-13.35);
    glVertex3f(0.7,3.9,-13.5);
    glVertex3f(3.3,3.9,-13.5);
    glVertex3f(3.3,3.9,-13.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,3.5,-13.35);
    glVertex3f(0.7,3.5,-13.5);
    glVertex3f(3.3,3.5,-13.5);
    glVertex3f(3.3,3.5,-13.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,2.2,-13.35);
    glVertex3f(0.7,2.2,-13.5);
    glVertex3f(3.3,2.2,-13.5);
    glVertex3f(3.3,2.2,-13.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,1.8,-13.35);
    glVertex3f(0.7,1.8,-13.5);
    glVertex3f(3.3,1.8,-13.5);
    glVertex3f(3.3,1.8,-13.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,110);
    glVertex3f(0.7,0.5,-13.35);
    glVertex3f(0.7,0.5,-13.5);
    glVertex3f(3.3,0.5,-13.5);
    glVertex3f(3.3,0.5,-13.35);
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
