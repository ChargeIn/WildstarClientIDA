#include "../winhttp.h"

//----- (00000001404B5C70) ----------------------------------------------------
__int64 __fastcall sub_1404B5C70(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rbx
	int* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax

	v2 = qword_140C659F0;
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
	v6 = result;
	if (result)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 32i64))(result);
		if (*(_DWORD*)result)
		{
			v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6);
			v8 = sub_1405B15C0((__int64)&qword_140C7DFB0, *v7);
			if (v8)
				sub_1405AD620(v8, a2);
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6);
			return sub_1400B6120(v2 + 304, v9);
		}
	}
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

