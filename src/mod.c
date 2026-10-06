#include "modding.h"
#include "recomputils.h"
#include "recompconfig.h"

#include <ft/fighter.h>

// Runs at the start of every fighter's interrupt update. Holds each fighter's damage at a fixed percent
// while the "Damage Lock" option is enabled.
RECOMP_HOOK("ftMainProcUpdateInterrupt") void on_fighter_update_interrupt(GObj *fighter_gobj) {
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (recomp_get_config_u32("damage_lock") != 0) {
        fp->percent_damage = (s32)recomp_get_config_double("damage_lock_percent");
    }
}

// Exported functions can be called by other mods that list this one as a dependency.
RECOMP_EXPORT void my_custom_function() {

}
