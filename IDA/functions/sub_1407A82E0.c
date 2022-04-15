#include "../winhttp.h"

//----- (00000001407A82E0) ----------------------------------------------------
__int64 __fastcall sub_1407A82E0(__int64 a1, unsigned __int16* a2)
{
	unsigned __int64 v2; // r11
	unsigned int v3; // r9d
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r10
	unsigned __int16* v8; // rax
	int v9; // ecx
	int v10; // edx

	v2 = *(_QWORD*)(a1 + 144);
	v3 = 0;
	if (!v2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 136);
	v6 = 0i64;
	while (1)
	{
		v7 = *(_QWORD*)(v5 + 8 * v6);
		v8 = a2;
		do
		{
			v9 = *(unsigned __int16*)((char*)v8 + v7 + 68 - (_QWORD)a2);
			v10 = *v8 - v9;
			if (v10)
				break;
			++v8;
		} while (v9);
		if (!v10)
			break;
		v6 = ++v3;
		if (v3 >= v2)
			return 0i64;
	}
	return v7;
}

