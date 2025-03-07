#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   12
#define GCCPLUGIN_VERSION_MINOR   1
#define GCCPLUGIN_VERSION_PATCHLEVEL   1
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "12.1.1";
static char datestamp[] = "20220729";
static char devphase[] = "Stable";
static char revision[] = "";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
