#include "../winhttp.h"

//----- (000000014059D660) ----------------------------------------------------
__int64 __fastcall sub_14059D660(int* a1, _QWORD* a2, int a3)
{
	_DWORD* v6; // rax
	_DWORD* v7; // rax
	__int64 v8; // rdx
	_DWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	unsigned int v12; // edi
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	__int64 v16; // rbx
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // rdx
	__int64* v20; // rax
	int v21; // ecx
	int v22; // ecx
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	__int64 v26; // rbx
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // r8
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	__int64 v32; // r14
	__int64(__fastcall * *v33)(); // rax
	__int64 v34; // rdx
	_QWORD* v35; // rax
	__int64 v36; // r10
	__int64 v37; // rdx
	__int64 v38; // rbx
	unsigned __int64* v39; // rdx
	unsigned __int64 v40; // r8
	__int64 v41; // r10
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	_DWORD* v45; // rcx
	int v46; // eax
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	unsigned int v50; // r15d
	unsigned int v51; // r13d
	__int64 v52; // r14
	__int64* v53; // r12
	__int64 v54; // rcx
	__int64 v55; // rbx
	__int64 v56; // rax
	_QWORD* v57; // rax
	__int64 v58; // r10
	__int64 v59; // rdx
	__int64 v60; // rbx
	unsigned __int64* v61; // rdx
	unsigned __int64 v62; // r8
	__int64 v63; // rdx
	__int64* v64; // rax
	int v65; // ecx
	int v66; // ecx
	int v67; // eax
	_BYTE* v68; // r14
	__int64* v69; // rcx
	__int64(__fastcall * *v71)(); // [rsp+20h] [rbp-E0h] BYREF
	int v72; // [rsp+28h] [rbp-D8h]
	_QWORD* v73; // [rsp+30h] [rbp-D0h]
	int v74; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v75)(); // [rsp+40h] [rbp-C0h] BYREF
	int v76; // [rsp+48h] [rbp-B8h]
	_QWORD* v77; // [rsp+50h] [rbp-B0h]
	int v78; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v79)(); // [rsp+60h] [rbp-A0h] BYREF
	int v80; // [rsp+68h] [rbp-98h]
	_QWORD* v81; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v82)(); // [rsp+78h] [rbp-88h] BYREF
	__int64 v83; // [rsp+80h] [rbp-80h]
	__int64 v84; // [rsp+88h] [rbp-78h]
	__int64(__fastcall * **v85)(); // [rsp+90h] [rbp-70h]
	__int64 v86; // [rsp+98h] [rbp-68h] BYREF
	__int64(__fastcall * *v87)(); // [rsp+A0h] [rbp-60h] BYREF
	int v88; // [rsp+A8h] [rbp-58h]
	_QWORD* v89; // [rsp+B0h] [rbp-50h]
	__int64 v90; // [rsp+B8h] [rbp-48h] BYREF
	int v91; // [rsp+C0h] [rbp-40h]
	__int64(__fastcall * *v92)(); // [rsp+C8h] [rbp-38h] BYREF
	int v93; // [rsp+D0h] [rbp-30h]
	_QWORD* v94; // [rsp+D8h] [rbp-28h]
	int v95; // [rsp+E0h] [rbp-20h]
	_BYTE* v96; // [rsp+E8h] [rbp-18h] BYREF
	int v97; // [rsp+F0h] [rbp-10h]
	__int64 v98; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v99; // [rsp+100h] [rbp+0h]
	__int64 v100; // [rsp+120h] [rbp+20h] BYREF
	int* v101; // [rsp+128h] [rbp+28h]
	__int64 v102; // [rsp+420h] [rbp+320h]
	int v103; // [rsp+5C0h] [rbp+4C0h]
	__int64 v104[2]; // [rsp+5E0h] [rbp+4E0h] BYREF
	int v105; // [rsp+5F0h] [rbp+4F0h]

	v90 = (__int64)a1;
	sub_1407E4830(a1, 0i64, 0x28ui64);
	v6 = sub_1400580E0((__int64)a2, a3);
	if (v6 == dword_140A12138 || v6[2] != 5)
		return 0i64;
	v73 = a2;
	v74 = 1;
	v71 = off_140B569F0;
	v72 = -2;
	v7 = sub_1400580E0((__int64)a2, a3);
	if (v7 != dword_140A12138 && v7[2] == 5)
	{
		sub_1400579E0((__int64)v73, v8, v72);
		v9 = sub_1400580E0((__int64)v73, a3);
		v11 = *(_QWORD*)(v10 + 16);
		*(_QWORD*)v11 = *(_QWORD*)v9;
		*(_DWORD*)(v11 + 8) = v9[2];
		*(_QWORD*)(v10 + 16) += 16i64;
		v72 = sub_1400578C0((__int64)v73);
	}
	v12 = 0;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v71[1])(&v71))
	{
		v13 = sub_14005C3C0(*(_QWORD*)(v73[4] + 160i64), v72);
		v15 = *(_QWORD*)(v14 + 16);
		*(_QWORD*)v15 = *v13;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(v14 + 16) += 16i64;
		v16 = (__int64)v73;
		v17 = (unsigned __int64*)sub_14018F0E0(&v82, L"nApSpSplitDelta")[1];
		if (v17)
		{
			v18 = -1i64;
			do
				++v18;
			while (*((_BYTE*)v17 + v18));
			sub_140058710(v16, v17, v18);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v16 + 16) + 8i64) = 0;
			*(_QWORD*)(v16 + 16) += 16i64;
		}
		if (v83)
			sub_14018B900(v83, 0);
		sub_14005E8E0((__int64)v73, v73[2] - 32i64, (int*)(v73[2] - 16i64), v73[2] - 16i64);
		v19 = v73[2];
		v20 = (__int64*)(v19 - 16);
		if ((_DWORD*)(v19 - 16) == dword_140A12138 || *((_DWORD*)v20 + 2) != 3)
		{
			v73[2] = v19 - 32;
			goto LABEL_23;
		}
		v21 = *((_DWORD*)v20 + 2);
		if (v21 != 3)
		{
			if (v21 != 4 || !sub_14005AC80((char*)(*v20 + 32), (unsigned __int64*)&v86))
			{
				v73[2] -= 32i64;
				*a1 = 0;
				goto LABEL_23;
			}
			v97 = 3;
			v20 = (__int64*)&v96;
			v96 = (_BYTE*)v86;
		}
		v22 = (int)*(double*)v20;
		v73[2] -= 32i64;
		*a1 = v22;
	}
