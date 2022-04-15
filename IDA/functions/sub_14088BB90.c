#include "../winhttp.h"

//----- (000000014088BB90) ----------------------------------------------------
__int64 __fastcall sub_14088BB90(__int64 a1, int* a2, unsigned int a3)
{
	char v3; // al
	__int64 result; // rax
	__int64* v6; // rcx
	int v7; // eax
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 v10; // [rsp+40h] [rbp-38h] BYREF
	__int64 v11; // [rsp+48h] [rbp-30h]
	int v12; // [rsp+50h] [rbp-28h]
	int v13; // [rsp+54h] [rbp-24h]
	int v14; // [rsp+58h] [rbp-20h]
	int v15; // [rsp+5Ch] [rbp-1Ch]
	__int16 v16; // [rsp+60h] [rbp-18h]

	v3 = *(_BYTE*)(a1 + 98);
	if ((v3 & 0x10) != 0)
		return (**(__int64(__fastcall***)(__int64, _QWORD))a1)(a1, a3);
	v6 = *(__int64**)(a1 + 56);
	if (v6)
		return sub_14083AB80(qword_140C61B70, v6, 0x2000000i64, 0.0, *a2, a2[1], 0);
	if (*a2 <= 0 || (v3 & 3) == 0)
		return (**(__int64(__fastcall***)(__int64, _QWORD))a1)(a1, a3);
	v7 = a2[1];
	v14 = *a2;
	v12 = 1065353216;
	v13 = 0;
	v15 = v7;
	v11 = 0x2000000i64;
	v10 = a1 + 40;
	v16 = 256;
	result = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v10, 1, 0);
	*(_BYTE*)(a1 + 72) |= 1u;
	*(_QWORD*)(a1 + 56) = result;
	if (!result)
	{
		LOBYTE(v9) = 1;
		return (**(__int64(__fastcall***)(__int64, __int64, __int64, __int64))(a1 + 40))(a1 + 40, v11, v8, v9);
	}
	return result;
}
// 14088BC78: variable 'v8' is possibly undefined
// 14088BC78: variable 'v9' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61B70: using guessed type __int64 qword_140C61B70;

