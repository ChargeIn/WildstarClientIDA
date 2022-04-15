#include "../winhttp.h"

//----- (00000001405B15C0) ----------------------------------------------------
__int64 __fastcall sub_1405B15C0(__int64 a1, int a2)
{
	__int64* v4; // rsi
	__int64(__fastcall * v5)(wchar_t**, _QWORD, __int64); // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rdx
	unsigned int v9; // edi
	__int64 v10; // rax

	if (!a2)
		return 0i64;
	v4 = *(__int64**)(a1 + 16);
	if (v4 == *(__int64**)(a1 + 24))
		return 0i64;
	v5 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	while (1)
	{
		v6 = *v4;
		v7 = 0i64;
		if (*(_DWORD*)(*v4 + 272))
			break;
	LABEL_17:
		if (++v4 == *(__int64**)(a1 + 24))
			return 0i64;
	}
	while (1)
	{
		v8 = *(_QWORD*)(v6 + 232);
		v9 = 0;
		if (v8 && (unsigned int)v7 < *(_DWORD*)(v6 + 272))
			v9 = *(_DWORD*)(192 * v7 + v8 + 8);
		if (v5)
			break;
		if (!dword_140C65340)
		{
			if ((int)sub_140205D40() >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 24i64))(qword_140C63C30, v9);
				goto LABEL_13;
			}
		LABEL_15:
			v5 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		}
		v6 = *v4;
		v7 = (unsigned int)(v7 + 1);
		if ((unsigned int)v7 >= *(_DWORD*)(*v4 + 272))
			goto LABEL_17;
	}
	v10 = v5(off_140A6A8D8, v9, qword_140C63858);
LABEL_13:
	if (!v10 || *(_DWORD*)(v10 + 4) != a2)
		goto LABEL_15;
	return *v4;
}
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;

