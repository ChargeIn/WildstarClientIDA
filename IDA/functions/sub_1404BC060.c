#include "../winhttp.h"

//----- (00000001404BC060) ----------------------------------------------------
__int64 __fastcall sub_1404BC060(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	unsigned int v6; // ebx
	unsigned int v7; // esi
	__int64(__fastcall * v8)(wchar_t**, _QWORD, __int64); // r9
	unsigned int* v9; // rax

	if (!sub_1405B1510(*(_QWORD**)(a1 + 824)))
		return 0i64;
	v4 = sub_1405B1510(*(_QWORD**)(a1 + 824));
	v5 = v4 + 8;
	if (v4 == -8)
		return 0i64;
	if (sub_1402070A0(*(_DWORD*)(v4 + 64)))
	{
		v6 = 0;
		v7 = sub_140205F50();
		if (v7)
		{
			v8 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63848;
			while (!v8)
			{
				if (!dword_140C65340)
				{
					if ((int)sub_140205D40() >= 0)
					{
						v9 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 32i64))(
							qword_140C63C30,
							v6);
					LABEL_11:
						if (v9 && *(_QWORD*)(v9 + 3) == __PAIR64__(a2, *(_DWORD*)(v5 + 56)))
							return *v9;
					}
					v8 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63848;
				}
				if (++v6 >= v7)
					return 0i64;
			}
			v9 = (unsigned int*)v8(off_140A6A8D8, v6, qword_140C63858);
			goto LABEL_11;
		}
	}
	return 0i64;
}
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;

