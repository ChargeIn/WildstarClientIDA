#include "../winhttp.h"

//----- (00000001400446D0) ----------------------------------------------------
void sub_1400446D0()
{
	__int16* v0; // rax
	bool v1; // zf
	int* v2; // rbx
	char v3[32]; // [rsp+40h] [rbp-248h] BYREF
	__int16 v4[264]; // [rsp+60h] [rbp-228h] BYREF

	if (qword_140C65898)
	{
		if ((int)sub_14001B370(
			v4,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			L"Addons.xml") >= 0
			&& v4[0])
		{
			v0 = v4;
			do
			{
				v1 = v0[1] == 0;
				++v0;
			} while (!v1);
		}
		sub_140138940(*(_QWORD*)(qword_140C65898 + 29504) + 2496i64, (__int64)v4);
		v2 = sub_14018B280(16i64, 0);
		if (v2)
			*(_WORD*)v2 = 0;
		sub_14053B4A0((__int64)v3, qword_140C65898);
		if (v2)
			sub_14018B900((__int64)v2, 0);
	}
}
// 1409FEB80: using guessed type wchar_t aAddonsXml[11];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1400446D0: using guessed type char var_248[32];

