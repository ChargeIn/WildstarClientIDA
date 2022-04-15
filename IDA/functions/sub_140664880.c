//----- (0000000140664880) ----------------------------------------------------
__int64 __fastcall sub_140664880(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rbp
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	int v5; // eax
	BOOL v6; // esi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // r9d
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // edx
	__int64 v17; // r8
	int v18; // edx
	__int64 v19; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v22; // r10
	_DWORD* v23; // rcx
	__int64 v24; // r8
	__int64 v25; // rdx
	__int64(__fastcall * *v27)(); // [rsp+20h] [rbp-28h] BYREF
	int v28; // [rsp+28h] [rbp-20h]
	_QWORD* v29; // [rsp+30h] [rbp-18h]
	int v30; // [rsp+38h] [rbp-10h]
	double v31; // [rsp+50h] [rbp+8h]

	v1 = a1;
	v2 = *(_QWORD*)qword_140C65B80;
	v3 = (_DWORD*)a1[3];
	v4 = dword_140A12138;
	if ((unsigned __int64)v3 < v1[2])
		v4 = v3;
	v5 = v4[2];
	v6 = v5 && (v5 != 1 || *v4);
	v7 = v1[4];
	v29 = v1;
	v27 = off_140B569F0;
	v8 = *(_QWORD*)(v7 + 112);
	v30 = 1;
	if (*(_QWORD*)(v7 + 120) >= v8)
		sub_14005E2C0((__int64)v1);
	v9 = v1[2];
	v10 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	v1[2] += 16i64;
	v11 = sub_1400578C0((__int64)v1);
	v12 = *(_QWORD*)(v2 + 72);
	v13 = v11;
	v28 = v11;
	v14 = *(_QWORD*)(v12 + 16);
	if (v14 != v12)
	{
		while (1)
		{
			v15 = sub_1405A8A40(v12, *(_DWORD*)(v14 + 32));
			if (v15)
			{
				v12 = qword_140C65898;
				v16 = 0;
				v17 = *(_QWORD*)(qword_140C65898 + 120);
				if (v17)
				{
					if (v6)
						goto LABEL_19;
					v18 = *(_DWORD*)(v17 + 60);
					if (!v18)
						v18 = *(_DWORD*)(v17 + 56);
					v16 = v18 - 10;
				}
				else if (v6)
				{
					goto LABEL_19;
				}
				if (v16 <= *(_DWORD*)(*(_QWORD*)(v15 + 8) + 16i64))
				{
				LABEL_19:
					if ((unsigned int)sub_140663030(v1, v15))
					{
						sub_1400FB470((__int64)&v27);
						v1 = v29;
						v29[2] -= 16i64;
					}
				}
			}
			v19 = *(_QWORD*)(v14 + 24);
			if (v19)
			{
				v14 = *(_QWORD*)(v14 + 24);
				for (i = *(_QWORD*)(v19 + 16); i; i = *(_QWORD*)(i + 16))
					v14 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v14 = j;
				if (*(_QWORD*)(v14 + 24) != j)
					v14 = j;
			}
			if (v14 == *(_QWORD*)(v2 + 72))
			{
				v13 = v28;
				break;
			}
		}
	}
	v22 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v22 + 56))
	{
		if ((double)v13 == 0.0)
		{
			v23 = *(_DWORD**)(v22 + 32);
		}
		else
		{
			v31 = (double)v13;
			v23 = (_DWORD*)(*(_QWORD*)(v22 + 32)
				+ 40 * ((unsigned int)(LODWORD(v31) + HIDWORD(v31)) % (((1i64 << *(_BYTE*)(v22 + 11)) - 1) | 1)));
		}
		while (v23[6] != 3 || (double)v13 != *((double*)v23 + 2))
		{
			v23 = (_DWORD*)*((_QWORD*)v23 + 4);
			if (!v23)
			{
				v23 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v23 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 16i64 * (v13 - 1));
	}
	v24 = v1[2];
	*(_QWORD*)v24 = *(_QWORD*)v23;
	v25 = (unsigned int)v23[2];
	*(_DWORD*)(v24 + 8) = v25;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v25, v13);
	return 1i64;
}
// 140664943: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

