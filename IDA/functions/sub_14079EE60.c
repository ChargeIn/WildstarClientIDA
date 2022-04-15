#include "../winhttp.h"

//----- (000000014079EE60) ----------------------------------------------------
_BOOL8 __fastcall sub_14079EE60(__int64 a1, __int64 a2, unsigned __int64* a3)
{
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rax
	__int64 v9; // r9
	unsigned __int64 v10; // rdx
	unsigned int v11; // edx
	__int64 v12; // rdx

	if ((dword_140DC4DD8 & 1) == 0)
	{
		dword_140DC4DD8 |= 1u;
		sub_14079E980((__int64)&qword_140DC4DE0);
		sub_1407DD89C(sub_140956BC0);
	}
	v6 = 0i64;
	xmmword_140DC4DF0 = *(_OWORD*)a2;
	v7 = *(_QWORD*)(a1 + 96);
	if (v7)
	{
		while (1)
		{
			v8 = v6 + ((v7 - v6) >> 1);
			v9 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8 * v8);
			v10 = *(_QWORD*)(v9 + 24);
			if (*((_QWORD*)&xmmword_140DC4DF0 + 1) < v10)
				break;
			if (*((_QWORD*)&xmmword_140DC4DF0 + 1) <= v10)
			{
				v11 = *(_DWORD*)(v9 + 16);
				if ((unsigned int)xmmword_140DC4DF0 < v11)
					break;
				if ((unsigned int)xmmword_140DC4DF0 <= v11)
					goto LABEL_12;
			}
			v6 = v8 + 1;
		LABEL_10:
			if (v6 >= v7)
				goto LABEL_11;
		}
		v7 = v6 + ((v7 - v6) >> 1);
		goto LABEL_10;
	}
LABEL_11:
	v8 = v6;
LABEL_12:
	*a3 = v8;
	if (v8 >= *(_QWORD*)(a1 + 96))
		return 0i64;
	v12 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8 * v8);
	return *(_DWORD*)(v12 + 16) == *(_DWORD*)a2 && *(_QWORD*)(v12 + 24) == *(_QWORD*)(a2 + 8);
}
// 140DC4DD8: using guessed type int dword_140DC4DD8;
// 140DC4DE0: using guessed type __int64 qword_140DC4DE0;
// 140DC4DF0: using guessed type __int128 xmmword_140DC4DF0;

