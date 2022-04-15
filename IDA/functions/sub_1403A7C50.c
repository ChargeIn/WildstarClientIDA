//----- (00000001403A7C50) ----------------------------------------------------
void __fastcall sub_1403A7C50(__int64 a1)
{
	__int64 v1; // r14
	__int64 v2; // rbp
	int* v3; // rbx
	__int64 v4; // rdi
	float v5; // xmm7_4
	_DWORD* v6; // rsi
	float v7; // xmm8_4
	float v8; // xmm6_4
	__int64 v9; // rdi
	unsigned int v10; // ebx
	float* v11; // rax
	float* v12; // rbx
	__int64 v13; // rax
	float v14; // xmm1_4
	__int64 v15; // rcx
	__int64 v16; // rbx
	unsigned int v17; // edi
	__int64 v18; // rax
	__int64 v19; // rdx
	unsigned int v20; // ecx
	__int64 v21; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int v24; // edx
	__int64 v25; // rax
	__int64 v26; // rdi
	__int64 v27; // rbx
	char v28[16]; // [rsp+20h] [rbp-88h] BYREF
	char v29[8]; // [rsp+30h] [rbp-78h] BYREF
	int* v30; // [rsp+38h] [rbp-70h]
	__int64 v31; // [rsp+40h] [rbp-68h]
	__int64 v32; // [rsp+B0h] [rbp+8h] BYREF
	int v33; // [rsp+B8h] [rbp+10h]

	v32 = a1;
	v1 = qword_140C65898;
	if (!*(_DWORD*)(qword_140C65898 + 1368) && *(_QWORD*)(qword_140C65898 + 120))
		return;
	v2 = 12i64;
	v30 = sub_14018B280(40i64, 0);
	v31 = 0i64;
	*(_BYTE*)v30 = 0;
	v3 = (int*)&unk_140AF5A28;
	v4 = 12i64;
	*((_QWORD*)v30 + 1) = 0i64;
	*((_QWORD*)v30 + 2) = v30;
	*((_QWORD*)v30 + 3) = v30;
	do
	{
		sub_1403ADDD0((__int64)v29, (__int64)v28, v3++);
		--v4;
	} while (v4);
	v5 = 0.0;
	v6 = &unk_140AF5268;
	v7 = 0.0;
	v8 = 0.0;
	do
	{
		if (*v6 < *(_DWORD*)(v1 + 164))
		{
			v9 = *(_QWORD*)(*(_QWORD*)(v1 + 176) + 8i64 * (unsigned int)*v6);
			if (v9)
			{
				v10 = *(_DWORD*)(*(_QWORD*)(v9 + 64) + 380i64);
				if (qword_140C63840)
				{
					v11 = (float*)qword_140C63840(off_140A6AFD8, v10, qword_140C63858);
				}
				else
				{
					if (dword_140C6559C || (int)sub_14020E540() < 0)
						goto LABEL_17;
					v11 = (float*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648E8 + 24i64))(
						qword_140C648E8,
						v10);
				}
				v12 = v11;
				if (v11)
				{
					*(float*)&v32 = *v11;
					sub_1403ADED0((__int64)v29, &v32);
					v13 = *(_QWORD*)(v9 + 72);
					v14 = v12[6] * v12[5];
					v8 = v8 + v14;
					if (!v13)
						v13 = *(_QWORD*)(v9 + 64) + 8i64;
					v7 = v7 + (float)((float)*(int*)(v13 + 12) * v14);
				}
			}
		}
	LABEL_17:
		++v6;
		--v2;
	} while (v2);
	v15 = (__int64)v30;
	v16 = *((_QWORD*)v30 + 2);
	if ((int*)v16 != v30)
	{
		while (1)
		{
			v17 = *(_DWORD*)(v16 + 32);
			if (qword_140C63840)
				break;
			if (!dword_140C6559C)
			{
				if ((int)sub_14020E540() >= 0)
				{
					v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648E8 + 24i64))(qword_140C648E8, v17);
					goto LABEL_24;
				}
			LABEL_29:
				v15 = (__int64)v30;
			}
			v21 = *(_QWORD*)(v16 + 24);
			if (v21)
			{
				v16 = *(_QWORD*)(v16 + 24);
				for (i = *(_QWORD*)(v21 + 16); i; i = *(_QWORD*)(i + 16))
					v16 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v16 + 8); v16 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v16 = j;
				if (*(_QWORD*)(v16 + 24) != j)
					v16 = j;
			}
			if (v16 == v15)
				goto LABEL_39;
		}
		v18 = qword_140C63840(off_140A6AFD8, v17, qword_140C63858);
	LABEL_24:
		if (v18)
		{
			v19 = *(_QWORD*)(v1 + 120);
			v20 = *(_DWORD*)(v19 + 60);
			if (!v20)
				v20 = *(_DWORD*)(v19 + 56);
			if (*(_DWORD*)(v18 + 36) <= v20)
				v8 = v8 + (float)(*(float*)(v18 + 24) * *(float*)(v18 + 20));
		}
		goto LABEL_29;
	}
LABEL_39:
	*(float*)&v32 = v8;
	v24 = 0;
	v33 = 0;
	if (v8 < 0.0)
		v24 = 0x80000000;
	if ((int)abs32(v24 - LODWORD(v8)) > 84)
		v5 = v7 / v8;
	v25 = *(_QWORD*)(v1 + 120);
	if (v25)
	{
		*(float*)(v25 + 3404) = v5;
		v15 = (__int64)v30;
		*(_DWORD*)(v1 + 1368) = 0;
	}
	if (v31)
	{
		v26 = *(_QWORD*)(v15 + 8);
		if (v26)
		{
			do
			{
				sub_1400083B0((__int64)v29, *(_QWORD*)(v26 + 24));
				v27 = *(_QWORD*)(v26 + 16);
				sub_14018B900(v26, 0);
				v26 = v27;
			} while (v27);
			v15 = (__int64)v30;
		}
		*(_QWORD*)(v15 + 16) = v15;
		*((_QWORD*)v30 + 1) = 0i64;
		*((_QWORD*)v30 + 3) = v30;
		v15 = (__int64)v30;
		v31 = 0i64;
	}
	sub_14018B900(v15, 0);
}
// 140A6AFD8: using guessed type wchar_t *off_140A6AFD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C648E8: using guessed type __int64 qword_140C648E8;
// 140C6559C: using guessed type int dword_140C6559C;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403A7C50: using guessed type char var_88[16];
// 1403A7C50: using guessed type char var_78[8];

