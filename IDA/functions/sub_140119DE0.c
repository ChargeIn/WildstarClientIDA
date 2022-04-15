#include "../winhttp.h"

//----- (0000000140119DE0) ----------------------------------------------------
__int64 __fastcall sub_140119DE0(_QWORD* a1)
{
	unsigned __int64 v1; // rdx
	int v2; // edi
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // r14
	_QWORD* v8; // rsi
	char* v9; // rdx
	_DWORD* v10; // rax
	int* v11; // r13
	_DWORD* v12; // rax
	_DWORD* v13; // rcx
	_QWORD* v14; // r15
	_DWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	__int64 v18; // r8
	_DWORD* v19; // rcx
	unsigned __int64 v20; // rdx
	unsigned int v21; // eax
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	_DWORD* v25; // rcx
	int v26; // eax
	__int64 v27; // rax
	int* v28; // r12
	char v29; // al
	char v30; // si
	_DWORD* v31; // rax
	__int64 v32; // r8
	_DWORD* v33; // rcx
	unsigned __int64 v34; // rdx
	unsigned int v35; // eax
	_QWORD* v36; // rax
	__int64 v37; // rdx
	_DWORD* v38; // rcx
	int v39; // eax
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64 v42; // rdx
	__int64 v43; // r10
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	_DWORD* v47; // rcx
	int v48; // eax
	int* v49; // rax
	unsigned __int16* v50; // rsi
	int* v51; // rax
	unsigned __int16* v52; // r14
	_QWORD* v53; // rax
	__int64 v54; // r10
	__int64 v55; // rdx
	__int64 v56; // rbx
	unsigned __int64* v57; // rdx
	unsigned __int64 v58; // r8
	__int64 v59; // rcx
	_DWORD* v60; // rax
	__int64 v61; // rcx
	_QWORD* v62; // rax
	__int64 v63; // r10
	__int64 v64; // rdx
	__int64 v65; // rbx
	unsigned __int64* v66; // rdx
	unsigned __int64 v67; // r8
	__int64 v68; // rdx
	char* v69; // rax
	__int64 v70; // rcx
	int** v71; // rax
	int* v72; // rbx
	int** v73; // rax
	_DWORD* v74; // rax
	__int64 v75; // rcx
	_DWORD* v76; // rax
	__int64(__fastcall * *v78)(); // [rsp+38h] [rbp-D0h] BYREF
	__int64 v79; // [rsp+40h] [rbp-C8h]
	__int64 v80; // [rsp+48h] [rbp-C0h]
	__int64(__fastcall * *v81)(); // [rsp+58h] [rbp-B0h] BYREF
	__int64 v82; // [rsp+60h] [rbp-A8h]
	_QWORD* v83; // [rsp+68h] [rbp-A0h]
	__int64 v84; // [rsp+70h] [rbp-98h]
	__int64(__fastcall * *v85)(); // [rsp+78h] [rbp-90h] BYREF
	int v86; // [rsp+80h] [rbp-88h]
	_QWORD* v87; // [rsp+88h] [rbp-80h]
	int v88; // [rsp+90h] [rbp-78h]
	__int64(__fastcall * *v89)(); // [rsp+98h] [rbp-70h] BYREF
	__int64 v90; // [rsp+A0h] [rbp-68h]
	_QWORD* v91; // [rsp+A8h] [rbp-60h]
	__int64(__fastcall * **v92)(); // [rsp+B0h] [rbp-58h]
	__int64 v93; // [rsp+B8h] [rbp-50h] BYREF
	unsigned __int16* v94; // [rsp+C0h] [rbp-48h]
	__int64 v95; // [rsp+D8h] [rbp-30h] BYREF
	int* v96; // [rsp+E0h] [rbp-28h]
	int* v97; // [rsp+E8h] [rbp-20h]
	char v98; // [rsp+140h] [rbp+38h]
	int* v99; // [rsp+148h] [rbp+40h] BYREF
	int* v100; // [rsp+150h] [rbp+48h] BYREF

	v1 = *(_QWORD*)(qword_140C63650 + 768);
	v2 = 0;
	v4 = 0;
	if (v1)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v1)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = *(_QWORD**)(v7 + 400);
	v9 = (char*)sub_14018F0E0(&v89, 0i64)[1];
	v10 = (_DWORD*)v8[3];
	if ((unsigned __int64)v10 < v8[2] && v10 != dword_140A12138 && (int)v10[2] > 0)
		v9 = (char*)sub_140056BB0(v8, 1u, 0i64);
	sub_14018F2D0(&v95, v9);
	if (v90)
		sub_14018B900(v90, 0);
	v11 = v96;
	if (v96 == v97)
	{
		v12 = (_DWORD*)a1[2];
		*v12 = 0;
		v12[2] = 1;
		a1[2] += 16i64;
	}
	else
	{
		v13 = (_DWORD*)a1[2];
		v14 = a1 + 2;
		v15 = (_DWORD*)(a1[3] + 16i64);
		if (v15 >= v13 || v15 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 5)
		{
			*v13 = 0;
			v13[2] = 1;
			*v14 += 16i64;
		}
		else
		{
			v16 = (__int64)a1;
			v87 = a1;
			v85 = off_140B569F0;
			v17 = 4294967294i64;
			v88 = 1;
			v86 = -2;
			if (v15 < v13 && v15 != dword_140A12138 && v15[2] == 5)
			{
				sub_1400579E0((__int64)a1, 4294967294i64, -2);
				v18 = (__int64)v87;
				v19 = dword_140A12138;
				v20 = v87[2];
				if (v87[3] + 16i64 < v20)
					v19 = (_DWORD*)(v87[3] + 16i64);
				*(_QWORD*)v20 = *(_QWORD*)v19;
				*(_DWORD*)(v20 + 8) = v19[2];
				*(_QWORD*)(v18 + 16) += 16i64;
				v21 = sub_1400578C0((__int64)v87);
				v16 = (__int64)v87;
				v17 = v21;
				v86 = v21;
			}
			if (!v16 || (_DWORD)v17 == -2)
				goto LABEL_109;
			v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v16 + 32) + 160i64), v17);
			v24 = *(_QWORD*)(v23 + 16);
			*(_QWORD*)v24 = *v22;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			v17 = (__int64)v87;
			v25 = (_DWORD*)(v87[2] - 16i64);
			v26 = v25 == dword_140A12138 ? -1 : v25[2];
			v87[2] = v25;
			if (v26 == 5 && (v27 = sub_14013A390(v7 + 2496, v86)) != 0)
			{
				v28 = 0i64;
				v99 = 0i64;
				if (v11)
				{
					v29 = sub_1401519B0(v7 + 2584, v11, v27, (__int64)&v85, (__int64*)&v99);
					v28 = v99;
					v30 = v29;
					v98 = v29;
				}
				else
				{
					v30 = 0;
					v98 = 0;
				}
				v83 = a1;
				LODWORD(v84) = 1;
				v81 = off_140B569F0;
				v17 = 4294967294i64;
				LODWORD(v82) = -2;
				v31 = (_DWORD*)(a1[3] + 32i64);
				if ((unsigned __int64)v31 < *v14 && v31 != dword_140A12138 && *(_DWORD*)(a1[3] + 40i64) == 5)
				{
					sub_1400579E0((__int64)a1, 4294967294i64, -2);
					v32 = (__int64)v83;
					v33 = dword_140A12138;
					v34 = v83[2];
					if (v83[3] + 32i64 < v34)
						v33 = (_DWORD*)(v83[3] + 32i64);
					*(_QWORD*)v34 = *(_QWORD*)v33;
					*(_DWORD*)(v34 + 8) = v33[2];
					*(_QWORD*)(v32 + 16) += 16i64;
					v35 = sub_1400578C0((__int64)v83);
					a1 = v83;
					v17 = v35;
					LODWORD(v82) = v35;
				}
				if (a1 && (_DWORD)v17 != -2)
				{
					v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
					v37 = a1[2];
					*(_QWORD*)v37 = *v36;
					*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
					a1[2] += 16i64;
					v17 = (__int64)v83;
					v38 = (_DWORD*)(v83[2] - 16i64);
					v39 = v38 == dword_140A12138 ? -1 : v38[2];
					v83[2] = v38;
					if (v39 == 5)
					{
						v40 = (__int64)v83;
						LODWORD(v90) = -2;
						v92 = &v81;
						v41 = v83[2];
						v91 = v83;
						v89 = off_140B56A08;
						*(_DWORD*)(v41 + 8) = 0;
						*(_QWORD*)(v40 + 16) += 16i64;
						((void(__fastcall*)(__int64(__fastcall***)(), __int64))v89[2])(&v89, 0xFFFFFFFFi64);
						v83[2] -= 16i64;
						while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v92)[1])(v92)
							&& (unsigned int)sub_1400FCBA0((__int64)&v89))
						{
							sub_1400FBF40((__int64)&v89, (__int64)&v78);
							v43 = v80;
							if (v80)
							{
								v42 = (unsigned int)v79;
								if ((_DWORD)v79 != -2)
								{
									v44 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v80 + 32) + 160i64), v79);
									v46 = *(_QWORD*)(v45 + 16);
									*(_QWORD*)v46 = *v44;
									*(_DWORD*)(v46 + 8) = *((_DWORD*)v44 + 2);
									*(_QWORD*)(v45 + 16) += 16i64;
									v42 = v80;
									v47 = (_DWORD*)(*(_QWORD*)(v80 + 16) - 16i64);
									if (v47 == dword_140A12138)
										v48 = -1;
									else
										v48 = v47[2];
									*(_QWORD*)(v80 + 16) = v47;
									if (v48 == 5)
									{
										v49 = sub_14018B280(16i64, 0);
										v50 = (unsigned __int16*)v49;
										if (v49)
											*(_WORD*)v49 = 0;
										v51 = sub_14018B280(16i64, 0);
										v52 = (unsigned __int16*)v51;
										if (v51)
											*(_WORD*)v51 = 0;
										if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v78[1])(&v78))
										{
											v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v80 + 32) + 160i64), v79);
											v55 = *(_QWORD*)(v54 + 16);
											*(_QWORD*)v55 = *v53;
											*(_DWORD*)(v55 + 8) = *((_DWORD*)v53 + 2);
											*(_QWORD*)(v54 + 16) += 16i64;
											v56 = v80;
											v57 = (unsigned __int64*)sub_14018F0E0(&v93, L"strEvent")[1];
											if (v57)
											{
												v58 = -1i64;
												do
													++v58;
												while (*((_BYTE*)v57 + v58));
												sub_140058710(v56, v57, v58);
											}
											else
											{
												*(_DWORD*)(*(_QWORD*)(v56 + 16) + 8i64) = 0;
												*(_QWORD*)(v56 + 16) += 16i64;
											}
											if (v94)
												sub_14018B900((__int64)v94, 0);
											sub_14005E8E0(
												v80,
												*(_QWORD*)(v80 + 16) - 32i64,
												(int*)(*(_QWORD*)(v80 + 16) - 16i64),
												*(_QWORD*)(v80 + 16) - 16i64);
											v59 = *(_QWORD*)(v80 + 16);
											v60 = (_DWORD*)(v59 - 16);
											if ((_DWORD*)(v59 - 16) == dword_140A12138 || v60[2] != 4)
											{
												*(_QWORD*)(v80 + 16) = v59 - 32;
											}
											else
											{
												sub_14018F2D0(&v93, (char*)(*(_QWORD*)v60 + 32i64));
												v61 = (__int64)v50;
												v50 = v94;
												if (v61)
													sub_14018B900(v61, 0);
												*(_QWORD*)(v80 + 16) -= 32i64;
											}
										}
										if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v78[1])(&v78))
										{
											v62 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v80 + 32) + 160i64), v79);
											v64 = *(_QWORD*)(v63 + 16);
											*(_QWORD*)v64 = *v62;
											*(_DWORD*)(v64 + 8) = *((_DWORD*)v62 + 2);
											*(_QWORD*)(v63 + 16) += 16i64;
											v65 = v80;
											v66 = (unsigned __int64*)sub_14018F0E0(&v93, L"strFunction")[1];
											if (v66)
											{
												v67 = -1i64;
												do
													++v67;
												while (*((_BYTE*)v66 + v67));
												sub_140058710(v65, v66, v67);
											}
											else
											{
												*(_DWORD*)(*(_QWORD*)(v65 + 16) + 8i64) = 0;
												*(_QWORD*)(v65 + 16) += 16i64;
											}
											if (v94)
												sub_14018B900((__int64)v94, 0);
											sub_14005E8E0(
												v80,
												*(_QWORD*)(v80 + 16) - 32i64,
												(int*)(*(_QWORD*)(v80 + 16) - 16i64),
												*(_QWORD*)(v80 + 16) - 16i64);
											v68 = *(_QWORD*)(v80 + 16);
											if ((_DWORD*)(v68 - 16) == dword_140A12138 || *(_DWORD*)(v68 - 16 + 8) != 4)
											{
												*(_QWORD*)(v80 + 16) = v68 - 32;
											}
											else
											{
												v69 = (char*)sub_140058540(v80, -1, 0i64);
												sub_14018F2D0(&v93, v69);
												v70 = (__int64)v52;
												v52 = v94;
												if (v70)
													sub_14018B900(v70, 0);
												*(_QWORD*)(v80 + 16) -= 32i64;
											}
										}
										if (v52)
										{
											v71 = sub_14018DD50(&v100, v52);
										}
										else
										{
											v100 = 0i64;
											v71 = &v100;
										}
										v72 = *v71;
										if (v50)
										{
											v73 = sub_14018DD50(&v99, v50);
										}
										else
										{
											v99 = 0i64;
											v73 = &v99;
										}
										sub_1401180D0((__int64)v28, *v73, v72);
										if (v99)
											(*(void(__fastcall**)(int*))(*((_QWORD*)v99 - 2) + 8i64))(v99 - 4);
										if (v100)
											(*(void(__fastcall**)(int*))(*((_QWORD*)v100 - 2) + 8i64))(v100 - 4);
										if (v52)
											sub_14018B900((__int64)v52, 0);
										if (v50)
											sub_14018B900((__int64)v50, 0);
									}
									v43 = v80;
								}
							}
							v78 = off_140B56A08;
							if (v43)
								sub_1400579E0(v43, v42, v79);
						}
						v11 = v96;
						v89 = off_140B56A08;
						if (v91)
							sub_1400579E0((__int64)v91, v17, v90);
						v30 = v98;
					}
				}
				v74 = (_DWORD*)*v14;
				LOBYTE(v2) = v30 != 0;
				v74[2] = 1;
				*v74 = v2;
				v75 = (__int64)v83;
				*v14 += 16i64;
				v81 = off_140B56A08;
				if (v75)
					sub_1400579E0(v75, v17, v82);
			}
			else
			{
			LABEL_109:
				v76 = (_DWORD*)*v14;
				*v76 = 0;
				v76[2] = 1;
				*v14 += 16i64;
			}
			v85 = off_140B56A08;
			if (v87)
				sub_1400579E0((__int64)v87, v17, v86);
		}
	}
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return 1i64;
}
// 140119FA7: variable 'v23' is possibly undefined
// 14011A1CC: variable 'v45' is possibly undefined
// 14011A260: variable 'v54' is possibly undefined
// 14011A363: variable 'v63' is possibly undefined
// 14011A4F6: variable 'v42' is possibly undefined
// 14011A51C: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A1E298: using guessed type wchar_t aStrevent[9];
// 140A1E2B0: using guessed type wchar_t aStrfunction[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63650: using guessed type __int64 qword_140C63650;

