#include "../winhttp.h"

//----- (000000014050BBF0) ----------------------------------------------------
__int64 __fastcall sub_14050BBF0(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rbx
	unsigned int v7; // eax
	__int64 v8; // r9
	unsigned __int64* v9; // rdx
	__int64 result; // rax
	unsigned __int64 v11; // r8

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C63650 + 760);
		v4 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v4 = (unsigned int)v1;
			if ((unsigned int)v1 >= v2)
				goto LABEL_5;
		}
		v5 = *(_QWORD*)(v3 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v5 = 0i64;
	}
	v6 = v5 + 384;
	v7 = sub_1400F26A0(v5 + 384, 1);
	if (v7 > 2)
	{
		sub_140058710(*(_QWORD*)(v6 + 16), (unsigned __int64*)"Invalid Resolution", 0x12ui64);
		return 1i64;
	}
	else
	{
		v8 = *(_QWORD*)(v6 + 16);
		v9 = (unsigned __int64*)off_140C59AD0[v7];
		if (v9)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v9 + v11));
			sub_140058710(*(_QWORD*)(v6 + 16), v9, v11);
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
			*(_QWORD*)(v8 + 16) += 16i64;
		}
	}
	return result;
}
// 140C59AD0: using guessed type char *off_140C59AD0[3];
// 140C63650: using guessed type __int64 qword_140C63650;

