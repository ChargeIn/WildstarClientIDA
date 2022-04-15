#include "../winhttp.h"

//----- (00000001402FC900) ----------------------------------------------------
float __fastcall sub_1402FC900(__int64 a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_QWORD*)a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64, int*, _QWORD))(v1 + 16))(a1, v4, 0i64);
	sub_140300DD0(a1, 4u);
	return *(float*)(a1 + 752);
}
// 1402FC900: using guessed type int var_18[6];

