#include "../winhttp.h"

//----- (0000000140023E90) ----------------------------------------------------
__int64 __fastcall sub_140023E90(_QWORD* a1)
{
	char* v2; // rdx
	_DWORD* v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rcx
	_DWORD* v6; // rax
	int v7; // ecx
	__int64 v8; // r13
	_DWORD* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rbx
	WCHAR* v12; // rcx
	WCHAR v13; // ax
	DWORD v14; // r10d
	DWORD i; // r8d
	WCHAR v16; // cx
	__int64 v17; // rax
	__int64 j; // r14
	int* v19; // rcx
	int* v20; // rsi
	unsigned __int64 v21; // r8
	unsigned __int64 v22; // rbx
	unsigned __int64 v23; // rbx
	int* v24; // rsi
	int* v25; // rbx
	unsigned int v26; // r12d
	_DWORD* v27; // rax
	int v28; // esi
	int v29; // ebx
	__int64 v30; // rax
	_DWORD* v31; // rbx
	int v32; // edx
	__int64 v33; // rax
	int v34; // r8d
	__int64 v35; // r9
	unsigned __int64 v36; // rax
	unsigned __int64 v37; // rdx
	__int64 v38; // r10
	_DWORD* v39; // rcx
	int v40; // edx
	int v41; // ecx
	__int64 v42; // rax
	unsigned __int64 v43; // rcx
	unsigned int v44; // ecx
	unsigned __int64 v45; // rdx
	__int64 v46; // r8
	__int64 v47; // rax
	_QWORD* v48; // rbx
	int* v49; // r14
	int v50; // ecx
	int* v51; // r15
	__int64 v52; // rcx
	int v53; // esi
	int* v54; // rax
	int* v55; // rax
	__int64 v56; // rdi
	__int64 v57; // rbx
	int* v58; // rax
	int* v59; // rsi
	int* v60; // rsi
	unsigned __int64 v61; // r8
	__int64 v62; // rax
	__int64 k; // rax
	__int64 m; // rax
	int v65; // eax
	__int64 v66; // rdi
	__int64 v67; // r8
	__m128i* v68; // rax
	bool v69; // zf
	__int64 v70; // rsi
	__int64 v71; // r8
	WCHAR* v72; // rcx
	DWORD FileAttributesW; // eax
	__int64 v74; // rcx
	__m128i* v75; // rax
	__int16* v76; // rax
	__int64 v77; // rdx
	char* v78; // r9
	__int16 v79; // r8
	__int64 v80; // rcx
	__m128i* v81; // rax
	char* v82; // rax
	__int64 v83; // rbx
	__int64 v84; // rcx
	char* v85; // r8
	__int16 v86; // dx
	int v87; // eax
	__int64 v88; // rbx
	__int64 v89; // rdx
	__int64 v90; // rcx
	__int64 v91; // r10
	__int64 v92; // r8
	__int64 v93; // r9
	__int64 v94; // rax
	int v95; // ebx
	__int64 v96; // rbx
	__int64 v97; // rdi
	int v98; // eax
	__int64 v99; // r9
	__int64 v100; // rax
	__int64 v101; // rdx
	__int64 v103; // [rsp+68h] [rbp-A0h] BYREF
	_QWORD* v104; // [rsp+70h] [rbp-98h] BYREF
	DWORD nSize[2]; // [rsp+78h] [rbp-90h] BYREF
	__int64 v106; // [rsp+80h] [rbp-88h] BYREF
	__int64(__fastcall * *v107)(); // [rsp+88h] [rbp-80h]
	__int64 v108; // [rsp+90h] [rbp-78h] BYREF
	int v109; // [rsp+98h] [rbp-70h]
	__int64 v110; // [rsp+A0h] [rbp-68h] BYREF
	__int64 v111; // [rsp+A8h] [rbp-60h]
	__int64 v112; // [rsp+B0h] [rbp-58h]
	int* v113; // [rsp+B8h] [rbp-50h]
	int* v114; // [rsp+C0h] [rbp-48h]
	__int64 v115; // [rsp+C8h] [rbp-40h]
	__int64 v116; // [rsp+D0h] [rbp-38h]
	char v117[8]; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v118; // [rsp+E0h] [rbp-28h]
	__int64 v119; // [rsp+E8h] [rbp-20h]
	__int64 v120; // [rsp+F0h] [rbp-18h]
	struct _SYSTEMTIME SystemTime[2]; // [rsp+F8h] [rbp-10h] BYREF
	WCHAR Buffer[4]; // [rsp+118h] [rbp+10h] BYREF
	__int128 v123; // [rsp+120h] [rbp+18h]
	__int64 v124; // [rsp+130h] [rbp+28h]
	__m128i v125[33]; // [rsp+138h] [rbp+30h] BYREF
	WCHAR v126[264]; // [rsp+348h] [rbp+240h] BYREF
	WCHAR pszPath[264]; // [rsp+558h] [rbp+450h] BYREF
	char v128[528]; // [rsp+768h] [rbp+660h] BYREF
	WCHAR FileName[264]; // [rsp+978h] [rbp+870h] BYREF
	char v130[528]; // [rsp+B88h] [rbp+A80h] BYREF

	if (*(_DWORD*)(qword_140C66DA8 + 540) || *(_DWORD*)(qword_140C66DA8 + 368))
		return 0i64;
	v2 = (char*)sub_14018F0E0(SystemTime, &word_1409D0C14)[1];
	v3 = (_DWORD*)a1[3];
	if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && (int)v3[2] > 0)
		v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(Buffer, v2);
	if (*(_QWORD*)&SystemTime[0].wHour)
		sub_14018B900(*(__int64*)&SystemTime[0].wHour, 0);
	v4 = qword_140C66DA8;
	v5 = *(_QWORD*)(qword_140C66DA8 + 200);
	*(_OWORD*)(qword_140C66DA8 + 200) = v123;
	*(_QWORD*)(v4 + 216) = v124;
	if (v5)
		sub_14018B900(v5, 0);
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = -1;
	else
		v7 = sub_140056D60(a1, 2u);
	v8 = 0i64;
	*(_DWORD*)(qword_140C66DA8 + 224) = v7;
	v9 = (_DWORD*)(a1[3] + 32i64);
	if (((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(_DWORD*)(a1[3] + 40i64))
		&& (v10 = sub_140056AB0(a1, 3u)) != 0)
	{
		v104 = *(_QWORD**)(*(_QWORD*)v10 + 16i64);
	}
	else
	{
		v104 = 0i64;
	}
	if ((unsigned int)(*(_DWORD*)(qword_140C635F0 + 5708) - 1) <= 1)
	{
		v11 = 16i64;
		nSize[0] = 16;
		if (!GetComputerNameW(Buffer, nSize))
		{
			v12 = Buffer;
			while (v11 != -2147483630)
			{
				v13 = *(WCHAR*)((char*)v12 + (char*)L"UNKNOWN" - (char*)Buffer);
				if (!v13)
					break;
				*v12++ = v13;
				if (!--v11)
				{
					--v12;
					break;
				}
			}
			*v12 = 0;
		}
		v14 = nSize[0];
		for (i = 0; i < v14; ++i)
		{
			v16 = Buffer[i];
			if (!v16)
				break;
			if ((unsigned __int16)(v16 - 48) <= 9u && !i)
			{
				v16 += 63;
				Buffer[0] = v16;
			}
			if ((unsigned __int16)(v16 - 97) > 0x19u
				&& (unsigned __int16)(v16 - 65) > 0x19u
				&& (unsigned __int16)(v16 - 48) > 9u)
			{
				Buffer[i] = v16 % 0x19u + 97;
			}
		}
		v17 = 0i64;
		for (j = qword_140C66DA8 + 192; Buffer[v17]; ++v17)
			;
		v19 = *(int**)(qword_140C66DA8 + 200);
		v20 = (int*)&Buffer[v17];
		v21 = (__int64)(*(_QWORD*)(qword_140C66DA8 + 208) - (_QWORD)v19) >> 1;
		v22 = (2 * v17) >> 1;
		if (v22 > v21)
		{
			sub_1407DB590(v19, (int*)Buffer, 2 * v21);
			sub_14001C310((_QWORD*)j, (int*)&Buffer[(__int64)(*(_QWORD*)(j + 16) - *(_QWORD*)(j + 8)) >> 1], v20);
		}
		else
		{
			v23 = 2 * v22;
			sub_1407DB590(v19, (int*)Buffer, v23);
			v24 = *(int**)(j + 16);
			v25 = (int*)(*(_QWORD*)(j + 8) + v23);
			if (v25 != v24)
			{
				sub_1407DB590(v25, *(int**)(j + 16), 2ui64);
				*(_QWORD*)(j + 16) += -2 * (((char*)v24 - (char*)v25) >> 1);
			}
		}
	}
	v26 = 4;
	v27 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v27 >= a1[2] || v27 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v28 = 0;
	else
		v28 = sub_140056D60(a1, 4u);
	if (((*(_QWORD*)(qword_140C66DA8 + 208) - *(_QWORD*)(qword_140C66DA8 + 200)) & 0xFFFFFFFFFFFFFFFEui64) != 0)
	{
		if (!(unsigned int)sub_1403E1170(*(_WORD**)(qword_140C66DA8 + 200), 0))
		{
			v29 = 143538;
			v26 = 10;
			goto LABEL_90;
		}
		v30 = sub_1401EFEE0(*(_DWORD*)(qword_140C66DA8 + 224));
		v31 = (_DWORD*)v30;
		if (!v30)
		{
			v29 = 143525;
			goto LABEL_90;
		}
		v32 = *(_DWORD*)(v30 + 108);
		if (v32 && !(unsigned int)sub_1400068F0(*(_QWORD*)(qword_140C635F0 + 5584), v32))
		{
			v29 = 757355;
			v26 = 58;
			goto LABEL_90;
		}
		if (v28 >= 4)
		{
			v29 = 143525;
			goto LABEL_90;
		}
		if (!v31[25] || !v31[26])
		{
		LABEL_98:
			v48 = v104;
			v103 = 0i64;
			v110 = 0i64;
			v111 = 0i64;
			v112 = 0i64;
			v113 = 0i64;
			v114 = 0i64;
			v115 = 0i64;
			v116 = 0i64;
			v49 = 0i64;
			v50 = *(_DWORD*)(qword_140C66DA8 + 224);
			*(_QWORD*)&SystemTime[0].wYear = 0i64;
			v51 = 0i64;
			LODWORD(v110) = v50;
			v52 = *(_QWORD*)(qword_140C66DA8 + 200);
			LODWORD(v112) = v28;
			v53 = 0;
			v111 = v52;
			if (!v104)
				goto LABEL_162;
			v54 = sub_14018DBC0(0i64, v104[596], 4i64);
			if (v54)
				v49 = v54;
			v55 = sub_14018DBC0(0i64, v104[596], 4i64);
			v56 = v104[595];
			v57 = *(_QWORD*)(v56 + 16);
			if (v55)
				v51 = v55;
			if (v57 != v56)
			{
				do
				{
					v103 = v8 + 1;
					v58 = sub_14018DB00((__int64)v49, v8 + 1, 4i64);
					v59 = v58;
					v58[v8] = *(_DWORD*)(v57 + 32);
					if (v49 != v58)
					{
						sub_1407DB590(v58, v49, 4 * v8);
						if (v49)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v49 - 2) + 8i64))(v49 - 4);
						v49 = v59;
					}
					v8 = v103;
					v103 = *(_QWORD*)&SystemTime[0].wYear + 1i64;
					v60 = sub_14018DB00((__int64)v51, *(_QWORD*)&SystemTime[0].wYear + 1i64, 4i64);
					v61 = 4i64 * *(_QWORD*)&SystemTime[0].wYear;
					v60[*(_QWORD*)&SystemTime[0].wYear] = *(_DWORD*)(v57 + 36);
					if (v51 != v60)
					{
						sub_1407DB590(v60, v51, v61);
						if (v51)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v51 - 2) + 8i64))(v51 - 4);
						v51 = v60;
					}
					*(_QWORD*)&SystemTime[0].wYear = v103;
					v62 = *(_QWORD*)(v57 + 24);
					if (v62)
					{
						v57 = *(_QWORD*)(v57 + 24);
						for (k = *(_QWORD*)(v62 + 16); k; k = *(_QWORD*)(k + 16))
							v57 = k;
					}
					else
					{
						for (m = *(_QWORD*)(v57 + 8); v57 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
							v57 = m;
						if (*(_QWORD*)(v57 + 24) != m)
							v57 = m;
					}
				} while (v57 != v56);
				v103 = v8;
				v53 = v8;
			}
			v48 = v104;
			HIDWORD(v112) = v53;
			v113 = v49;
			v114 = v51;
			v103 = 0i64;
			v65 = sub_1400300F0((__int64)(v104 + 4), (int**)&v103);
			v66 = v103;
			if (v65 < 0)
			{
			LABEL_160:
				if (v66)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v66 - 16) + 8i64))(v66 - 16);
			LABEL_162:
				v89 = 0i64;
				v90 = 0i64;
				v120 = 0i64;
				v118 = 0i64;
				v119 = 0i64;
				if (v48)
				{
					v91 = v48[2];
					if (v91)
					{
						v92 = *((int*)v48 + 1222);
						if (*((_DWORD*)v48 + 1221) > 0x10u || (unsigned int)v92 > 2)
							v93 = qword_140C658E8;
						else
							v93 = *(_QWORD*)(32i64 * *((int*)v48 + 1221) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v92;
						(*(void(__fastcall**)(_QWORD, char*, _QWORD*, __int64))(*(_QWORD*)v91 + 320i64))(
							v48[2],
							v117,
							v48 + 602,
							v93);
						v90 = v119;
						v89 = v118;
					}
				}
				v94 = 0i64;
				v107 = off_140B55A50;
				LODWORD(v115) = (v90 - v89) >> 2;
				if ((_DWORD)v115)
					v94 = v89;
				v116 = v94;
				v106 = 0i64;
				if (qword_140C65808)
				{
					v109 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65808 + 88i64))(
						qword_140C65808,
						&v108);
					if (v109 >= 0)
					{
						if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808
							+ 264i64))(
								qword_140C65808,
								&v108,
								603i64,
								&v110))
						{
							v106 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v108 + 16i64))(v108);
							v96 = *(_QWORD*)(qword_140C66DA8 + 184);
							v104 = *(_QWORD**)(qword_140C635F0 + 280);
							if (!(*(unsigned int(__fastcall**)(__int64, _QWORD**, __int64, __int64*))(*(_QWORD*)qword_140C65808
								+ 264i64))(
									qword_140C65808,
									&v104,
									604i64,
									&v106))
							{
								v97 = (*(__int64(__fastcall**)(_QWORD*))(*v104 + 16i64))(v104);
								v98 = (*(__int64(__fastcall**)(_QWORD*))(*v104 + 32i64))(v104);
								v99 = *(_QWORD*)(v96 + 16);
								if (v99)
									(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v99 + 16))(
										*(_QWORD*)(v99 + 8),
										v97 + 4,
										(unsigned int)(v98 - 4));
								v103 = 0i64;
								v100 = (*(__int64(__fastcall**)(_QWORD*))(*v104 + 16i64))(v104);
								v101 = *(unsigned int*)(v96 + 152);
								v103 = v100;
								(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
									qword_140C65808,
									v101,
									580i64,
									&v103);
							}
							*(_DWORD*)(qword_140C66DA8 + 368) = 1;
							goto LABEL_183;
						}
						*(_QWORD*)&SystemTime[0].wHour = 0i64;
						*(_QWORD*)&SystemTime[0].wYear = &off_140B5E648;
						*(_QWORD*)&SystemTime[1].wYear = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, SystemTime);
						*(_QWORD*)Buffer = *(_QWORD*)&SystemTime[0].wYear;
						v103 = 0x141CF9420i64;
						v123 = *(_OWORD*)&SystemTime[0].wHour;
						v95 = sub_1401971E0(&dword_140C8A028, 5, &v103, Buffer);
						*(_QWORD*)&SystemTime[0].wYear = &off_140B5E648;
						TlsSetValue(dwTlsIndex, *(LPVOID*)&SystemTime[1].wYear);
						if (v95)
							DebugBreak();
					}
				}
				else
				{
					v109 = -2147467259;
				}
				sub_1400232F0(qword_140C66DA8, 269517);
			LABEL_183:
				v107 = off_140B55A50;
				if (v108)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v108 + 8i64))(v108);
					v108 = 0i64;
				}
				if (v118)
					sub_14018B900(v118, 0);
				if (v51)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v51 - 2) + 8i64))(v51 - 4);
				if (v49)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v49 - 2) + 8i64))(v49 - 4);
				return 0i64;
			}
			GetLocalTime(SystemTime);
			sub_14001B370(
				v128,
				260i64,
				L"%s %i.%i.%i %2ih%2im%02i.%03is.txt",
				*(_QWORD*)(qword_140C66DA8 + 200),
				SystemTime[0].wYear,
				SystemTime[0].wMonth,
				SystemTime[0].wDay,
				SystemTime[0].wHour,
				SystemTime[0].wMinute,
				SystemTime[0].wSecond,
				SystemTime[0].wMilliseconds);
			if ((int)sub_14001B370(
				v125,
				260i64,
				L"%s\\%s\\%s\\%s",
				*(_QWORD*)&qword_140C63788 + 3724i64,
				L"NCSOFT",
				*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
				L"CreationCodes") >= 0
				&& v125[0].m128i_i16[0])
			{
				v68 = v125;
				do
				{
					v69 = v68->m128i_i16[1] == 0;
					v68 = (__m128i*)((char*)v68 + 2);
				} while (!v69);
			}
			v70 = *(_QWORD*)&qword_140C63788;
			if (sub_1401B5110(*(__int64*)&qword_140C63788, v130, v67, (__int64)v125))
			{
				if (!*(_DWORD*)(v70 + 2160))
					goto LABEL_133;
				sub_1401B5020(v70, v126, v71, (const WCHAR*)v125);
				v72 = v126;
			}
			else
			{
				sub_1401B5020(v70, FileName, v71, (const WCHAR*)v125);
				v72 = FileName;
			}
			FileAttributesW = GetFileAttributesW(v72);
			if (FileAttributesW != -1 && ((FileAttributesW >> 4) & 1) != 0)
			{
			LABEL_134:
				v74 = 260i64;
				v75 = v125;
				while (v75->m128i_i16[0])
				{
					v75 = (__m128i*)((char*)v75 + 2);
					if (!--v74)
						goto LABEL_144;
				}
				v76 = &v125[0].m128i_i16[260 - v74];
				v77 = 2147483646i64;
				v78 = (char*)(&unk_1409D0C5C - (_UNKNOWN*)v76);
				while (v77)
				{
					v79 = *(_WORD*)&v78[(_QWORD)v76];
					if (!v79)
						break;
					*v76++ = v79;
					--v77;
					if (!--v74)
					{
						--v76;
						break;
					}
				}
				*v76 = 0;
			LABEL_144:
				v80 = 260i64;
				v81 = v125;
				while (v81->m128i_i16[0])
				{
					v81 = (__m128i*)((char*)v81 + 2);
					if (!--v80)
						goto LABEL_154;
				}
				v82 = &v125[0].m128i_i8[2 * (260 - v80)];
				v83 = v80;
				v84 = 2147483646i64;
				v85 = (char*)(v128 - v82);
				while (v84)
				{
					v86 = *(_WORD*)&v85[(_QWORD)v82];
					if (!v86)
						break;
					*(_WORD*)v82 = v86;
					v82 += 2;
					--v84;
					if (!--v83)
					{
						v82 -= 2;
						break;
					}
				}
				*(_WORD*)v82 = 0;
			LABEL_154:
				v103 = 0i64;
				v87 = sub_1401B5B50(*(__int64*)&qword_140C63788, v125, 2i64, 0, &v103);
				v88 = v103;
				if (v87 >= 0)
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v103 + 96i64))(
						v103,
						v66,
						2i64 * *(_QWORD*)(v66 - 8));
				else
					sub_1400035B0();
				if (v88)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v88 + 8i64))(v88);
				v48 = v104;
				goto LABEL_160;
			}
		LABEL_133:
			sub_1401B5020(*(__int64*)&qword_140C63788, pszPath, v71, (const WCHAR*)v125);
			SHCreateDirectory(0i64, pszPath);
			goto LABEL_134;
		}
		if (qword_140C63840)
		{
			v33 = qword_140C63840(off_140A6A248, 73i64, qword_140C63858);
		}
		else
		{
			if (dword_140C63F1C || (int)sub_1401FDDC0() < 0)
				goto LABEL_71;
			v33 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64018 + 24i64))(qword_140C64018, 73i64);
		}
		if (v33)
		{
			v34 = *(_DWORD*)(v33 + 4);
			if (v34)
			{
			LABEL_72:
				v35 = *(_QWORD*)(qword_140C635F0 + 5584);
				v36 = 0i64;
				v37 = *(_QWORD*)(v35 + 160);
				if (v37)
				{
					v38 = *(_QWORD*)(v35 + 152);
					v39 = (_DWORD*)(v38 + 8);
					while (*v39 != 73)
					{
						++v36;
						v39 += 4;
						if (v36 >= v37)
							goto LABEL_76;
					}
					v40 = *(_DWORD*)(v38 + 16 * v36 + 12);
				}
				else
				{
				LABEL_76:
					v40 = 0;
				}
				v41 = v34 - v40;
				if (v34 - v40 >= 0)
				{
					if (v41 > v34)
						v41 = v34;
				}
				else
				{
					v41 = 0;
				}
				if (v31[23] != 5 || !*(_DWORD*)(qword_140C66DA8 + 576) || v41 <= 0)
				{
					v42 = (int)v31[25];
					v43 = (unsigned int)v42 > 0x12 ? 0i64 : *(_QWORD*)(v35 + 8 * v42 + 208);
					if (v43 < (unsigned int)v31[26])
					{
						v29 = 757337;
						v26 = 57;
						goto LABEL_90;
					}
				}
				goto LABEL_98;
			}
		}
	LABEL_71:
		v34 = -1;
		goto LABEL_72;
	}
	v29 = 143534;
	v26 = 10;
