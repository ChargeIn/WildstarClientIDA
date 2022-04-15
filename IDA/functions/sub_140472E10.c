#include "../winhttp.h"

//----- (0000000140472E10) ----------------------------------------------------
unsigned int* __fastcall sub_140472E10(__int64 a1)
{
	__int64 v1; // rax
	unsigned int* result; // rax
	__int64 v4; // rcx

	v1 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 5524) = 0;
	if (v1)
	{
		result = (unsigned int*)*(unsigned int*)(v1 + 280);
		*(_DWORD*)(a1 + 5524) = (_DWORD)result;
		if (!(_DWORD)result)
		{
			result = *(unsigned int**)(a1 + 208);
			if (result)
			{
				result = (unsigned int*)result[2];
				*(_DWORD*)(a1 + 5524) = (_DWORD)result;
			}
		}
	}
	else
	{
		result = (unsigned int*)sub_14022D500(*(_DWORD*)(a1 + 216));
		if (result)
		{
			result = (unsigned int*)result[12];
			*(_DWORD*)(a1 + 5524) = (_DWORD)result;
		}
	}
	v4 = *(_QWORD*)(a1 + 3264);
	if (v4)
	{
		result = (unsigned int*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 64i64))(v4, 1i64);
		if (*(_QWORD*)result)
		{
			result = (unsigned int*)*(unsigned int*)(*(_QWORD*)result + 232i64);
			if ((_DWORD)result)
				*(_DWORD*)(a1 + 5524) = (_DWORD)result;
		}
	}
	return result;
}

