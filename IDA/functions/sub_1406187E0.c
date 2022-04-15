#include "../winhttp.h"

//----- (00000001406187E0) ----------------------------------------------------
__int64 __fastcall sub_1406187E0(__int64 a1, _DWORD* a2, __int64 a3, _DWORD* a4)
{
	__int64 v5; // rdx
	__int64 v7; // rax
	__int64 v8; // r10
	__int64 result; // rax
	__int64 v10; // rbx
	__int64 v11; // [rsp+30h] [rbp+8h]

	v5 = *(_QWORD*)(a1 + 24);
	v7 = *(_QWORD*)(v5 + 8);
	v8 = v5;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < *a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == v5 || (v11 = v8, *a2 < *(_DWORD*)(v8 + 32)))
		v11 = *(_QWORD*)(a1 + 24);
	result = v11;
	if (v11 != v5)
	{
		*(_DWORD*)(*(_QWORD*)(v11 + 40) + 104i64) = a2[2];
		*(_DWORD*)(*(_QWORD*)(v11 + 40) + 108i64) = a2[1];
		*(_DWORD*)(*(_QWORD*)(v11 + 40) + 112i64) = a2[3];
		if (a3)
		{
			if (a4)
			{
				v10 = *(_QWORD*)(*(_QWORD*)(v11 + 40) + 24i64);
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 8i64))(a3);
				*a4 = *(_DWORD*)(v10 + 12) == result;
			}
		}
	}
	return result;
}

