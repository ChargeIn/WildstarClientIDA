//----- (000000014088ED70) ----------------------------------------------------
__int64 __fastcall sub_14088ED70(__int64 a1, int a2, int a3)
{
	__int64 v3; // rsi
	int v5; // r13d
	int v6; // r14d
	__int64 result; // rax
	_QWORD* i; // rdi
	int v9; // r12d
	int v10; // eax
	__int64 v11; // rsi
	_QWORD* v12; // rbx
	int v13; // eax
	float v14; // xmm0_4
	__int64 v15; // rax
	__int64 v16; // r13
	__int64 v17; // rax
	__int64 v18; // rbx
	int v19; // edx
	int v20; // edi
	int v21; // esi
	__int64 v22; // r14
	__int64 v23; // rax
	__int64 v24; // rsi
	__int64 v25; // rdi
	int v26; // ebx
	int v27; // eax
	_QWORD* v28; // rcx
	__int64 v29; // rax
	int v30; // ecx
	__int64 v31; // rbx
	int v32; // edi
	int v33; // edi
	__int64 v34; // rbx
	int v35; // eax
	float v36; // xmm0_4
	int v37; // [rsp+38h] [rbp-31h]
	__int64 v38; // [rsp+50h] [rbp-19h] BYREF
	__int64 v39; // [rsp+58h] [rbp-11h] BYREF
	__int128 v40; // [rsp+60h] [rbp-9h]
	__int128 v41; // [rsp+70h] [rbp+7h]
	__int64 v42; // [rsp+D0h] [rbp+67h] BYREF
	int v43; // [rsp+D8h] [rbp+6Fh]
	int v44; // [rsp+E0h] [rbp+77h]
	__int64 v45; // [rsp+E8h] [rbp+7Fh] BYREF

	v44 = a3;
	v43 = a2;
	v3 = a1 + 104;
	v5 = a3;
	v6 = a2;
	result = sub_140895120(a1 + 104, a2, a3, &v38);
	if ((_DWORD)result == 45)
	{
		for (i = 0i64; ; i = 0i64)
		{
			v9 = *(_DWORD*)(v38 + 16) - v6;
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
			if (!v10)
				break;
			if (v10 == 1)
			{
				v11 = v38;
				sub_14088C130(*(_QWORD*)(v38 + 24));
				if (*(_BYTE*)(v11 + 32))
				{
					v12 = *(_QWORD**)(a1 + 200);
					while (v12)
					{
						if (v12[1] == *(_QWORD*)(v11 + 24))
						{
							v13 = sub_140892310(*(_QWORD*)(a1 + 128));
							v14 = sub_140835CA0((_DWORD*)(*v12 + 8i64), (float)(v5 + v6 + v13 - *((_DWORD*)v12 + 4)), 0, &v42);
							sub_14088C040(v12[1], *(_DWORD*)(*v12 + 4i64), v14);
							v15 = v12[3];
							*((_QWORD*)&v40 + 1) = i;
							*(_QWORD*)&v40 = v15;
							if (v12 == *(_QWORD**)(a1 + 200))
								*(_QWORD*)(a1 + 200) = v15;
							else
								i[3] = v15;
							v41 = v40;
							sub_140881720(dword_140C10F20, (__int64)v12);
							i = (_QWORD*)*((_QWORD*)&v41 + 1);
							v12 = (_QWORD*)v41;
						}
						else
						{
							i = v12;
							v12 = (_QWORD*)v12[3];
						}
					}
				}
				goto LABEL_30;
			}
		LABEL_31:
			v31 = v38;
			v32 = dword_140C10F20;
			if (v38)
			{
				(**(void(__fastcall***)(__int64, _QWORD))v38)(v38, 0i64);
				sub_140881720(v32, v31);
			}
			result = sub_140895120(v3, v6, v5, &v38);
			if ((_DWORD)result != 45)
				return result;
		}
		v16 = v38;
		v17 = *(_QWORD*)(a1 + 16);
		LODWORD(v39) = 0;
		v45 = 0i64;
		v18 = *(_QWORD*)(v17 + 104);
		v19 = *(_DWORD*)(*(_QWORD*)(v38 + 32) + 4i64);
		v20 = *(_DWORD*)(v38 + 44);
		v21 = *(_DWORD*)(v38 + 40);
		v22 = *(_QWORD*)(v18 + 56);
		v42 = *(_QWORD*)(v38 + 32);
		v23 = sub_1408942C0(*(_QWORD*)(v38 + 24), v19);
		v37 = v21;
		v24 = v42;
		if ((unsigned int)sub_14088A960(a1, *(__int64**)(v16 + 24), v23, v22, &v39, v18 + 24, v42, v37, v20 + v9, &v45) == 1)
		{
			if ((*(_BYTE*)(a1 + 98) & 2) != 0)
			{
				sub_14088C130(v45);
				v6 = v43;
				v33 = v44;
				while (1)
				{
					v34 = *(_QWORD*)(v16 + 48);
					if (!v34)
						break;
					*(_QWORD*)(v16 + 48) = *(_QWORD*)(v34 + 24);
					*(_QWORD*)(v34 + 8) = v45;
					v35 = sub_140892310(*(_QWORD*)(a1 + 128));
					v36 = sub_140835CA0(
						(_DWORD*)(*(_QWORD*)v34 + 8i64),
						(float)(v33 + v6 + v35 - *(_DWORD*)(v34 + 16)),
						0,
						&v42);
					sub_14088C040(*(_QWORD*)(v34 + 8), *(_DWORD*)(*(_QWORD*)v34 + 4i64), v36);
					sub_140881720(dword_140C10F20, v34);
				}
				goto LABEL_29;
			}
			v25 = sub_1408819F0(dword_140C10F20, 40i64);
			if (v25)
			{
				v26 = *(_DWORD*)(v24 + 8) + *(_DWORD*)(v24 + 12);
				v27 = sub_140892310(*(_QWORD*)(a1 + 128));
				*(_QWORD*)(v25 + 24) = v45;
				v3 = a1 + 104;
				*(_QWORD*)v25 = off_1409A8390;
				*(_DWORD*)(v25 + 16) = v26 - v27;
				sub_140895170(a1 + 104, v25);
				while (1)
				{
					v28 = *(_QWORD**)(v16 + 48);
					if (!v28)
						break;
					*(_QWORD*)(v16 + 48) = v28[3];
					v28[1] = v45;
					*(_BYTE*)(v25 + 32) = 1;
					v29 = *(_QWORD*)(a1 + 200);
					if (v29)
					{
						v28[3] = v29;
						*(_QWORD*)(a1 + 200) = v28;
					}
					else
					{
						*(_QWORD*)(a1 + 200) = v28;
						v28[3] = 0i64;
					}
					v30 = *(_DWORD*)(*v28 + 4i64);
					if (v30 == 2)
					{
						sub_14088BE20(v45);
					}
					else if (v30 == 3)
					{
						*(_DWORD*)(v45 + 584) |= 2u;
					}
				}
				v6 = v43;
				v5 = v44;
				goto LABEL_31;
			}
			sub_14088C130(v45);
		}
		v6 = v43;
	LABEL_29:
		v5 = v44;
	LABEL_30:
		v3 = a1 + 104;
		goto LABEL_31;
	}
	return result;
}
// 1409A8390: using guessed type __int64 (__fastcall *off_1409A8390[7])();
// 140C10F20: using guessed type int dword_140C10F20;

