#include "../winhttp.h"

//----- (0000000140609670) ----------------------------------------------------
__int64 __fastcall sub_140609670(__int64 a1, int a2)
{
	__int64 v3; // rax
	float* v4; // rsi
	int v5; // ebx
	int v6; // eax
	int v7; // eax
	float v8; // xmm0_4
	__int64 result; // rax
	__int64 v10; // r14
	__int64 v11; // rsi
	_QWORD* v12; // rbx
	__int64 v13; // rbp
	_QWORD* v14; // rbx
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	__int64 v16; // [rsp+28h] [rbp-30h]
	__int64 v17; // [rsp+30h] [rbp-28h]
	__int64 v18; // [rsp+38h] [rbp-20h]

	*(_BYTE*)(a1 + 412) = 0;
	*(_DWORD*)(a1 + 416) = 0;
	*(_BYTE*)(a1 + 420) = 0;
	*(_DWORD*)(a1 + 408) = 0;
	*(_DWORD*)(a1 + 232) = a2;
	v3 = sub_1403D90D0(qword_140C65898, a2);
	v4 = (float*)v3;
	if (v3)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 64i64))(v3);
		v6 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v4 + 72i64))(v4);
		*(_DWORD*)(a1 + 272) = v5;
		*(_DWORD*)(a1 + 280) = v6;
		*(_DWORD*)(a1 + 276) = v5;
		*(_QWORD*)(a1 + 264) = 0i64;
		v7 = (int)v4[135];
		v8 = v4[387];
		*(_DWORD*)(a1 + 328) = v7;
		*(_DWORD*)(a1 + 332) = v7;
		*(_QWORD*)(a1 + 320) = 0i64;
		*(_DWORD*)(a1 + 336) = (int)v8;
	}
	result = sub_140609980(a1, 2);
	v10 = a1 + 8;
	v11 = 13i64;
	v15 = 150i64;
	v16 = 1065353216i64;
	v17 = 0i64;
	v12 = (_QWORD*)(a1 + 8);
	v18 = 0i64;
	v13 = 13i64;
	do
	{
		if (*v12)
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(*(_QWORD*)*v12 + 584i64))(*v12, 0i64, &v15);
		++v12;
		--v13;
	} while (v13);
	v15 = 150i64;
	v16 = 1065353216i64;
	v17 = 0i64;
	v18 = 0i64;
	v14 = (_QWORD*)(a1 + 120);
	do
	{
		if (*v14)
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(*(_QWORD*)*v14 + 584i64))(*v14, 0i64, &v15);
		++v14;
		--v11;
	} while (v11);
	*(_QWORD*)(a1 + 288) = v10;
	*(_DWORD*)(a1 + 284) = 21;
	*(_QWORD*)(a1 + 344) = v10;
	*(_DWORD*)(a1 + 340) = 22;
	*(_QWORD*)(a1 + 400) = v10;
	*(_DWORD*)(a1 + 396) = 23;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

