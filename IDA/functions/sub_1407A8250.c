#include "../winhttp.h"

//----- (00000001407A8250) ----------------------------------------------------
__int64 __fastcall sub_1407A8250(__int64 a1, __int64 a2, int a3)
{
	__int64* v3; // rcx
	unsigned __int64 v4; // r10
	unsigned int v5; // r9d
	__int64 v6; // r11
	__int64 v7; // rax
	unsigned __int16* v8; // rbx
	__int64 v9; // r8
	unsigned __int16* v10; // rax
	__int64 v11; // r8
	int v12; // ecx
	int v13; // edx

	if (!a2)
		return 0xFFFFFFFFi64;
	if (a3 == 1)
		v3 = (__int64*)(a1 + 104);
	else
		v3 = (__int64*)(a3 == 2 ? a1 + 120 : a1 + 136);
	v4 = v3[1];
	v5 = 0;
	if (!v4)
		return 0xFFFFFFFFi64;
	v6 = *v3;
	v7 = 0i64;
	v8 = (unsigned __int16*)(a2 + 68);
	while (1)
	{
		v9 = *(_QWORD*)(v6 + 8 * v7);
		v10 = v8;
		v11 = v9 + 68 - (_QWORD)v8;
		do
		{
			v12 = *(unsigned __int16*)((char*)v10 + v11);
			v13 = *v10 - v12;
			if (v13)
				break;
			++v10;
		} while (v12);
		if (!v13)
			break;
		v7 = ++v5;
		if (v5 >= v4)
			return 0xFFFFFFFFi64;
	}
	return v5;
}

