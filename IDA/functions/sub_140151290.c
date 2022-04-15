#include "../winhttp.h"

//----- (0000000140151290) ----------------------------------------------------
__int64 __fastcall sub_140151290(__int64 a1, int* a2)
{
	int v2; // r12d
	int* v5; // rbp
	__int64 v6; // rax
	char* v8; // rsi
	unsigned __int64 v9; // rdi
	__int64 v10; // rsi
	__int64 v11; // r13
	__int64 v12; // r14
	_QWORD* v13; // rbx
	unsigned __int64* v14; // rcx
	__int64 v15; // rdi
	__int64* v16; // r8
	int v17; // eax
	bool v18; // sf
	__int64 v19; // rdx
	__int64 v20; // rbx
	__int64* v21; // r8
	int v22; // eax
	bool v23; // sf
	__int64 v24; // rbx
	__int64 v27; // [rsp+68h] [rbp+10h] BYREF
	__int64 v28; // [rsp+70h] [rbp+18h] BYREF

	v2 = 0;
	v5 = 0i64;
	v6 = -1i64;
	while (*((_BYTE*)a2 + ++v6) != 0)
		;
	v8 = (char*)a2 + v6;
	v9 = v6;
	if (v6 != -2)
		v5 = sub_14018B280(v6 + 1, 0);
	sub_1407DB590(v5, a2, v9);
	v10 = v8 - (char*)a2;
	if ((int*)((char*)v5 + v10))
		*((_BYTE*)v5 + v10) = 0;
	v11 = *(_QWORD*)(a1 + 8);
	v12 = v11;
	v13 = *(_QWORD**)(v11 + 8);
	if (v13)
	{
		v27 = v10;
		do
		{
			v14 = (unsigned __int64*)v13[5];
			v16 = &v27;
			v28 = v13[6] - (_QWORD)v14;
			v15 = v28;
			if (v10 >= v28)
				v16 = &v28;
			v17 = sub_1407E6AF0(v14, (__int64)v5, *v16);
			v18 = v17 < 0;
			if (!v17)
			{
				if (v15 < v10)
					goto LABEL_16;
				v18 = 0;
			}
			if (v18)
			{
			LABEL_16:
				v13 = (_QWORD*)v13[3];
				continue;
			}
			v12 = (__int64)v13;
			v13 = (_QWORD*)v13[2];
		} while (v13);
	}
	if (v12 != v11)
	{
		v19 = *(_QWORD*)(v12 + 40);
		v20 = *(_QWORD*)(v12 + 48) - v19;
		v21 = &v27;
		v28 = v10;
		v27 = v20;
		if (v20 >= v10)
			v21 = &v28;
		v22 = sub_1407E6AF0((unsigned __int64*)v5, v19, *v21);
		v23 = v22 < 0;
		if (v22)
		{
		LABEL_24:
			v27 = v12;
			if (!v23)
				goto LABEL_26;
			goto LABEL_25;
		}
		if (v10 >= v20)
		{
			LOBYTE(v2) = v10 > v20;
			v23 = v2 < 0;
			goto LABEL_24;
		}
	}
LABEL_25:
	v27 = v11;
LABEL_26:
	v24 = v27;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v24 == *(_QWORD*)(a1 + 8))
		return 0i64;
	else
		return *(_QWORD*)(v24 + 64);
}

