//----- (000000014059BC00) ----------------------------------------------------
__int64 __fastcall sub_14059BC00(_QWORD* a1)
{
	__int64 v1; // rsi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // ebp
	unsigned int v9; // eax
	__int64 v10; // rcx
	unsigned int v11; // r14d
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // r12d
	__int64 v16; // rcx
	__int64 v17; // rbx
	__int64 v18; // rax
	unsigned int v19; // r15d
	__int64 v20; // rcx
	__int64 v21; // r8
	__int64 v22; // rdx
	__int64 v23; // rax
	_QWORD* v24; // r14
	int* v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rax
	_QWORD* v28; // rax
	__int64 v29; // r8
	__int64 v30; // rdx
	__int64(__fastcall * *v32)(); // [rsp+30h] [rbp-48h] BYREF
	int v33; // [rsp+38h] [rbp-40h]
	_QWORD* v34; // [rsp+40h] [rbp-38h]
	int v35; // [rsp+48h] [rbp-30h]
	__int64 v36; // [rsp+80h] [rbp+8h]

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
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = sub_1405925D0(a1, 2u);
	v10 = a1[4];
	v11 = v9;
	v34 = a1;
	v32 = off_140B569F0;
	v12 = *(_QWORD*)(v10 + 112);
	v35 = 1;
	if (*(_QWORD*)(v10 + 120) >= v12)
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	a1[2] += 16i64;
	v15 = sub_1400578C0((__int64)a1);
	v33 = v15;
	v17 = sub_1405BE150(v16, v8);
	v18 = sub_140245C00(v11);
	if (v17 && v18)
	{
		v19 = *(_DWORD*)(v18 + 28);
		if ((*(_BYTE*)(v17 + 16) & 1) != 0)
			v19 = sub_1405E6300(qword_140C65898 + 5784, 27, 0, 0, 0) + 1;
		v20 = qword_140C658F0;
		v21 = *(_QWORD*)(qword_140C658F0 + 392);
		v22 = v21;
		v23 = *(_QWORD*)(v21 + 8);
		while (v23)
		{
			if (*(_DWORD*)(v23 + 32) < v8)
			{
				v23 = *(_QWORD*)(v23 + 24);
			}
			else
			{
				v22 = v23;
				v23 = *(_QWORD*)(v23 + 16);
			}
		}
		if (v22 == v21 || (v36 = v22, v8 < *(_DWORD*)(v22 + 32)))
			v36 = *(_QWORD*)(qword_140C658F0 + 392);
		if (v36 != v21)
		{
			v24 = *(_QWORD**)(v36 + 40);
			if (v24)
			{
				if (v24[1])
				{
					while (1)
					{
						v25 = sub_1400B5DF0(v20, *(_DWORD*)(*v24 + 4 * v1), 0i64);
						v26 = (__int64)v25;
						if (v25)
						{
							v27 = sub_140243A00(v25[112]);
							if (v27)
							{
								if (*(_DWORD*)(v27 + 8) <= v19 && (unsigned int)sub_140415C70(a1, v26))
								{
									sub_1400FB470((__int64)&v32);
									a1 = v34;
									v34[2] -= 16i64;
								}
							}
						}
						if ((unsigned __int64)++v1 >= v24[1])
							break;
						v20 = qword_140C658F0;
					}
					v15 = v33;
				}
			}
		}
	}
	v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
	v29 = a1[2];
	*(_QWORD*)v29 = *v28;
	v30 = *((unsigned int*)v28 + 2);
	*(_DWORD*)(v29 + 8) = v30;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v30, v15);
	return 1i64;
}
// 14059BCD5: variable 'v16' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

