#include "../winhttp.h"

//----- (000000014010D0A0) ----------------------------------------------------
__int64 __fastcall sub_14010D0A0(__int64 a1)
{
	int v1; // ebx
	__int64 v2; // r10
	int* v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rdi
	float v7; // xmm6_4
	__int64 v8; // rcx
	double v9; // xmm1_8
	__int64 v10; // rax
	int* v11; // r9
	_QWORD* v12; // rcx
	int* v13; // rax
	int v15; // [rsp+20h] [rbp-38h] BYREF
	int v16[4]; // [rsp+28h] [rbp-30h] BYREF

	v1 = 0;
	v2 = 3i64;
	v16[0] = 2;
	v16[2] = 4;
	v16[1] = 3;
	if (*(_QWORD*)(a1 + 160))
	{
		v4 = sub_14018B280(16i64, 0);
		v5 = (__int64)v4;
		if (v4)
			*(_WORD*)v4 = 0;
		v6 = *(_QWORD*)(a1 + 160);
		v7 = *(float*)&dword_140C63664;
		if (v6)
		{
			(**(void(__fastcall***)(__int64))v6)(v6);
			if ((int)((__int64)(*(_QWORD*)(v6 + 96) - *(_QWORD*)(v6 + 88)) >> 3) > 0)
				v8 = **(_QWORD**)(v6 + 88);
			else
				v8 = v6;
			*(_QWORD*)&v9 = (unsigned int)dword_140C63664;
			*(float*)&v9 = *(float*)&dword_140C63664 - v7;
			v10 = sub_140101180(v8, v9, 0i64);
			v1 = *(_DWORD*)(v10 + 28) - *(_DWORD*)(v10 + 24);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		}
		if (v5)
			sub_14018B900(v5, 0);
	}
	else
	{
		v11 = v16;
		do
		{
			v12 = *(_QWORD**)(a1 + 8i64 * *v11 + 80);
			if (v12)
			{
				v13 = sub_140101470(v12, &v15);
				if (v1 < *v13)
					v1 = *v13;
			}
			++v11;
			--v2;
		} while (v2);
	}
	return (unsigned int)v1;
}
// 14010D19C: variable 'v11' is possibly undefined
// 14010D1A0: variable 'v2' is possibly undefined
// 140C63664: using guessed type int dword_140C63664;

