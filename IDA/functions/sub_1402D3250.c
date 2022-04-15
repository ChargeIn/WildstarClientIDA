#include "../winhttp.h"

//----- (00000001402D3250) ----------------------------------------------------
void __fastcall sub_1402D3250(_QWORD* a1)
{
	__int64 v2; // rcx
	int v3[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3[0] = 0;
	if (v2 && (*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v2 + 32i64))(v2, v3))
	{
		sub_1402D3300(a1);
		if (*a1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
			*a1 = 0i64;
		}
	}
}
// 1402D3250: using guessed type int var_18[6];

