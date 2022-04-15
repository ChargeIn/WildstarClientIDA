#include "../winhttp.h"

//----- (0000000140016C70) ----------------------------------------------------
void sub_140016C70()
{
	_QWORD* v0; // rdi
	__int64 v1; // rcx
	int* v2; // rbx
	__int64 v3; // rcx
	__int64 v4; // r8
	__m128i* v5; // rax
	bool v6; // zf
	__int64 v7; // rcx
	__m128i* v8; // rax
	WCHAR* v9; // rcx
	int* v10; // [rsp+40h] [rbp-448h] BYREF
	__m128i v11[33]; // [rsp+50h] [rbp-438h] BYREF
	char v12[528]; // [rsp+260h] [rbp-228h] BYREF

	v0 = (_QWORD*)qword_140C635F0;
	if (*(_QWORD*)(qword_140C635F0 + 5744))
	{
		if (*(_QWORD*)(qword_140C635F0 + 5752))
		{
			if (*(_QWORD*)(qword_140C635F0 + 5776))
			{
				v1 = *(_QWORD*)(qword_140C635F0 + 5792);
				if (v1)
				{
					v10 = 0i64;
					sub_140011C10(v1, &v10);
					v2 = v10;
					sub_14001B370(v12, 260i64, L"Character.%s.%s.%s.%s.ini", v0[718], v0[719], v0[722], v10);
					if ((int)sub_14001B370(
						v11,
						260i64,
						L"%s\\%s\\%s\\%s",
						*(_QWORD*)&qword_140C63788 + 2684i64,
						L"NCSOFT",
						*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
						v12) >= 0
						&& v11[0].m128i_i16[0])
					{
						v5 = v11;
						do
						{
							v6 = v5->m128i_i16[1] == 0;
							v5 = (__m128i*)((char*)v5 + 2);
						} while (!v6);
					}
					if (!(unsigned int)sub_1401B58D0(v3, v11, v4))
					{
						sub_14001B370(v12, 260i64, L"Character.%s.%s.%s.ini", v0[718], v0[719], v0[722]);
						if ((int)sub_14001B370(
							v11,
							260i64,
							L"%s\\%s\\%s\\%s",
							*(_QWORD*)&qword_140C63788 + 2684i64,
							L"NCSOFT",
							*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
							v12) >= 0)
						{
							if (v11[0].m128i_i16[0])
							{
								v8 = v11;
								do
								{
									v6 = v8->m128i_i16[1] == 0;
									v8 = (__m128i*)((char*)v8 + 2);
								} while (!v6);
							}
						}
					}
					sub_14019C520(v7, 4u);
					sub_14019C8D0(v9, 4, v11);
					if (v2)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v2 - 2) + 8i64))(v2 - 4);
				}
			}
		}
	}
}
// 140016D95: variable 'v3' is possibly undefined
// 140016D95: variable 'v4' is possibly undefined
// 140016E40: variable 'v7' is possibly undefined
// 140016E4F: variable 'v9' is possibly undefined
// 1409E0568: using guessed type wchar_t aCharacterSSSSI[26];
// 1409E0900: using guessed type wchar_t aCharacterSSSIn[23];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140016C70: using guessed type __m128i var_438[33];