LABEL_23:
	v87 = off_140B56A08;
	v89 = 0i64;
	v88 = -2;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v71[1])(&v71))
	{
		v23 = sub_14005C3C0(*(_QWORD*)(v73[4] + 160i64), v72);
		v25 = *(_QWORD*)(v24 + 16);
		*(_QWORD*)v25 = *v23;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
		*(_QWORD*)(v24 + 16) += 16i64;
		v26 = (__int64)v73;
		v27 = (unsigned __int64*)sub_14018F0E0(&v82, L"itemPowerCore")[1];
		if (v27)
		{
			v28 = -1i64;
			do
				++v28;
			while (*((_BYTE*)v27 + v28));
			sub_140058710(v26, v27, v28);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v26 + 16) + 8i64) = 0;
			*(_QWORD*)(v26 + 16) += 16i64;
		}
		if (v83)
			sub_14018B900(v83, 0);
		sub_14005E8E0((__int64)v73, v73[2] - 32i64, (int*)(v73[2] - 16i64), v73[2] - 16i64);
		v89 = v73;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v87[2])(&v87, 0xFFFFFFFFi64);
		v73[2] -= 32i64;
		sub_14040FAE0((__int64)&v100);
		v29 = sub_14005C3C0(*(_QWORD*)(v89[4] + 160i64), v88);
		v31 = *(_QWORD*)(v30 + 16);
		*(_QWORD*)v31 = *v29;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
		*(_QWORD*)(v30 + 16) += 16i64;
		sub_140410680((__int64)&v100, a2, 0xFFFFFFFF);
		a2[2] -= 16i64;
		if (v103 && v101)
			a1[9] = *v101;
		if (v100)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v100 + 8i64))(v100);
			v100 = 0i64;
		}
		if (v102)
			sub_14018B900(v102, 0);
	}
	v32 = (__int64)(a1 + 6);
	*(_QWORD*)v32 = 0i64;
	v104[0] = 0i64;
	v104[1] = 0i64;
	v105 = 0;
	v33 = v71;
	v96 = (_BYTE*)v32;
	*(_DWORD*)(v32 + 8) = 1;
	v79 = off_140B56A08;
	v81 = 0i64;
	v80 = -2;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v33[1])(&v71))
	{
		v35 = sub_14005C3C0(*(_QWORD*)(v73[4] + 160i64), v72);
		v37 = *(_QWORD*)(v36 + 16);
		*(_QWORD*)v37 = *v35;
		*(_DWORD*)(v37 + 8) = *((_DWORD*)v35 + 2);
		*(_QWORD*)(v36 + 16) += 16i64;
		v38 = (__int64)v73;
		v39 = (unsigned __int64*)sub_14018F0E0(&v82, L"arStats")[1];
		if (v39)
		{
			v40 = -1i64;
			do
				++v40;
			while (*((_BYTE*)v39 + v40));
			sub_140058710(v38, v39, v40);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v38 + 16) + 8i64) = 0;
			*(_QWORD*)(v38 + 16) += 16i64;
		}
		if (v83)
			sub_14018B900(v83, 0);
		sub_14005E8E0((__int64)v73, v73[2] - 32i64, (int*)(v73[2] - 16i64), v73[2] - 16i64);
		v81 = v73;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v79[2])(&v79, 0xFFFFFFFFi64);
		v73[2] -= 32i64;
		v41 = (__int64)v81;
		v92 = off_140B569F0;
		v94 = v81;
		v95 = 1;
		v93 = -2;
		if (v81 && v80 != -2)
		{
			v42 = sub_14005C3C0(*(_QWORD*)(v81[4] + 160i64), v80);
			v44 = *(_QWORD*)(v43 + 16);
			*(_QWORD*)v44 = *v42;
			*(_DWORD*)(v44 + 8) = *((_DWORD*)v42 + 2);
			*(_QWORD*)(v43 + 16) += 16i64;
			v45 = (_DWORD*)(v81[2] - 16i64);
			if (v45 == dword_140A12138)
				v46 = -1;
			else
				v46 = v45[2];
			v81[2] = v45;
			if (v46 == 5)
			{
				v47 = sub_14005C3C0(*(_QWORD*)(v81[4] + 160i64), v80);
				v49 = *(_QWORD*)(v48 + 16);
				*(_QWORD*)v49 = *v47;
				*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
				*(_QWORD*)(v48 + 16) += 16i64;
				v93 = sub_1400578C0((__int64)v94);
			}
			v41 = (__int64)v94;
		}
		v82 = off_140B56A08;
		v84 = v41;
		LODWORD(v83) = -2;
		v85 = &v92;
		*(_DWORD*)(*(_QWORD*)(v41 + 16) + 8i64) = 0;
		*(_QWORD*)(v41 + 16) += 16i64;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v82[2])(&v82, 0xFFFFFFFFi64);
		v50 = 0;
		v94[2] -= 16i64;
		v51 = 0;
		v90 -= (__int64)v104;
		v52 = v90;
		v53 = v104;
		while (1)
		{
			if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v85)[1])(v85)
				|| !(unsigned int)sub_1400FCBA0((__int64)&v82))
			{
			LABEL_82:
				v68 = v96;
				if (v50 > 5)
					v50 = 5;
				if (v50)
				{
					v69 = v104;
					do
					{
						if (v12 < 6)
							*v68 = *(_BYTE*)v69 + 1;
						++v12;
						v69 = (__int64*)((char*)v69 + 4);
						++v68;
					} while (v12 < v50);
				}
				v82 = off_140B56A08;
				if (v84)
					sub_1400579E0(v84, v34, v83);
				v92 = off_140B56A08;
				if (v94)
					sub_1400579E0((__int64)v94, v34, v93);
				goto LABEL_93;
			}
			v54 = a2[4];
			v75 = off_140B569F0;
			v77 = a2;
			v78 = 1;
			v76 = -2;
			if (*(_QWORD*)(v54 + 120) >= *(_QWORD*)(v54 + 112))
				sub_14005E2C0((__int64)a2);
			v55 = a2[2];
			v56 = sub_14005C1B0((__int64)a2, 0, 0);
			*(_DWORD*)(v55 + 8) = 5;
			*(_QWORD*)v55 = v56;
			a2[2] += 16i64;
			v76 = sub_1400578C0((__int64)a2);
			if ((int)sub_1400FC6C0((__int64)&v82, (__int64)&v75) >= 0)
				break;
		LABEL_79:
			v75 = off_140B56A08;
			if (v77)
				sub_1400579E0((__int64)v77, v34, v76);
			++v51;
			v53 = (__int64*)((char*)v53 + 4);
			if (v51 >= 5)
				goto LABEL_82;
		}
		++v50;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v75[1])(&v75))
		{
			v57 = sub_14005C3C0(*(_QWORD*)(v77[4] + 160i64), v76);
			v59 = *(_QWORD*)(v58 + 16);
			*(_QWORD*)v59 = *v57;
			*(_DWORD*)(v59 + 8) = *((_DWORD*)v57 + 2);
			*(_QWORD*)(v58 + 16) += 16i64;
			v60 = (__int64)v77;
			v61 = (unsigned __int64*)sub_14018F0E0(&v98, L"nChargeDelta")[1];
			if (v61)
			{
				v62 = -1i64;
				do
					++v62;
				while (*((_BYTE*)v61 + v62));
				sub_140058710(v60, v61, v62);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v60 + 16) + 8i64) = 0;
				*(_QWORD*)(v60 + 16) += 16i64;
			}
			if (v99)
				sub_14018B900(v99, 0);
			sub_14005E8E0((__int64)v77, v77[2] - 32i64, (int*)(v77[2] - 16i64), v77[2] - 16i64);
			v63 = v77[2];
			v64 = (__int64*)(v63 - 16);
			if ((_DWORD*)(v63 - 16) == dword_140A12138 || *((_DWORD*)v64 + 2) != 3)
			{
				v77[2] = v63 - 32;
			}
			else
			{
				v65 = *((_DWORD*)v64 + 2);
				if (v65 == 3)
				{
				LABEL_74:
					v66 = (int)*(double*)v64;
					v77[2] -= 32i64;
					*(_DWORD*)((char*)v53 + v52 + 4) = v66;
					goto LABEL_77;
				}
				if (v65 == 4 && sub_14005AC80((char*)(*v64 + 32), (unsigned __int64*)&v86))
				{
					v91 = 3;
					v64 = &v90;
					v90 = v86;
					goto LABEL_74;
				}
				v77[2] -= 32i64;
				*(_DWORD*)((char*)v53 + v52 + 4) = 0;
			}
		}
	LABEL_77:
		if ((int)sub_1400FB720((__int64)&v75, L"eProperty", 3) >= 0)
		{
			v67 = sub_1400584E0((__int64)v77, -1);
			v77[2] -= 32i64;
			*(_DWORD*)v53 = v67;
		}
		goto LABEL_79;
	}
