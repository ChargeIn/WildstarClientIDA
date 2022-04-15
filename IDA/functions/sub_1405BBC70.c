#include "../winhttp.h"

//----- (00000001405BBC70) ----------------------------------------------------
void __fastcall sub_1405BBC70(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v6; // rdi
	__int64 v7; // r10
	unsigned int v8; // r9d
	__int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // rdi
	_QWORD* v20; // rax
	_QWORD* v21; // rbx
	__int64 v22; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	int v25; // ebx
	__int64 v26; // rdx
	int* v27; // [rsp+30h] [rbp-38h] BYREF
	__int64 v28; // [rsp+38h] [rbp-30h] BYREF
	__int64 v29; // [rsp+40h] [rbp-28h]
	__int64 v30; // [rsp+48h] [rbp-20h]
	__int64 v31; // [rsp+88h] [rbp+20h] BYREF

	v6 = sub_1403D90D0(qword_140C65898, a2);
	if (v6)
	{
		v7 = *(_QWORD*)(a1 + 16);
		v8 = *(_DWORD*)(a3 + 16);
		v9 = *(_QWORD*)(v7 + 8);
		v10 = v7;
		v11 = v9;
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < v8)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v10 == v7 || (v31 = v10, v8 < *(_DWORD*)(v10 + 32)))
			v31 = v7;
		if (v31 == v7)
		{
			v12 = (int*)v7;
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v8)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v12 = (int*)v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v12 == (int*)v7 || v8 < v12[8])
			{
				LODWORD(v28) = v8;
				v29 = 0i64;
				v31 = (__int64)v12;
				sub_140055C60(a1 + 8, &v27, &v31, &v28);
				v12 = v27;
			}
			*((_QWORD*)v12 + 5) = a3;
			(**(void(__fastcall***)(__int64))a3)(a3);
		}
		v13 = *(_QWORD*)(a1 + 48);
		v14 = v13;
		v15 = *(_QWORD*)(v13 + 8);
		while (v15)
		{
			if (*(_DWORD*)(v15 + 32) < a2)
			{
				v15 = *(_QWORD*)(v15 + 24);
			}
			else
			{
				v14 = v15;
				v15 = *(_QWORD*)(v15 + 16);
			}
		}
		if (v14 == v13 || (v31 = v14, a2 < *(_DWORD*)(v14 + 32)))
			v31 = v13;
		if (v31 != v13)
		{
			v19 = *(_QWORD*)(v31 + 40);
			v20 = *(_QWORD**)(v19 + 8);
			v21 = (_QWORD*)v20[2];
			if (v21 != v20)
			{
				do
				{
					sub_1405BB6C0(v21[5], a3);
					v22 = v21[3];
					if (v22)
					{
						v21 = (_QWORD*)v21[3];
						for (i = *(_QWORD**)(v22 + 16); i; i = (_QWORD*)i[2])
							v21 = i;
					}
					else
					{
						for (j = v21[1]; v21 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v21 = (_QWORD*)j;
						if (v21[3] != j)
							v21 = (_QWORD*)j;
					}
				} while (v21 != *(_QWORD**)(v19 + 8));
			}
			v18 = *(_QWORD*)(qword_140C65898 + 29504);
			goto LABEL_44;
		}
		v16 = *(_QWORD*)(qword_140C65898 + 120);
		if (v16)
		{
			v17 = *(_QWORD*)(v6 + 6304);
			if (v17 == *(_QWORD*)(v16 + 6304))
			{
				if (v17)
				{
					v18 = *(_QWORD*)(qword_140C65898 + 29504);
				LABEL_44:
					sub_1405BC680((__int64)&v28, *(_QWORD*)(v18 + 400), a3);
					v25 = v29;
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "BuffAdded", byte_1409EB8FC, a2, v29);
					if (v30)
						sub_1400579E0(v30, v26, v25);
				}
			}
		}
	}
}
// 1405BBEC6: variable 'v26' is possibly undefined
// 1409EB8FC: using guessed type _BYTE byte_1409EB8FC[40];
// 140C65898: using guessed type __int64 qword_140C65898;

