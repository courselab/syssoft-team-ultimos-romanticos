/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 Arthur Pin <artP2@tuta.io>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  Arthur Pin <artP2@tuta.io>
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* int verify_password (const char *); */

int main (void)
{
  int verified = 0;
  char user_key[10];

  /* Read user's credentials. */

  printf ("Enter password: ");
  scanf ("%9s", user_key);

  /* Verify credentials. */

  if (!strcmp (user_key, "foo"))
    verified = 1;

  if (!verified)
    {
      printf ("Access denied\n");
      exit (1);
    }

  printf ("Access granted.\n");

  /* Priviledged code follows... */

  return 0;
}


