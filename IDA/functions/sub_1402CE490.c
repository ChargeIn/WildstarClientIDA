#include "../winhttp.h"

//----- (00000001402CE490) ----------------------------------------------------
void __fastcall sub_1402CE490(__int64* a1, unsigned __int64 a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 v8; // rbx
	_QWORD* v9; // rax

	v3 = a1[2];
	v6 = a1[1];
	v7 = (v3 - v6) / 368;
	if (a2 >= v7)
	{
		sub_1402CE850(a1, v3, a2 - v7, a3);
	}
	else
	{
		v8 = v6 + 368 * a2;
		v9 = (_QWORD*)sub_1402CF450(v3, v3, v8);
		sub_1402CED90(v9, (_QWORD*)a1[2]);
		a1[2] += 368
			* (((unsigned __int64)(((unsigned __int128)((v3 - v8) * (__int128)0x4DE9BD37A6F4DE9Bi64) >> 64) - (v3 - v8)) >> 63)
				+ ((__int64)(((unsigned __int128)((v3 - v8) * (__int128)0x4DE9BD37A6F4DE9Bi64) >> 64) - (v3 - v8)) >> 8));
	}
}

