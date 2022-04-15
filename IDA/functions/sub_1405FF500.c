#include "../winhttp.h"

//----- (00000001405FF500) ----------------------------------------------------
int* __fastcall sub_1405FF500(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	__int64 v4; // rdx
	int* v5; // r8
	__int64 v6; // rax
	int* result; // rax
	unsigned int v8; // edi
	unsigned int v9; // ebx
	int v10; // eax
	int v11; // eax
	__int64 v12; // rax
	__int128 v13; // xmm1
	__int128 v14; // xmm0
	__int128 v15; // xmm1
	__int128 v16; // xmm0
	__int128 v17; // [rsp+20h] [rbp-60h] BYREF
	__int128 v18; // [rsp+30h] [rbp-50h]
	__int128 v19; // [rsp+40h] [rbp-40h]
	__int128 v20; // [rsp+50h] [rbp-30h]
	__int128 v21; // [rsp+60h] [rbp-20h]
	__int64 v22; // [rsp+70h] [rbp-10h]
	int* v23; // [rsp+A0h] [rbp+20h]

	v2 = a1 + 32;
	v4 = *(_QWORD*)(a1 + 40);
	v5 = (int*)v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < *(_DWORD*)a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = (int*)v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == (int*)v4 || (v23 = v5, *(_DWORD*)a2 < (unsigned int)v5[8]))
		v23 = *(int**)(a1 + 40);
	result = *(int**)(a1 + 40);
	if (v23 == result)
	{
		sub_1407E4830((int*)&v17, 0i64, 0x58ui64);
		v8 = *(_DWORD*)(a2 + 16);
		v9 = *(_DWORD*)(a2 + 4);
		LODWORD(v17) = *(_DWORD*)a2;
		*((_QWORD*)&v18 + 1) = *(_QWORD*)(a2 + 24);
		v10 = *(_DWORD*)(a2 + 32);
		*((_QWORD*)&v17 + 1) = __PAIR64__(v8, v9);
		LODWORD(v19) = v10;
		DWORD1(v19) = *(_DWORD*)(a2 + 36);
		if (v8)
			*(_QWORD*)&v18 = 0i64;
		else
			*(_QWORD*)&v18 = sub_1400B5DF0(qword_140C658F0, v9, 0i64);
		v11 = 15;
		if (v8 == 2)
			v11 = v9;
		LODWORD(v21) = v11;
		if (v8 == 6)
		{
			*((_QWORD*)&v19 + 1) = sub_140248AC0(v9);
		}
		else
		{
			*((_QWORD*)&v19 + 1) = 0i64;
			if (v8 == 7)
			{
				*(_QWORD*)&v20 = sub_140211B00(v9);
				goto LABEL_22;
			}
		}
		*(_QWORD*)&v20 = 0i64;
		if (v8 == 8)
		{
			v12 = sub_1401E8C20(v9);
			*((_QWORD*)&v20 + 1) = v12;
			if (v12)
				*(_QWORD*)&v18 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v12 + 8), 0i64);
			goto LABEL_23;
		}
	LABEL_22:
		*((_QWORD*)&v20 + 1) = 0i64;
	LABEL_23:
		result = sub_1405FF6A0(v2, &v17);
		v13 = v18;
		*(_OWORD*)result = v17;
		v14 = v19;
		*((_OWORD*)result + 1) = v13;
		v15 = v20;
		*((_OWORD*)result + 2) = v14;
		v16 = v21;
		*((_OWORD*)result + 3) = v15;
		*(_QWORD*)&v15 = v22;
		*((_OWORD*)result + 4) = v16;
		*((_QWORD*)result + 10) = v15;
	}
	return result;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

