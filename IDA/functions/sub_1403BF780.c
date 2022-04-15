#include "../winhttp.h"

//----- (00000001403BF780) ----------------------------------------------------
void __fastcall sub_1403BF780(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rdi
	unsigned int v7; // esi
	__int64 v8; // rcx
	__int64 v9; // rdx
	BOOL v10; // r8d
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64* v16; // rax
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v21; // [rsp+40h] [rbp+8h] BYREF
	__int64 v22; // [rsp+48h] [rbp+10h] BYREF
	__int64 v23; // [rsp+50h] [rbp+18h] BYREF

	v1 = a1[689];
	v3 = *(_QWORD*)(v1 + 16);
	if (v3 != v1)
	{
		do
		{
			v4 = *(_QWORD*)(v3 + 40);
			if (*(_QWORD*)(v4 + 48))
				sub_140195D70(v4 + 32);
			v5 = *(_QWORD*)(v3 + 40);
			if (*(_QWORD*)(v5 + 120))
				sub_140195D70(v5 + 104);
			v6 = *(_QWORD*)(v3 + 40);
			v7 = *(_DWORD*)(v3 + 32);
			if (v6)
			{
				sub_1403BF6E0(v6);
				sub_14018B900(v6, 0);
			}
			v8 = qword_140C65B70;
			if (!qword_140C65B70)
				goto LABEL_33;
			v9 = a1[15];
			if (v7)
			{
				if (v9)
				{
					v10 = *(_QWORD*)(qword_140C65898 + 120) == v9 || *(_QWORD*)(qword_140C65898 + 25744) == v9;
					v11 = 0i64;
					if (v10)
						v11 = qword_140C65898;
					if (v11)
					{
						v12 = sub_1405A5B90(v11, v7);
						if (v12)
						{
						LABEL_20:
							if ((*(_BYTE*)(*(_QWORD*)(v12 + 112) + 268i64) & 0x40) == 0)
								sub_1400EA3E0(a1[3688], "ClearSpellThreshold", byte_1409E9C64, v7);
							goto LABEL_22;
						}
					}
					v8 = qword_140C65B70;
				}
				v12 = sub_1407A0FD0(v8, v7);
				if (v12)
					goto LABEL_20;
			}
		LABEL_22:
			v13 = a1[697];
			v14 = v13;
			v15 = *(_QWORD*)(v13 + 8);
			while (v15)
			{
				if (*(_DWORD*)(v15 + 32) < v7)
				{
					v15 = *(_QWORD*)(v15 + 24);
				}
				else
				{
					v14 = v15;
					v15 = *(_QWORD*)(v15 + 16);
				}
			}
			if (v14 == v13 || v7 < *(_DWORD*)(v14 + 32))
			{
				v22 = a1[697];
				v16 = &v22;
			}
			else
			{
				v21 = v14;
				v16 = &v21;
			}
			v17 = *v16;
			if (v17 != v13)
			{
				v23 = v17;
				sub_1403D5FD0((__int64)(a1 + 696), &v23);
			}
		LABEL_33:
			v18 = *(_QWORD*)(v3 + 24);
			if (v18)
			{
				v3 = *(_QWORD*)(v3 + 24);
				for (i = *(_QWORD*)(v18 + 16); i; i = *(_QWORD*)(i + 16))
					v3 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = j;
				if (*(_QWORD*)(v3 + 24) != j)
					v3 = j;
			}
		} while (v3 != a1[689]);
	}
	sub_140008410((__int64)(a1 + 688));
}
// 1409E9C64: using guessed type _BYTE byte_1409E9C64[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

