#include "../winhttp.h"

//----- (00000001406F1910) ----------------------------------------------------
__int64 __fastcall sub_1406F1910(__int64 a1, unsigned int a2)
{
	__int64 v2; // r14
	__int64 result; // rax
	__int64 v5; // rbp
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // [rsp+40h] [rbp+8h]

	v2 = qword_140C65970;
	result = sub_1402215C0(a2);
	v5 = result;
	if (result && a2 != 1)
	{
		v6 = *(_QWORD*)(qword_140C65968 + 304);
		v7 = v6;
		v8 = *(_QWORD*)(v6 + 8);
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < a2)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v7 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v7 == v6 || (v12 = v7, a2 < *(_DWORD*)(v7 + 32)))
			v12 = *(_QWORD*)(qword_140C65968 + 304);
		if (v12 == v6 || v12 == -40)
		{
			return 0i64;
		}
		else
		{
			v9 = 0i64;
			if (*(_QWORD*)(v12 + 48))
			{
				while (1)
				{
					v10 = (__int64*)(*(_QWORD*)(v12 + 40) + 8 * v9);
					v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
					if ((unsigned int)sub_1406F1B00(*v10, v11))
						break;
					if ((unsigned __int64)++v9 >= *(_QWORD*)(v12 + 48))
						return 0i64;
				}
				return v5;
			}
			else
			{
				return 0i64;
			}
		}
	}
	return result;
}
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

