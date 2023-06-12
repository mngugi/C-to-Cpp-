#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>

void end_program(GtkWidget *wid, gpointer ptr) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);  // Initialize the GTK library

    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);  // Create a new top-level window
    GtkWidget *btn = gtk_button_new_with_label("Close window");  // Create a new button with a label
    g_signal_connect(btn, "clicked", G_CALLBACK(end_program), NULL);

    gtk_container_add(GTK_CONTAINER(win), btn);  // Add the button to the window container
    gtk_widget_show_all(win);  // Show all the widgets in the window

    gtk_main();  // Start the GTK main loop for event handling

    return 0;
}

