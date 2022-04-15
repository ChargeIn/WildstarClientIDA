#include "../winhttp.h"

//----- (00000001405ABBF0) ----------------------------------------------------
void __fastcall sub_1405ABBF0(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // rax
	int v7; // ebx
	__m128* v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64* v11; // rbx
	__int64* v12; // rcx
	char v13[32]; // [rsp+70h] [rbp-138h] BYREF
	__m128 v14[4]; // [rsp+90h] [rbp-118h] BYREF
	char v15[176]; // [rsp+D0h] [rbp-D8h] BYREF
	unsigned int v16; // [rsp+1B8h] [rbp+10h]
	__int64 v17; // [rsp+1C8h] [rbp+20h] BYREF

	if (a2 && (unsigned int)(a3 - 1) > 2)
	{
		v6 = sub_1404C9E20(a1, *(_DWORD*)(a1 + 188), *(_QWORD*)(a2 + 16));
		v7 = 0;
		if (v6)
			v16 = *(_DWORD*)(v6 + 496);
		else
			v16 = 0;
		sub_14077DC00(a1 + 440, *(_QWORD*)(a2 + 16));
		v8 = (__m128*)sub_1404BD000((__int64)v13, v14);
		sub_1404BCB00(
			(__int64)v15,
			a1 + 8,
			*(_QWORD*)(a2 + 16),
			*(_DWORD*)(a2 + 76),
			*(_DWORD*)(a2 + 28),
			*(_DWORD*)(a2 + 32),
			*(_DWORD*)(a2 + 36),
			*(_DWORD*)(a2 + 40),
			a3,
			0,
			v8,
			0i64,
			0);
		v9 = sub_140205FA0(*(_DWORD*)(a1 + 184));
		if (v9)
			v7 = *(_DWORD*)(v9 + 4);
		if (sub_1404C90C0(v10, *(_DWORD*)(a1 + 188), v7, (__int64)v15))
		{
			if ((unsigned int)sub_1402DD480(a1 + 368, a2 + 16, &v17))
			{
				sub_1405AEB20(a1, *(_QWORD*)(a2 + 16));
				sub_1400B6120(a1 + 368, a2 + 16);
				v11 = *(__int64**)(a1 + 416);
				v12 = *(__int64**)(a1 + 424);
				if (v11 != v12)
				{
					while (*(_QWORD*)*v11 != *(_QWORD*)(a2 + 16))
					{
						if (++v11 == v12)
							goto LABEL_15;
					}
					sub_14018B900(*v11, 0);
					sub_1405B1C30(a1 + 408, (int*)v11);
				}
			}
		}
	LABEL_15:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingMyResidenceDecorChanged", byte_1409EBF4C, v16);
	}
}
// 1405ABCEF: variable 'v10' is possibly undefined
// 1409EBF4C: using guessed type _BYTE byte_1409EBF4C[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405ABBF0: using guessed type __m128 var_118[4];
// 1405ABBF0: using guessed type char var_138[32];

