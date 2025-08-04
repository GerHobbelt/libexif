/* Copyright (C) 2005-2007 Hans Ulrich Niedermann <gp@n-dimensional.de>
 * SPDX-License-Identifier: LGPL-2.0-or-later
 */

#include "config.h"
#include "libexif/i18n.h"

#include <stdio.h>

#if defined(BUILD_MONOLITHIC)
#define main  exif_print_localedir_test_main
#endif

int main(void)
{
  puts(LOCALEDIR);
  puts("\n");
  return 0;
}
