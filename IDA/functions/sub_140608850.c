#include "../winhttp.h"

//----- (0000000140608850) ----------------------------------------------------
__int64 __fastcall sub_140608850(__int64* a1, unsigned int a2, int a3, int a4, int a5)
{
	__int64 v5; // r11
	__int64 v8; // rax
	__int64 v9; // r10
	__int64 result; // rax
	__int64 v11; // rbx
	__int64 v12; // [rsp+30h] [rbp+8h]

	v5 = a1[16];
	v8 = *(_QWORD*)(v5 + 8);
	v9 = v5;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v5 || (v12 = v9, a2 < *(_DWORD*)(v9 + 32)))
		v12 = a1[16];
	result = v12;
	if (v12 == v5)
		v11 = 0i64;
	else
		v11 = *(_QWORD*)(v12 + 40);
	if (!a3)
	{
	LABEL_15:
		if (!v11)
			return result;
		goto LABEL_16;
	}
	if (!v11)
	{
		result = sub_1406080E0(a1, a2);
		v11 = result;
		goto LABEL_15;
	}
LABEL_16:
	result = sub_140609810(v11, a3, a4);
	*(_DWORD*)(v11 + 424) = a5;
	return result;
}

