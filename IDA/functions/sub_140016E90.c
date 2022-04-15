#include "../winhttp.h"

//----- (0000000140016E90) ----------------------------------------------------
void __fastcall sub_140016E90(_QWORD* a1)
{
	__int64 v2; // rcx
	int* v3; // rbx
	int* v4; // rcx
	__m128i* v5; // rax
	bool v6; // zf
	__int64 v7; // rcx
	int* v8; // [rsp+40h] [rbp-448h] BYREF
	__m128i v9[33]; // [rsp+50h] [rbp-438h] BYREF
	char v10[528]; // [rsp+260h] [rbp-228h] BYREF

	if (a1[718])
	{
		if (a1[719])
		{
			if (a1[722])
			{
				v2 = a1[724];
				if (v2)
				{
					v8 = 0i64;
					sub_140011C10(v2, &v8);
					v3 = v8;
					sub_14001B370(v10, 260i64, L"Character.%s.%s.%s.%s.ini", a1[718], a1[719], a1[722], v8);
					if ((int)sub_14001B370(
						v9,
						260i64,
						L"%s\\%s\\%s\\%s",
						*(_QWORD*)&qword_140C63788 + 2684i64,
						L"NCSOFT",
						*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
						v10) >= 0
						&& v9[0].m128i_i16[0])
					{
						v5 = v9;
						do
						{
							v6 = v5->m128i_i16[1] == 0;
							v5 = (__m128i*)((char*)v5 + 2);
						} while (!v6);
					}
					sub_14019CC10(v4, 4, v9);
					sub_14019C520(v7, 3u);
					if (v3)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v3 - 2) + 8i64))(v3 - 4);
				}
			}
		}
	}
}
// 140016FB5: variable 'v4' is possibly undefined
// 140016FBF: variable 'v7' is possibly undefined
// 1409E0930: using guessed type wchar_t aCharacterSSSSI_0[26];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140016E90: using guessed type __m128i var_438[33];

