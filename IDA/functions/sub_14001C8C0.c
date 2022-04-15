#include "../winhttp.h"

//----- (000000014001C8C0) ----------------------------------------------------
__int64 __fastcall sub_14001C8C0(_DWORD* a1, __m128i* a2, int a3)
{
	int v3; // edi
	__int64* v6; // r14
	int v9; // eax
	__int64 v10; // rax
	float v11; // xmm1_4
	__int64 v12; // rdx
	int v13; // eax
	__int64 v14; // rcx
	int v15; // eax
	int v16; // ebp
	int v17; // eax
	int* v18; // rbx
	int* v19; // rax
	unsigned int v20; // edi
	int* v21; // [rsp+20h] [rbp-28h] BYREF
	__int64 v22; // [rsp+28h] [rbp-20h]

	v3 = 0;
	v6 = 0i64;
	sub_14001C830((__int64)a1);
	if (!a1[141])
		return 2147500037i64;
	v9 = dword_140C8B1B0;
	a1[140] = a3;
	a1[14] = 0;
	if ((v9 & 1) != 0)
	{
		v11 = *(float*)&dword_140C8B1B4;
	}
	else
	{
		dword_140C8B1B0 = v9 | 1;
		v10 = sub_140200220(0x465u);
		if (v10)
		{
			v11 = *(float*)(v10 + 24);
			dword_140C8B1B4 = LODWORD(v11);
		}
		else
		{
			v11 = 0.5;
			dword_140C8B1B4 = 1056964608;
		}
	}
	v12 = *(unsigned int*)qword_140C63750;
	v13 = dword_140C3B950;
	if ((int)v12 < dword_140C3B950)
		v13 = *(_DWORD*)qword_140C63750;
	v14 = v13;
	v15 = dword_140C3B8F0;
	if ((int)v12 < dword_140C3B8F0)
		v15 = *(_DWORD*)qword_140C63750;
	v16 = (int)(float)((float)((float)(*((float*)&xmmword_140C3B960 + v14) * *((float*)&xmmword_140C3B900 + v15)) * v11)
		* 32768.0);
	if (v16 >= 0)
	{
		if (v16 > 0x10000)
			v16 = 0x10000;
	}
	else
	{
		v16 = 0;
	}
	v17 = (**(__int64(__fastcall***)(__int64, __int64, unsigned __int64))qword_140C65848)(
		qword_140C65848,
		v12,
		0x140000000ui64);
	v18 = 0i64;
	v22 = 0i64;
	v21 = 0i64;
	if (!v17)
		v16 = 0;
	if ((a1[140] & 0x20) != 0)
	{
		v6 = (__int64*)&v21;
		if (*(_DWORD*)(qword_140C7AAC0 + 8) == 2)
		{
			v19 = sub_14018DB00(0i64, 1ui64, 4i64);
			*v19 = 2;
		}
		else if (*(_DWORD*)(qword_140C7AAC0 + 8) == 3)
		{
			v19 = sub_14018DB00(0i64, 1ui64, 4i64);
			*v19 = 1;
		}
		else
		{
			v19 = sub_14018DB00(0i64, 1ui64, 4i64);
			*v19 = 0;
		}
		v18 = v19;
		v21 = v19;
		v22 = 1i64;
	}
	LOBYTE(v3) = (a1[140] & 4) != 0;
	a1[20] = v3;
	if (a1[34])
		v20 = sub_140002870((__int64)(a1 + 18), a2, (__int64)v6, v16);
	else
		v20 = -2147467259;
	if (v18)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
	return v20;
}
// 140C3B8F0: using guessed type int dword_140C3B8F0;
// 140C3B900: using guessed type __int128 xmmword_140C3B900;
// 140C3B950: using guessed type int dword_140C3B950;
// 140C3B960: using guessed type __int128 xmmword_140C3B960;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 140C8B1B0: using guessed type int dword_140C8B1B0;
// 140C8B1B4: using guessed type int dword_140C8B1B4;

