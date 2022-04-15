#include "../winhttp.h"

//----- (0000000140371BA0) ----------------------------------------------------
__int64 __fastcall sub_140371BA0(__int64 a1)
{
	__int64 v1; // r9
	int v3; // eax
	int v4; // ecx
	int v5; // xmm0_4
	unsigned __int64 v6; // rbx
	__int64 result; // rax
	unsigned __int64 v8; // rdi
	int v9; // ecx
	_QWORD* v10; // rdx
	__int64 v11; // rax

	v1 = *(int*)(a1 + 24);
	*(_DWORD*)(a1 + 40) = 1024;
	*(_DWORD*)(a1 + 44) = 65;
	v3 = dword_140C387F0[v1];
	*(_DWORD*)(a1 + 56) = 1031798784;
	v4 = (v3 + 64) & ~(v3 - 1);
	*(_DWORD*)(a1 + 48) = v4;
	*(float*)(a1 + 60) = (float)v4 * 0.0009765625;
	*(_DWORD*)(a1 + 52) = 0x400u / v4;
	if (dword_140C38820[v1] == 1)
		v5 = 973078528;
	else
		v5 = 0;
	*(_DWORD*)(a1 + 64) = v5;
	v6 = 0i64;
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		1024i64,
		1024i64,
		1i64,
		dword_140C38808[v1],
		1,
		dword_140C38820[v1],
		0,
		0,
		a1 + 32);
	if ((int)result >= 0)
	{
		v8 = (unsigned int)(*(_DWORD*)(a1 + 52) * *(_DWORD*)(a1 + 52));
		sub_140052360((__int64*)(a1 + 72), v8);
		if (v8)
		{
			do
			{
				v9 = v8 - v6++;
				*(_DWORD*)(*(_QWORD*)(a1 + 72) + 4 * v6 - 4) = v9 - 1;
			} while (v6 < v8);
		}
		v10 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * (*(int*)(a1 + 24) + 98i64));
		if (!*(_QWORD*)(a1 + 88))
		{
			*(_QWORD*)(a1 + 88) = v10;
			*(_QWORD*)(a1 + 96) = *v10;
			*v10 = a1;
			v11 = *(_QWORD*)(a1 + 96);
			if (v11)
				*(_QWORD*)(v11 + 88) = a1 + 96;
		}
		return 0i64;
	}
	return result;
}
// 140C387F0: using guessed type int dword_140C387F0[6];
// 140C38808: using guessed type int dword_140C38808[6];
// 140C38820: using guessed type int dword_140C38820[];
// 140C65670: using guessed type __int64 qword_140C65670;

