#include "../winhttp.h"

//----- (0000000140058CF0) ----------------------------------------------------
__int64 __fastcall sub_140058CF0(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	__int64 v3; // r10
	_DWORD* v4; // r11
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // r10

	v2 = sub_1400580E0(a1, a2);
	v4 = v2;
	if (v2[2] == 6 || v2[2] == 7)
	{
		*(_QWORD*)(*(_QWORD*)v2 + 24i64) = *(_QWORD*)(*(_QWORD*)(v3 + 16) - 16i64);
	}
	else
	{
		if (v2[2] != 8)
		{
			*(_QWORD*)(v3 + 16) -= 16i64;
			return 0i64;
		}
		v6 = *(_QWORD*)v2;
		v7 = *(_QWORD*)(*(_QWORD*)(v3 + 16) - 16i64);
		*(_DWORD*)(v6 + 128) = 5;
		*(_QWORD*)(v6 + 120) = v7;
	}
	v8 = *(_QWORD*)(*(_QWORD*)(v3 + 16) - 16i64);
	if ((*(_BYTE*)(v8 + 9) & 3) != 0 && (*(_BYTE*)(*(_QWORD*)v2 + 9i64) & 4) != 0)
	{
		v9 = *(_QWORD*)(v3 + 32);
		if (*(_BYTE*)(v9 + 33) == 1)
		{
			sub_14005C960(*(_QWORD*)(v3 + 32), v8);
			*(_QWORD*)(v10 + 16) -= 16i64;
			return 1i64;
		}
		*(_BYTE*)(*(_QWORD*)v4 + 9i64) = *(_BYTE*)(*(_QWORD*)v4 + 9i64) & 0xF8 | *(_BYTE*)(v9 + 32) & 3;
	}
	*(_QWORD*)(v3 + 16) -= 16i64;
	return 1i64;
}
// 140058D18: variable 'v3' is possibly undefined
// 140058D78: variable 'v10' is possibly undefined

