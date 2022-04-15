#include "../winhttp.h"

//----- (00000001401810E0) ----------------------------------------------------
__int64 __fastcall sub_1401810E0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // r8d
	int v4; // eax
	_DWORD* v5; // r10
	_DWORD* v6; // rdi
	__int64 v7; // rcx
	int v8; // r8d
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // r9d
	__int64 v12; // rdi
	int v13; // r8d
	float v14; // xmm6_4
	int v15; // eax
	int v16; // r9d
	__int64 v17; // r10
	int v18; // r8d
	__int64 result; // rax
	int v20; // [rsp+60h] [rbp+8h] BYREF
	unsigned int v21; // [rsp+68h] [rbp+10h] BYREF

	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1088) + 48i64))(*(_QWORD*)(a1 + 1088)))
	{
		v2 = *(_QWORD*)(a1 + 1088);
		v20 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, int*, __int64))(*(_QWORD*)v2 + 72i64))(v2, 0i64, &v20, 2i64);
		v3 = 0;
		do
		{
			v4 = sub_1401280F0((float)v3, 1.0, 1.0);
			v6 = v5;
			v7 = 16i64;
			v3 = v8 + 1;
			while (v7)
			{
				*v6++ = v4;
				--v7;
			}
		} while ((unsigned int)v3 < 0x168);
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1088) + 80i64))(*(_QWORD*)(a1 + 1088), 0i64);
	}
	v9 = *(_QWORD*)(a1 + 1184);
	v21 = 0;
	v10 = (*(__int64(__fastcall**)(__int64, _QWORD, unsigned int*, __int64))(*(_QWORD*)v9 + 72i64))(
		v9,
		0i64,
		&v21,
		2i64);
	v11 = 0;
	v12 = v10;
	do
	{
		v13 = 0;
		v14 = (float)(360.0 - (float)v11) * 0.0027777778;
		do
		{
			v15 = sub_1401280F0(*(float*)(a1 + 1084), (float)v13 * 0.0027777778, v14);
			v13 = v18 + 1;
			v12 += 4i64;
			*(_DWORD*)(v12 - 4) = v15;
		} while ((unsigned int)v13 < 0x168);
		v11 = v16 + 1;
		v12 = v17 + v21;
	} while ((unsigned int)v11 < 0x168);
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1184) + 80i64))(*(_QWORD*)(a1 + 1184), 0i64);
	result = sub_1401280F0(
		*(float*)(a1 + 1084),
		*(float*)(a1 + 1168) * 0.0027777778,
		(float)(360.0 - *(float*)(a1 + 1172)) * 0.0027777778);
	*(_DWORD*)(a1 + 1024) = result;
	return result;
}
// 140181153: variable 'v5' is possibly undefined
// 14018115D: variable 'v8' is possibly undefined
// 1401811FF: variable 'v18' is possibly undefined
// 140181216: variable 'v16' is possibly undefined
// 140181219: variable 'v17' is possibly undefined

