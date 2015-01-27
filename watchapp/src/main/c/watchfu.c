
#include <pebble.h>

static Window *theWindow

int main(void) {
    onInit();
    app_event_loop(); //This only returns once the app has ended
    onDestroy();
}


void onInit() {
    // Initialize the "Window" that our app uses later.
    theWindow = window_create();
    //  Put the new window on the stack, with animation enabled
    window_stack_push(theWindow, true);
}

void onDestroy() {
    window_destroy(window); //Don't leak the window
}
