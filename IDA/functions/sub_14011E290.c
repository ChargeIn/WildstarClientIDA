#include "../winhttp.h"

//----- (000000014011E290) ----------------------------------------------------
__int64 __fastcall sub_14011E290(_QWORD* a1)
{
	int v1; // r15d
	char* v3; // rax
	unsigned __int16* v4; // rsi
	__int64 v5; // rcx
	_DWORD* v6; // rbx
	unsigned __int64 v7; // rcx
	_DWORD* v8; // rax
	_DWORD* v9; // r14
	_QWORD* v10; // r8
	_DWORD* v11; // rcx
	unsigned __int64 v12; // rdx
	__int64 v13; // rdx
	_DWORD* v14; // rcx
	int v15; // eax
	unsigned __int64 v16; // rdx
	_DWORD* v17; // rcx
	_DWORD* v18; // rsi
	char* v19; // rsi
	_QWORD* v20; // r10
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	unsigned __int64 v24; // rdi
	int v25; // eax
	_DWORD* v26; // rcx
	int v27; // esi
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	_QWORD* v31; // r15
	unsigned __int64* v32; // rdx
	unsigned __int64 v33; // r8
	__int64 v34; // rdx
	__int64* v35; // rax
	int v36; // ecx
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	_QWORD* v40; // r15
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	__int64 v43; // rdx
	__int128* v44; // rax
	int v45; // ecx
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	_QWORD* v49; // r15
	unsigned __int64* v50; // rdx
	__int64 v51; // rdx
	__int128* v52; // rax
	int v53; // ecx
	int v54; // edx
	_QWORD* v55; // rax
	int v56; // edx
	unsigned __int16* v57; // rcx
	int v58; // esi
	int v59; // eax
	int v60; // eax
	int v61; // eax
	int v62; // eax
	int v63; // xmm2_4
	int v64; // edx
	__int64 v65; // rcx
	int v66; // edx
	int v67; // edx
	bool v68; // r8
	__int128* v69; // rax
	int v70; // edx
	float v71; // xmm6_4
	int v72; // eax
	int v73; // eax
	int v74; // eax
	char* v75; // rax
	_QWORD* v76; // rax
	__int64 v77; // rdx
	int v78; // edx
	int v79; // edx
	int v80; // edx
	__int64 v82; // [rsp+20h] [rbp-60h] BYREF
	int v83; // [rsp+28h] [rbp-58h]
	__int128 v84[2]; // [rsp+30h] [rbp-50h] BYREF
	__int64(__fastcall * *v85)(); // [rsp+50h] [rbp-30h] BYREF
	unsigned __int16* v86; // [rsp+58h] [rbp-28h]
	_QWORD* v87; // [rsp+60h] [rbp-20h]
	int v88; // [rsp+68h] [rbp-18h]
	__int64 v89; // [rsp+A8h] [rbp+28h] BYREF

	v1 = 1;
	v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v85, v3);
	v4 = v86;
	v6 = (_DWORD*)sub_14019D200(v5, v86);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	if (!v6)
		return 0i64;
	v7 = a1[2];
	v8 = (_DWORD*)(a1[3] + 16i64);
	v9 = dword_140A12138;
	if ((unsigned __int64)v8 < v7 && v8 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
	{
		v87 = a1;
		v88 = 1;
		LODWORD(v86) = -2;
		v85 = off_140B569F0;
		if ((unsigned __int64)v8 < v7 && v8 != dword_140A12138 && v8[2] == 5)
		{
			sub_1400579E0((__int64)a1, (__int64)off_140B569F0, -2);
			v10 = v87;
			v11 = dword_140A12138;
			v12 = v87[2];
			if (v87[3] + 16i64 < v12)
				v11 = (_DWORD*)(v87[3] + 16i64);
			*(_QWORD*)v12 = *(_QWORD*)v11;
			*(_DWORD*)(v12 + 8) = v11[2];
			v10[2] += 16i64;
			LODWORD(v86) = sub_1400578C0((__int64)v87);
		}
		if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6) != 9)
		{
			v85 = off_140B56A08;
			if (v87)
				sub_1400579E0((__int64)v87, v13, (int)v86);
			goto LABEL_16;
		}
		v20 = v87;
		if (!v87 || (v13 = (unsigned int)v86, (_DWORD)v86 == -2))
		{
		LABEL_89:
			v85 = off_140B56A08;
			if (v20)
				sub_1400579E0((__int64)v20, v13, (int)v86);
			return 0i64;
		}
		v21 = sub_14005C3C0(*(_QWORD*)(v87[4] + 160i64), (int)v86);
		v23 = *(_QWORD*)(v22 + 16);
		v24 = -1i64;
		*(_QWORD*)v23 = *v21;
		*(_DWORD*)(v23 + 8) = *((_DWORD*)v21 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		v13 = (__int64)v87;
		v25 = -1;
		v26 = (_DWORD*)(v87[2] - 16i64);
		if (v26 != dword_140A12138)
			v25 = v26[2];
		v87[2] = v26;
		if (v25 != 5)
		{
		LABEL_88:
			v20 = v87;
			goto LABEL_89;
		}
		v27 = 0;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v85[1])(&v85))
		{
			v28 = sub_14005C3C0(*(_QWORD*)(v87[4] + 160i64), (int)v86);
			v30 = *(_QWORD*)(v29 + 16);
			*(_QWORD*)v30 = *v28;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
			*(_QWORD*)(v29 + 16) += 16i64;
			v31 = v87;
			v32 = (unsigned __int64*)sub_14018F0E0(v84, L"x")[1];
			if (v32)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v32 + v33));
				sub_140058710((__int64)v31, v32, v33);
			}
			else
			{
				*(_DWORD*)(v31[2] + 8i64) = 0;
				v31[2] += 16i64;
			}
			if (*((_QWORD*)&v84[0] + 1))
				sub_14018B900(*((__int64*)&v84[0] + 1), 0);
			sub_14005E8E0((__int64)v87, v87[2] - 32i64, (int*)(v87[2] - 16i64), v87[2] - 16i64);
			v34 = v87[2];
			v35 = (__int64*)(v34 - 16);
			if ((_DWORD*)(v34 - 16) == dword_140A12138 || *((_DWORD*)v35 + 2) != 3)
			{
				v87[2] = v34 - 32;
			}
			else
			{
				v36 = *((_DWORD*)v35 + 2);
				if (v36 == 3)
				{
				LABEL_49:
					LODWORD(v82) = (int)*(double*)v35;
					v87[2] -= 32i64;
					goto LABEL_52;
				}
				if (v36 == 4 && sub_14005AC80((char*)(*v35 + 32), (unsigned __int64*)&v89))
				{
					v83 = 3;
					v35 = &v82;
					v82 = v89;
					goto LABEL_49;
				}
				LODWORD(v82) = 0;
				v87[2] -= 32i64;
			}
		}
	LABEL_52:
		if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v85[1])(&v85))
			goto LABEL_69;
		v37 = sub_14005C3C0(*(_QWORD*)(v87[4] + 160i64), (int)v86);
		v39 = *(_QWORD*)(v38 + 16);
		*(_QWORD*)v39 = *v37;
		*(_DWORD*)(v39 + 8) = *((_DWORD*)v37 + 2);
		*(_QWORD*)(v38 + 16) += 16i64;
		v40 = v87;
		v41 = (unsigned __int64*)sub_14018F0E0(v84, L"y")[1];
		if (v41)
		{
			v42 = -1i64;
			do
				++v42;
			while (*((_BYTE*)v41 + v42));
			sub_140058710((__int64)v40, v41, v42);
		}
		else
		{
			*(_DWORD*)(v40[2] + 8i64) = 0;
			v40[2] += 16i64;
		}
		if (*((_QWORD*)&v84[0] + 1))
			sub_14018B900(*((__int64*)&v84[0] + 1), 0);
		sub_14005E8E0((__int64)v87, v87[2] - 32i64, (int*)(v87[2] - 16i64), v87[2] - 16i64);
		v43 = v87[2];
		v44 = (__int128*)(v43 - 16);
		if ((_DWORD*)(v43 - 16) == dword_140A12138 || *((_DWORD*)v44 + 2) != 3)
		{
			v87[2] = v43 - 32;
		}
		else
		{
			v45 = *((_DWORD*)v44 + 2);
			if (v45 == 3)
			{
			LABEL_66:
				HIDWORD(v82) = (int)*(double*)v44;
				v87[2] -= 32i64;
				goto LABEL_69;
			}
			if (v45 == 4 && sub_14005AC80((char*)(*(_QWORD*)v44 + 32i64), (unsigned __int64*)&v89))
			{
				DWORD2(v84[0]) = 3;
				v44 = v84;
				*(_QWORD*)&v84[0] = v89;
				goto LABEL_66;
			}
			HIDWORD(v82) = 0;
			v87[2] -= 32i64;
		}
	LABEL_69:
		if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v85[1])(&v85))
		{
		LABEL_85:
			v54 = v6[4];
			if (*(_DWORD*)qword_140C63750 < v54)
				v54 = *(_DWORD*)qword_140C63750;
			sub_14001AC30((__int64)v6, v54, (int*)&v82);
			goto LABEL_88;
		}
		v46 = sub_14005C3C0(*(_QWORD*)(v87[4] + 160i64), (int)v86);
		v48 = *(_QWORD*)(v47 + 16);
		*(_QWORD*)v48 = *v46;
		*(_DWORD*)(v48 + 8) = *((_DWORD*)v46 + 2);
		*(_QWORD*)(v47 + 16) += 16i64;
		v49 = v87;
		v50 = (unsigned __int64*)sub_14018F0E0(v84, L"z")[1];
		if (v50)
		{
			do
				++v24;
			while (*((_BYTE*)v50 + v24));
			sub_140058710((__int64)v49, v50, v24);
		}
		else
		{
			*(_DWORD*)(v49[2] + 8i64) = 0;
			v49[2] += 16i64;
		}
		if (*((_QWORD*)&v84[0] + 1))
			sub_14018B900(*((__int64*)&v84[0] + 1), 0);
		sub_14005E8E0((__int64)v87, v87[2] - 32i64, (int*)(v87[2] - 16i64), v87[2] - 16i64);
		v51 = v87[2];
		v52 = (__int128*)(v51 - 16);
		if ((_DWORD*)(v51 - 16) == dword_140A12138 || *((_DWORD*)v52 + 2) != 3)
		{
			v87[2] = v51 - 32;
			goto LABEL_85;
		}
		v53 = *((_DWORD*)v52 + 2);
		if (v53 != 3)
		{
			if (v53 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v52 + 32i64), (unsigned __int64*)&v89))
				goto LABEL_83;
			DWORD2(v84[0]) = 3;
			v52 = v84;
			*(_QWORD*)&v84[0] = v89;
		}
		v27 = (int)*(double*)v52;
	LABEL_83:
		v83 = v27;
		v87[2] -= 32i64;
		goto LABEL_85;
	}
