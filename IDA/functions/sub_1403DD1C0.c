#include "../winhttp.h"

//----- (00000001403DD1C0) ----------------------------------------------------
__int64 __fastcall sub_1403DD1C0(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // r15
	unsigned int v5; // eax
	unsigned int v6; // r13d
	int v7; // esi
	_QWORD* v8; // r12
	__int64 v9; // r14
	unsigned int v10; // ebx
	int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // rbx
	unsigned int v14; // edx
	int* v15; // r8
	__int64 v16; // rax
	int* v17; // rcx
	int v18; // eax
	__int64 v19; // rax
	int* v20; // r10
	__int64 v21; // r8
	unsigned int* v22; // rdx
	unsigned int v23; // eax
	unsigned int v24; // ebx
	unsigned int v25; // ebx
	__int64 v26; // rax
	__int16* v27; // rax
	__int64 v28; // rcx
	int* v29; // rsi
	int* v30; // rax
	int* v31; // rax
	_QWORD* v32; // r15
	__int64 v33; // rax
	int* v34; // r14
	__int64 v35; // r12
	_WORD* v36; // rax
	int* v37; // rax
	_QWORD* v38; // r15
	int* v39; // r14
	__int64 v40; // rax
	__int64 v41; // r12
	_WORD* v42; // rax
	__int64 v43; // rax
	__int64 v44; // rax
	int* v45; // rdx
	__int64 v46; // rax
	bool v47; // zf
	unsigned int v48; // r15d
	__int64 v49; // r14
	_DWORD* v50; // rax
	_DWORD* v51; // rsi
	BOOL v52; // ebx
	char v53; // bl
	int v54; // eax
	int v55; // ebx
	int v56; // eax
	unsigned __int64 v57; // rcx
	int v58; // eax
	__int64 v59; // rcx
	_DWORD* v60; // rcx
	int v62[2]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v63; // [rsp+48h] [rbp-B8h]
	__int128 v64; // [rsp+50h] [rbp-B0h]
	char v65[8]; // [rsp+60h] [rbp-A0h] BYREF
	int* v66; // [rsp+68h] [rbp-98h]
	__int64 v67; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v68)(); // [rsp+80h] [rbp-80h] BYREF
	char v69[8]; // [rsp+88h] [rbp-78h] BYREF
	__int64 v70; // [rsp+90h] [rbp-70h]
	char v71[8]; // [rsp+D8h] [rbp-28h] BYREF
	int* v72; // [rsp+E0h] [rbp-20h]
	int* v73; // [rsp+E8h] [rbp-18h]
	__int128 v74; // [rsp+140h] [rbp+40h]
	int* v75; // [rsp+150h] [rbp+50h]
	int* v76; // [rsp+1B0h] [rbp+B0h] BYREF
	unsigned int i; // [rsp+1B8h] [rbp+B8h] BYREF

	v2 = sub_1403D90D0(a1, a2);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 24);
		if (v4)
		{
			v5 = sub_140612F70(
				qword_140C65898,
				*(unsigned int**)(*(_QWORD*)(v4 + 296) + 32i64),
				*(_QWORD*)(*(_QWORD*)(v4 + 296) + 40i64),
				*(_DWORD*)(v2 + 13828),
				*(_DWORD*)(v2 + 52),
				*(_DWORD*)(v2 + 220),
				*(_DWORD*)(v2 + 216));
			v6 = v5;
			if (v5)
				*(_DWORD*)(v3 + 13828) = v5;
			else
				v6 = 0;
			v7 = 8;
			v8 = *(_QWORD**)qword_140C65B80;
			LODWORD(v76) = 0;
			v67 = 0i64;
			v9 = 0i64;
			v66 = sub_14018B280(40i64, 0);
			*(_BYTE*)v66 = 0;
			*((_QWORD*)v66 + 1) = 0i64;
			*((_QWORD*)v66 + 2) = v66;
			*((_QWORD*)v66 + 3) = v66;
			v10 = *(_DWORD*)(qword_140C66650 + 4i64 * *(_QWORD*)(v4 + 96));
			for (i = v10; v10; i = v10)
			{
				sub_1400293C0((__int64)v65, (__int64)v62, (int*)&i);
				v11 = sub_1405FBC40(v8, v10);
				if ((v7 & 0xFFFFFFF7) == 0 || v7 == 3 && v11)
					v7 = v11;
				v10 = *(_DWORD*)(qword_140C66650 + 4 * (++v9 + *(_QWORD*)(v4 + 96)));
			}
			v12 = *(_QWORD*)(v4 + 88);
			v13 = 0i64;
			v14 = *(_DWORD*)(qword_140C66650 + 4 * v12);
			if (v14)
			{
				v15 = v66;
				do
				{
					v16 = *((_QWORD*)v15 + 1);
					v17 = v15;
					if (!v16)
						goto LABEL_21;
					do
					{
						if (*(_DWORD*)(v16 + 32) < v14)
						{
							v16 = *(_QWORD*)(v16 + 24);
						}
						else
						{
							v17 = (int*)v16;
							v16 = *(_QWORD*)(v16 + 16);
						}
					} while (v16);
					if (v17 == v15 || v14 < v17[8])
					{
					LABEL_21:
						v18 = sub_1405FBC40(v8, v14);
						if ((v7 & 0xFFFFFFF7) == 0 || v7 == 3 && v18)
							v7 = v18;
						v15 = v66;
					}
					v12 = ++v13 + *(_QWORD*)(v4 + 88);
					v14 = *(_DWORD*)(qword_140C66650 + 4 * v12);
				} while (v14);
			}
			switch (v7)
			{
			case 0:
				break;
			case 3:
				v25 = *(_DWORD*)(v4 + 240);
				v6 = *(_DWORD*)(v4 + 244);
				if (v25)
				{
					if (qword_140C63840)
					{
						v26 = qword_140C63840(off_140A6C970, v25, qword_140C63858);
					}
					else
					{
						if (dword_140C65234 || (int)sub_14022D6E0() < 0)
							break;
						v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A50 + 24i64))(
							qword_140C64A50,
							v25);
					}
					if (v26)
					{
						v24 = *(_DWORD*)(v26 + 4);
						LODWORD(v76) = v24;
						goto LABEL_43;
					}
				}
				break;
			case 8:
				break;
			default:
				v19 = *(_QWORD*)(v4 + 296);
				v6 = *(_DWORD*)(v4 + 236);
				v20 = *(int**)(qword_140C65898 + 120);
				v21 = *(_QWORD*)(v19 + 8);
				v22 = *(unsigned int**)v19;
				if (v20)
					v23 = sub_140612F70(qword_140C65898, v22, v21, 0, v20[13], v20[55], v20[54]);
				else
					v23 = sub_140612F70(qword_140C65898, v22, v21, 0, 3, 23, 17);
				v24 = v23;
				LODWORD(v76) = v23;
			LABEL_43:
				if (!v6 && !v24)
				{
				LABEL_128:
					sub_140008410((__int64)v65);
					sub_14018B900((__int64)v66, 0);
					return 0i64;
				}
				v27 = sub_14034BDD0(v12, v6);
				v29 = (int*)v27;
				if (!v27 || !*v27)
					v29 = (int*)sub_14034BDD0(v28, v24);
				if (!v29 || !*(_WORD*)v29)
				{
				LABEL_92:
					if (!(unsigned int)sub_140472ED0(v3, v6) && v24)
						sub_140472ED0(v3, v24);
					if ((*(_BYTE*)(v3 + 4208) & 2) == 0
						&& !*(_DWORD*)(v3 + 684)
						&& (*(_DWORD*)(*(_QWORD*)(v3 + 24) + 144i64) & 0x10000) == 0)
					{
						v47 = *(_DWORD*)(v3 + 3824) == 0;
						*(_DWORD*)(v3 + 3748) = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64);
						if (v47)
						{
							*(_DWORD*)(v3 + 3828) = *(_DWORD*)(v3 + 4352);
							*(_DWORD*)(v3 + 3832) = *(_DWORD*)(v3 + 4356);
							*(_DWORD*)(v3 + 3836) = *(_DWORD*)(v3 + 4360);
						}
						*(_DWORD*)(v3 + 3824) = 1;
						*(_QWORD*)&v64 = sub_1405B92B0;
						v62[0] = 0;
						v63 = v3;
						*((_QWORD*)&v64 + 1) = 0i64;
						sub_140195960(v3 + 5672, 5000, (__int64)v62, 4);
						sub_140470650(v3, 1, 1);
						v48 = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
						if (*(_QWORD*)(v3 + 5864))
						{
							v49 = (unsigned int)sub_140470540((_DWORD*)v3, 278);
							v50 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(v3 + 5864) + 424i64))(
								*(_QWORD*)(v3 + 5864),
								v49,
								v48);
							v51 = v50;
							if (*v50 != 150)
							{
								v52 = *(_DWORD*)(v3 + 5160) == 63;
								sub_140471230(v3, (v50[2] & 1) == 0, v50[2] & 8);
								if ((*(_DWORD*)(v3 + 5160) == 63) == v52
									|| (v49 = (unsigned int)sub_140470540((_DWORD*)v3, 278),
										v51 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(v3 + 5864)
											+ 424i64))(
												*(_QWORD*)(v3 + 5864),
												v49,
												v48),
										*v51 != 150))
								{
									v57 = (int)v51[4];
									if (*v51 == 278)
									{
										if (v57 >= 8)
											v58 = 9;
										else
											v58 = dword_140B670F0[v57];
									}
									else if (v57 >= 8)
									{
										v58 = 13;
									}
									else
									{
										v58 = dword_140B67110[v57];
									}
									v59 = *(_QWORD*)(v3 + 5864);
									v62[0] = v49;
									v62[1] = v48;
									LODWORD(v64) = v58;
									v63 = 1065353216i64;
									*(_QWORD*)((char*)&v64 + 4) = 2i64;
									HIDWORD(v64) = 0;
									(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v59 + 584i64))(v59, 5i64, v62);
									v60 = *(_DWORD**)(v3 + 5608);
									if (v60)
										sub_14071A9F0(v60, 1);
								}
								else
								{
									v53 = ~(unsigned __int8)*(_DWORD*)(v3 + 5160) & 0x10;
									if (*(_QWORD*)(v3 + 3264))
									{
										v54 = sub_140467ED0(v3);
										*(_DWORD*)(v3 + 5164) &= ~0x10u;
										*(_DWORD*)(v3 + 5164) |= v53 & 0x10;
										v55 = *(_DWORD*)(v3 + 5164);
										if ((v54 & 0xFFFFFFF6) == 0 && v54 != 1)
											v55 = 63;
										v56 = *(_DWORD*)(v3 + 5160);
										if (v56 != v55)
										{
											if (v55 == 63)
											{
												sub_140195D70(v3 + 5168);
												sub_140195D70(v3 + 5240);
												(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v3 + 3264) + 168i64))(
													*(_QWORD*)(v3 + 3264),
													3i64,
													3i64);
												v47 = *(_QWORD*)(v3 + 5864) == 0i64;
												*(_DWORD*)(v3 + 5312) = 1;
												if (!v47)
												{
													sub_140471EF0(v3, 1, 1);
													sub_140471EF0(v3, 1, 0);
												}
											}
											else if (v56 == 63)
											{
												v62[0] = 0;
												*(_QWORD*)&v64 = sub_140471E50;
												v63 = v3;
												*((_QWORD*)&v64 + 1) = 0i64;
												sub_140195960(v3 + 5168, 150, (__int64)v62, 4);
												*(_QWORD*)&v64 = sub_140471EA0;
												v62[0] = 0;
												v63 = v3;
												*((_QWORD*)&v64 + 1) = 0i64;
												sub_140195960(v3 + 5240, 150, (__int64)v62, 4);
												*(_DWORD*)(v3 + 5312) = 1;
											}
											if ((v55 & 4) != 0)
												sub_140195D70(v3 + 5016);
											if ((v55 & 0x10) != 0)
												sub_140195D70(v3 + 5088);
											*(_DWORD*)(v3 + 5160) = v55;
										}
									}
								}
							}
						}
					}
					goto LABEL_128;
				}
				sub_1400B6F30((__int64)&v68);
				v75 = 0i64;
				v74 = 0i64;
				v68 = off_140B69230;
				v30 = sub_14018B280(16i64, 0);
				*(_QWORD*)&v74 = v30;
				*((_QWORD*)&v74 + 1) = v30;
				v75 = v30 + 4;
				if (v30)
					*(_WORD*)v30 = 0;
				v31 = sub_14018B280(96i64, 0);
				if (v31)
					v32 = (_QWORD*)sub_1404DB7E0((__int64)v31, v3);
				else
					v32 = 0i64;
				v33 = 0i64;
				v34 = 0i64;
				v63 = 0i64;
				v64 = 0ui64;
				do
					++v33;
				while (word_140B0A7C8[v33]);
				v35 = (2 * v33) >> 1;
				if ((unsigned __int64)(v35 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v34 = sub_14018B280(2 * (v35 + 1), 0);
					v63 = (__int64)v34;
					*(_QWORD*)&v64 = v34;
					*((_QWORD*)&v64 + 1) = (char*)v34 + 2 * v35 + 2;
				}
				sub_1407DB590(v34, (int*)word_140B0A7C8, 2 * v35);
				v36 = (_WORD*)v34 + v35;
				*(_QWORD*)&v64 = v36;
				if (v36)
					*v36 = 0;
				sub_1400B7480((__int64)&v68, v32);
				(*(void(__fastcall**)(_QWORD*, int*))(*v32 + 72i64))(v32, v62);
				if (v63)
					sub_14018B900(v63, 0);
				v37 = sub_14018B280(96i64, 0);
				if (v37)
					v38 = (_QWORD*)sub_1404DB7E0((__int64)v37, *(_QWORD*)(qword_140C65898 + 120));
				else
					v38 = 0i64;
				v39 = 0i64;
				v63 = 0i64;
				v64 = 0ui64;
				v40 = 0i64;
				do
					++v40;
				while (word_140B0A7D8[v40]);
				v41 = (2 * v40) >> 1;
				if ((unsigned __int64)(v41 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v39 = sub_14018B280(2 * (v41 + 1), 0);
					v63 = (__int64)v39;
					*(_QWORD*)&v64 = v39;
					*((_QWORD*)&v64 + 1) = (char*)v39 + 2 * v41 + 2;
				}
				sub_1407DB590(v39, (int*)word_140B0A7D8, 2 * v41);
				v42 = (_WORD*)v39 + v41;
				*(_QWORD*)&v64 = v42;
				if (v42)
					*v42 = 0;
				sub_1400B7480((__int64)&v68, v38);
				(*(void(__fastcall**)(_QWORD*, int*))(*v38 + 72i64))(v38, v62);
				if (v63)
					sub_14018B900(v63, 0);
				v43 = 0i64;
				if (*(_WORD*)v29)
				{
					do
						++v43;
					while (*((_WORD*)v29 + v43));
				}
				sub_14001C480((__int64)v69, v29, (int*)((char*)v29 + 2 * v43));
				v24 = (unsigned int)v76;
				if ((_DWORD)v76)
				{
					v44 = sub_1400B7660(&v68);
					sub_1403E0020(v3, *(int**)(v44 + 8), 1, 0.0);
				LABEL_89:
					if ((_QWORD)v74)
						sub_14018B900(v74, 0);
					sub_1400B7390(&v68);
					goto LABEL_92;
				}
				v45 = v72;
				if (v72 == v73 && qword_140C63648)
				{
					v76 = 0i64;
					(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), int**))qword_140C63648)(
						qword_140C63648,
						v70,
						&v68,
						&v76);
					if (v76)
					{
						v46 = 0i64;
						if (*(_WORD*)v76)
						{
							do
								++v46;
							while (*((_WORD*)v76 + v46));
						}
						sub_14001C480((__int64)v71, v76, (int*)((char*)v76 + 2 * v46));
						v45 = v72;
						goto LABEL_86;
					}
					v45 = v72;
					if (v72 != v73)
					{
						*(_WORD*)v72 = 0;
						v45 = v72;
						v73 = v72;
					LABEL_86:
						if (v76)
						{
							(*(void(__fastcall**)(int*, int*))(*((_QWORD*)v76 - 2) + 8i64))(v76 - 4, v45);
							v45 = v72;
						}
					}
				}
				sub_140475EF0(v3, v45, 1, 0.0);
				goto LABEL_89;
			}
			v24 = (unsigned int)v76;
			goto LABEL_43;
		}
	}
	return 0i64;
}
// 1403DD225: conditional instruction was optimized away because r15.8!=0
// 1403DD4D0: variable 'v12' is possibly undefined
// 1403DD4E5: variable 'v28' is possibly undefined
// 140A6C970: using guessed type wchar_t *off_140A6C970[2];
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B670F0: using guessed type int dword_140B670F0[8];
// 140B67110: using guessed type int dword_140B67110[8];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A50: using guessed type __int64 qword_140C64A50;
// 140C65234: using guessed type int dword_140C65234;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C66650: using guessed type __int64 qword_140C66650;
// 140C77890: using guessed type __int64 qword_140C77890;
// 1403DD1C0: using guessed type char var_130[8];
// 1403DD1C0: using guessed type char var_108[8];
// 1403DD1C0: using guessed type char var_B8[8];

