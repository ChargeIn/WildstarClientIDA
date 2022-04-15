#include "../winhttp.h"

//----- (000000014088B860) ----------------------------------------------------
__int64 __fastcall sub_14088B860(__int64 a1, int* a2)
{
	__int64* v3; // rcx
	__int64 result; // rax
	int v5; // eax
	__int64 v6; // r8
	__int64 v7; // r9
	__int64 v8; // [rsp+40h] [rbp-38h] BYREF
	__int64 v9; // [rsp+48h] [rbp-30h]
	int v10; // [rsp+50h] [rbp-28h]
	int v11; // [rsp+54h] [rbp-24h]
	int v12; // [rsp+58h] [rbp-20h]
	int v13; // [rsp+5Ch] [rbp-1Ch]
	__int16 v14; // [rsp+60h] [rbp-18h]

	++* (_WORD*)(a1 + 96);
	v3 = *(__int64**)(a1 + 64);
	if (v3)
		return sub_14083AB80(qword_140C61B70, v3, 0x4000000i64, 0.0, *a2, a2[1], 0);
	v12 = *a2;
	v5 = a2[1];
	v10 = 1065353216;
	v11 = 0;
	v13 = v5;
	v8 = a1 + 40;
	v9 = 0x4000000i64;
	v14 = 256;
	result = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v8, 1, 0);
	*(_BYTE*)(a1 + 72) |= 2u;
	*(_QWORD*)(a1 + 64) = result;
	if (!result)
	{
		LOBYTE(v7) = 1;
		return (**(__int64(__fastcall***)(__int64, __int64, __int64, __int64))(a1 + 40))(a1 + 40, v9, v6, v7);
	}
	return result;
}
// 14088B926: variable 'v6' is possibly undefined
// 14088B926: variable 'v7' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61B70: using guessed type __int64 qword_140C61B70;

