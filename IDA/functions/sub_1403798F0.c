#include "../winhttp.h"

//----- (00000001403798F0) ----------------------------------------------------
__int64 __fastcall sub_1403798F0(__int64 a1, __m128* a2, __m128* a3, __int64 a4, __m128** a5, _DWORD* a6)
{
	__int64 v10; // r15
	__int64 v11; // rax
	__int64 v12; // rbx
	int v13; // eax
	int v15; // eax
	int* v16; // rax
	void(__fastcall * **v17)(_QWORD); // r8
	__int64 v18; // r9
	__m128* v19; // rbx
	int v20; // eax
	int v21; // r9d
	int v22; // r9d
	int v23[4]; // [rsp+50h] [rbp-158h] BYREF
	__m128 v24; // [rsp+60h] [rbp-148h] BYREF
	char v25[224]; // [rsp+70h] [rbp-138h] BYREF

	v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 56i64))(*(_QWORD*)(a1 + 48));
	v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 64i64))(*(_QWORD*)(a1 + 48));
	v12 = v11;
	if (v10)
	{
		v13 = sub_140379200((_DWORD*)a1, *a6);
		if (!v13
			|| !(*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, __int64, int, int*, _DWORD, _DWORD, char*, _DWORD))(*(_QWORD*)v10 + 1328i64))(
				v10,
				a2,
				a3,
				a4,
				v13,
				v23,
				0,
				a6[1],
				v25,
				a6[2]))
		{
			return 0i64;
		}
	}
	else
	{
		if (!v11)
			return 0i64;
		v15 = sub_140379200((_DWORD*)a1, *a6);
		if (!v15
			|| !(*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, __int64, int, int*, _DWORD, char*, _DWORD))(*(_QWORD*)v12 + 440i64))(
				v12,
				a2,
				a3,
				a4,
				v15,
				v23,
				a6[1],
				v25,
				a6[2]))
		{
			return 0i64;
		}
	}
	if (a5)
	{
		v16 = sub_14018B280(256i64, 0);
		if (v16)
		{
			v17 = *(void(__fastcall****)(_QWORD))(a1 + 32);
			v18 = 0i64;
			if ((void(__fastcall***)(_QWORD))a1 != v17)
				v18 = a1;
			v19 = (__m128*)sub_140391920((__int64)v16, *(float*)v23, v17, v18, (__int64)v25, a6[1]);
		}
		else
		{
			v19 = 0i64;
		}
		if ((a6[1] & 0x80000) != 0)
			v19[5].m128_i32[3] = 0;
		v20 = a6[1];
		if ((v20 & 0x7FFE0) != 0)
		{
			v24 = _mm_add_ps(
				_mm_mul_ps(
					_mm_sub_ps(*a3, *a2),
					_mm_shuffle_ps((__m128)(unsigned int)v23[0], (__m128)(unsigned int)v23[0], 0)),
				*a2);
			if ((v20 & 0x20) != 0)
			{
				sub_14035CB60(*(_QWORD*)(a1 + 16), &v24, (__int64)&v19[2]);
				v19[5].m128_i32[2] &= ~0x80u;
			}
			v21 = a6[1];
			if ((v21 & 0x1FC0) != 0)
				sub_14035CC90(*(_QWORD*)(a1 + 16), &v24, v19 + 2, v21);
			v22 = a6[1];
			if ((v22 & 0x7E000) != 0)
				sub_14035CD90(*(_QWORD*)(a1 + 16), &v24, (__int64)&v19[2], v22);
		}
		*a5 = v19;
	}
	return 1i64;
}

