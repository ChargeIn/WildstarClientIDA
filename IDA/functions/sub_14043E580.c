#include "../winhttp.h"

//----- (000000014043E580) ----------------------------------------------------
__int64 __fastcall sub_14043E580(__int64 a1, LARGE_INTEGER a2)
{
	__int64 v3; // rax
	int* v4; // rax
	__int64 v5; // rdi
	unsigned int v6; // eax
	void(__fastcall * **v7)(_QWORD); // r14
	unsigned int v8; // ebx
	int v9; // ebx
	__int64 v11; // rcx
	__int16* v12; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

	PerformanceCount = a2;
	if (*(_DWORD*)(a1 + 40) == 4)
		return 0i64;
	sub_14039F920(a1);
	v3 = *(_QWORD*)(a1 + 29088);
	if (v3)
		*(_DWORD*)(v3 + 748) = 1;
	if (*(_QWORD*)(qword_140C65A48 + 24))
		sub_1404D5AE0(qword_140C65A48);
	v4 = sub_14018B280(1280i64, 0);
	if (v4)
		v5 = sub_140033E00((__int64)v4);
	else
		v5 = 0i64;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 72) + 8i64))(a1 + 72);
	v7 = *(void(__fastcall****)(_QWORD))(a1 + 31016);
	v8 = v6;
	*(_DWORD*)(v5 + 104) = 1000;
	QueryPerformanceCounter(&PerformanceCount);
	*(_QWORD*)(v5 + 112) = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	v9 = sub_1400360F0(v5, v8);
	if (v9 >= 0)
	{
		*(_QWORD*)(v5 + 88) = v7;
		(**v7)(v7);
		*(_QWORD*)(v5 + 96) = a1;
		(**(void(__fastcall***)(__int64))a1)(a1);
		v9 = sub_140048100(a1, v5, 1);
		if (v9 >= 0)
		{
			v9 = sub_140048100(v5, *(_QWORD*)(v5 + 96), 4);
			if (v9 >= 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				return 0i64;
			}
		}
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v12 = sub_14034BDD0(v11, 143525);
	sub_1400481B0(a1, (__int64)v12, (void(__fastcall***)(_QWORD))a1);
	return (unsigned int)v9;
}
// 14043E6B1: variable 'v11' is possibly undefined
// 140C65A48: using guessed type __int64 qword_140C65A48;

