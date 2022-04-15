//----- (00000001400CDA50) ----------------------------------------------------
__int64 __fastcall sub_1400CDA50(__int64 a1)
{
	_QWORD** v2; // rdx
	int v3; // r13d
	int v4; // r8d
	_QWORD* v5; // rax
	int v6; // edi
	unsigned int v7; // r12d
	__int64 v8; // rcx
	_QWORD* v9; // rbx
	__int64 v10; // rsi
	_DWORD* v11; // rax
	__int64 v12; // rax
	int v13; // r15d
	int v14; // eax
	int v15; // r12d
	__int64 v16; // rdx
	__int64 v17; // rdx
	int v19[4]; // [rsp+20h] [rbp-68h] BYREF
	int v20[4]; // [rsp+30h] [rbp-58h] BYREF
	unsigned int v21; // [rsp+90h] [rbp+8h]
	int v22; // [rsp+98h] [rbp+10h]
	int v23; // [rsp+A0h] [rbp+18h]

	v2 = *(_QWORD***)(a1 + 576);
	v3 = 0;
	v4 = 0;
	v5 = *v2;
	v22 = 0;
	v6 = 0;
	v7 = 0;
	v21 = 0;
	v8 = 0i64;
	if (*v2 == v2)
		return 0i64;
	do
	{
		v5 = (_QWORD*)*v5;
		++v8;
	} while (v5 != v2);
	if (!v8)
		return 0i64;
	v9 = *v2;
	if (*v2 != v2)
	{
		while (1)
		{
			v10 = v9[2];
			if ((*(_BYTE*)(v10 + 28) & 1) == 0 || *(float*)(v10 + 648) <= 0.0)
				goto LABEL_22;
			if (*(char*)(v10 + 29) >= 0)
			{
				v11 = sub_1400CB0E0(v9[2], v20, v10 + 64);
				*(_DWORD*)(v10 + 396) = *v11;
				*(_DWORD*)(v10 + 400) = v11[1];
				*(_DWORD*)(v10 + 404) = v11[2];
				*(_DWORD*)(v10 + 408) = v11[3];
				*(_BYTE*)(v10 + 29) |= 0x80u;
				v12 = v10;
				do
				{
					if (!*(_DWORD*)(v12 + 392))
						break;
					*(_DWORD*)(v12 + 392) = 0;
					v12 = *(_QWORD*)(v12 + 16);
				} while (v12);
				v4 = v22;
			}
			v23 = 0;
			v13 = *(_DWORD*)(v10 + 408) - *(_DWORD*)(v10 + 400);
			v14 = *(_DWORD*)(v10 + 404) - *(_DWORD*)(v10 + 396);
			if (!v6)
			{
				v7 = *(_DWORD*)(v10 + 408) - *(_DWORD*)(v10 + 400);
				v21 = v7;
				v6 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
			}
			if (v14 > v6)
				break;
			if (v14 != v6)
				goto LABEL_16;
			v23 = 1;
		LABEL_17:
			v15 = v13 + v4;
			v19[0] = v3;
			v3 += v14;
			v19[1] = v4;
			v19[3] = v13 + v4;
			v19[2] = v3;
			sub_1400CC7C0(v10, v19);
			if (v23)
			{
				v4 = v15;
				v22 = v15;
				v3 = 0;
				v7 = v13 + v21;
				v6 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
				v21 += v13;
			}
			else
			{
				v7 = v21;
				v4 = v22;
			}
		LABEL_22:
			v9 = (_QWORD*)*v9;
			if (v9 == *(_QWORD**)(a1 + 576))
				goto LABEL_23;
		}
		v4 += v13;
		v6 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
		v3 = 0;
		v22 = v4;
		v21 = v13 + v7;
	LABEL_16:
		v6 -= v14;
		goto LABEL_17;
	}
LABEL_23:
	if ((*(_BYTE*)(a1 + 656) & 2) != 0 && sub_1400C6E00(a1))
	{
		v16 = *(_QWORD*)(a1 + 472);
		*(_BYTE*)(v16 + 1392) |= 0x10u;
		*(_DWORD*)(v16 + 1300) = 0;
		sub_1400CAC90((_QWORD*)a1);
	}
	if ((*(_BYTE*)(a1 + 656) & 4) != 0)
	{
		if (sub_1400C6D90(a1))
		{
			v17 = *(_QWORD*)(a1 + 464);
			*(_BYTE*)(v17 + 1392) |= 0x10u;
			*(_DWORD*)(v17 + 1300) = 0;
			sub_1400CAE90((_QWORD*)a1);
		}
	}
	sub_1400C7600(a1);
	return v7;
}
// 1400CDC96: conditional instruction was optimized away because ecx.4<1
// 1400CDCDD: conditional instruction was optimized away because ecx.4<1
// 1400CDA50: using guessed type int var_58[4];

