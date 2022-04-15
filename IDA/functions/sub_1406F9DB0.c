#include "../winhttp.h"

//----- (00000001406F9DB0) ----------------------------------------------------
__int64 __fastcall sub_1406F9DB0(_QWORD* a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	int v9; // esi
	_DWORD* v10; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	if (v8 <= 1)
	{
		v9 = sub_1403ABFE0(qword_140C65898 + 7160, 28, 0);
	}
	else
	{
		if (v8 != 2)
			sub_140056570(a1, 1u, "bad GuildHolomark");
		v9 = 1;
	}
	v10 = (_DWORD*)a1[2];
	LOBYTE(v1) = v9 != 0;
	v10[2] = 1;
	result = 1i64;
	*v10 = v1;
	a1[2] += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

