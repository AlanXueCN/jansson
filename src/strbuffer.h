/*
 * Copyright (c) 2009-2012 Petri Lehtinen <petri@digip.org>
 *
 * Jansson is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#ifndef STRBUFFER_H
#define STRBUFFER_H

typedef struct {
    char *value;
    size_t length;   /* bytes used */
    size_t size;     /* bytes allocated */
} strbuffer_t;

int json_strbuffer_init(strbuffer_t *strbuff);
void json_strbuffer_close(strbuffer_t *strbuff);

void json_strbuffer_clear(strbuffer_t *strbuff);

const char *json_strbuffer_value(const strbuffer_t *strbuff);
char *json_strbuffer_steal_value(strbuffer_t *strbuff);

int json_strbuffer_append(strbuffer_t *strbuff, const char *string);
int json_strbuffer_append_byte(strbuffer_t *strbuff, char byte);
int json_strbuffer_append_bytes(strbuffer_t *strbuff, const char *data, size_t size);

char json_strbuffer_pop(strbuffer_t *strbuff);

#endif