LABEL_90:
	LODWORD(v104) = 0;
	v44 = 0;
	v45 = *(_QWORD*)(qword_140C63650 + 768);
	if (v45)
	{
		v46 = *(_QWORD*)(qword_140C63650 + 760);
		v47 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v46 + 8 * v47) + 400i64) != a1)
		{
			v47 = ++v44;
			if (v44 >= v45)
				goto LABEL_96;
		}
		v8 = *(_QWORD*)(v46 + 8i64 * v44);
	}
LABEL_96:
	Apollo_LUAEvent(v8, "CharacterCreateFailed", byte_1409D0C3C, v26, &v104);
	if (!(_DWORD)v104)
		sub_1400232F0(qword_140C66DA8, v29);
	return 0i64;
}
// 140024086: conditional instruction was optimized away because rbx.8!=0
// 1400247B4: conditional instruction was optimized away because rcx.8!=0
// 1400247CA: conditional instruction was optimized away because rcx.8!=0
// 140024805: conditional instruction was optimized away because rcx.8!=0
// 14002482A: conditional instruction was optimized away because rcx.8!=0
// 14002483D: conditional instruction was optimized away because rcx.8!=0
// 140024876: conditional instruction was optimized away because rbx.8!=0
// 140024710: variable 'v67' is possibly undefined
// 140024731: variable 'v71' is possibly undefined
// 1409D0C14: using guessed type unsigned __int16 word_1409D0C14;
// 1409D0C3C: using guessed type _BYTE byte_1409D0C3C[31];
// 1409EDD30: using guessed type wchar_t aUnknown_0[8];
// 1409EDD80: using guessed type wchar_t aSIII2ih2im02i0[35];
// 1409EDDC8: using guessed type wchar_t aCreationcodes[14];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A473F8: using guessed type wchar_t aSSSS_1[12];
// 140A6A248: using guessed type wchar_t *off_140A6A248[2];
// 140B55A50: using guessed type __int64 (__fastcall *off_140B55A50[4])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F1C: using guessed type int dword_140C63F1C;
// 140C64018: using guessed type __int64 qword_140C64018;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;
// 140C8A028: using guessed type _DWORD dword_140C8A028;
// 140023E90: using guessed type __m128i var_C90[33];
// 140023E90: using guessed type char var_240[528];
// 140023E90: using guessed type WCHAR var_A80[264];
// 140023E90: using guessed type char var_CF0[8];

