#include "../winhttp.h"

//----- (00000001401CD2F0) ----------------------------------------------------
__int64 __fastcall sub_1401CD2F0(__int64 a1, unsigned __int8* a2, int a3)
{
	int v3; // eax
	int v4; // r11d
	char v6; // al
	__int64 v7; // rdx
	__int64 result; // rax
	unsigned int v9; // r9d

	v3 = *(_DWORD*)(a1 + 5908);
	v4 = a3;
	if (v3 <= 8)
	{
		if (v3 <= 0)
			goto LABEL_6;
		v6 = *(_BYTE*)(a1 + 5904);
	}
	else
	{
		*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 40))++ + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5904);
		v6 = *(_BYTE*)(a1 + 5905);
	}
	*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 40))++ + *(_QWORD*)(a1 + 16)) = v6;
LABEL_6:
	v7 = *(unsigned int*)(a1 + 40);
	*(_WORD*)(a1 + 5904) = 0;
	*(_DWORD*)(a1 + 5908) = 0;
	*(_BYTE*)(v7 + *(_QWORD*)(a1 + 16)) = a3;
	*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = BYTE1(a3);
	*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = ~(_BYTE)a3;
	++* (_DWORD*)(a1 + 40);
	result = *(_QWORD*)(a1 + 16);
	*(_BYTE*)((unsigned int)(*(_DWORD*)(a1 + 40))++ + result) = (unsigned __int16)~(_WORD)a3 >> 8;
	v9 = *(_DWORD*)(a1 + 40);
	if (a3)
	{
		do
		{
			result = *a2;
			*(_BYTE*)(v9 + *(_QWORD*)(a1 + 16)) = result;
			v9 = ++ * (_DWORD*)(a1 + 40);
			++a2;
			--v4;
		} while (v4);
	}
	return result;
}

