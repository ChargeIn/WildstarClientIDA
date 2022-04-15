#include "../winhttp.h"

//----- (000000014088BA70) ----------------------------------------------------
__int16 __fastcall sub_14088BA70(__int64* a1, int* a2, char a3)
{
	unsigned __int16 v4; // ax
	__int16 result; // ax
	__int64* v6; // rcx
	int v7; // xmm0_4
	int v8; // eax
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // r9
	__int64 v12; // rax
	__int64* v13; // [rsp+40h] [rbp-38h] BYREF
	__int64 v14; // [rsp+48h] [rbp-30h]
	int v15; // [rsp+50h] [rbp-28h]
	int v16; // [rsp+54h] [rbp-24h]
	int v17; // [rsp+58h] [rbp-20h]
	int v18; // [rsp+5Ch] [rbp-1Ch]
	__int16 v19; // [rsp+60h] [rbp-18h]

	if (a3 || (v4 = *((_WORD*)a1 + 48), v4 <= 1u))
	{
		*((_WORD*)a1 + 48) = 0;
		v6 = (__int64*)a1[8];
		if (v6)
		{
			sub_14083AB80(qword_140C61B70, v6, 0x8000000i64, 1.0, *a2, a2[1], 0);
		}
		else if (*a2 <= 0)
		{
			v12 = *a1;
			*((_DWORD*)a1 + 22) = 1065353216;
			(*(void(__fastcall**)(__int64*))(v12 + 24))(a1);
		}
		else
		{
			v7 = *((_DWORD*)a1 + 22);
			v17 = *a2;
			v8 = a2[1];
			v15 = v7;
			v16 = 1065353216;
			v18 = v8;
			v13 = a1 + 5;
			v14 = 0x8000000i64;
			v19 = 256;
			v9 = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v13, 1, 0);
			*((_BYTE*)a1 + 72) |= 2u;
			a1[8] = v9;
			if (!v9)
			{
				LOBYTE(v11) = 1;
				(*(void(__fastcall**)(__int64*, __int64, __int64, __int64))a1[5])(a1 + 5, v14, v10, v11);
			}
		}
		return (*(__int64(__fastcall**)(__int64*))(*a1 + 16))(a1);
	}
	else
	{
		result = v4 - 1;
		*((_WORD*)a1 + 48) = result;
	}
	return result;
}
// 14088BB5A: variable 'v10' is possibly undefined
// 14088BB5A: variable 'v11' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61B70: using guessed type __int64 qword_140C61B70;

