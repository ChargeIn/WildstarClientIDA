#include "../winhttp.h"

//----- (0000000140580040) ----------------------------------------------------
__int64 __fastcall sub_140580040(__int64* a1)
{
	unsigned int v1; // ebx
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // rsi
	__int64 v4; // rdi
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rax
	__int64 v8; // r11
	unsigned int v9; // r10d
	unsigned __int64 v10; // rcx
	__int64 result; // rax

	v1 = *((_DWORD*)a1 + 190);
	v2 = *a1;
	v3 = *(_QWORD*)(qword_140C658A0 + 8);
	v4 = *(_QWORD*)qword_140C658A0;
	v5 = 0i64;
	v6 = v3;
	if (v3)
	{
		while (1)
		{
			v7 = v5 + ((v6 - v5) >> 1);
			v8 = *(_QWORD*)(v4 + 8 * v7);
			v9 = **(_DWORD**)(v8 + 8);
			if (v9 < v1)
				break;
			if (v9 <= v1)
			{
				v10 = *(_QWORD*)(v8 + 16);
				if (v10 < v2)
					break;
				if (v10 <= v2)
					goto LABEL_10;
			}
			v6 = v5 + ((v6 - v5) >> 1);
		LABEL_8:
			if (v5 >= v6)
				goto LABEL_9;
		}
		v5 = v7 + 1;
		goto LABEL_8;
	}
LABEL_9:
	v7 = v5;
LABEL_10:
	if (v7 >= v3)
		return 0i64;
	result = *(_QWORD*)(v4 + 8 * v7);
	if (**(_DWORD**)(result + 8) != v1 || *(_QWORD*)(result + 16) != v2)
		return 0i64;
	return result;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

