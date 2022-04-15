#include "../winhttp.h"

//----- (00000001404B9F10) ----------------------------------------------------
void __fastcall sub_1404B9F10(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rcx
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rax
	int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rdx
	int v10; // [rsp+20h] [rbp-B8h]
	__int64 v11; // [rsp+30h] [rbp-A8h] BYREF
	__int64 v12; // [rsp+38h] [rbp-A0h]
	__int64 v13; // [rsp+40h] [rbp-98h]
	__int64 v14; // [rsp+50h] [rbp-88h] BYREF
	__int64 v15; // [rsp+58h] [rbp-80h]
	__int64 v16; // [rsp+78h] [rbp-60h]
	__int64 v17; // [rsp+80h] [rbp-58h]
	__int64 v18; // [rsp+98h] [rbp-40h]
	__int64 v19; // [rsp+B8h] [rbp-20h]

	sub_14040B680(&v14, a1, 0);
	v1 = v16;
	v2 = qword_140C65898;
	if (v16 == v17)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v3 && (v4 = *(_DWORD*)(v3 + 264)) != 0 && (v5 = sub_1403D90D0(qword_140C65898, v4), v2 = qword_140C65898, v5))
		{
			v6 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v6 && (v7 = *(_DWORD*)(v6 + 264)) != 0)
			{
				v8 = sub_1403D90D0(qword_140C65898, v7);
				v2 = qword_140C65898;
				v9 = v8;
			}
			else
			{
				v9 = 0i64;
			}
			v11 = 0i64;
			v12 = 0i64;
			v13 = 0i64;
			v11 = *(_QWORD*)(v9 + 416);
			v12 = *(_QWORD*)(v9 + 424);
			sub_1403F4740(v2, 0x515u, (__int64)&v11);
		}
		else
		{
			v10 = 3;
			sub_1400EA3E0(*(_QWORD*)(v2 + 29504), "HousingResult", byte_1409EBB6C, &unk_1409F087C, v10);
		}
	}
	else
	{
		v13 = v16;
		v11 = 0i64;
		v12 = 0i64;
		sub_1403F4740(qword_140C65898, 0x515u, (__int64)&v11);
	}
	if (v19)
		sub_14018B900(v19, 0);
	if (v18)
		sub_14018B900(v18, 0);
	if (v1)
		sub_14018B900(v1, 0);
	if (v15)
		sub_14018B900(v15, 0);
}
// 1409EBB6C: using guessed type _BYTE byte_1409EBB6C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

