#include "../winhttp.h"

//----- (00000001405BC0D0) ----------------------------------------------------
void __fastcall sub_1405BC0D0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v6; // rcx
	__int64 v7; // r11
	__int64 v8; // r10
	__int64 v9; // r9
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	int v18; // edi
	__int64 v19; // rdx
	char v20[8]; // [rsp+30h] [rbp-28h] BYREF
	int v21; // [rsp+38h] [rbp-20h]
	__int64 v22; // [rsp+40h] [rbp-18h]
	__int64 v23; // [rsp+78h] [rbp+20h]

	v6 = sub_1403D90D0(qword_140C65898, a2);
	if (v6)
	{
		v7 = *(_QWORD*)(a1 + 48);
		v8 = v7;
		v9 = *(_QWORD*)(v7 + 8);
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < a2)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v8 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v8 == v7 || (v23 = v8, a2 < *(_DWORD*)(v8 + 32)))
			v23 = *(_QWORD*)(a1 + 48);
		if (v23 != v7)
		{
			v13 = *(_QWORD*)(*(_QWORD*)(v23 + 40) + 8i64);
			v14 = *(_QWORD*)(v13 + 16);
			while (v14 != v13)
			{
				v15 = *(_QWORD*)(v14 + 24);
				if (v15)
				{
					v14 = *(_QWORD*)(v14 + 24);
					for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
						v14 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v14 = j;
					if (*(_QWORD*)(v14 + 24) != j)
						v14 = j;
				}
			}
			v12 = *(_QWORD*)(qword_140C65898 + 29504);
			goto LABEL_26;
		}
		v10 = *(_QWORD*)(qword_140C65898 + 120);
		if (v10)
		{
			v11 = *(_QWORD*)(v6 + 6304);
			if (v11 == *(_QWORD*)(v10 + 6304))
			{
				if (v11)
				{
					v12 = *(_QWORD*)(qword_140C65898 + 29504);
				LABEL_26:
					sub_1405BC680((__int64)v20, *(_QWORD*)(v12 + 400), a3);
					v18 = v21;
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "BuffUpdated", byte_1409EB89C, a2, v21);
					if (v22)
						sub_1400579E0(v22, v19, v18);
				}
			}
		}
	}
}
// 1405BC255: variable 'v19' is possibly undefined
// 1409EB89C: using guessed type _BYTE byte_1409EB89C[96];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405BC0D0: using guessed type char var_28[8];

