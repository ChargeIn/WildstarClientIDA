#include "../winhttp.h"

//----- (000000014002C9D0) ----------------------------------------------------
_QWORD* sub_14002C9D0(__int64 a1, _QWORD* a2, __int64 a3, ...)
{
	__int64 v3; // r11
	va_list v5; // rax
	_WORD* v6; // rdx
	_WORD* v7; // r8
	unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
	unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF
	va_list va; // [rsp+48h] [rbp+20h]
	va_list va1; // [rsp+50h] [rbp+28h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v10 = va_arg(va1, _QWORD);
	v3 = *(_QWORD*)(a1 + 8);
	v5 = (va_list)&v9;
	v6 = (_WORD*)(v3 + 2 * a3);
	v9 = ((*(_QWORD*)(a1 + 16) - v3) >> 1) - a3;
	if (v9 >= v10)
		va_copy(v5, va);
	v7 = (_WORD*)(v3 + 2 * (a3 + *(_QWORD*)v5));
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	sub_14002C930(a2, v6, v7);
	return a2;
}

