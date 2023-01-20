/** This Coding Exercise shows how to make GUI applications using GTK Toolkit  **/
/** GTK is based on Object Orientation  **/
/** GTK is event driven     **/
/** GTK reference page https://www.gtk.org/docs/getting-started/  **/

#include <gtk/gtk.h>
int main (int argc, char *argv[])
{
gtk_init (&argc, &argv);
GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
gtk_widget_show (win);
gtk_main ();
return 0;
}

