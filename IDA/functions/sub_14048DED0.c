#include "../winhttp.h"

//----- (000000014048DED0) ----------------------------------------------------
__int64 __fastcall sub_14048DED0(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v5; // r15
	__int64 v6; // rdx
	__int64 v7; // r14
	int v8; // ebp
	__int64 v9; // rcx
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64* v12; // rax
	__int64 v13; // rax
	int* v14; // rbx
	__int64 v15; // rcx
	int v16; // eax
	__int64 v17; // rcx
	int v18; // eax
	__int64 v19; // rdx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64* v22; // rax
	__int64 v23; // rax
	__int64 v24; // r8
	__int64 i; // rdx
	__int64 v26; // rcx
	__int64 v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64* v30; // rax
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // [rsp+20h] [rbp-78h] BYREF
	__int64 v34; // [rsp+28h] [rbp-70h] BYREF
	_QWORD v35[2]; // [rsp+30h] [rbp-68h] BYREF
	char v36[24]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v37; // [rsp+A0h] [rbp+8h] BYREF
	__int64 v38; // [rsp+A8h] [rbp+10h] BYREF
	__int64 v39; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v40; // [rsp+B8h] [rbp+20h] BYREF

	v37 = a1;
	v2 = qword_140C65948;
	if (!a2)
		return 2147500037i64;
	v5 = 0i64;
	if (*(_DWORD*)a2)
	{
		while (1)
		{
			v6 = *(_QWORD*)(v2 + 48);
			v7 = 96 * v5;
			v8 = 0;
			v9 = v6;
			v10 = *(_DWORD*)(96 * v5 + *(_QWORD*)(a2 + 8));
			v11 = *(_QWORD*)(v6 + 8);
			while (v11)
			{
				if (*(_DWORD*)(v11 + 32) < v10)
				{
					v11 = *(_QWORD*)(v11 + 24);
				}
				else
				{
					v9 = v11;
					v11 = *(_QWORD*)(v11 + 16);
				}
			}
			if (v9 == v6 || v10 < *(_DWORD*)(v9 + 32))
			{
				v38 = *(_QWORD*)(v2 + 48);
				v12 = &v38;
			}
			else
			{
				v37 = v9;
				v12 = &v37;
			}
			v13 = *v12;
			if (v13 == *(_QWORD*)(v2 + 48) || (v14 = *(int**)(v13 + 40)) == 0i64)
			{
				v14 = sub_14018B280(96i64, 0);
				sub_1407E4830(v14, 0i64, 0x60ui64);
				v8 = 1;
				LODWORD(v35[0]) = v10;
				v35[1] = v14;
				sub_140055F80(v2 + 40, (__int64)v36, v35);
			}
			v15 = *(_QWORD*)(a2 + 8);
			*v14 = *(_DWORD*)(v7 + v15);
			v14[1] = *(_DWORD*)(v7 + v15 + 4);
			v14[2] = *(_DWORD*)(v7 + v15 + 8);
			v14[3] = *(_DWORD*)(v7 + v15 + 12);
			v14[4] = *(_DWORD*)(v7 + v15 + 16);
			v14[5] = *(_DWORD*)(v7 + v15 + 20);
			v14[6] = *(_DWORD*)(v7 + v15 + 24);
			v14[7] = *(_DWORD*)(v7 + v15 + 28);
			v14[8] = *(_DWORD*)(v7 + v15 + 32);
			v14[9] = *(_DWORD*)(v7 + v15 + 36);
			v14[10] = *(_DWORD*)(v7 + v15 + 40);
			v14[11] = *(_DWORD*)(v7 + v15 + 44);
			v14[12] = *(_DWORD*)(v7 + v15 + 48);
			v14[13] = *(_DWORD*)(v7 + v15 + 52);
			v14[14] = *(_DWORD*)(v7 + v15 + 56);
			v14[15] = *(_DWORD*)(v7 + v15 + 60);
			v14[16] = *(_DWORD*)(v7 + v15 + 64);
			v14[17] = *(_DWORD*)(v7 + v15 + 68);
			v14[18] = *(_DWORD*)(v7 + v15 + 72);
			v14[19] = *(_DWORD*)(v7 + v15 + 76);
			v14[20] = *(_DWORD*)(v7 + v15 + 80);
			v14[21] = *(_DWORD*)(v7 + v15 + 84);
			v14[22] = *(_DWORD*)(v7 + v15 + 88);
			v16 = *(_DWORD*)(v7 + v15 + 92);
			v17 = qword_140C65898;
			v14[23] = v16;
			v18 = dword_140C636A8;
			v14[15] += dword_140C636A8;
			v14[17] += v18;
			v14[19] += v18;
			sub_1400EA3E0(*(_QWORD*)(v17 + 29504), "ChallengeTimeUpdated", byte_1409E997C, v10, v33, v34);
			if (v8)
			{
				sub_14048DDE0(v2, v10, v14[8]);
				v19 = *(_QWORD*)(v2 + 16);
				v20 = *(_QWORD*)(v19 + 8);
				v21 = v19;
				while (v20)
				{
					if (*(_DWORD*)(v20 + 32) < v10)
					{
						v20 = *(_QWORD*)(v20 + 24);
					}
					else
					{
						v21 = v20;
						v20 = *(_QWORD*)(v20 + 16);
					}
				}
				if (v21 == v19 || v10 < *(_DWORD*)(v21 + 32))
				{
					v40 = *(_QWORD*)(v2 + 16);
					v22 = &v40;
				}
				else
				{
					v39 = v21;
					v22 = &v39;
				}
				v23 = *v22;
				if (v23 == v19)
				{
					v24 = 0i64;
				}
				else
				{
					v24 = *(_QWORD*)(v23 + 40);
					if (v24)
					{
						for (i = 0i64; (unsigned int)i < *(_DWORD*)(v24 + 40); i = (unsigned int)(i + 1))
							*(_DWORD*)(v24 + 4 * i + 44) = v14[i + 21];
					}
				}
				if (v14[10])
					sub_1404CF010(v21, 2u, *(_DWORD*)(v24 + 56), 0);
			}
			v26 = v2 + 8i64 * v14[1];
			if (*(int**)(v26 + 104) == v14)
				break;
			if (v14[12])
				goto LABEL_49;
		LABEL_50:
			v5 = (unsigned int)(v5 + 1);
			if ((unsigned int)v5 >= *(_DWORD*)a2)
				goto LABEL_51;
		}
		if (!v14[12])
		{
			*(_QWORD*)(v26 + 104) = 0i64;
			if (v14[10] == 1)
			{
				v27 = *(_QWORD*)(v2 + 16);
				v28 = v27;
				v29 = *(_QWORD*)(v27 + 8);
				while (v29)
				{
					if (*(_DWORD*)(v29 + 32) < v10)
					{
						v29 = *(_QWORD*)(v29 + 24);
					}
					else
					{
						v28 = v29;
						v29 = *(_QWORD*)(v29 + 16);
					}
				}
				if (v28 == v27 || v10 < *(_DWORD*)(v28 + 32))
				{
					v34 = *(_QWORD*)(v2 + 16);
					v30 = &v34;
				}
				else
				{
					v33 = v28;
					v30 = &v33;
				}
				v31 = *v30;
				if (v31 != v27)
				{
					v32 = *(_QWORD*)(v31 + 40);
					if (v32)
						sub_1404CF010(v32, 2u, *(_DWORD*)(v32 + 56), 1);
				}
			}
			goto LABEL_50;
		}
	LABEL_49:
		*(_QWORD*)(v26 + 104) = v14;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeUpdated", byte_1409E965C, v10);
		goto LABEL_50;
	}
LABEL_51:
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	sub_14048D200(v2);
	return 0i64;
}
// 1409E965C: using guessed type _BYTE byte_1409E965C[256];
// 1409E997C: using guessed type _BYTE byte_1409E997C[24];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;
// 14048DED0: using guessed type char var_58[24];

