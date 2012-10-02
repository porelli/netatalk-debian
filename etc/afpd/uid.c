/*
 * $Id: uid.c,v 1.14 2005-04-28 20:49:45 bfernhomberg Exp $
 * code: jeff@univrel.pr.uconn.edu
 *
 * These functions are abstracted here, so that all calls for resolving
 * user/group names can be centrally changed (good for OS dependant calls
 * across the package).
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

