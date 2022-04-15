#include "../winhttp.h"

//----- (0000000140677330) ----------------------------------------------------
__int64 __fastcall sub_140677330(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
	__int64* v6; // rbp
	__int64 result; // rax
	__int64 v11; // rsi
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	__int64 v23; // rdi
	__int64 v24; // rcx
	__int64 v25; // rbx
	__int64 v26; // rax
	int v27; // eax
	__int64 v28; // rdi
	int v29; // r12d
	unsigned int* v30; // r13
	unsigned __int64 v31; // r14
	unsigned int v32; // ebx
	__int64 v33; // rax
	__int64 v34; // rsi
	__int64 v35; // rdi
	__int64 v36; // rcx
	__int64 v37; // rbx
	__int64 v38; // rax
	int v39; // ebp
	BOOL v40; // ebx
	_QWORD* v41; // rax
	__int64 v42; // rdx
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // r8
	BOOL* v45; // rcx
	__int64* v46; // rax
	_QWORD* v47; // rax
	__int64 v48; // rdx
	int v49; // r10d
	__int64 v50; // rcx
	unsigned int v51; // edx
	int v52; // ebx
	__int64 v53; // rax
	int v54; // r8d
	float v55; // xmm3_4
	__int64 v56; // rdx
	int v57; // ebp
	_QWORD* v58; // rax
	__int64 v59; // r10
	__int64 v60; // rdx
	__int64 v61; // rdi
	unsigned __int64* v62; // rsi
	__int64 v63; // rbx
	__int64 v64; // rax
	__int64 v65; // rcx
	__int64 v66; // rax
	__int64* v67; // rax
	__int64 v68; // rdx
	__int64 v69; // [rsp+40h] [rbp-C8h]
	__int64(__fastcall * *v70)(); // [rsp+48h] [rbp-C0h] BYREF
	int v71; // [rsp+50h] [rbp-B8h]
	__int64 v72; // [rsp+58h] [rbp-B0h]
	int v73; // [rsp+60h] [rbp-A8h]
	__int64(__fastcall * *v74)(); // [rsp+68h] [rbp-A0h] BYREF
	int v75; // [rsp+70h] [rbp-98h]
	__int64 v76; // [rsp+78h] [rbp-90h]
	int v77; // [rsp+80h] [rbp-88h]
	__int64 v78; // [rsp+88h] [rbp-80h] BYREF
	__int64 v79; // [rsp+90h] [rbp-78h]

	v6 = (__int64*)a1;
	result = sub_14020D260(a3);
	v11 = result;
	if (!result)
		return result;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v14, L"nSetId", a3);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_14034BDD0(v15, *(_DWORD*)(v11 + 4));
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v18, L"strName", v19);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (a4)
	{
		v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v22 = *(_QWORD*)(v21 + 16);
		*(_QWORD*)v22 = *v20;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
		*(_QWORD*)(v21 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v22, L"nPower", a4);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	v23 = *v6;
	v73 = 1;
	v24 = *(_QWORD*)(v23 + 32);
	v70 = off_140B569F0;
	v72 = v23;
	if (*(_QWORD*)(v24 + 120) >= *(_QWORD*)(v24 + 112))
		sub_14005E2C0(v23);
	v25 = *(_QWORD*)(v23 + 16);
	v26 = sub_14005C1B0(v23, 0, 0);
	*(_DWORD*)(v25 + 8) = 5;
	*(_QWORD*)v25 = v26;
	*(_QWORD*)(v23 + 16) += 16i64;
	v27 = sub_1400578C0(v23);
	v28 = 12i64;
	v29 = 0;
	v71 = v27;
	v30 = (unsigned int*)(v11 + 8);
	v31 = -1i64;
	v69 = 12i64;
	do
	{
		v32 = *v30;
		if (!*v30)
			goto LABEL_44;
		if (qword_140C63840)
		{
			v33 = qword_140C63840(off_140A6AEF8, v32, qword_140C63858);
		}
		else
		{
			if (dword_140C655C0 || (int)sub_14020D440() < 0)
				goto LABEL_44;
			v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65560 + 24i64))(qword_140C65560, v32);
		}
		v34 = v33;
		if (v33 && (*(_DWORD*)(v33 + 20) || *(_DWORD*)(v33 + 8)))
		{
			v35 = *v6;
			v77 = 1;
			v36 = *(_QWORD*)(v35 + 32);
			v74 = off_140B569F0;
			v76 = v35;
			if (*(_QWORD*)(v36 + 120) >= *(_QWORD*)(v36 + 112))
				sub_14005E2C0(v35);
			v37 = *(_QWORD*)(v35 + 16);
			v38 = sub_14005C1B0(v35, 0, 0);
			*(_DWORD*)(v37 + 8) = 5;
			*(_QWORD*)v37 = v38;
			*(_QWORD*)(v35 + 16) += 16i64;
			v39 = sub_1400578C0(v35);
			v75 = v39;
			if (a5)
			{
				v40 = a4 >= *(_DWORD*)(v34 + 4);
				v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v35 + 32) + 160i64), v39);
				v42 = *(_QWORD*)(v35 + 16);
				*(_QWORD*)v42 = *v41;
				*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
				*(_QWORD*)(v35 + 16) += 16i64;
				v43 = (unsigned __int64*)sub_14018F0E0(&v78, L"bIsActive")[1];
				if (v43)
				{
					v44 = -1i64;
					do
						++v44;
					while (*((_BYTE*)v43 + v44));
					sub_140058710(v35, v43, v44);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v35 + 16) + 8i64) = 0;
					*(_QWORD*)(v35 + 16) += 16i64;
				}
				if (v79)
					sub_14018B900(v79, 0);
				v45 = *(BOOL**)(v35 + 16);
				v45[2] = 1;
				*v45 = v40;
				*(_QWORD*)(v35 + 16) += 16i64;
				v46 = (__int64*)sub_1400580E0(v35, -3);
				sub_14005EA50(v35, v46, (int*)(*(_QWORD*)(v35 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v35 + 16) - 16i64));
				*(_QWORD*)(v35 + 16) -= 48i64;
			}
			v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v35 + 32) + 160i64), v39);
			v48 = *(_QWORD*)(v35 + 16);
			*(_QWORD*)v48 = *v47;
			*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
			*(_QWORD*)(v35 + 16) += 16i64;
			sub_1400F06F0(v35, v48, L"nPower", v49);
			*(_QWORD*)(v35 + 16) -= 16i64;
			v51 = *(_DWORD*)(v34 + 20);
			if (v51)
			{
				if (a6)
					v52 = *(_DWORD*)(a6 + 4);
				else
					v52 = 0;
				if (!*(_QWORD*)(qword_140C65898 + 120) || !qword_140C65898 || (v53 = sub_1405A5B90(qword_140C65898, v51)) == 0)
					v53 = sub_1407A0FD0(qword_140C65B70, v51);
				sub_140675E20(a1, (__int64)&v74, v53, 1, v52);
			}
			v54 = *(_DWORD*)(v34 + 8);
			if (v54)
			{
				if (a6)
					v55 = *(float*)a6;
				else
					v55 = 1.0;
				sub_1406769C0(v50, (__int64)&v74, v54, v55 * *(float*)(v34 + 16), *(float*)(v34 + 12), 0, 0.0);
			}
			sub_1400FB1D0((__int64)&v70);
			if ((unsigned int)v29 < *(_DWORD*)(v34 + 4))
				v29 = *(_DWORD*)(v34 + 4);
			sub_1400579E0(v35, v56, v39);
			v6 = (__int64*)a1;
			v28 = v69;
		}
	LABEL_44:
		++v30;
		v69 = --v28;
	} while (v28);
	v57 = v71;
	sub_1400FB2A0(a2, (__int64)L"arBonuses", v71);
	v58 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v60 = *(_QWORD*)(v59 + 16);
	*(_QWORD*)v60 = *v58;
	*(_DWORD*)(v60 + 8) = *((_DWORD*)v58 + 2);
	*(_QWORD*)(v59 + 16) += 16i64;
	v61 = *(_QWORD*)(a2 + 16);
	v62 = (unsigned __int64*)sub_14018F0E0(&v78, L"nMaxPower")[1];
	if (v62)
	{
		do
			++v31;
		while (*((_BYTE*)v62 + v31));
		if (*(_QWORD*)(*(_QWORD*)(v61 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v61 + 32) + 112i64))
			sub_14005E2C0(v61);
		v63 = *(_QWORD*)(v61 + 16);
		v64 = sub_140062650(v61, v62, v31);
		*(_DWORD*)(v63 + 8) = 4;
		*(_QWORD*)v63 = v64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v61 + 16) + 8i64) = 0;
	}
	v65 = v79;
	*(_QWORD*)(v61 + 16) += 16i64;
	if (v65)
		sub_14018B900(v65, 0);
	v66 = *(_QWORD*)(v61 + 16);
	*(_DWORD*)(v66 + 8) = 3;
	*(double*)v66 = (double)v29;
	*(_QWORD*)(v61 + 16) += 16i64;
	v67 = (__int64*)sub_1400580E0(v61, -3);
	sub_14005EA50(v61, v67, (int*)(*(_QWORD*)(v61 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v61 + 16) - 16i64));
	*(_QWORD*)(v61 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (v72)
		sub_1400579E0(v72, v68, v57);
	return 1i64;
}
// 1406773B5: variable 'v13' is possibly undefined
// 1406773E9: variable 'v15' is possibly undefined
// 140677408: variable 'v17' is possibly undefined
// 14067742B: variable 'v19' is possibly undefined
// 140677455: variable 'v21' is possibly undefined
// 140677700: variable 'v49' is possibly undefined
// 140677742: variable 'v51' is possibly undefined
// 1406777A1: variable 'v50' is possibly undefined
// 1406777C1: variable 'v56' is possibly undefined
// 14067781B: variable 'v59' is possibly undefined
// 140677933: variable 'v68' is possibly undefined
// 140A6AEF8: using guessed type wchar_t *off_140A6AEF8[2];
// 140B30168: using guessed type wchar_t aNmaxpower[10];
// 140B30198: using guessed type wchar_t aNpower_0[7];
// 140B301A8: using guessed type wchar_t aArbonuses[10];
// 140B301C0: using guessed type wchar_t aNpower[7];
// 140B301D0: using guessed type wchar_t aBisactive_7[10];
// 140B301E8: using guessed type wchar_t aNsetid[7];
// 140B301F8: using guessed type wchar_t aStrname_67[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65560: using guessed type __int64 qword_140C65560;
// 140C655C0: using guessed type int dword_140C655C0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

