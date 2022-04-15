#include "../winhttp.h"

//----- (0000000140875330) ----------------------------------------------------
__int64 __fastcall sub_140875330(__int64 a1, __int64* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v4; // r10
	__int64 v7; // rdi
	unsigned int v8; // ebx
	unsigned int v9; // eax

	result = *(_QWORD*)(a1 + 64);
	v4 = *(_QWORD*)(a1 + 72);
	if (result == v4)
	{
	LABEL_5:
		v7 = *a2;
		v8 = *(_BYTE*)(a1 + 62) & 0x1F;
		v9 = sub_140855A70(a1);
		return (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, _QWORD))(v7 + 392))(a2, a3, v8, v9);
	}
	else
	{
		while (*((_DWORD*)a2 + 6) != *(_DWORD*)result || ((*((_BYTE*)a2 + 91) & 2) != 0) != *(_BYTE*)(result + 4))
		{
			result += 8i64;
			if (result == v4)
				goto LABEL_5;
		}
	}
	return result;
}

