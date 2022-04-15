//----- (000000014059CCB0) ----------------------------------------------------
__int64 __fastcall sub_14059CCB0(_QWORD* a1)
{
	unsigned __int64 v1; // rbp
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64* v9; // rax
	__int64 v10; // r15
	int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // rdi
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // r13d
	_QWORD* v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rcx
	int v20; // r12d
	unsigned int v21; // edi
	unsigned int* v22; // r14
	unsigned int v23; // edx
	int* v24; // rax
	int* v25; // rbx
	int v26; // ebx
	__int64 v27; // rdi
	__int64 v28; // r13
	unsigned int* v29; // rax
	int v30; // r12d
	int* v31; // r14
	__int64 v32; // rax
	int* v33; // rcx
	unsigned int v34; // edx
	__int64 v35; // rdi
	_DWORD* v36; // rbx
	_DWORD* v37; // rax
	_QWORD* v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // r8
	__int64 v44; // [rsp+30h] [rbp-88h] BYREF
	unsigned __int64 v45; // [rsp+38h] [rbp-80h]
	char v46[8]; // [rsp+40h] [rbp-78h] BYREF
	int* v47; // [rsp+48h] [rbp-70h]
	__int64 v48; // [rsp+50h] [rbp-68h]
	__int64(__fastcall * *v49)(); // [rsp+60h] [rbp-58h] BYREF
	int v50; // [rsp+68h] [rbp-50h]
	_QWORD* v51; // [rsp+70h] [rbp-48h]
	int v52; // [rsp+78h] [rbp-40h]
	unsigned int v53; // [rsp+C0h] [rbp+8h]
	__int64 v54; // [rsp+C8h] [rbp+10h]
	__int64 v55; // [rsp+D0h] [rbp+18h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	v9 = (__int64*)sub_140417660((__int64)a1, 1);
	if (v9)
		v10 = *v9;
	else
		v10 = 0i64;
	v11 = sub_1400F26A0(v8, 2);
	v12 = a1[4];
	v51 = a1;
	v13 = (unsigned int)(v11 - 1);
	v52 = 1;
	v49 = off_140B569F0;
	v53 = v11 - 1;
	if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	v50 = v16;
	if (!v10
		|| (unsigned int)v13 >= 8
		|| !*(_DWORD*)(v10 + 1184)
		|| !*(_QWORD*)(v10 + 8)
		|| !*(_DWORD*)(v10 + 1176)
		|| v10 == -32
		|| !*(_DWORD*)(v10 + 1188)
		|| v10 == -744)
	{
		v41 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		v42 = a1[2];
		*(_QWORD*)v42 = *v41;
		v18 = *((unsigned int*)v41 + 2);
		*(_DWORD*)(v42 + 8) = v18;
		goto LABEL_61;
	}
	if (!*(_BYTE*)(v13 + v10 + 744))
	{
		v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		v19 = a1[2];
		*(_QWORD*)v19 = *v17;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
	LABEL_61:
		a1[2] += 16i64;
		goto LABEL_62;
	}
	v20 = 0;
	v48 = 0i64;
	v21 = 0;
	v47 = sub_14018B280(40i64, 0);
	*(_BYTE*)v47 = 0;
	*((_QWORD*)v47 + 1) = 0i64;
	v22 = (unsigned int*)(v10 + 1144);
	*((_QWORD*)v47 + 2) = v47;
	*((_QWORD*)v47 + 3) = v47;
	do
	{
		if (*(_DWORD*)(v10 + 1192))
			v23 = *v22;
		else
			v23 = 0;
		v24 = sub_1400B5DF0(qword_140C658F0, v23, 0i64);
		v25 = v24;
		if (v24)
		{
			if (v24[73])
				sub_1400293C0((__int64)v46, (__int64)&v44, v24);
			if (v25[71] || v25[72])
				v20 = 1;
		}
		++v21;
		++v22;
	} while (v21 < 8);
	if (!*(_QWORD*)v10 || (v26 = 1, *(_DWORD*)(*(_QWORD*)v10 + 32i64)))
		v26 = 0;
	v45 = 0i64;
	v44 = 0i64;
	sub_1403D6710(qword_140C65898 + 184, &v44);
	v27 = v20;
	v54 = v20;
	v55 = v26;
	if (v45)
	{
		do
		{
			v28 = *(_QWORD*)(v44 + 8 * v1);
			v29 = *(unsigned int**)(v28 + 64);
			v30 = *v29;
			v31 = sub_1400B5DF0(qword_140C658F0, *v29, 0i64);
			v32 = *((_QWORD*)v47 + 1);
			v33 = v47;
			if (!v32)
				goto LABEL_65;
			v34 = *v31;
			do
			{
				if (*(_DWORD*)(v32 + 32) < v34)
				{
					v32 = *(_QWORD*)(v32 + 24);
				}
				else
				{
					v33 = (int*)v32;
					v32 = *(_QWORD*)(v32 + 16);
				}
			} while (v32);
			if (v33 == v47 || v34 < v33[8])
			{
			LABEL_65:
				if (!v27 || !v31[71] && !v31[72])
				{
					v35 = sub_14041FB80(v10);
					v36 = (_DWORD*)sub_1403DFFE0(v10);
					v37 = (_DWORD*)sub_1403E0000(v10);
					if (sub_14056AFB0(qword_140C65898, v31, v37, v36, v35, v53)
						&& ((v31[84] & 2) == 0 || !v55 || !(unsigned int)sub_1403AF9E0(qword_140C65898 + 160, v30))
						&& (unsigned int)sub_140415D60(a1, (void(__fastcall***)(_QWORD))v28))
					{
						sub_1400FB470((__int64)&v49);
						a1 = v51;
						v51[2] -= 16i64;
					}
					v27 = v54;
				}
			}
			++v1;
		} while (v1 < v45);
		v16 = v50;
	}
	v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
	v39 = a1[2];
	*(_QWORD*)v39 = *v38;
	*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
	v40 = v44;
	a1[2] += 16i64;
	if (v40)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
	sub_140008410((__int64)v46);
	sub_14018B900((__int64)v47, 0);
LABEL_62:
	sub_1400579E0((__int64)a1, v18, v16);
	return 1i64;
}
// 14059CE8C: conditional instruction was optimized away because edi.4<8u
// 14059D112: variable 'v18' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14059CCB0: using guessed type char var_78[8];

