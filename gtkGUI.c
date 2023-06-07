#include <gtk/gtk.h>

int main (int argc, char *argv[])
{
    gtk_init (&argc, &argv);  // Initialize the GTK library
    
    GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);  // Create a new top-level window
    GtkWidget *btn = gtk_button_new_with_label ("Close window");  // Create a new button with a label
    
    gtk_container_add (GTK_CONTAINER (win), btn);  // Add the button to the window container
    gtk_widget_show_all (win);  // Show all the widgets in the window
    
    gtk_main ();  // Start the GTK main loop for event handling
    
    return 0;
}

