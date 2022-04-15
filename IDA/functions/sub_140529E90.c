#include "../winhttp.h"

//----- (0000000140529E90) ----------------------------------------------------
__int64 __fastcall sub_140529E90(__int64 a1, unsigned int a2, unsigned int a3, float* a4, int a5)
{
	__int64 result; // rax
	int v10; // edi
	__int64 v11; // rcx
	__int64 v12; // rax
	bool v13; // zf
	__int64 v14; // [rsp+60h] [rbp+8h] BYREF

	*(_OWORD*)(a1 + 1312) = *(_OWORD*)a4;
	result = sub_14024ACC0(a2);
	if (result)
	{
		v10 = 0;
		if (a5)
		{
			v11 = *(_QWORD*)(a1 + 1152);
			if (qword_140C658F8)
			{
				v14 = qword_140C77760;
				v12 = sub_140448BE0(v11, a2, a3, a4, v11, 1, &v14);
			}
			else
			{
				v12 = 0i64;
			}
			if (v12 != *(_QWORD*)(a1 + 1152))
				sub_140529B60(a1, v12);
		}
		result = sub_140529FF0(a1);
		v13 = (_DWORD)result == *(_DWORD*)(a1 + 1332);
		*(_DWORD*)(a1 + 1332) = result;
		LOBYTE(v10) = !v13;
		if (v10)
			return sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"ZoneMapPlayerIndicatorUpdated",
				L"b",
				(unsigned int)result);
	}
	return result;
}
// 1409EF904: using guessed type wchar_t aB_24[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;

