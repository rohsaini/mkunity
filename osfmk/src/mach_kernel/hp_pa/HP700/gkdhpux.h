/*
 * Copyright 1991-1998 by Open Software Foundation, Inc. 
 *              All Rights Reserved 
 *  
 * Permission to use, copy, modify, and distribute this software and 
 * its documentation for any purpose and without fee is hereby granted, 
 * provided that the above copyright notice appears in all copies and 
 * that both the copyright notice and this permission notice appear in 
 * supporting documentation. 
 *  
 * OSF DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE 
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
 * FOR A PARTICULAR PURPOSE. 
 *  
 * IN NO EVENT SHALL OSF BE LIABLE FOR ANY SPECIAL, INDIRECT, OR 
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM 
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN ACTION OF CONTRACT, 
 * NEGLIGENCE, OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION 
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. 
 */
/*
 * MkLinux
 */
/* 
 * Copyright (c) 1994, The University of Utah and
 * the Computer Systems Laboratory at the University of Utah (CSL).
 * All rights reserved.
 *
 * Permission to use, copy, modify and distribute this software is hereby
 * granted provided that (1) source code retains these copyright, permission,
 * and disclaimer notices, and (2) redistributions including binaries
 * reproduce the notices in supporting documentation, and (3) all advertising
 * materials mentioning features or use of this software display the following
 * acknowledgement: ``This product includes software developed by the
 * Computer Systems Laboratory at the University of Utah.''
 *
 * THE UNIVERSITY OF UTAH AND CSL ALLOW FREE USE OF THIS SOFTWARE IN ITS "AS
 * IS" CONDITION.  THE UNIVERSITY OF UTAH AND CSL DISCLAIM ANY LIABILITY OF
 * ANY KIND FOR ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.
 *
 * CSL requests users of this software to return to csl-dist@cs.utah.edu any
 * improvements that they make and grant CSL redistribution rights.
 *
 * 	Utah $Hdr: gkdhpux.h 1.3 94/12/14$
 */

/*
 * This file contains the compatibility IOCTL calls with HPUX
 *
 * NOTE: this was generated by program dump of valid IOCTL calls in HPUX
 */
#define PS2_INDICATORS          0x80045001
#define PS2_IDENT               0x40045002
#define PS2_SCANCODE            0xc0045003
#define PS2_ENABLE              0x20005004
#define PS2_DISABLE             0x20005005
#define PS2_STREAMMODE          0x20005006
#define PS2_SAMPLERATE          0x80045007
#define PS2_RESET               0x40045008
#define PS2_RESOLUTION          0x80045009
#define PS2_ALL_TMAT            0x2000500a
#define PS2_ALL_MKBRK           0x2000500b
#define PS2_ALL_TMAT_MKBRK      0x2000500c
#define PS2_ALL_MK              0x2000500d
#define PS2_KEY_MKBRK           0x8004500e
#define PS2_KEY_MAKE            0x8004500f
#define PS2_KEY_TMAT            0x80045010
#define PS2_RATEDELAY           0x80045011
#define PS2_PORTSTAT            0x40045012
#define PS2_SETDEFAULT          0x20005014
#define PS2_PROMPTMODE          0x20005015
#define PS2_REPORT              0x40045016
#define PS2_STATUS              0x40045017
#define PS2_2TO1_SCALING        0x20005018
#define PS2_1TO1_SCALING        0x20005019