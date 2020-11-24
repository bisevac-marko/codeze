#pragma once
#include "types.h"

typedef struct String {

	sizet length;
	sizet capacity;
	char* data;
  
} String;

String* str_create_char(const char* text);
String* str_create_size(sizet size);
sizet str_len(const String* str);
sizet cstr_len(const char* str);
void str_copy(char* src, const char* dest);
char str_at(String* str, sizet index);
void str_concat(String* s1, const char* s2);
void str_print(const String* str);
void str_delete_from_back(String* str, sizet count);
void str_delete(String* str);


