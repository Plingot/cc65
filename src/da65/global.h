/*****************************************************************************/
/*                                                                           */
/*				   global.h				     */
/*                                                                           */
/*		  Global variables for the da65 disassembler		     */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/* (C) 2000      Ullrich von Bassewitz                                       */
/*               Wacholderweg 14                                             */
/*               D-70597 Stuttgart                                           */
/* EMail:        uz@musoftware.de                                            */
/*                                                                           */
/*                                                                           */
/* This software is provided 'as-is', without any expressed or implied       */
/* warranty.  In no event will the authors be held liable for any damages    */
/* arising from the use of this software.                                    */
/*                                                                           */
/* Permission is granted to anyone to use this software for any purpose,     */
/* including commercial applications, and to alter it and redistribute it    */
/* freely, subject to the following restrictions:                            */
/*                                                                           */
/* 1. The origin of this software must not be misrepresented; you must not   */
/*    claim that you wrote the original software. If you use this software   */
/*    in a product, an acknowledgment in the product documentation would be  */
/*    appreciated but is not required.                                       */
/* 2. Altered source versions must be plainly marked as such, and must not   */
/*    be misrepresented as being the original software.                      */
/* 3. This notice may not be removed or altered from any source              */
/*    distribution.                                                          */
/*                                                                           */
/*****************************************************************************/



#ifndef GLOBAL_H
#define GLOBAL_H



/*****************************************************************************/
/*     	      	    		     Data			    	     */
/*****************************************************************************/



/* File names */
extern const char*	InFile;		/* Name of input file */
extern const char*	OutFile;	/* Name of output file */

/* Default extensions */
extern const char	OutExt[];	/* Output file extension */
extern const char 	CfgExt[];	/* Config file extension */

/* Flags and other command line stuff */
extern unsigned char	FormFeeds;	/* Add form feeds to the output? */
extern unsigned char	PassCount;	/* How many passed do we do? */
extern unsigned long	StartAddr;	/* Start/load address of the program */


/* Stuff needed by many routines */
extern unsigned char	Pass;		/* Disassembler pass */

/* Page formatting */
#define MIN_PAGE_LEN	32
#define MAX_PAGE_LEN	127
extern int	     	PageLength;	/* Length of a listing page */
extern unsigned		MIndent;	/* Mnemonic indent */
extern unsigned		AIndent;	/* Argument indent */
extern unsigned 	CIndent;	/* Comment indent */
extern unsigned 	TIndent;	/* Text bytes indent */
extern unsigned		BytesPerLine;	/* Max. number of data bytes per line */



/* End of global.h */

#endif



