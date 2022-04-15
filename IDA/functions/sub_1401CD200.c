#include "../winhttp.h"

//----- (00000001401CD200) ----------------------------------------------------
__int64 __fastcall sub_1401CD200(__int64 a1)
{
	__int64 result; // rax

	result = *(unsigned int*)(a1 + 5908);
	if ((_DWORD)result == 16)
	{
		*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 40))++ + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5904);
		*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 40))++ + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
		result = 0i64;
		*(_DWORD*)(a1 + 5908) = 0;
		*(_WORD*)(a1 + 5904) = 0;
	}
	else if ((int)result >= 8)
	{
		*(_BYTE*)(*(unsigned int*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5904);
		result = *(unsigned __int8*)(a1 + 5905);
		++* (_DWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 5908) -= 8;
		*(_WORD*)(a1 + 5904) = result;
	}
	return result;
}

