//----- (000000014059BE70) ----------------------------------------------------
__int64 __fastcall sub_14059BE70(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // esi
	unsigned int v8; // eax
	__int64 v9; // rcx
	unsigned int v10; // r12d
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // ebp
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // r13
	__int64 v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rax
	_QWORD* v23; // r15
	__int64 v24; // r14
	int* v25; // rax
	int* v26; // rsi
	int v27; // ebp
	__int64 v28; // rcx
	unsigned int v29; // r8d
	unsigned int v30; // eax
	__int64 v31; // rdx
	int v32; // ecx
	__int64 v33; // rcx
	unsigned __int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	int v37; // ebx
	__int64 v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdx
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r8
	__int64 v45; // rdx
	__int64(__fastcall * *v47)(); // [rsp+20h] [rbp-68h] BYREF
	int v48; // [rsp+28h] [rbp-60h]
	_QWORD* v49; // [rsp+30h] [rbp-58h]
	int v50; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v51)(); // [rsp+40h] [rbp-48h] BYREF
	int v52; // [rsp+48h] [rbp-40h]
	_QWORD* v53; // [rsp+50h] [rbp-38h]
	int v54; // [rsp+58h] [rbp-30h]
	__int64 v55; // [rsp+90h] [rbp+8h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = sub_1405925D0(a1, 2u);
	v9 = a1[4];
	v10 = v8;
	v49 = a1;
	v47 = off_140B569F0;
	v11 = *(_QWORD*)(v9 + 112);
	v50 = 1;
	if (*(_QWORD*)(v9 + 120) >= v11)
		sub_14005E2C0((__int64)a1);
	v12 = a1[2];
	v13 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	a1[2] += 16i64;
	v14 = sub_1400578C0((__int64)a1);
	v48 = v14;
	v16 = sub_1405BE150(v15, v7);
	v17 = sub_140245C00(v10);
	v18 = v17;
	if (v16 && v17)
	{
		v19 = qword_140C658F0;
		v20 = *(_QWORD*)(qword_140C658F0 + 424);
		v21 = v20;
		v22 = *(_QWORD*)(v20 + 8);
		while (v22)
		{
			if (*(_DWORD*)(v22 + 32) < v7)
			{
				v22 = *(_QWORD*)(v22 + 24);
			}
			else
			{
				v21 = v22;
				v22 = *(_QWORD*)(v22 + 16);
			}
		}
		if (v21 == v20 || (v55 = v21, v7 < *(_DWORD*)(v21 + 32)))
			v55 = *(_QWORD*)(qword_140C658F0 + 424);
		if (v55 != v20)
		{
			v23 = *(_QWORD**)(v55 + 40);
			if (v23)
			{
				v24 = 0i64;
				if (v23[1])
				{
					while (1)
					{
						v25 = sub_1400B5DF0(v19, *(_DWORD*)(*v23 + 4 * v24), 0i64);
						v26 = v25;
						if (v25)
						{
							v27 = sub_1403AC840(qword_140C65898 + 160, 2, *v25);
							if (v27)
							{
								v28 = sub_140244280(v26[113]);
								if (v28)
								{
									if (*(_DWORD*)(v28 + 8) == *(_DWORD*)(v18 + 28))
									{
										if (*(_DWORD*)(qword_140C65898 + 6864) == v10
											&& (v29 = *(_DWORD*)(qword_140C65898 + 6940), v30 = 0, v29))
										{
											v31 = 1132i64;
											while (1)
											{
												v32 = v30 >= *(_DWORD*)(qword_140C65898 + 6940) ? 0 : *(_DWORD*)(v31 + qword_140C65898 + 5784);
												if (v32 == *v26)
													break;
												++v30;
												v31 += 4i64;
												if (v30 >= v29)
													goto LABEL_34;
											}
										}
										else
										{
										LABEL_34:
											v33 = a1[4];
											v53 = a1;
											v51 = off_140B569F0;
											v34 = *(_QWORD*)(v33 + 112);
											v54 = 1;
											if (*(_QWORD*)(v33 + 120) >= v34)
												sub_14005E2C0((__int64)a1);
											v35 = a1[2];
											v36 = sub_14005C1B0((__int64)a1, 0, 0);
											*(_DWORD*)(v35 + 8) = 5;
											*(_QWORD*)v35 = v36;
											a1[2] += 16i64;
											v37 = sub_1400578C0((__int64)a1);
											v38 = *(_QWORD*)(a1[4] + 160i64);
											v52 = v37;
											v39 = sub_14005C3C0(v38, v37);
											v40 = a1[2];
											*(_QWORD*)v40 = *v39;
											*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
											a1[2] += 16i64;
											sub_1400F06F0((__int64)a1, v41, L"nCount", v27);
											a1[2] -= 16i64;
											if ((unsigned int)sub_140415C70(a1, (__int64)v26))
											{
												sub_1400FB540((__int64)&v51);
												a1[2] -= 16i64;
											}
											sub_1400FB1D0((__int64)&v47);
											sub_1400579E0((__int64)a1, v42, v37);
										}
									}
								}
							}
						}
						if ((unsigned __int64)++v24 >= v23[1])
							break;
						v19 = qword_140C658F0;
					}
					a1 = v49;
					v14 = v48;
				}
			}
		}
	}
	v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
	v44 = a1[2];
	*(_QWORD*)v44 = *v43;
	v45 = *((unsigned int*)v43 + 2);
	*(_DWORD*)(v44 + 8) = v45;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v45, v14);
	return 1i64;
}
// 14059BF41: variable 'v15' is possibly undefined
// 14059C14E: variable 'v41' is possibly undefined
// 14059C18F: variable 'v42' is possibly undefined
// 140B1FD30: using guessed type wchar_t aNcount_28[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

