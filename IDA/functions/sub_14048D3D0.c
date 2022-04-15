#include "../winhttp.h"

//----- (000000014048D3D0) ----------------------------------------------------
__int64* __fastcall sub_14048D3D0(__int64 a1, __int64* a2)
{
	__int64 v2; // rdi
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	unsigned int* v6; // r8
	__int64 v7; // r9
	unsigned int v8; // edx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	int* v15; // rdx
	int v16; // eax
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	int v21[4]; // [rsp+20h] [rbp-28h] BYREF
	int v22[6]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v23; // [rsp+50h] [rbp+8h] BYREF
	__int64 v24; // [rsp+58h] [rbp+10h] BYREF

	v23 = a1;
	v2 = qword_140C65948;
	a2[1] = 0i64;
	*a2 = 0i64;
	v4 = *(_QWORD**)(v2 + 48);
	v5 = (_QWORD*)v4[2];
	if (v5 != v4)
	{
		while (1)
		{
			v6 = (unsigned int*)v5[5];
			if (!v6[12])
				goto LABEL_19;
			v7 = *(_QWORD*)(v2 + 16);
			v8 = *v6;
			v9 = *(_QWORD*)(v7 + 8);
			v10 = v7;
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
			if (v10 == v7 || v8 < *(_DWORD*)(v10 + 32))
			{
				v24 = *(_QWORD*)(v2 + 16);
				v11 = &v24;
			}
			else
			{
				v23 = v10;
				v11 = &v23;
			}
			v12 = *v11;
			if (v12 == v7)
				goto LABEL_19;
			v13 = *(_QWORD*)(v12 + 40);
			if (!v13)
				goto LABEL_19;
			v14 = *(_DWORD*)(v13 + 64);
			if (v14)
				break;
			if (*(_DWORD*)(v13 + 4) == 5)
			{
				v16 = v6[5];
				v22[2] = v8;
				v15 = v22;
				v22[1] = v16;
				v22[0] = v6[2];
				goto LABEL_18;
			}
		LABEL_19:
			v17 = v5[3];
			if (v17)
			{
				v5 = (_QWORD*)v5[3];
				for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
					v5 = i;
			}
			else
			{
				for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = (_QWORD*)j;
				if (v5[3] != j)
					v5 = (_QWORD*)j;
			}
			if (v5 == *(_QWORD**)(v2 + 48))
				return a2;
		}
		v21[2] = v8;
		v21[1] = 1;
		v21[0] = v14;
		v15 = v21;
	LABEL_18:
		sub_140480D00(a2, v15);
		goto LABEL_19;
	}
	return a2;
}
// 140C65948: using guessed type __int64 qword_140C65948;

