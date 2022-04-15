#include "../winhttp.h"

//----- (000000014082A430) ----------------------------------------------------
__int64 __fastcall sub_14082A430(struct _RTL_CRITICAL_SECTION* a1, int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
	__int64 v6; // rax
	__int64 v7; // r14
	__int64 result; // rax
	_DWORD* v9; // rdx
	_DWORD* v10; // rax
	_DWORD* i; // rbx

	v6 = sub_140829FD0(a1, a3, a2);
	v7 = v6;
	if (!v6)
	{
		result = 1i64;
		if (a5)
			return 52i64;
		return result;
	}
	v9 = *(_DWORD**)(v6 + 8);
	v10 = *(_DWORD**)(v6 + 16);
	for (i = v9; i != v10; ++i)
	{
		if (*i == a4)
			break;
	}
	if (i != v10)
	{
		if (!a5)
		{
			if ((unsigned int)(v10 - v9) > 1)
				*i = *(v10 - 1);
			*(_QWORD*)(v7 + 16) -= 4i64;
			goto LABEL_16;
		}
		return 1i64;
	}
	if (!a5)
		return 1i64;
	sub_140829CC0(v7 + 8, a4);
LABEL_16:
	result = sub_14082A380(v7, a4, a5);
	if ((_DWORD)result != 1)
	{
		if ((unsigned int)((__int64)(*(_QWORD*)(v7 + 16) - *(_QWORD*)(v7 + 8)) >> 2) > 1)
			*i = *(_DWORD*)(*(_QWORD*)(v7 + 16) - 4i64);
		*(_QWORD*)(v7 + 16) -= 4i64;
	}
	return result;
}

