#include "../winhttp.h"

//----- (00000001404ADA70) ----------------------------------------------------
__int64 __fastcall sub_1404ADA70(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v4; // rsi
	unsigned int v5; // edi
	__int64 v6; // rcx
	int v7; // edx
	int v8; // ecx
	__int64 v9; // rax
	__int64 v10; // rcx

	if (!a2)
		return 0i64;
	result = sub_1404AF5F0(a1, a2);
	v4 = result;
	if (result)
	{
		v5 = 0;
		v6 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v6)
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
		else
			v7 = 0;
		v8 = *(_DWORD*)(*(_QWORD*)v4 + 20i64);
		if (!v8 || v8 == 1 && v7 == 167 || v8 == 2 && v7 == 166)
		{
			v9 = sub_1402413C0(a2);
			if (v9 && (*(_DWORD*)(v9 + 8) & 0xFFFFFFFD) == 0 && (*(_DWORD*)(v9 + 12) & 1) != 0)
			{
				return 1i64;
			}
			else
			{
				v10 = *(_QWORD*)(qword_140C65898 + 120);
				if (v10)
					v5 = *(_DWORD*)(v10 + 56);
				return sub_1404AF6B0(v10, a2, v5, 2);
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

