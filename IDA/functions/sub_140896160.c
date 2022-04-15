//----- (0000000140896160) ----------------------------------------------------
__int64 __fastcall sub_140896160(_BYTE* a1, unsigned int** a2, _DWORD* a3)
{
	__int64 result; // rax
	_BYTE* v6; // rdi
	unsigned int v7; // r12d
	__int64 v8; // rax
	unsigned int v9; // r15d
	__int64 v10; // r8
	__int64 v11; // rbx
	unsigned int v12; // edi
	__int64 v13; // rax
	__int64 v14; // rbp
	int v15; // r14d
	unsigned __int64 v16; // rdi
	_DWORD* v17; // rcx
	unsigned int v18; // edi
	__int64 v19; // rax
	__int64 v20; // r12
	int v21; // r13d
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // r15
	int v24; // r14d
	__int64 v25; // rdi
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rbp
	unsigned __int64 i; // rdx
	_DWORD* v30; // rcx
	int v31; // ecx
	int v32; // ecx
	int v33; // ecx
	int v34; // ecx
	int v35; // ecx
	int v36; // ecx
	int v37; // ecx
	int v38; // ecx
	int v39; // ecx
	int v40; // ecx
	_DWORD* v41; // r8
	int v42; // ecx
	int v43; // ecx
	int v44; // ecx
	int v45; // ecx
	int v46; // ecx
	int v47; // ecx
	int v48; // ecx
	int v49; // [rsp+20h] [rbp-38h]
	unsigned int v50; // [rsp+24h] [rbp-34h]
	_BYTE* v51; // [rsp+28h] [rbp-30h]

	result = sub_140891280(a1, a2, a3);
	if ((_DWORD)result == 1)
	{
		v6 = a1 + 224;
		v51 = v6;
		if (*(_QWORD*)v6)
		{
			sub_140896090((__int64**)v6);
			sub_140881720(dword_140C10F20, *(_QWORD*)v6);
			*(_QWORD*)v6 = 0i64;
			*((_QWORD*)v6 + 1) = 0i64;
			*((_DWORD*)v6 + 4) = 0;
		}
		v7 = *(*a2)++;
		v50 = v7;
		if (v7)
		{
			v8 = sub_1408819F0(dword_140C10F20, 104i64 * v7);
			*(_QWORD*)v6 = v8;
			*((_QWORD*)v6 + 1) = v8;
			if (v8)
			{
				*((_DWORD*)v6 + 4) = v7;
				v9 = 0;
				v49 = 0;
				while (1)
				{
					v10 = *((_QWORD*)v6 + 1);
					if ((unsigned int)((v10 - *(_QWORD*)v6) / 104) >= *((_DWORD*)v6 + 4))
					{
						v11 = 0i64;
					}
					else
					{
						if (v10)
						{
							*(_QWORD*)v10 = 0i64;
							*(_QWORD*)(v10 + 8) = 0i64;
							*(_DWORD*)(v10 + 16) = 0;
							*(_QWORD*)(v10 + 24) = 0i64;
							*(_QWORD*)(v10 + 32) = 0i64;
							*(_DWORD*)(v10 + 40) = 0;
							*(_QWORD*)(v10 + 96) = 0i64;
						}
						v11 = *((_QWORD*)v6 + 1);
						*((_QWORD*)v6 + 1) = v11 + 104;
					}
					v12 = *(*a2)++;
					if (v12)
					{
						v13 = sub_1408819F0(dword_140C10F20, 4i64 * v12);
						*(_QWORD*)v11 = v13;
						*(_QWORD*)(v11 + 8) = v13;
						if (!v13)
							return 2i64;
						*(_DWORD*)(v11 + 16) = v12;
						v14 = v12;
						do
						{
							v15 = *(*a2)++;
							v16 = (unsigned int)((__int64)(*(_QWORD*)(v11 + 8) - *(_QWORD*)v11) >> 2);
							if ((v16 < *(unsigned int*)(v11 + 16) || sub_14082A0E0(v11, 16)) && v16 < *(unsigned int*)(v11 + 16))
							{
								v17 = *(_DWORD**)(v11 + 8);
								*(_QWORD*)(v11 + 8) = v17 + 1;
								if (v17)
									*v17 = v15;
							}
							--v14;
						} while (v14);
					}
					v18 = *(*a2)++;
					if (!v18)
						goto LABEL_38;
					v19 = sub_1408819F0(dword_140C10F20, 4i64 * v18);
					*(_QWORD*)(v11 + 24) = v19;
					*(_QWORD*)(v11 + 32) = v19;
					if (!v19)
						return 2i64;
					*(_DWORD*)(v11 + 40) = v18;
					v20 = v18;
					do
					{
						v21 = *(*a2)++;
						v22 = *(unsigned int*)(v11 + 40);
						v23 = (unsigned int)((__int64)(*(_QWORD*)(v11 + 32) - *(_QWORD*)(v11 + 24)) >> 2);
						if (v23 >= v22)
						{
							v24 = v22 + 16;
							v25 = sub_1408819F0(dword_140C10F20, 4i64 * (unsigned int)(v22 + 16));
							if (!v25)
								goto LABEL_36;
							v26 = *(_QWORD*)(v11 + 24);
							v27 = (*(_QWORD*)(v11 + 32) - v26) >> 2;
							v28 = (unsigned int)v27;
							if (v26)
							{
								for (i = 0i64;
									i < (unsigned int)v27;
									*(_DWORD*)(v25 + 4 * i - 4) = *(_DWORD*)(*(_QWORD*)(v11 + 24) + 4 * i - 4))
								{
									++i;
								}
								sub_140881720(dword_140C10F20, *(_QWORD*)(v11 + 24));
							}
							*(_QWORD*)(v11 + 24) = v25;
							*(_DWORD*)(v11 + 40) = v24;
							*(_QWORD*)(v11 + 32) = v25 + 4 * v28;
						}
						if (v23 < *(unsigned int*)(v11 + 40))
						{
							v30 = *(_DWORD**)(v11 + 32);
							*(_QWORD*)(v11 + 32) = v30 + 1;
							if (v30)
								*v30 = v21;
						}
					LABEL_36:
						--v20;
					} while (v20);
					v9 = v49;
					v7 = v50;
				LABEL_38:
					v31 = *(*a2)++;
					*(_DWORD*)(v11 + 48) = v31;
					v32 = *(*a2)++;
					*(_DWORD*)(v11 + 52) = v32;
					v33 = *(*a2)++;
					*(_DWORD*)(v11 + 56) = v33 * (dword_140C110B4 / 0x3E8u);
					v34 = *(*a2)++;
					*(_DWORD*)(v11 + 64) &= 0xFFFFFFE0;
					*(_DWORD*)(v11 + 64) |= v34 & 0x1F;
					v35 = *(*a2)++;
					*(_DWORD*)(v11 + 60) = v35;
					LOBYTE(v35) = *(_BYTE*)*a2;
					*a2 = (unsigned int*)((char*)*a2 + 1);
					*(_DWORD*)(v11 + 64) &= ~0x20u;
					*(_DWORD*)(v11 + 64) |= 32 * (v35 & 1);
					v36 = *(*a2)++;
					*(_DWORD*)(v11 + 68) = v36;
					v37 = *(*a2)++;
					*(_DWORD*)(v11 + 72) = v37;
					v38 = *(*a2)++;
					*(_DWORD*)(v11 + 76) = v38 * (dword_140C110B4 / 0x3E8u);
					v39 = *(*a2)++;
					*(_DWORD*)(v11 + 80) = v39;
					v40 = *(*a2)++;
					*(_DWORD*)(v11 + 84) = v40;
					LOWORD(v40) = *(_WORD*)*a2;
					*a2 = (unsigned int*)((char*)*a2 + 2);
					*(_WORD*)(v11 + 88) &= 0xFFF8u;
					*(_WORD*)(v11 + 88) |= v40 & 7;
					LOBYTE(v40) = *(_BYTE*)*a2;
					*a2 = (unsigned int*)((char*)*a2 + 1);
					*(_WORD*)(v11 + 88) &= ~8u;
					*(_WORD*)(v11 + 88) |= 8 * (v40 & 1);
					LOBYTE(v40) = *(_BYTE*)*a2;
					*a2 = (unsigned int*)((char*)*a2 + 1);
					*(_WORD*)(v11 + 88) &= ~0x10u;
					*(_WORD*)(v11 + 88) |= 16 * (v40 & 1);
					LOBYTE(v40) = *(_BYTE*)*a2;
					*a2 = (unsigned int*)((char*)*a2 + 1);
					if ((_BYTE)v40)
					{
						v41 = (_DWORD*)sub_1408819F0(dword_140C10F20, 32i64);
						*(_QWORD*)(v11 + 96) = v41;
					}
					else
					{
						v41 = 0i64;
					}
					if (v41)
					{
						v42 = *(*a2)++;
						*v41 = v42;
						v43 = *(*a2)++;
						v41[1] = v43;
						v44 = *(*a2)++;
						v41[2] = v44;
						v45 = *(*a2)++;
						v41[3] = v45 * (dword_140C110B4 / 0x3E8u);
						v46 = *(*a2)++;
						v41[4] = v46;
						v47 = *(*a2)++;
						v41[5] = v47;
						v48 = *(*a2)++;
						v41[6] = v48 * (dword_140C110B4 / 0x3E8u);
						LOBYTE(v48) = *(_BYTE*)*a2;
						*a2 = (unsigned int*)((char*)*a2 + 1);
						v41[7] &= ~1u;
						v41[7] |= v48 & 1;
						LOBYTE(v48) = *(_BYTE*)*a2;
						*a2 = (unsigned int*)((char*)*a2 + 1);
						v41[7] &= ~2u;
						v41[7] |= 2 * (v48 & 1);
					}
					v49 = ++v9;
					if (v9 >= v7)
						return 1i64;
					v6 = v51;
				}
			}
			return 2i64;
		}
		else
		{
			return 1i64;
		}
	}
	return result;
}
// 14089621A: conditional instruction was optimized away because r12d.4!=0
// 1408962B6: conditional instruction was optimized away because edi.4!=0
// 140896351: conditional instruction was optimized away because edi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;

