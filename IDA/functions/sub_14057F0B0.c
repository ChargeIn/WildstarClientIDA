//----- (000000014057F0B0) ----------------------------------------------------
void __fastcall sub_14057F0B0(__int64* a1, __int64 a2, int a3, _DWORD* a4, int a5)
{
	int v5; // esi
	int v6; // r10d
	int v9; // eax
	__int64 v11; // rdx
	int v12; // eax
	__int64 v13; // rbx
	__int64 v14; // rax
	char v15; // r15
	void(__fastcall * **v16)(_QWORD); // rcx
	__int64* v17; // rax
	_DWORD** v18; // rdi
	int v19; // r12d
	__int64 v20; // rax
	char v21; // r15
	void(__fastcall * **v22)(_QWORD); // rcx
	__int64* v23; // rax
	_DWORD** v24; // rbx
	int* v25; // r15
	int v26; // ecx
	int v27; // r8d
	void* v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rcx
	void(__fastcall * *v31)(_DWORD**); // rax
	void(__fastcall * *v32)(_DWORD**); // rax
	int v33; // ecx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64 v36; // r15
	void(__fastcall * **v37)(_QWORD); // rax
	_DWORD** v38; // r12
	__int64 v39; // rax
	__int128 v40; // [rsp+40h] [rbp-41h]
	__int128 v41; // [rsp+50h] [rbp-31h] BYREF
	__int64 v42; // [rsp+60h] [rbp-21h]
	__int64 v43; // [rsp+68h] [rbp-19h]
	__int64 v44[3]; // [rsp+70h] [rbp-11h] BYREF
	__int64 v45; // [rsp+88h] [rbp+7h]
	__int64 v46; // [rsp+E0h] [rbp+5Fh] BYREF
	int* v47; // [rsp+E8h] [rbp+67h]
	int v48; // [rsp+F0h] [rbp+6Fh]
	void(__fastcall * **v49)(_QWORD); // [rsp+F8h] [rbp+77h] BYREF

	v48 = a3;
	v47 = (int*)a2;
	v5 = 0;
	v6 = 200;
	LODWORD(v46) = 0;
	if (*((_DWORD*)a1 + 4) == 1)
		v6 = 100;
	v9 = *(_DWORD*)a2 - v6;
	if (v9 < 0 || v9 >= *((_DWORD*)a1 + 158))
		v11 = 0i64;
	else
		v11 = *(_QWORD*)(a1[78] + 8i64 * v9);
	v12 = *a4 - v6;
	if (v12 < 0 || v12 >= *((_DWORD*)a1 + 158))
		v13 = 0i64;
	else
		v13 = *(_QWORD*)(a1[78] + 8i64 * v12);
	if (v11 && (v14 = *(unsigned int*)(a2 + 4), (unsigned int)v14 < *(_DWORD*)(v11 + 16)))
	{
		v15 = 1;
		v16 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(v11 + 8) + 8 * v14);
		v49 = v16;
		if (v16)
			(**v16)(v16);
		v17 = (__int64*)&v49;
	}
	else
	{
		v15 = 2;
		v46 = 0i64;
		v17 = &v46;
	}
	v18 = (_DWORD**)*v17;
	*v17 = 0i64;
	if ((v15 & 2) != 0)
	{
		v15 &= ~2u;
		if (v46)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
	}
	if ((v15 & 1) != 0)
	{
		v15 &= ~1u;
		if (v49)
			(*v49)[1](v49);
	}
	v19 = a5;
	if (a5 || !v13 || (v20 = (unsigned int)a4[1], (unsigned int)v20 >= *(_DWORD*)(v13 + 16)))
	{
		v21 = v15 | 8;
		v46 = 0i64;
		v23 = &v46;
	}
	else
	{
		v21 = v15 | 4;
		v22 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(v13 + 8) + 8 * v20);
		v49 = v22;
		if (v22)
			(**v22)(v22);
		v23 = (__int64*)&v49;
	}
	v24 = (_DWORD**)*v23;
	*v23 = 0i64;
	if ((v21 & 8) != 0)
	{
		v21 &= ~8u;
		if (v46)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
	}
	if ((v21 & 4) != 0 && v49)
		(*v49)[1](v49);
	v25 = v47;
	v26 = *v47;
	if ((unsigned int)(*v47 - 100) > 0xC7 || (v27 = *a4, (unsigned int)(*a4 - 100) > 0xC7))
	{
		if ((unsigned int)(v26 - 100) <= 0xC7 && *a4 == 1)
		{
			if (!v18)
			{
				v28 = &unk_1409F2D44;
				v29 = *(_QWORD*)(qword_140C65898 + 29504);
				goto LABEL_86;
			}
			if (*((_DWORD*)a1 + 4) == 1)
			{
				if ((unsigned int)(v26 - 100) > 0x63)
				{
					v28 = &unk_1409F2D2C;
					v29 = *(_QWORD*)(qword_140C65898 + 29504);
					goto LABEL_86;
				}
			}
			else
			{
				if (*((_DWORD*)a1 + 4) != 3)
				{
					v28 = &unk_1409F2D94;
					v29 = *(_QWORD*)(qword_140C65898 + 29504);
					goto LABEL_86;
				}
				if ((unsigned int)(v26 - 200) > 0x63)
				{
					v28 = &unk_1409F2DBC;
					v29 = *(_QWORD*)(qword_140C65898 + 29504);
					goto LABEL_86;
				}
			}
			v41 = 0ui64;
			v42 = 0i64;
			v43 = 0i64;
			memset(v44, 0, sizeof(v44));
			v45 = 0i64;
			*((_QWORD*)&v40 + 1) = *a1;
			v32 = (void(__fastcall**)(_DWORD**)) * v18;
			LODWORD(v40) = *(_DWORD*)(qword_140C635F0 + 5760);
			v41 = v40;
			v42 = ((__int64(__fastcall*)(_DWORD**))v32[6])(v18);
			if (v24)
				v43 = (*((__int64(__fastcall**)(_DWORD**)) * v24 + 6))(v24);
			else
				v43 = 0i64;
			v33 = *v18[8];
			v34 = *(_QWORD*)a4;
			HIDWORD(v44[2]) = v19;
			*(__int64*)((char*)v44 + 4) = v34;
			v35 = *(_QWORD*)v25;
			LODWORD(v44[0]) = v33;
			*(__int64*)((char*)&v44[1] + 4) = v35;
			LODWORD(v45) = v48;
			goto LABEL_93;
		}
		if (v26 != 1 || (unsigned int)(*a4 - 100) > 0xC7)
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildResult", "ZSii", a1, 0i64, 0, 64);
			goto LABEL_95;
		}
		v36 = qword_140C65898;
		v37 = (void(__fastcall***)(_QWORD))sub_1403AC780(qword_140C65898 + 160, v47);
		v38 = (_DWORD**)v37;
		if (v18 != (_DWORD**)v37)
		{
			if (v37)
			{
				(**v37)(v37);
				v36 = qword_140C65898;
			}
			if (v18)
			{
				(*((void(__fastcall**)(_DWORD**)) * v18 + 1))(v18);
				v36 = qword_140C65898;
			}
			v18 = v38;
		}
		if (!v18)
		{
			v28 = &unk_1409F2C8C;
		LABEL_85:
			v29 = *(_QWORD*)(v36 + 29504);
			goto LABEL_86;
		}
		if (*((_DWORD*)a1 + 4) == 1)
		{
			if ((unsigned int)(*a4 - 100) > 0x63)
			{
				v28 = &unk_1409F2C44;
				goto LABEL_85;
			}
		}
		else
		{
			if (*((_DWORD*)a1 + 4) != 3)
			{
				v28 = &unk_1409F2CAC;
				goto LABEL_85;
			}
			if ((unsigned int)(*a4 - 200) > 0x63)
			{
				v28 = &unk_1409F2CCC;
				goto LABEL_85;
			}
		}
		v41 = 0ui64;
		v42 = 0i64;
		v43 = 0i64;
		memset(v44, 0, sizeof(v44));
		v45 = 0i64;
		*((_QWORD*)&v40 + 1) = *a1;
		LODWORD(v40) = *(_DWORD*)(qword_140C635F0 + 5760);
		v41 = v40;
		if (v24)
			v42 = (*((__int64(__fastcall**)(_DWORD**)) * v24 + 6))(v24);
		else
			v42 = 0i64;
		v43 = (*((__int64(__fastcall**)(_DWORD**)) * v18 + 6))(v18);
		if (v24)
			v5 = *v24[8];
		v39 = *(_QWORD*)a4;
		LODWORD(v44[0]) = v5;
		*(__int64*)((char*)v44 + 4) = v39;
		*(__int64*)((char*)&v44[1] + 4) = *(_QWORD*)v47;
		LODWORD(v45) = v48;
		HIDWORD(v44[2]) = a5;
	LABEL_93:
		sub_1403F4900(qword_140C65898, 0x473u, (__int64)&v41);
		goto LABEL_95;
	}
	if (!v18)
	{
		v28 = &unk_1409F2E04;
		v29 = *(_QWORD*)(qword_140C65898 + 29504);
	LABEL_86:
		sub_1400EA3E0(v29, "GuildResult", "ZSii", a1, v28, 0, 68);
		goto LABEL_95;
	}
	if (*((_DWORD*)a1 + 4) == 1)
	{
		if ((unsigned int)(v26 - 100) > 0x63 || (unsigned int)(v27 - 100) > 0x63)
		{
			v28 = &unk_1409F2DE4;
			v29 = *(_QWORD*)(qword_140C65898 + 29504);
			goto LABEL_86;
		}
	}
	else
	{
		if (*((_DWORD*)a1 + 4) != 3)
		{
			v28 = &unk_1409F2E2C;
			v29 = *(_QWORD*)(qword_140C65898 + 29504);
			goto LABEL_86;
		}
		if ((unsigned int)(v26 - 200) > 0x63 || (unsigned int)(v27 - 200) > 0x63)
		{
			v28 = &unk_1409F2E84;
			v29 = *(_QWORD*)(qword_140C65898 + 29504);
			goto LABEL_86;
		}
	}
	v41 = 0ui64;
	v42 = 0i64;
	v43 = 0i64;
	memset(v44, 0, sizeof(v44));
	LODWORD(v40) = *(_DWORD*)(qword_140C635F0 + 5760);
	v30 = *a1;
	*(_QWORD*)&v41 = v40;
	v31 = (void(__fastcall**)(_DWORD**)) * v18;
	*((_QWORD*)&v41 + 1) = v30;
	v42 = ((__int64(__fastcall*)(_DWORD**))v31[6])(v18);
	v44[0] = *(_QWORD*)v25;
	if (v24)
		v43 = (*((__int64(__fastcall**)(_DWORD**)) * v24 + 6))(v24);
	else
		v43 = 0i64;
	v44[1] = *(_QWORD*)a4;
	LODWORD(v44[2]) = v48;
	sub_1403F4900(qword_140C65898, 0x471u, (__int64)&v41);
LABEL_95:
	if (v24)
		(*((void(__fastcall**)(_DWORD**)) * v24 + 1))(v24);
	if (v18)
		(*((void(__fastcall**)(_DWORD**)) * v18 + 1))(v18);
}
// 14057F313: variable 'v40' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

