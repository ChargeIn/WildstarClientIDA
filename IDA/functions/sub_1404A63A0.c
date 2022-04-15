#include "../winhttp.h"

//----- (00000001404A63A0) ----------------------------------------------------
__int64 __fastcall sub_1404A63A0(__int64 a1, __int64 a2)
{
	__int64 v2; // r13
	unsigned int i; // r14d
	__int64 v6; // rdx
	__int64 v7; // rsi
	unsigned int v8; // edi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rax
	int* v13; // rbx
	__int64 v14; // rcx
	_QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
	char v16[16]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v17; // [rsp+70h] [rbp+8h] BYREF
	__int64 v18; // [rsp+78h] [rbp+10h] BYREF

	v17 = a1;
	v2 = qword_140C659A8;
	if (!a2)
		return 2147500037i64;
	for (i = 0; i < *(_DWORD*)a2; v13[12] = *(_DWORD*)(v14 + v7 + 48))
	{
		v6 = *(_QWORD*)(v2 + 56);
		v7 = 52i64 * i;
		v8 = *(_DWORD*)(v7 + *(_QWORD*)(a2 + 8));
		v9 = *(_QWORD*)(v6 + 8);
		v10 = v6;
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < v8)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v10 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v10 == v6 || v8 < *(_DWORD*)(v10 + 32))
		{
			v18 = *(_QWORD*)(v2 + 56);
			v11 = &v18;
		}
		else
		{
			v17 = v10;
			v11 = &v17;
		}
		v12 = *v11;
		if (v12 == *(_QWORD*)(v2 + 56) || (v13 = *(int**)(v12 + 40)) == 0i64)
		{
			v13 = sub_14018B280(52i64, 0);
			sub_1407E4830(v13, 0i64, 0x34ui64);
			v13[4] = -1;
			LODWORD(v15[0]) = v8;
			v15[1] = v13;
			sub_140055F80(v2 + 48, (__int64)v16, v15);
		}
		v14 = *(_QWORD*)(a2 + 8);
		++i;
		*v13 = *(_DWORD*)(v14 + v7);
		v13[1] = *(_DWORD*)(v14 + v7 + 4);
		v13[2] = *(_DWORD*)(v14 + v7 + 8);
		v13[3] = *(_DWORD*)(v14 + v7 + 12);
		v13[4] = *(_DWORD*)(v14 + v7 + 16);
		v13[5] = *(_DWORD*)(v14 + v7 + 20);
		v13[6] = *(_DWORD*)(v14 + v7 + 24);
		v13[7] = *(_DWORD*)(v14 + v7 + 28);
		v13[8] = *(_DWORD*)(v14 + v7 + 32);
		v13[9] = *(_DWORD*)(v14 + v7 + 36);
		v13[10] = *(_DWORD*)(v14 + v7 + 40);
		v13[11] = *(_DWORD*)(v14 + v7 + 44);
	}
	sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 3856i64);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A8: using guessed type __int64 qword_140C659A8;
// 1404A63A0: using guessed type char var_38[16];

