#include "../winhttp.h"

//----- (00000001404739B0) ----------------------------------------------------
void __fastcall sub_1404739B0(__int64 a1, unsigned int a2, int a3, unsigned int a4, int a5, int a6)
{
	__int64 v9; // rax
	__int64 v10; // rax
	int* v11; // rsi
	__int64 v12; // rax
	bool v13; // zf
	__int64 v14; // r12
	__int64 v15; // r15
	int v16; // edx
	int v17; // r13d
	int v18; // r14d
	int v19; // eax
	__int64 v20; // r13
	_DWORD* v21; // rax
	__int64 v22; // r15
	BOOL v23; // ebx
	char v24; // bl
	int v25; // eax
	int v26; // ebx
	int v27; // eax
	unsigned __int64 v28; // rcx
	int v29; // ebx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rcx
	_DWORD* v33; // rcx
	__int128* v34; // r14
	int v35; // eax
	int v36; // ecx
	int* v37; // rax
	_QWORD* v38; // rbx
	__int64 v39; // rax
	int* v40; // rax
	_QWORD* v41; // rbx
	__int64 v42; // rax
	int v43; // edx
	_QWORD* v44; // rbx
	__int64 v45; // rax
	int* v46; // r9
	int* v47; // rbx
	int* v48; // r8
	int v49; // esi
	__int64 v50; // rdx
	int v51; // ecx
	__int64 v52; // rax
	int* v53; // [rsp+70h] [rbp-90h] BYREF
	__int64 v54; // [rsp+78h] [rbp-88h]
	__int128 v55; // [rsp+80h] [rbp-80h]
	__int128 v56; // [rsp+90h] [rbp-70h] BYREF
	_QWORD v57[24]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v58; // [rsp+160h] [rbp+60h]

	if (a2)
	{
		v10 = sub_1401FDBE0(a2);
		v11 = (int*)v10;
		if (v10 && (!*(_DWORD*)(v10 + 56) || !sub_14047BE00(a1)))
		{
			v12 = sub_1403D90D0(qword_140C65898, a3);
			v13 = v11[11] == 0;
			v14 = v12;
			v15 = *(_QWORD*)(qword_140C65898 + 120);
			*(_QWORD*)&v56 = v15;
			if (!v13 && *(_DWORD*)(a1 + 5160) != 63)
				sub_140470650(a1, 1, 1);
			if (!v11[14]
				|| (v16 = v11[15], v16 == *(_DWORD*)(a1 + 440)) && a2 == *(_DWORD*)(a1 + 460)
				|| (sub_14045BF30(a1, v16, a2), *(_DWORD*)(a1 + 464) == a2))
			{
				sub_140474400((_DWORD*)a1, a2, 1);
			}
			v17 = a5;
			if (a5)
			{
				if (v14)
				{
					if (v14 == a1)
						v18 = v11[10];
					else
						v18 = v11[7];
				}
				else
				{
					v18 = v11[19];
				}
			}
			else
			{
				v18 = v11[3];
			}
			*(_DWORD*)(a1 + 472) = sub_140470540((_DWORD*)a1, v18);
			if (v18)
			{
				if (!v11[14] || (v19 = v11[15]) == 0 || v19 == 7 && v18 != v11[21])
				{
					if (*(_QWORD*)(a1 + 5864))
					{
						v20 = (unsigned int)sub_140470540((_DWORD*)a1, v18);
						v21 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
							*(_QWORD*)(a1 + 5864),
							v20,
							a4);
						v22 = (__int64)v21;
						if (*v21 != 150)
						{
							v23 = *(_DWORD*)(a1 + 5160) == 63;
							sub_140470B80(a1, (v21[2] & 1) == 0, v21[2] & 8);
							if ((*(_DWORD*)(a1 + 5160) == 63) == v23
								|| (v20 = (unsigned int)sub_140470540((_DWORD*)a1, v18),
									v22 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
										*(_QWORD*)(a1 + 5864),
										v20,
										a4),
									*(_DWORD*)v22 != 150))
							{
								v28 = *(int*)(v22 + 16);
								if (*(_DWORD*)v22 == v18)
								{
									if (v28 >= 8)
										v29 = 9;
									else
										v29 = dword_140B670F0[v28];
								}
								else if (v28 >= 8)
								{
									v29 = 13;
								}
								else
								{
									v29 = dword_140B67110[v28];
								}
								v30 = sub_1404695E0(a1);
								if (*(_DWORD*)(a1 + 4832)
									&& *(float*)(a1 + 4820) == 0.0
									&& fabs(*(float*)(a1 + 4808)) > 0.0000099999997
									&& (!*(_DWORD*)(a1 + 4948)
										|| (*(_BYTE*)(v22 + 4) & 2) != 0
										|| v30 && (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v30 + 312) + 112i64) + 264i64) & 0x400000) != 0))
								{
									v31 = *(_QWORD*)(a1 + 5864);
									*(_DWORD*)(a1 + 4880) = 1;
									*(_DWORD*)(a1 + 4820) = 1041865114;
									v53 = 0i64;
									v54 = 1065353216i64;
									v55 = 0ui64;
									(*(void(__fastcall**)(__int64, __int64, int**))(*(_QWORD*)v31 + 584i64))(v31, 7i64, &v53);
								}
								v32 = *(_QWORD*)(a1 + 5864);
								v53 = (int*)__PAIR64__(a4, v20);
								v54 = 1065353216i64;
								LODWORD(v55) = v29;
								*(_QWORD*)((char*)&v55 + 4) = 2i64;
								HIDWORD(v55) = 0;
								(*(void(__fastcall**)(__int64, __int64, int**))(*(_QWORD*)v32 + 584i64))(v32, 4i64, &v53);
								v33 = *(_DWORD**)(a1 + 5600);
								if (v33)
								{
									if (v33[105])
									{
										v13 = v33[106] == 2;
										v33[105] = 0;
										if (v13 || !v33[126] || v33[127])
											(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v33 + 80i64))(v33, 1i64);
									}
								}
							}
							else
							{
								v24 = ~(unsigned __int8)*(_DWORD*)(a1 + 5160) & 4;
								if (*(_QWORD*)(a1 + 3264))
								{
									v25 = sub_140467ED0(a1);
									*(_DWORD*)(a1 + 5164) &= ~4u;
									*(_DWORD*)(a1 + 5164) |= v24 & 4;
									v26 = *(_DWORD*)(a1 + 5164);
									if ((v25 & 0xFFFFFFF6) == 0 && v25 != 1)
										v26 = 63;
									v27 = *(_DWORD*)(a1 + 5160);
									if (v27 != v26)
									{
										if (v26 == 63)
										{
											sub_140195D70(a1 + 5168);
											sub_140195D70(a1 + 5240);
											(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
												*(_QWORD*)(a1 + 3264),
												3i64,
												3i64);
											v13 = *(_QWORD*)(a1 + 5864) == 0i64;
											*(_DWORD*)(a1 + 5312) = 1;
											if (!v13)
											{
												sub_140471EF0(a1, 1, 1);
												sub_140471EF0(a1, 1, 0);
											}
										}
										else if (v27 == 63)
										{
											LODWORD(v53) = 0;
											v54 = a1;
											*(_QWORD*)&v55 = sub_140471E50;
											*((_QWORD*)&v55 + 1) = 0i64;
											sub_140195960(a1 + 5168, 150, (__int64)&v53, 4);
											*(_QWORD*)&v55 = sub_140471EA0;
											LODWORD(v53) = 0;
											v54 = a1;
											*((_QWORD*)&v55 + 1) = 0i64;
											sub_140195960(a1 + 5240, 150, (__int64)&v53, 4);
											*(_DWORD*)(a1 + 5312) = 1;
										}
										if ((v26 & 4) != 0)
											sub_140195D70(a1 + 5016);
										if ((v26 & 0x10) != 0)
											sub_140195D70(a1 + 5088);
										*(_DWORD*)(a1 + 5160) = v26;
									}
								}
							}
						}
						v15 = v56;
						v17 = a5;
					}
				}
			}
			v34 = (__int128*)(a1 + 416);
			if (*(_DWORD*)(a1 + 416) && *(_QWORD*)(a1 + 424))
			{
				LOBYTE(v35) = sub_1405E2410(qword_140C65BA0, a1 + 416, 1);
				v36 = v35 | a6;
			}
			else
			{
				v36 = a6;
			}
			if (!v36)
			{
				sub_1404DDE90(v57);
				v37 = sub_14018B280(96i64, 0);
				if (v37)
					v38 = (_QWORD*)sub_1404DB7E0((__int64)v37, a1);
				else
					v38 = 0i64;
				v39 = 0i64;
				v54 = 0i64;
				v55 = 0ui64;
				do
					++v39;
				while (word_140B0A7C8[v39]);
				sub_14001C1B0(&v53, (int*)word_140B0A7C8, (__int64)&word_140B0A7C8[v39]);
				sub_1400B7480((__int64)v57, v38);
				(*(void(__fastcall**)(_QWORD*, int**))(*v38 + 72i64))(v38, &v53);
				if (v54)
					sub_14018B900(v54, 0);
				if (v17)
				{
					if (v14)
					{
						v40 = sub_14018B280(96i64, 0);
						if (v14 == a1)
						{
							if (v40)
								v41 = (_QWORD*)sub_1404DB7E0((__int64)v40, v14);
							else
								v41 = 0i64;
							v54 = 0i64;
							v55 = 0ui64;
							v42 = 0i64;
							do
								++v42;
							while (word_140B0A7D8[v42]);
							sub_14001C1B0(&v53, (int*)word_140B0A7D8, (__int64)&word_140B0A7D8[v42]);
							sub_1400B7480((__int64)v57, v41);
							(*(void(__fastcall**)(_QWORD*, int**))(*v41 + 72i64))(v41, &v53);
							if (v54)
								sub_14018B900(v54, 0);
							if (v15 == a1)
								v43 = v11[9];
							else
								v43 = v11[8];
						}
						else
						{
							if (v40)
								v44 = (_QWORD*)sub_1404DB7E0((__int64)v40, v14);
							else
								v44 = 0i64;
							v54 = 0i64;
							v55 = 0ui64;
							v45 = 0i64;
							do
								++v45;
							while (word_140B0A7D8[v45]);
							sub_14001C1B0(&v53, (int*)word_140B0A7D8, (__int64)&word_140B0A7D8[v45]);
							sub_1400B7480((__int64)v57, v44);
							(*(void(__fastcall**)(_QWORD*, int**))(*v44 + 72i64))(v44, &v53);
							if (v54)
								sub_14018B900(v54, 0);
							if (v15 == a1)
							{
								v43 = v11[6];
							}
							else if (v15 == v14)
							{
								v43 = v11[5];
							}
							else
							{
								v43 = v11[4];
							}
						}
						sub_1400B75F0((__int64)v57, v43);
					}
					else if (v15 == a1)
					{
						sub_1400B75F0((__int64)v57, v11[18]);
					}
					else
					{
						sub_1400B75F0((__int64)v57, v11[17]);
					}
				}
				else if (v15 == a1)
				{
					sub_1400B75F0((__int64)v57, v11[2]);
				}
				else
				{
					sub_1400B75F0((__int64)v57, v11[1]);
				}
				if (v57[2] != v57[3] && v57[6] != v57[7])
				{
					if (v15 != a1 && *(_DWORD*)v34 && *(_QWORD*)(a1 + 424))
					{
						v56 = *v34;
						v46 = *(int**)(sub_1400B7660(v57) + 8);
						v47 = (int*)&word_140B7B704;
						v48 = (int*)&word_140B7B704;
						if (*(_QWORD*)(a1 + 16))
							v48 = *(int**)(a1 + 16);
						v49 = sub_140405AC0(qword_140C658A0, (struct _FILETIME)&v56, v48, v46);
						v53 = 0i64;
						v54 = 0i64;
						v55 = 0ui64;
						v53 = *(int**)(sub_1400B7660(v57) + 8);
						v50 = *(_QWORD*)(qword_140C65898 + 120);
						v51 = 0;
						if (v50)
							LOBYTE(v51) = *(_DWORD*)(a1 + 8) == *(_DWORD*)(v50 + 8);
						if (*(_QWORD*)(a1 + 16))
							v47 = *(int**)(a1 + 16);
						sub_1404045C0(
							(__int64*)qword_140C658A0,
							0x1Bu,
							0i64,
							*(_DWORD*)(a1 + 8),
							v47,
							0i64,
							0,
							&v53,
							v51,
							0,
							0,
							0,
							v49,
							*(_BYTE*)(a1 + 434));
					}
					else
					{
						v52 = sub_1400B7660(v57);
						sub_140474B80(a1, 0x1Bu, *(int**)(v52 + 8));
					}
				}
				if (v58)
					sub_14018B900(v58, 0);
				sub_1400B7390(v57);
			}
		}
	}
	else
	{
		v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
		if (!v9 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 32i64))(v9))
			sub_14045BF30(a1, 0, 0);
	}
}
// 140473F0F: variable 'v35' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B670F0: using guessed type int dword_140B670F0[8];
// 140B67110: using guessed type int dword_140B67110[8];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65BA0: using guessed type __int64 qword_140C65BA0;

