#include <windows.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void keybaord(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode();
	glutInitWindowSize();
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Dio Yudha Perdana 672018165");
	init();
}