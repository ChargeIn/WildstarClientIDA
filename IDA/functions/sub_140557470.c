#include "../winhttp.h"

//----- (0000000140557470) ----------------------------------------------------
void __fastcall sub_140557470(__int64 a1)
{
	int v2; // edx
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // r15
	int v7; // edx
	_QWORD* v8; // r12
	int v9; // r14d
	__int64 v10; // rsi
	int v11; // ebx
	int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rbx
	unsigned int v16; // edx
	__int64 v17; // r8
	__int64 v18; // rax
	__int64 v19; // rcx
	int v20; // eax
	__int16* v21; // r14
	int v22; // edx
	__int16* v23; // rsi
	__int64 v24; // rcx
	unsigned int v25; // ebx
	__int64 v26; // rax
	int v27; // r9d
	int* v28; // r11
	__int64 v29; // r8
	unsigned int* v30; // rdx
	unsigned int v31; // eax
	__int16* v32; // rax
	int v33; // eax
	int v34; // eax
	__int16* v35; // rax
	unsigned int v36; // edx
	int* v37; // r8
	__int16* v38; // rbx
	int v39; // eax
	__int64 v40; // rcx
	__int16* v41; // rax
	unsigned int v42; // edx
	int* v43; // rcx
	unsigned int v44; // eax
	unsigned int v45; // r8d
	int v46; // eax
	__int64 v47; // rax
	__int64 v48; // rsi
	__int64 v49; // rbx
	unsigned int v50; // r15d
	__int64 v51; // r14
	_DWORD* v52; // rax
	_DWORD* v53; // rsi
	BOOL v54; // ebx
	char v55; // bl
	int v56; // eax
	int v57; // ebx
	int v58; // eax
	bool v59; // zf
	unsigned __int64 v60; // rax
	int v61; // eax
	__int64 v62; // rcx
	_DWORD* v63; // rcx
	char v64[16]; // [rsp+48h] [rbp-9h] BYREF
	int v65[2]; // [rsp+58h] [rbp+7h] BYREF
	__int64 v66; // [rsp+60h] [rbp+Fh]
	__int128 v67; // [rsp+68h] [rbp+17h]
	int v68; // [rsp+B8h] [rbp+67h] BYREF
	__int64 v69; // [rsp+C0h] [rbp+6Fh]

	if (!*(_DWORD*)a1)
		return;
	sub_14034BDD0(a1, 0);
	v2 = *(_DWORD*)(a1 + 4);
	v3 = qword_140C65898;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	v4 = sub_1403D90D0(v3, v2);
	v5 = v4;
	if (v4)
	{
		v6 = *(_QWORD*)(v4 + 24);
	}
	else
	{
		v7 = *(_DWORD*)(a1 + 8);
		if (!v7)
			goto LABEL_73;
		v6 = sub_1404835C0(qword_140C65918, v7);
	}
	if (v6)
	{
		v8 = *(_QWORD**)qword_140C65B80;
		v9 = 0;
		v69 = 0i64;
		*(_QWORD*)&v67 = 0i64;
		v66 = (__int64)sub_14018B280(40i64, 0);
		*(_BYTE*)v66 = 0;
		*(_QWORD*)(v66 + 8) = 0i64;
		v10 = 0i64;
		*(_QWORD*)(v66 + 16) = v66;
		*(_QWORD*)(v66 + 24) = v66;
		v11 = *(_DWORD*)(qword_140C66650 + 4i64 * *(_QWORD*)(v6 + 88));
		v68 = v11;
		if (v11)
		{
			while (1)
			{
				sub_1400293C0((__int64)v65, (__int64)v64, &v68);
				v12 = sub_1405FBC40(v8, v11);
				v13 = (unsigned int)(v12 - 1);
				if ((unsigned int)v13 <= 1)
					break;
				LODWORD(v10) = v10 + 1;
				v11 = *(_DWORD*)(qword_140C66650 + 4 * (*(_QWORD*)(v6 + 88) + (unsigned int)v10));
				v68 = v11;
				if (!v11)
				{
					v10 = 0i64;
					goto LABEL_17;
				}
			}
			v9 = 1;
			if (*(_DWORD*)(a1 + 8))
			{
				if (v12 == 2)
					v10 = sub_14043D050(v13, v11);
				else
					v10 = sub_14043CFF0(v13, v11);
				v69 = v10;
			}
			else
			{
				v10 = v69;
			}
		}
	LABEL_17:
		v14 = *(_QWORD*)(v6 + 96);
		v15 = 0i64;
		v16 = *(_DWORD*)(qword_140C66650 + 4 * v14);
		if (v16)
		{
			v17 = v66;
			while (!v9)
			{
				v18 = *(_QWORD*)(v17 + 8);
				v19 = v17;
				if (!v18)
					goto LABEL_28;
				do
				{
					if (*(_DWORD*)(v18 + 32) < v16)
					{
						v18 = *(_QWORD*)(v18 + 24);
					}
					else
					{
						v19 = v18;
						v18 = *(_QWORD*)(v18 + 16);
					}
				} while (v18);
				if (v19 == v17 || v16 < *(_DWORD*)(v19 + 32))
				{
				LABEL_28:
					v20 = sub_1405FBC40(v8, v16);
					v17 = v66;
					if ((unsigned int)(v20 - 1) <= 1)
						v9 = 1;
				}
				v14 = ++v15 + *(_QWORD*)(v6 + 96);
				v16 = *(_DWORD*)(qword_140C66650 + 4 * v14);
				if (!v16)
					goto LABEL_30;
			}
		}
		else
		{
		LABEL_30:
			if (!v9)
			{
				v35 = sub_14034BDD0(v14, *(_DWORD*)(v6 + 228));
				v36 = *(_DWORD*)(v6 + 232);
				v37 = *(int**)(qword_140C65898 + 120);
				v38 = v35;
				if (v37)
					v39 = sub_140612E30((unsigned int)v37[54], v36, v37[13], v37[55], v37[54]);
				else
					v39 = sub_140612E30(qword_140C65898, v36, 3, 23, 17);
				v41 = sub_14034BDD0(v40, v39);
				if (v38 && *v38 || v41 && *v41)
				{
					v42 = *(_DWORD*)(v6 + 232);
					v43 = *(int**)(qword_140C65898 + 120);
					if (v43)
						v44 = sub_140612E30((__int64)v43, v42, v43[13], v43[55], v43[54]);
					else
						v44 = sub_140612E30(0i64, v42, 3, 23, 17);
					v45 = v44;
					v46 = dword_140C4D060;
					if (*(_DWORD*)qword_140C63750 < dword_140C4D060)
						v46 = *(_DWORD*)qword_140C63750;
					sub_1405581C0((_DWORD*)a1, *(_DWORD*)(v6 + 228), v45, byte_140C4D070[v46]);
				}
				goto LABEL_67;
			}
		}
		v21 = 0i64;
		if (v10)
			v21 = sub_14034BDD0(v14, *(_DWORD*)(v10 + 4));
		v22 = *(_DWORD*)(v6 + 236);
		v23 = 0i64;
		if (v22)
			v23 = sub_14034BDD0(v14, v22);
		if (v5)
		{
			v25 = sub_140473890(v5);
		}
		else
		{
			v26 = *(_QWORD*)(v6 + 296);
			v27 = *(_DWORD*)(a1 + 104);
			v28 = *(int**)(qword_140C65898 + 120);
			v29 = *(_QWORD*)(v26 + 8);
			v30 = *(unsigned int**)v26;
			if (v28)
				v31 = sub_140612F70(qword_140C65898, v30, v29, v27, v28[13], v28[55], v28[54]);
			else
				v31 = sub_140612F70(qword_140C65898, v30, v29, v27, 3, 23, 17);
			v25 = v31;
			if (v31)
				*(_DWORD*)(a1 + 104) = v31;
		}
		v32 = sub_14034BDD0(v24, v25);
		if (v21 && *v21)
		{
			v33 = dword_140C4D060;
			if (*(_DWORD*)qword_140C63750 < dword_140C4D060)
				v33 = *(_DWORD*)qword_140C63750;
			sub_1405581C0((_DWORD*)a1, *(_DWORD*)(v69 + 4), v25, byte_140C4D070[v33]);
		}
		else if (v23 && *v23 || v32 && *v32)
		{
			v34 = dword_140C4D060;
			if (*(_DWORD*)qword_140C63750 < dword_140C4D060)
				v34 = *(_DWORD*)qword_140C63750;
			sub_1405581C0((_DWORD*)a1, *(_DWORD*)(v6 + 236), v25, byte_140C4D070[v34]);
		}
	LABEL_67:
		if ((_QWORD)v67)
		{
			v47 = v66;
			v48 = *(_QWORD*)(v66 + 8);
			if (v48)
			{
				do
				{
					sub_1400083B0((__int64)v65, *(_QWORD*)(v48 + 24));
					v49 = *(_QWORD*)(v48 + 16);
					sub_14018B900(v48, 0);
					v48 = v49;
				} while (v49);
				v47 = v66;
			}
			*(_QWORD*)(v47 + 16) = v47;
			*(_QWORD*)(v66 + 8) = 0i64;
			*(_QWORD*)(v66 + 24) = v66;
			*(_QWORD*)&v67 = 0i64;
		}
		sub_14018B900(v66, 0);
	}
LABEL_73:
	if (*(_DWORD*)(a1 + 56))
	{
		if (v5)
		{
			if ((*(_DWORD*)(v5 + 40) & 0x400) == 0)
			{
				sub_140470650(v5, 1, 1);
				v50 = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
				if (*(_QWORD*)(v5 + 5864))
				{
					v51 = (unsigned int)sub_140470540((_DWORD*)v5, 278);
					v52 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(v5 + 5864) + 424i64))(
						*(_QWORD*)(v5 + 5864),
						v51,
						v50);
					v53 = v52;
					if (*v52 != 150)
					{
						v54 = *(_DWORD*)(v5 + 5160) == 63;
						sub_140471230(v5, (v52[2] & 1) == 0, v52[2] & 8);
						if ((*(_DWORD*)(v5 + 5160) == 63) == v54
							|| (v51 = (unsigned int)sub_140470540((_DWORD*)v5, 278),
								v53 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(v5 + 5864) + 424i64))(
									*(_QWORD*)(v5 + 5864),
									v51,
									v50),
								*v53 != 150))
						{
							v60 = (int)v53[4];
							if (*v53 == 278)
							{
								if (v60 >= 8)
									v61 = 9;
								else
									v61 = dword_140B670F0[v60];
							}
							else if (v60 >= 8)
							{
								v61 = 13;
							}
							else
							{
								v61 = dword_140B67110[v60];
							}
							v62 = *(_QWORD*)(v5 + 5864);
							v65[0] = v51;
							v65[1] = v50;
							LODWORD(v67) = v61;
							v66 = 1065353216i64;
							*(_QWORD*)((char*)&v67 + 4) = 2i64;
							HIDWORD(v67) = 0;
							(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v62 + 584i64))(v62, 5i64, v65);
							v63 = *(_DWORD**)(v5 + 5608);
							if (v63)
								sub_14071A9F0(v63, 1);
						}
						else
						{
							v55 = ~(unsigned __int8)*(_DWORD*)(v5 + 5160) & 0x10;
							if (*(_QWORD*)(v5 + 3264))
							{
								v56 = sub_140467ED0(v5);
								*(_DWORD*)(v5 + 5164) &= ~0x10u;
								*(_DWORD*)(v5 + 5164) |= v55 & 0x10;
								v57 = *(_DWORD*)(v5 + 5164);
								if ((v56 & 0xFFFFFFF6) == 0 && v56 != 1)
									v57 = 63;
								v58 = *(_DWORD*)(v5 + 5160);
								if (v58 != v57)
								{
									if (v57 == 63)
									{
										sub_140195D70(v5 + 5168);
										sub_140195D70(v5 + 5240);
										(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v5 + 3264) + 168i64))(
											*(_QWORD*)(v5 + 3264),
											3i64,
											3i64);
										v59 = *(_QWORD*)(v5 + 5864) == 0i64;
										*(_DWORD*)(v5 + 5312) = 1;
										if (!v59)
										{
											sub_140471EF0(v5, 1, 1);
											sub_140471EF0(v5, 1, 0);
										}
									}
									else if (v58 == 63)
									{
										v65[0] = 0;
										*(_QWORD*)&v67 = sub_140471E50;
										v66 = v5;
										*((_QWORD*)&v67 + 1) = 0i64;
										sub_140195960(v5 + 5168, 150, (__int64)v65, 4);
										*(_QWORD*)&v67 = sub_140471EA0;
										v65[0] = 0;
										v66 = v5;
										*((_QWORD*)&v67 + 1) = 0i64;
										sub_140195960(v5 + 5240, 150, (__int64)v65, 4);
										*(_DWORD*)(v5 + 5312) = 1;
									}
									if ((v57 & 4) != 0)
										sub_140195D70(v5 + 5016);
									if ((v57 & 0x10) != 0)
										sub_140195D70(v5 + 5088);
									*(_DWORD*)(v5 + 5160) = v57;
								}
							}
						}
					}
				}
			}
		}
	}
}
// 140557671: variable 'v14' is possibly undefined
// 1405576F7: variable 'v24' is possibly undefined
// 1405577F6: variable 'v40' is possibly undefined
// 140B670F0: using guessed type int dword_140B670F0[8];
// 140B67110: using guessed type int dword_140B67110[8];
// 140C4D060: using guessed type int dword_140C4D060;
// 140C4D070: using guessed type unsigned __int8[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C66650: using guessed type __int64 qword_140C66650;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140557470: using guessed type char var_60[16];

