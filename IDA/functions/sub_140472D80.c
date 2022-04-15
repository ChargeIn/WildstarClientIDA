#include "../winhttp.h"

//----- (0000000140472D80) ----------------------------------------------------
unsigned int* __fastcall sub_140472D80(__int64 a1)
{
	__int64 v1; // rax
	unsigned int* result; // rax
	__int64 v4; // rcx

	v1 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 5520) = 0;
	if (v1)
	{
		result = (unsigned int*)*(unsigned int*)(v1 + 276);
		*(_DWORD*)(a1 + 5520) = (_DWORD)result;
		if (!(_DWORD)result)
		{
			result = *(unsigned int**)(a1 + 208);
			if (result)
			{
				result = (unsigned int*)result[1];
				*(_DWORD*)(a1 + 5520) = (_DWORD)result;
			}
		}
	}
	else
	{
		result = (unsigned int*)sub_14022D500(*(_DWORD*)(a1 + 216));
		if (result)
		{
			result = (unsigned int*)result[11];
			*(_DWORD*)(a1 + 5520) = (_DWORD)result;
		}
	}
	v4 = *(_QWORD*)(a1 + 3264);
	if (v4)
	{
		result = (unsigned int*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 64i64))(v4, 20i64);
		if (*(_QWORD*)result)
		{
			result = (unsigned int*)*(unsigned int*)(*(_QWORD*)result + 232i64);
			*(_DWORD*)(a1 + 5520) = (_DWORD)result;
		}
	}
	return result;
}