LABEL_93:
	v79 = off_140B56A08;
	if (v81)
		sub_1400579E0((__int64)v81, v34, v80);
	v87 = off_140B56A08;
	if (v89)
		sub_1400579E0((__int64)v89, v34, v88);
	v71 = off_140B56A08;
	if (v73)
		sub_1400579E0((__int64)v73, v34, v72);
	return 1i64;
}
// 14059D714: variable 'v8' is possibly undefined
// 14059D728: variable 'v10' is possibly undefined
// 14059D77B: variable 'v14' is possibly undefined
// 14059D8B9: variable 'v24' is possibly undefined
// 14059D97B: variable 'v30' is possibly undefined
// 14059DA53: variable 'v36' is possibly undefined
// 14059DB46: variable 'v43' is possibly undefined
// 14059DB97: variable 'v48' is possibly undefined
// 14059DCDD: variable 'v58' is possibly undefined
// 14059DE32: variable 'v34' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B1FE88: using guessed type wchar_t aNchargedelta[13];
// 140B1FEA8: using guessed type wchar_t aArstats[8];
// 140B1FED8: using guessed type wchar_t aEproperty[10];
// 140B1FF30: using guessed type wchar_t aItempowercore[14];
// 140B1FF50: using guessed type wchar_t aNapspsplitdelt[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

