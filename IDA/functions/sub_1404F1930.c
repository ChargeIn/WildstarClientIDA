#include "../winhttp.h"

//----- (00000001404F1930) ----------------------------------------------------
__int64 __fastcall sub_1404F1930(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rcx
	const WCHAR* v6; // rbx
	int v7; // eax
	int v8; // eax
	int v9; // eax
	int v10; // eax

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
	v6 = &File;
	v7 = sub_1400F26A0(v5 + 384, 1);
	if (v7)
	{
		v8 = v7 - 1;
		if (v8)
		{
			v9 = v8 - 1;
			if (v9)
			{
				v10 = v9 - 1;
				if (v10)
				{
					if (v10 == 1)
						v6 = *(const WCHAR**)(qword_140C65908 + 496);
				}
				else
				{
					v6 = *(const WCHAR**)(qword_140C65908 + 488);
				}
			}
			else
			{
				v6 = *(const WCHAR**)(qword_140C65908 + 480);
			}
		}
		else
		{
			v6 = *(const WCHAR**)(qword_140C65908 + 472);
		}
	}
	else
	{
		v6 = *(const WCHAR**)(qword_140C65908 + 464);
	}
	ShellExecuteW(0i64, L"open", v6, 0i64, 0i64, 1);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

