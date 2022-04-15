//----- (00000001402ACB10) ----------------------------------------------------
__int64 __fastcall sub_1402ACB10(__int64 a1, int a2)
{
	__int64 v4; // rax
	int v5; // xmm1_4
	int v6; // xmm0_4
	__int64 v7; // rax
	int v8; // ebx
	int** v10; // r14
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // [rsp+20h] [rbp-60h] BYREF
	__int64 v16; // [rsp+28h] [rbp-58h] BYREF
	__int128 v17; // [rsp+30h] [rbp-50h]
	int v18[7]; // [rsp+40h] [rbp-40h] BYREF
	__int128 v19; // [rsp+5Ch] [rbp-24h]
	int v20; // [rsp+6Ch] [rbp-14h]
	int v21; // [rsp+70h] [rbp-10h]

	if (*(int*)(a1 + 40) >= 1)
	{
		if (a2 < 1)
		{
			v14 = *(_QWORD*)(a1 + 112);
			if (v14)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				*(_QWORD*)(a1 + 112) = 0i64;
			}
		}
		goto LABEL_20;
	}
	if (a2 < 1)
	{
	LABEL_20:
		*(_DWORD*)(a1 + 40) = a2;
		return 0i64;
	}
	v4 = *(int*)(a1 + 48);
	v5 = *(_DWORD*)(a1 + 68);
	v17 = *(_OWORD*)(a1 + 96);
	v15 = 0i64;
	v21 = v5;
	v19 = v17;
	LODWORD(v4) = dword_140AE7E20[v4];
	v20 = *(_DWORD*)(a1 + 64);
	v6 = *(_DWORD*)(a1 + 72);
	v18[0] = v4;
	v7 = *(int*)(a1 + 52);
	v18[4] = v6;
	v18[1] = dword_140AE7E60[v7];
	v18[2] = dword_140AE7E60[*(int*)(a1 + 56)];
	v18[3] = dword_140AE7E60[*(int*)(a1 + 60)];
	v18[5] = *(_DWORD*)(a1 + 76);
	v18[6] = dword_140AE8020[*(int*)(a1 + 80)];
	v8 = (*(__int64(__fastcall**)(_QWORD, int*, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 32) + 6336i64) + 184i64))(
		*(_QWORD*)(*(_QWORD*)(a1 + 32) + 6336i64),
		v18,
		&v15);
	if (v8 >= 0)
	{
		v10 = (int**)(a1 + 112);
		if (a1 == -112)
		{
			v13 = v15;
		}
		else
		{
			v11 = sub_14018B280(24i64, 0);
			v12 = v11;
			if (v11)
			{
				*(_QWORD*)v11 = off_140B55048;
				v11[2] = 1;
				*(_QWORD*)v11 = off_140B61188;
				*((_QWORD*)v11 + 2) = v15;
				v13 = v15;
				if (v15)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
					v13 = v15;
					*v10 = v12;
					goto LABEL_14;
				}
			}
			else
			{
				v13 = v15;
				v12 = 0i64;
			}
			*v10 = v12;
		}
	LABEL_14:
		if (v13)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
		goto LABEL_20;
	}
	v16 = 0x141DE61E8i64;
	sub_1401A3130(14, 2, &v16, (unsigned int)v8);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
	return (unsigned int)v8;
}
// 1402ACCAE: conditional instruction was optimized away because eax.4<1
// 140AE7E20: using guessed type int dword_140AE7E20[8];
// 140AE7E60: using guessed type int dword_140AE7E60[4];
// 140AE8020: using guessed type int dword_140AE8020[8];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B61188: using guessed type __int64 (__fastcall *off_140B61188[3])();

