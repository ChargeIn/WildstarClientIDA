#include "../winhttp.h"

//----- (0000000140022480) ----------------------------------------------------
__int64 __fastcall sub_140022480(__int64 a1, _DWORD* a2)
{
	int* v4; // rax
	unsigned int v5; // esi
	__int64* v6; // rdi
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax

	if (*(_DWORD*)(a1 + 368) != 4)
		return 0i64;
	*(_DWORD*)(a1 + 456) = *a2;
	*(_DWORD*)(a1 + 460) = a2[1];
	*(_DWORD*)(a1 + 464) = a2[2];
	*(_DWORD*)(a1 + 468) = a2[3];
	*(_DWORD*)(a1 + 472) = a2[4];
	*(_DWORD*)(a1 + 476) = a2[5];
	v4 = sub_14018B280(1280i64, 8u);
	v5 = 0;
	if (v4)
		v6 = (__int64*)sub_140033E00((__int64)v4);
	else
		v6 = 0i64;
	if ((int)sub_140034330((__int64)v6, *(void(__fastcall****)(_QWORD))(a1 + 184), a1 + 376) < 0
		|| ((v7 = *(_QWORD*)(a1 + 560)) == 0
			? (v8 = sub_140048100(a1, (__int64)v6, 1))
			: (v8 = (*(__int64(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)v7 + 112i64))(v7, v6, 1i64)),
			v8 < 0 || (int)sub_140048100((__int64)v6, v6[12], 4) < 0))
	{
		v10 = *(_QWORD*)(a1 + 560);
		if (v10)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 112i64))(v10, a1, 1i64);
			v11 = *(_QWORD*)a1;
			*(_QWORD*)(a1 + 560) = 0i64;
			(*(void(__fastcall**)(__int64))(v11 + 8))(a1);
		}
		v5 = sub_1400232F0(a1, 501423);
	}
	else
	{
		*(_DWORD*)(a1 + 368) = 5;
		if (*(_QWORD*)(a1 + 560))
		{
			v9 = *(_QWORD*)a1;
			*(_QWORD*)(a1 + 560) = 0i64;
			*(_DWORD*)(a1 + 40) = 0;
			(*(void(__fastcall**)(__int64))(v9 + 8))(a1);
		}
	}
	if (v6)
		(*(void(__fastcall**)(__int64*))(*v6 + 8))(v6);
	return v5;
}

