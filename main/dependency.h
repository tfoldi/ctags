/*
 *
 *  Copyright (c) 2016, Red Hat, Inc.
 *  Copyright (c) 2016, Masatake YAMATO
 *
 *  Author: Masatake YAMATO <yamato@redhat.com>
 *
 *   This source code is released for free distribution under the terms of the
 *   GNU General Public License version 2 or (at your option) any later version.
 *
 */
#ifndef CTAGS_MAIN_DEPENDENCY_H
#define CTAGS_MAIN_DEPENDENCY_H

#include "general.h"

#include "types.h"


typedef enum eDepType {
	DEPTYPE_KIND_OWNER,
	COUNT_DEPTYPES,
} depType;

typedef struct sParserDependency {
	depType type;
	const char *upperParser;
	void *data;
} parserDependency;


extern void linkDependencyAtInitializeParsing (depType dtype,
					       parserDefinition *const masterParser,
					       parserDefinition *const slaveParser);

#endif	/* CTAGS_MAIN_DEPENDENCY_H */

/* vi:set tabstop=4 shiftwidth=4: */
