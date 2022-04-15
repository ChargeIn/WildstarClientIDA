#include "../winhttp.h"

//----- (00000001401073A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401073A0(_WORD** a1)
{
	__int16* v2; // rax
	bool v3; // zf
	unsigned __int64 result; // rax
	__int16 v5[264]; // [rsp+50h] [rbp-228h] BYREF

	sub_140104BC0((__int64)a1);
	(*((void(__fastcall**)(_WORD**, const wchar_t*)) * a1 + 8))(a1, L"tex");
	if ((int)sub_14001B370(
		v5,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"Addons") >= 0
		&& v5[0])
	{
		v2 = v5;
		do
		{
			v3 = v2[1] == 0;
			++v2;
		} while (!v3);
	}
	for (result = 0i64; v5[result]; ++result)
		;
	if (result <= a1[9] - a1[8])
	{
		result = (unsigned __int64)sub_14010A450(a1[8], a1[9], v5, &v5[result]);
		if ((_WORD*)result != a1[9])
		{
			result = (__int64)(result - (_QWORD)a1[8]) >> 1;
			if (result != -1i64)
			{
				(*((void(__fastcall**)(_WORD**, const wchar_t*)) * a1 + 8))(a1, L"bmp");
				return (*((__int64(__fastcall**)(_WORD**, const wchar_t*)) * a1 + 8))(a1, L"tga");
			}
		}
	}
	return result;
}
// 140A1A500: using guessed type wchar_t aAddons_0[7];
// 140A1AAE0: using guessed type wchar_t aBmp[4];
// 140A1AAE8: using guessed type wchar_t aTga[4];
// 140A1AAF0: using guessed type wchar_t aTex_0[4];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 1401073A0: using guessed type __int16 var_228[264];

