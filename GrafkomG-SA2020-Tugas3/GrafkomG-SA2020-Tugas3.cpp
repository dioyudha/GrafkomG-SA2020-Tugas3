#include <iostream>
#include <GL/glut.h>

#define ub unsigned char

void render(void)
{


}

void keyboardDown(ub key, int mouseX, int mouseY)
{
	system("cls");
	std::cout << key << " " << std::endl;
}
void keyboardUp(ub key, int mouseX, int mouseY)
{
	std::cout << key << " " << std::endl;
}
void mouseMovement(int x, int y) {
	system("cls");
	std::cout << "mouseX:" << x << " | " << "mouseY:" << y << std::endl;
}
void mouse(int xbutton, int ystate, int x, int y) {
	system("cls");
	std::cout << "mouseX:" << x << " | " << "mouseY:" << y << std::endl;
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_MULTISAMPLE);
	glutInitWindowSize(100, 100);
	glutInitWindowPosition(600, 300);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(render);
	glutMotionFunc(mouseMovement);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboardDown);
	glutKeyboardFunc(keyboardUp);


	glClearColor(0, 0, 0, 1);
	gluOrtho2D(0, 100, 100, 0);

	glutMainLoop();
	return 0;


}
