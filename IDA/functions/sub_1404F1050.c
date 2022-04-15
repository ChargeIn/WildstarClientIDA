#include "../winhttp.h"

//----- (00000001404F1050) ----------------------------------------------------
__int64 __fastcall sub_1404F1050(__int64 a1)
{
	unsigned int v1; // edi
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rsi
	int v9; // ebp
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rbx
	_WORD* v13; // rax

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = qword_140C65908;
	v9 = v7;
	if (!*(_QWORD*)(qword_140C65908 + 384))
		return 0i64;
	v10 = 0i64;
	while (1)
	{
		v11 = *(_QWORD*)(v8 + 376);
		v12 = *(_QWORD*)(v11 + 8 * v10);
		if (*(_DWORD*)v12 == v9)
		{
			if ((unsigned int)sub_1404EA830(*(_QWORD*)(v11 + 8 * v10)))
			{
				if (*(_DWORD*)(v12 + 48) == 3)
				{
					v13 = *(_WORD**)(v12 + 56);
					if (v13)
					{
						if (*v13)
							break;
					}
				}
			}
		}
		v10 = ++v1;
		if ((unsigned __int64)v1 >= *(_QWORD*)(v8 + 384))
			return 0i64;
	}
	sub_140195100(*(LPCWSTR*)(v12 + 56));
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

