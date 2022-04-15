#include "../winhttp.h"

//----- (00000001406D2C10) ----------------------------------------------------
__int64 __fastcall sub_1406D2C10(int a1)
{
	__int64 v1; // rbx
	__int64 v3; // rcx
	int v4; // edx
	int v5; // edx
	unsigned __int8 v6; // bl
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v9; // [rsp+28h] [rbp-10h]

	v1 = 0i64;
	v3 = qword_140C65898 + 160;
	v9 = 0i64;
	v8 = 0i64;
	if (a1)
	{
		v4 = a1 - 1;
		if (v4)
		{
			v5 = v4 - 1;
			if (!v5)
			{
				v3 = qword_140C65898 + 208;
				goto LABEL_8;
			}
			if (v5 == 8)
			{
				v3 = qword_140C65898 + 232;
				goto LABEL_8;
			}
		}
		v3 = qword_140C65898 + 184;
	}
LABEL_8:
	sub_1403D6710(v3, &v8);
	if (v9)
	{
		while (!*(_DWORD*)(*(_QWORD*)(v8 + 8 * v1) + 140i64))
		{
			if (++v1 >= v9)
				goto LABEL_11;
		}
		v6 = 1;
	}
	else
	{
	LABEL_11:
		v6 = 0;
	}
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