LABEL_16:
	v14 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v14 = (_DWORD*)(a1[3] + 16i64);
	v15 = v14[2];
	if (v15 == 3 || v15 == 4 && sub_14005AC80((char*)(*(_QWORD*)v14 + 32i64), (unsigned __int64*)&v89))
	{
		v71 = sub_140058480((__int64)a1, 2);
		v72 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6);
		if (v72)
		{
			v73 = v72 - 1;
			if (!v73)
			{
				v79 = v6[4];
				if (*(_DWORD*)qword_140C63750 < v79)
					v79 = *(_DWORD*)qword_140C63750;
				sub_14002C690((__int64)v6, v79, (int)v71);
				return 0i64;
			}
			v74 = v73 - 2;
			if (!v74)
			{
				v78 = v6[4];
				if (*(_DWORD*)qword_140C63750 < v78)
					v78 = *(_DWORD*)qword_140C63750;
				sub_14001A770((__int64)v6, v78, (int)v71);
				return 0i64;
			}
			if (v74 != 2)
				goto LABEL_138;
			v64 = v6[4];
			v63 = LODWORD(v71);
			v65 = (__int64)v6;
			if (*(_DWORD*)qword_140C63750 < v64)
				v64 = *(_DWORD*)qword_140C63750;
			goto LABEL_118;
		}
		v68 = v71 != 0.0;
	LABEL_149:
		v80 = v6[4];
		if (*(_DWORD*)qword_140C63750 < v80)
			v80 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)v6, v80, v68);
		return 0i64;
	}
	v16 = a1[2];
	v17 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v17 >= v16)
	{
	LABEL_126:
		if ((unsigned int)sub_1401184B0((__int64)a1, 2)
			&& (*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6) == 12)
		{
			v69 = (__int128*)sub_140056AB0(a1, 2u);
			v70 = v6[4];
			v84[0] = *v69;
			if (*(_DWORD*)qword_140C63750 < v70)
				v70 = *(_DWORD*)qword_140C63750;
			sub_14002C7C0((__int64)v6, v70, v84);
			return 0i64;
		}
		goto LABEL_138;
	}
	if (v17 == dword_140A12138 || (unsigned int)(*(_DWORD*)(a1[3] + 24i64) - 3) > 1)
	{
		if ((unsigned __int64)v17 < v16 && v17 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 1)
		{
			if ((unsigned __int64)v17 < v16)
				v9 = (_DWORD*)(a1[3] + 16i64);
			v58 = 0;
			v59 = v9[2];
			if (!v59 || v59 == 1 && !*v9)
				v1 = 0;
			v60 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6);
			if (v60)
			{
				v61 = v60 - 1;
				if (!v61)
				{
					v67 = v6[4];
					if (*(_DWORD*)qword_140C63750 < v67)
						v67 = *(_DWORD*)qword_140C63750;
					LOBYTE(v58) = v1 != 0;
					sub_14002C690((__int64)v6, v67, v58);
					return 0i64;
				}
				v62 = v61 - 2;
				if (!v62)
				{
					v66 = v6[4];
					if (*(_DWORD*)qword_140C63750 < v66)
						v66 = *(_DWORD*)qword_140C63750;
					LOBYTE(v58) = v1 != 0;
					sub_14001A770((__int64)v6, v66, v58);
					return 0i64;
				}
				if (v62 != 2)
					goto LABEL_138;
				if (v1)
					v63 = 1065353216;
				else
					v63 = 0;
				v64 = v6[4];
				v65 = (__int64)v6;
				if (*(_DWORD*)qword_140C63750 < v64)
					v64 = *(_DWORD*)qword_140C63750;
			LABEL_118:
				sub_14001A820(v65, v64, *(float*)&v63);
				return 0i64;
			}
			v68 = v1 != 0;
			goto LABEL_149;
		}
		goto LABEL_126;
	}
	if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6) != 13)
	{
	LABEL_138:
		v75 = (char*)sub_140058540((__int64)a1, 2, 0i64);
		v76 = sub_14018F2D0(&v85, v75);
		v77 = (unsigned int)v6[4];
		if (*(_DWORD*)qword_140C63750 < (int)v77)
			v77 = *(unsigned int*)qword_140C63750;
		(*(void(__fastcall**)(_DWORD*, __int64, _QWORD*))(*(_QWORD*)v6 + 24i64))(v6, v77, v76);
		v57 = v86;
		if (v86)
			goto LABEL_99;
		return 0i64;
	}
	v18 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v18 = (_DWORD*)(a1[3] + 16i64);
	if (v18[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v18))
		{
			v19 = 0i64;
			goto LABEL_96;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v18 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v18 = (_DWORD*)(a1[3] + 16i64);
	}
	v19 = (char*)(*(_QWORD*)v18 + 32i64);
LABEL_96:
	v55 = sub_14018F2D0(&v85, v19);
	v56 = v6[4];
	if (*(_DWORD*)qword_140C63750 < v56)
		v56 = *(_DWORD*)qword_140C63750;
	sub_14001A9B0((__int64)v6, v56, (__int64)v55);
	v57 = v86;
	if (v86)
		LABEL_99:
	sub_14018B900((__int64)v57, 0);
	return 0i64;
}
// 14011E2CF: variable 'v5' is possibly undefined
// 14011E3BF: variable 'v13' is possibly undefined
// 14011E4A4: variable 'v22' is possibly undefined
// 14011E50C: variable 'v29' is possibly undefined
// 14011E62A: variable 'v38' is possibly undefined
// 14011E74A: variable 'v47' is possibly undefined
// 1409D6754: using guessed type wchar_t asc_1409D6754[2];
// 1409D678C: using guessed type wchar_t aY_0[2];
// 1409D67BC: using guessed type wchar_t aZ[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63750: using guessed type __int64 qword_140C63750;

