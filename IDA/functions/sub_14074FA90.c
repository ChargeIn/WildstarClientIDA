//----- (000000014074FA90) ----------------------------------------------------
__int64 __fastcall sub_14074FA90(_QWORD* a1)
{
	unsigned __int64 v1; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // r15d
	int* v8; // rax
	__int64 v9; // rbp
	int* v10; // rdi
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // r14
	int v14; // eax
	__int64 v15; // r8
	int* v16; // rcx
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v20; // rcx
	unsigned __int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	int v24; // eax
	int* v25; // rbx
	int v26; // r9d
	unsigned int** v27; // r9
	unsigned int v28; // edx
	__int64 v29; // r8
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64* v32; // rax
	__int64 v33; // rax
	__int64 v34; // r10
	_DWORD* v35; // rcx
	__int64 v36; // rdx
	int* v37; // rbx
	__int64 v38; // rcx
	__int64(__fastcall * *v40)(); // [rsp+30h] [rbp-48h] BYREF
	int v41; // [rsp+38h] [rbp-40h]
	_QWORD* v42; // [rsp+40h] [rbp-38h]
	int v43; // [rsp+48h] [rbp-30h]
	double v44; // [rsp+80h] [rbp+8h] BYREF
	__int64 v45; // [rsp+88h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v1)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v1)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = sub_14018B280(24i64, 0);
	v9 = qword_140C65C28;
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	v10 = v8;
	v11 = *(_QWORD**)(v9 + 112);
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			v13 = *(_QWORD*)(v12[5] + 40i64);
			v14 = *(_DWORD*)(*(_QWORD*)v13 + 12i64);
			if ((v14 & 2) == 0 && (v14 & 4) == 0)
			{
				v15 = *(unsigned int*)(*(_QWORD*)v13 + 52i64);
				if ((!(_DWORD)v15
					|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							*(_QWORD*)(qword_140C65898 + 120),
							v15,
							0i64,
							0i64,
							0))
					&& *(_DWORD*)(*(_QWORD*)v13 + 8i64) == v7)
				{
					v16 = sub_14018B280(24i64, 0);
					if (v16 != (int*)-16i64)
						*((_QWORD*)v16 + 2) = v12[5];
					*(_QWORD*)v16 = v10;
					*((_QWORD*)v16 + 1) = *((_QWORD*)v10 + 1);
					**((_QWORD**)v10 + 1) = v16;
					*((_QWORD*)v10 + 1) = v16;
				}
			}
			v17 = v12[3];
			if (v17)
			{
				v12 = (_QWORD*)v12[3];
				for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
					v12 = i;
			}
			else
			{
				for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v12 = (_QWORD*)j;
				if (v12[3] != j)
					v12 = (_QWORD*)j;
			}
		} while (v12 != *(_QWORD**)(v9 + 112));
	}
	v20 = a1[4];
	v42 = a1;
	v40 = off_140B569F0;
	v21 = *(_QWORD*)(v20 + 112);
	v43 = 1;
	if (*(_QWORD*)(v20 + 120) >= v21)
		sub_14005E2C0((__int64)a1);
	v22 = a1[2];
	v23 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v22 + 8) = 5;
	*(_QWORD*)v22 = v23;
	a1[2] += 16i64;
	v24 = sub_1400578C0((__int64)a1);
	v25 = *(int**)v10;
	v26 = v24;
	v41 = v24;
	if (v25 != v10)
	{
		do
		{
			v27 = *(unsigned int***)(*((_QWORD*)v25 + 2) + 40i64);
			if (v27)
			{
				v28 = **v27;
				v29 = *(_QWORD*)(qword_140C65C28 + 200);
				v30 = v29;
				v31 = *(_QWORD*)(v29 + 8);
				while (v31)
				{
					if (*(_DWORD*)(v31 + 32) < v28)
					{
						v31 = *(_QWORD*)(v31 + 24);
					}
					else
					{
						v30 = v31;
						v31 = *(_QWORD*)(v31 + 16);
					}
				}
				if (v30 == v29 || v28 < *(_DWORD*)(v30 + 32))
				{
					v45 = *(_QWORD*)(qword_140C65C28 + 200);
					v32 = &v45;
				}
				else
				{
					v44 = *(double*)&v30;
					v32 = (__int64*)&v44;
				}
				v33 = *v32;
				if (v33 != *(_QWORD*)(qword_140C65C28 + 200)
					&& *(_QWORD*)(v33 + 40)
					&& (unsigned int)sub_1404332A0(a1, (__int64)v27))
				{
					sub_1400FB470((__int64)&v40);
					a1 = v42;
					v42[2] -= 16i64;
				}
			}
			v25 = *(int**)v25;
		} while (v25 != v10);
		v26 = v41;
	}
	v34 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v26 - 1) >= *(_DWORD*)(v34 + 56))
	{
		v44 = (double)v26;
		if ((double)v26 == 0.0)
			v35 = *(_DWORD**)(v34 + 32);
		else
			v35 = (_DWORD*)(*(_QWORD*)(v34 + 32)
				+ 40 * ((unsigned int)(LODWORD(v44) + HIDWORD(v44)) % (((1i64 << *(_BYTE*)(v34 + 11)) - 1) | 1)));
		while (v35[6] != 3 || (double)v26 != *((double*)v35 + 2))
		{
			v35 = (_DWORD*)*((_QWORD*)v35 + 4);
			if (!v35)
			{
				v35 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v35 = (_DWORD*)(*(_QWORD*)(v34 + 24) + 16i64 * (v26 - 1));
	}
	v36 = a1[2];
	*(_QWORD*)v36 = *(_QWORD*)v35;
	*(_DWORD*)(v36 + 8) = v35[2];
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v36, v26);
	v37 = *(int**)v10;
	while (v37 != v10)
	{
		v38 = (__int64)v37;
		v37 = *(int**)v37;
		sub_14018B900(v38, 0);
	}
	*(_QWORD*)v10 = v10;
	*((_QWORD*)v10 + 1) = v10;
	sub_14018B900((__int64)v10, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65C28: using guessed type __int64 qword_140C65C28;

