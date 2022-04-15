#include "../winhttp.h"

//----- (00000001407826C0) ----------------------------------------------------
void __fastcall sub_1407826C0(__int64 a1, __int64 a2, int a3, _DWORD* a4)
{
	int v4; // eax
	double v6; // xmm0_8
	double v7; // xmm1_8
	_QWORD* v8; // rcx
	double v10; // xmm6_8
	_DWORD* v11; // rax
	unsigned int v12; // eax
	int v13; // ecx
	__int128 v14; // [rsp+70h] [rbp-38h] BYREF
	__m128 v15; // [rsp+80h] [rbp-28h] BYREF

	v4 = a3 + *(_DWORD*)(a1 + 80) - *(_DWORD*)(a1 + 8);
	v6 = *(float*)(a1 + 84);
	v7 = *(float*)(a1 + 72);
	v8 = *(_QWORD**)(a1 + 56);
	v14 = 0i64;
	v10 = (double)v4 * 0.001 * v6 + v7;
	if ((*(int(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD, _QWORD, __m128*, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128*, _DWORD))(*v8 + 144i64))(
		v8,
		*v8,
		0i64,
		0i64,
		0i64,
		&v15,
		0i64,
		0i64,
		0i64,
		0i64,
		*(_DWORD*)(a1 + 76),
		&v14,
		*(_DWORD*)(a1 + 68)) >= 0)
	{
		v11 = (_DWORD*)sub_1401B2FE0((__int64)&v14, &v15);
		*a4 = *v11;
		a4[1] = v11[1];
		a4[2] = v11[2];
	}
	v12 = *(_DWORD*)(a1 + 76);
	if (v12 <= 0xA)
	{
		v13 = 1545;
		if (_bittest(&v13, v12))
		{
			if (v10 >= 1.0)
			{
				if (*(_QWORD*)(a1 + 24))
					sub_14079AB20(*(_QWORD*)(a1 + 16), a1);
			}
		}
	}
}

