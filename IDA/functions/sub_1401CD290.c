#include "../winhttp.h"

//----- (00000001401CD290) ----------------------------------------------------
__int64 __fastcall sub_1401CD290(__int64 a1)
{
	int v1; // eax
	char v2; // al
	__int64 result; // rax

	v1 = *(_DWORD*)(a1 + 5908);
	if (v1 > 8)
	{
		*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 40))++ + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5904);
		v2 = *(_BYTE*)(a1 + 5905);
	LABEL_5:
		*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 40))++ + *(_QWORD*)(a1 + 16)) = v2;
		goto LABEL_6;
	}
	if (v1 > 0)
	{
		v2 = *(_BYTE*)(a1 + 5904);
		goto LABEL_5;
	}
LABEL_6:
	result = 0i64;
	*(_WORD*)(a1 + 5904) = 0;
	*(_DWORD*)(a1 + 5908) = 0;
	return result;
}

