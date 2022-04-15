#include "../winhttp.h"

//----- (0000000140043370) ----------------------------------------------------
__int64 __fastcall sub_140043370(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rbp
	__int64 v5; // rbp
	int v6; // r15d
	unsigned int v7; // esi
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	v4 = qword_140C65898;
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v4)
	{
		if (*(_BYTE*)(qword_140C63620 + 96))
		{
			sub_1400437C0();
			v4 = qword_140C65898;
		}
		v5 = *(_QWORD*)(v4 + 29504);
		GetTickCount();
		v6 = 0;
		v7 = 0;
		if (*(_DWORD*)(v5 + 2520))
		{
			v8 = 0i64;
			do
			{
				v9 = *(_QWORD*)(v5 + 2512);
				v10 = *(_QWORD*)(v8 + v9);
				if (v10
					&& *(_BYTE*)(v10 + 312)
					&& !sub_140137390(*(_QWORD*)(v8 + v9), (int*)L"OptionsScreen")
					&& !sub_140137390(v10, (int*)L"FrontEndScreen")
					&& !sub_140137390(v10, (int*)L"ExternalTool"))
				{
					v11 = *(_QWORD*)(a1 + 16);
					++v6;
					*(_DWORD*)(v11 + 8) = 3;
					*(double*)v11 = (double)v6;
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400430B0(a1, v10);
					sub_14005EA50(
						a1,
						(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
						(int*)(*(_QWORD*)(a1 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
				}
				++v7;
				v8 += 8i64;
			} while (v7 < *(_DWORD*)(v5 + 2520));
		}
		GetTickCount();
	}
	return 1i64;
}
// 140B00158: using guessed type wchar_t aFrontendscreen[15];
// 140B00178: using guessed type wchar_t aOptionsscreen_2[14];
// 140B001F0: using guessed type wchar_t aExternaltool[13];
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C65898: using guessed type __int64 qword_140C65898;

