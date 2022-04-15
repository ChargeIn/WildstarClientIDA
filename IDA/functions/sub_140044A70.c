#include "../winhttp.h"

//----- (0000000140044A70) ----------------------------------------------------
__int64 __fastcall sub_140044A70(__int64 a1)
{
	int v1; // r14d
	int v3; // r12d
	__int64 v4; // rbp
	unsigned int v5; // edi
	__int64 v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0;
	if (qword_140C65898)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 29504);
		v5 = 0;
		if (*(_DWORD*)(v4 + 2520))
		{
			v6 = 0i64;
			while (1)
			{
				v7 = *(_QWORD*)(v4 + 2512);
				v8 = *(_QWORD*)(v6 + v7);
				if (v8)
				{
					if (*(_BYTE*)(v8 + 312))
					{
						if (!sub_140137390(*(_QWORD*)(v6 + v7), (int*)L"OptionsScreen")
							&& !sub_140137390(v8, (int*)L"FrontEndScreen")
							&& !sub_140137390(v8, (int*)L"ExternalTool"))
						{
							v9 = *(_DWORD*)(v8 + 536);
							if (v9 == 3 || (unsigned int)(v9 - 5) <= 2)
								break;
						}
					}
				}
				++v5;
				v6 += 8i64;
				if (v5 >= *(_DWORD*)(v4 + 2520))
					goto LABEL_14;
			}
			v3 = 1;
		}
	}
LABEL_14:
	v10 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v3 != 0;
	v10[2] = 1;
	result = 1i64;
	*v10 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140B00158: using guessed type wchar_t aFrontendscreen[15];
// 140B00178: using guessed type wchar_t aOptionsscreen_2[14];
// 140B001F0: using guessed type wchar_t aExternaltool[13];
// 140C65898: using guessed type __int64 qword_140C65898;

