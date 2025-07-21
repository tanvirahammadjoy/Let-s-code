#include <gtk/gtk.h>

// Callback for button
static void on_button_clicked(GtkWidget *widget, gpointer data)
{
    gtk_label_set_text(GTK_LABEL(data), "Hello, Linux!");
}

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *label;
    GtkWidget *vbox;

    gtk_init(&argc, &argv);

    // Create main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "My Linux App");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 150);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create label and button
    label = gtk_label_new("Click the button!");
    button = gtk_button_new_with_label("Click Me");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), label);

    // Vertical layout
    vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_box_pack_start(GTK_BOX(vbox), label, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), button, TRUE, TRUE, 0);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
