//----- (000000014074D090) ----------------------------------------------------
__int64 __fastcall sub_14074D090(_QWORD* a1)
{
	int v1; // esi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	int v8; // eax
	_DWORD* v9; // rdx
	int v10; // r15d
	__int64 v11; // rax
	int v12; // eax
	BOOL v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rbp
	BOOL v16; // r14d
	unsigned __int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	unsigned __int64 v20; // rbx
	int v21; // r9d
	__int64 v22; // r9
	__int64 v23; // r8
	unsigned int v24; // edx
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64* v27; // rax
	__int64 v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rdx
	__int64 v31; // r10
	_DWORD* v32; // rcx
	__int64 v33; // r8
	__int64 v34; // rdx
	__int64(__fastcall * *v36)(); // [rsp+20h] [rbp-48h] BYREF
	int v37; // [rsp+28h] [rbp-40h]
	_QWORD* v38; // [rsp+30h] [rbp-38h]
	int v39; // [rsp+38h] [rbp-30h]
	double v40; // [rsp+70h] [rbp+8h] BYREF
	__int64 v41; // [rsp+78h] [rbp+10h] BYREF

	v1 = 0;
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
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = dword_140A12138;
	v10 = v8;
	v11 = *(_QWORD*)(v7 + 400);
	if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 16i64) < *(_QWORD*)(v11 + 16))
		v9 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64);
	v12 = v9[2];
	v13 = v12 && (v12 != 1 || *v9);
	v14 = a1[4];
	v15 = qword_140C65C28;
	v16 = v13;
	v36 = off_140B569F0;
	v17 = *(_QWORD*)(v14 + 112);
	v38 = a1;
	v39 = 1;
	if (*(_QWORD*)(v14 + 120) >= v17)
		sub_14005E2C0((__int64)a1);
	v18 = a1[2];
	v19 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v18 + 8) = 5;
	*(_QWORD*)v18 = v19;
	a1[2] += 16i64;
	v20 = 0i64;
	v21 = sub_1400578C0((__int64)a1);
	v37 = v21;
	if (*(_QWORD*)(v15 + 264))
	{
		v22 = qword_140C65C28;
		do
		{
			if (v1 >= v10)
				break;
			v23 = *(_QWORD*)(v22 + 112);
			v24 = *(_DWORD*)(*(_QWORD*)(v15 + 256) + 4 * v20);
			v25 = *(_QWORD*)(v23 + 8);
			v26 = v23;
			while (v25)
			{
				if (*(_DWORD*)(v25 + 32) < v24)
				{
					v25 = *(_QWORD*)(v25 + 24);
				}
				else
				{
					v26 = v25;
					v25 = *(_QWORD*)(v25 + 16);
				}
			}
			if (v26 == v23 || v24 < *(_DWORD*)(v26 + 32))
			{
				v41 = *(_QWORD*)(v22 + 112);
				v27 = &v41;
			}
			else
			{
				v40 = *(double*)&v26;
				v27 = (__int64*)&v40;
			}
			v28 = *v27;
			if (v28 != v23)
			{
				v29 = *(_QWORD*)(v28 + 40);
				if (v29)
				{
					v30 = *(_QWORD*)(v29 + 40);
					if (v30)
					{
						if (v16 == ((*(_DWORD*)(*(_QWORD*)v30 + 12i64) >> 2) & 1))
						{
							if ((unsigned int)sub_1404332A0(a1, v30))
							{
								sub_1400FB470((__int64)&v36);
								a1 = v38;
								v38[2] -= 16i64;
							}
							v22 = qword_140C65C28;
							++v1;
						}
					}
				}
			}
			++v20;
		} while (v20 < *(_QWORD*)(v15 + 264));
		v21 = v37;
	}
	v31 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v21 - 1) >= *(_DWORD*)(v31 + 56))
	{
		v40 = (double)v21;
		if ((double)v21 == 0.0)
			v32 = *(_DWORD**)(v31 + 32);
		else
			v32 = (_DWORD*)(*(_QWORD*)(v31 + 32)
				+ 40 * ((unsigned int)(LODWORD(v40) + HIDWORD(v40)) % (((1i64 << *(_BYTE*)(v31 + 11)) - 1) | 1)));
		while (v32[6] != 3 || (double)v21 != *((double*)v32 + 2))
		{
			v32 = (_DWORD*)*((_QWORD*)v32 + 4);
			if (!v32)
			{
				v32 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v32 = (_DWORD*)(*(_QWORD*)(v31 + 24) + 16i64 * (v21 - 1));
	}
	v33 = a1[2];
	*(_QWORD*)v33 = *(_QWORD*)v32;
	v34 = (unsigned int)v32[2];
	*(_DWORD*)(v33 + 8) = v34;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v34, v21);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65C28: using guessed type __int64 qword_140C65C28;

