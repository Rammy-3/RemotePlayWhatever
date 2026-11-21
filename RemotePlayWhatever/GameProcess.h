#ifndef GAMEPROCESS_H
#define GAMEPROCESS_H

#include <cstdint>

// The process ID of the running game that has Steam's in-game overlay loaded,
// or 0 if there's none (or on platforms where this isn't implemented).
//
// Steam ties a game's Remote Play Together group to this "overlay PID": it's
// the group the overlay's Remote Play menu (Shift+Tab) shows, and the one
// Steam's own invites use. If several processes have the overlay, the one
// started most recently wins. This walks every process's module list, so call
// it once per invite rather than on a timer.
uint32_t FindGameOverlayPID();

#endif // GAMEPROCESS_H
