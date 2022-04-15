#include "../winhttp.h"

//----- (0000000140855210) ----------------------------------------------------
__int64 __fastcall sub_140855210(__int64 a1, char a2, float a3, char a4)
{
	unsigned __int8* v4; // r10
	unsigned int v7; // r11d
	int v8; // r8d
	__int64 v9; // r9
	__int64 v10; // rbx

	v4 = *(unsigned __int8**)(a1 + 32);
	if (v4)
	{
		v7 = *v4;
		v8 = 0;
		while (1)
		{
			v9 = (unsigned int)(v8 + 1);
			if (v4[v9] == a2)
				break;
			++v8;
			if ((unsigned int)v9 >= v7)
				goto LABEL_5;
		}
		v10 = (__int64)&v4[16 * v8 + ((v7 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_5:
		v10 = 0i64;
	}
	*(float*)v10 = a3;
	if (a4)
	{
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 312i64))(*(_QWORD*)(a1 + 24), 3i64);
		*(_QWORD*)(v10 + 8) = 0i64;
	}
	return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 408i64))(*(_QWORD*)(a1 + 24));
}

