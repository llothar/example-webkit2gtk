#include <gtk/gtk.h>
#include <webkit2/webkit2.h>


static void destroyWindowCb(GtkWidget*, GtkWidget*) {
    gtk_main_quit();
}

static gboolean closeWebViewCb(WebKitWebView*, GtkWidget* window) {
    gtk_widget_destroy(window);
    return TRUE;
}


static void activate (GtkApplication* app, gpointer) {
  GtkWidget *window = gtk_application_window_new(app);
  gtk_window_set_title (GTK_WINDOW (window), "Example WebKit2Gtk");
  gtk_window_set_default_size (GTK_WINDOW (window), 800, 600);
  
  WebKitWebView *webView = WEBKIT_WEB_VIEW(webkit_web_view_new());
  gtk_container_add(GTK_CONTAINER(window), GTK_WIDGET(webView));
  g_signal_connect(window, "destroy", G_CALLBACK(destroyWindowCb), NULL);
  g_signal_connect(webView, "close", G_CALLBACK(closeWebViewCb), window);
  webkit_web_view_load_uri(webView, "http://www.webkitgtk.org/");
  gtk_widget_grab_focus(GTK_WIDGET(webView));
  
  gtk_widget_show_all (window);
}


int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  GtkApplication *app = gtk_application_new ("org.example.example-webkit2gtk", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  int status = g_application_run(G_APPLICATION (app), argc, argv);
  g_object_unref (app);
  
  return status;
}



