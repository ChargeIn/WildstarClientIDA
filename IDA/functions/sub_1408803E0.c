#include "../winhttp.h"

//----- (00000001408803E0) ----------------------------------------------------
__int64 __fastcall sub_1408803E0(__int64 a1, __int64 a2, unsigned __int16 a3, int a4, int a5, __int64 a6)
{
	__int64 result; // rax
	__int64 v10; // rdx
	unsigned int v11; // ecx

	if (!a3)
	{
		result = a6;
		*(_WORD*)(a6 + 18) = 0;
		*(_DWORD*)(a6 + 56) = 46;
		return result;
	}
	*(_QWORD*)a6 = a2;
	*(_WORD*)(a6 + 16) = a3;
	*(_WORD*)(a6 + 18) = a3;
	*(_DWORD*)(a6 + 8) = a5;
	sub_1408813B0(a1 + 64, *(_QWORD*)(a1 + 24), a6, *(_DWORD*)(a1 + 44));
	*(_DWORD*)(a6 + 52) = a4;
	*(_DWORD*)(a6 + 40) = *(_DWORD*)(a1 + 44);
	*(_DWORD*)(a6 + 48) = *(_DWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 44) += a3;
	v11 = *(_DWORD*)(a1 + 44);
	result = 45i64;
	if (*(_WORD*)(a1 + 84) == 1)
	{
		if (v11 >= *(_DWORD*)(a1 + 40))
		{
			LOBYTE(v10) = 1;
		LABEL_8:
			result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 160i64))(a1, v10);
		}
	}
	else if (v11 > *(_DWORD*)(a1 + 60))
	{
		v10 = 0i64;
		*(_DWORD*)(a1 + 44) = *(_DWORD*)(a1 + 56);
		goto LABEL_8;
	}
	*(_DWORD*)(a6 + 56) = result;
	return result;
}
// 140880491: variable 'v10' is possibly undefined

