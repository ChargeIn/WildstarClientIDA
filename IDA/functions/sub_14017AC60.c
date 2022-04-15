#include "../winhttp.h"

//----- (000000014017AC60) ----------------------------------------------------
__int64 __fastcall sub_14017AC60(_QWORD* a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 result; // rax
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // r8
	char* v12; // r9
	char* v13; // rax
	__int64 v14; // r8
	char v15; // al
	_DWORD* v16; // rcx

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = sub_14017AB00(a1, 1u);
	v7 = v6;
	if (!v6)
		return 0i64;
	if ((*(_DWORD*)(v6 + 432) & 0x1000i64) == 0)
		return 0i64;
	v9 = sub_14017AB00(a1, 2u);
	v10 = v9;
	if (!v9 || (*(_DWORD*)(v9 + 432) & 0x1000i64) == 0)
		return 0i64;
	v11 = *(_QWORD*)(v9 + 1208);
	v12 = *(char**)(v7 + 1216);
	v13 = *(char**)(v7 + 1208);
	if ((((v12 - v13) ^ (*(_QWORD*)(v10 + 1216) - v11)) & 0xFFFFFFFFFFFFFFF8ui64) != 0)
		goto LABEL_16;
	if (v13 != v12)
	{
		v14 = v11 - (_QWORD)v13;
		while (*(_QWORD*)v13 == *(_QWORD*)&v13[v14])
		{
			v13 += 8;
			if (v13 == v12)
				goto LABEL_15;
		}
	LABEL_16:
		v15 = 0;
		goto LABEL_17;
	}
LABEL_15:
	v15 = 1;
LABEL_17:
	v16 = (_DWORD*)a1[2];
	LOBYTE(v1) = v15 != 0;
	v16[2] = 1;
	result = 1i64;
	*v16 = v1;
	a1[2] += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

