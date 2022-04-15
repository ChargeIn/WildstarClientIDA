#include "../winhttp.h"

//----- (00000001400D2970) ----------------------------------------------------
bool __fastcall sub_1400D2970(__int64 a1, int a2)
{
	__int64 v2; // rax
	char* v3; // r8
	__int64 v4; // r9
	char* v5; // rax
	int v7; // [rsp+28h] [rbp-20h]
	int v9; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 32);
	v3 = &byte_140B7B700;
	v9 = 0;
	v4 = *(_QWORD*)(v2 + 3488);
	v5 = *(char**)(v2 + 3440);
	if (v5)
		v3 = v5;
	v7 = v4;
	sub_1400D4070(a1, 0x19u, (char*)a1, "sii>b", v3, v7, a2, &v9);
	return v9 != 0;
}
// 140B7B700: using guessed type char byte_140B7B700;

