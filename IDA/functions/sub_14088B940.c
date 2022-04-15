#include "../winhttp.h"

//----- (000000014088B940) ----------------------------------------------------
unsigned __int8 __fastcall sub_14088B940(__int64 a1, int* a2)
{
	unsigned __int8 result; // al
	__int64* v5; // rdx
	int v6; // eax
	void(__fastcall * **v7)(_QWORD, __int64, __int64, __int64); // rsi
	__int64 v8; // rax
	__int64 v9; // r8
	__int64 v10; // r9
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // [rsp+40h] [rbp-38h] BYREF
	__int64 v14; // [rsp+48h] [rbp-30h]
	int v15; // [rsp+50h] [rbp-28h]
	int v16; // [rsp+54h] [rbp-24h]
	int v17; // [rsp+58h] [rbp-20h]
	int v18; // [rsp+5Ch] [rbp-1Ch]
	__int16 v19; // [rsp+60h] [rbp-18h]

	result = *(_BYTE*)(a1 + 98) & 0xF;
	if (result <= 1u)
	{
		v5 = *(__int64**)(a1 + 56);
		if (v5)
		{
			sub_14083AB80(qword_140C61B70, v5, 0x1000000i64, 1.0, *a2, a2[1], 0);
		}
		else if (*a2 > 0)
		{
			v17 = *a2;
			v6 = a2[1];
			v7 = (void(__fastcall***)(_QWORD, __int64, __int64, __int64))(a1 + 40);
			v16 = 1065353216;
			v15 = 0;
			v18 = v6;
			v13 = a1 + 40;
			v14 = 0x1000000i64;
			v19 = 256;
			v8 = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v13, 1, 0);
			*(_BYTE*)(a1 + 72) |= 1u;
			v11 = v8;
			*(_QWORD*)(a1 + 56) = v8;
			if (v8)
			{
				v12 = a2[2];
				if (v12)
					*(float*)(v11 + 20) = (float)(v12 / 1024) + *(float*)(v11 + 20);
			}
			else
			{
				LOBYTE(v10) = 1;
				(**v7)(v7, v14, v9, v10);
			}
		}
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
	}
	return result;
}
// 14088BA23: variable 'v9' is possibly undefined
// 14088BA23: variable 'v10' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61B70: using guessed type __int64 qword_140C61B70;

