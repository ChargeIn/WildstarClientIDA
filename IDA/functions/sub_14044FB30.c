#include "../winhttp.h"

//----- (000000014044FB30) ----------------------------------------------------
__int64 __fastcall sub_14044FB30(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	unsigned __int64 v5; // rbp
	unsigned __int64 v6; // rbx
	unsigned int* v7; // rdi
	unsigned int v8; // r10d
	unsigned __int64 v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // r11
	unsigned __int64 v12; // rax
	unsigned int v13; // r9d
	__int64 result; // rax
	__int64 v15; // [rsp+20h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65908 + 144);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v15 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v15 = *(_QWORD*)(qword_140C65908 + 144);
	if (v15 == v2)
		return 0i64;
	v5 = *(_QWORD*)(v15 + 48);
	v6 = 0i64;
	if (!v5)
		return 0i64;
	v7 = *(unsigned int**)(v15 + 40);
	while (2)
	{
		v8 = *v7;
		v9 = 0i64;
		v10 = *(_QWORD*)(qword_140C65908 + 128);
		if (!v10)
			goto LABEL_23;
		v11 = *(_QWORD*)(qword_140C65908 + 120);
		while (1)
		{
			v12 = v9 + ((v10 - v9) >> 1);
			v13 = *(_DWORD*)(32 * v12 + v11);
			if (v8 < v13)
			{
				v10 = v9 + ((v10 - v9) >> 1);
				goto LABEL_18;
			}
			if (v8 <= v13)
				break;
			v9 = v12 + 1;
		LABEL_18:
			if (v9 >= v10)
				goto LABEL_23;
		}
		result = v11 + 32 * v12;
		if (!*(_DWORD*)(result + 12) && !*(_DWORD*)(result + 24) || !result)
		{
		LABEL_23:
			++v6;
			++v7;
			if (v6 >= v5)
				return 0i64;
			continue;
		}
		return result;
	}
}
// 140C65908: using guessed type __int64 qword_140C65908;

