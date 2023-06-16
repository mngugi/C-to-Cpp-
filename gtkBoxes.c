#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>

void end_program(GtkWidget *wid, gpointer ptr) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);  // Initialize the GTK library

    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);  // Create a new top-level window
    GtkWidget *btn = gtk_button_new_with_label("Exit");  // Create a new button with a label
    g_signal_connect(btn, "clicked", G_CALLBACK(end_program), NULL);

    gtk_container_add(GTK_CONTAINER(win), btn);  // Add the button to the window container

    GtkWidget *lbl = gtk_label_new("label");

    GtkWidget *box = gtk_box_new(FALSE, 5);
    gtk_box_pack_start (GTK_BOX (box), lbl, TRUE, TRUE, 0 );
    gtk_box_pack_start (GTK_BOX (box), btn, TRUE, TRUE, 0 );
    gtk_container_add(GTK_CONTAINER(win), box);
    gtk_container_add(GTK_CONTAINER(win), lbl);
    gtk_widget_show_all(win);  // Show all the widgets in the window
    gtk_main();  // Start the GTK main loop for event handling

    return 0;
}
