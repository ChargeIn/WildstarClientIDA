//----- (0000000140656BE0) ----------------------------------------------------
__int64 __fastcall sub_140656BE0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	unsigned __int8* v8; // r14
	int v9; // r13d
	__int64 v10; // r12
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	int v14; // edi
	int v15; // r15d
	_QWORD* v16; // rax
	__int64 v17; // rcx
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	_DWORD* v20; // rcx
	__int64* v21; // rax
	BOOL v22; // edi
	_QWORD* v23; // rax
	__int64 v24; // r11
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	BOOL* v27; // rcx
	__int64* v28; // rax
	int v29; // edi
	_QWORD* v30; // rax
	__int64 v31; // r11
	unsigned __int64* v32; // rdx
	unsigned __int64 v33; // r8
	_DWORD* v34; // rcx
	__int64* v35; // rax
	int v36; // edi
	_QWORD* v37; // rax
	__int64 v38; // r11
	unsigned __int64* v39; // rdx
	unsigned __int64 v40; // r8
	_DWORD* v41; // rcx
	__int64* v42; // rax
	int v43; // edi
	_QWORD* v44; // rax
	__int64 v45; // r11
	unsigned __int64* v46; // rdx
	unsigned __int64 v47; // r8
	_DWORD* v48; // rcx
	__int64* v49; // rax
	int v50; // edi
	_QWORD* v51; // rax
	__int64 v52; // r11
	unsigned __int64* v53; // rdx
	unsigned __int64 v54; // r8
	_DWORD* v55; // rcx
	__int64* v56; // rax
	int v57; // edi
	_QWORD* v58; // rax
	__int64 v59; // r11
	unsigned __int64* v60; // rdx
	unsigned __int64 v61; // r8
	_DWORD* v62; // rcx
	__int64* v63; // rax
	int v64; // edi
	_QWORD* v65; // rax
	__int64 v66; // r11
	unsigned __int64* v67; // rdx
	unsigned __int64 v68; // r8
	_DWORD* v69; // rcx
	__int64* v70; // rax
	int v71; // edi
	_QWORD* v72; // rax
	__int64 v73; // r11
	unsigned __int64* v74; // rdx
	unsigned __int64 v75; // r8
	_DWORD* v76; // rcx
	__int64* v77; // rax
	__int64 v78; // rdx
	_QWORD* v79; // rax
	__int64 v80; // rdx
	__int64(__fastcall * *v82)(); // [rsp+20h] [rbp-50h] BYREF
	int v83; // [rsp+28h] [rbp-48h]
	_QWORD* v84; // [rsp+30h] [rbp-40h]
	int v85; // [rsp+38h] [rbp-38h]
	__int64 v86; // [rsp+40h] [rbp-30h] BYREF
	__int64 v87; // [rsp+48h] [rbp-28h]

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = a1[4];
	v82 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v84 = a1;
	v85 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0((__int64)a1);
	v6 = a1[2];
	v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a1[2] += 16i64;
	v8 = (unsigned __int8*)(v3 + 6420);
	v9 = sub_1400578C0((__int64)a1);
	v83 = v9;
	v10 = 102i64;
	do
	{
		if (*v8)
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v11 = a1[2];
			v12 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			a1[2] += 16i64;
			v13 = sub_1400578C0((__int64)a1);
			v14 = *v8;
			v15 = v13;
			v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
			v17 = a1[2];
			*(_QWORD*)v17 = *v16;
			*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
			a1[2] += 16i64;
			v18 = (unsigned __int64*)sub_14018F0E0(&v86, L"bIsActive")[1];
			if (v18)
			{
				v19 = -1i64;
				do
					++v19;
				while (*((_BYTE*)v18 + v19));
				sub_140058710((__int64)a1, v18, v19);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v20 = (_DWORD*)a1[2];
			v20[2] = 1;
			*v20 = v14 != 0;
			a1[2] += 16i64;
			v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v22 = *(_QWORD*)(v8 + 60) != 0i64;
			v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v24 = *v23;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
			a1[2] += 16i64;
			v25 = (unsigned __int64*)sub_14018F0E0(&v86, L"bCanInteract")[1];
			if (v25)
			{
				v26 = -1i64;
				do
					++v26;
				while (*((_BYTE*)v25 + v26));
				sub_140058710((__int64)a1, v25, v26);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v27 = (BOOL*)a1[2];
			v27[2] = 1;
			*v27 = v22;
			a1[2] += 16i64;
			v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v29 = v8[1];
			v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v31 = *v30;
			*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
			a1[2] += 16i64;
			v32 = (unsigned __int64*)sub_14018F0E0(&v86, L"bUseableWhenDead")[1];
			if (v32)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v32 + v33));
				sub_140058710((__int64)a1, v32, v33);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v34 = (_DWORD*)a1[2];
			v34[2] = 1;
			*v34 = v29 != 0;
			a1[2] += 16i64;
			v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v36 = v8[2];
			v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v38 = *v37;
			*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
			a1[2] += 16i64;
			v39 = (unsigned __int64*)sub_14018F0E0(&v86, L"bUseableWhenHostile")[1];
			if (v39)
			{
				v40 = -1i64;
				do
					++v40;
				while (*((_BYTE*)v39 + v40));
				sub_140058710((__int64)a1, v39, v40);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v41 = (_DWORD*)a1[2];
			v41[2] = 1;
			*v41 = v36 != 0;
			a1[2] += 16i64;
			v42 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v42, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v43 = v8[3];
			v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v45 = *v44;
			*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
			a1[2] += 16i64;
			v46 = (unsigned __int64*)sub_14018F0E0(&v86, L"bShowCallout")[1];
			if (v46)
			{
				v47 = -1i64;
				do
					++v47;
				while (*((_BYTE*)v46 + v47));
				sub_140058710((__int64)a1, v46, v47);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v48 = (_DWORD*)a1[2];
			v48[2] = 1;
			*v48 = v43 != 0;
			a1[2] += 16i64;
			v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v50 = v8[5];
			v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v52 = *v51;
			*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
			a1[2] += 16i64;
			v53 = (unsigned __int64*)sub_14018F0E0(&v86, L"bClickToMove")[1];
			if (v53)
			{
				v54 = -1i64;
				do
					++v54;
				while (*((_BYTE*)v53 + v54));
				sub_140058710((__int64)a1, v53, v54);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v55 = (_DWORD*)a1[2];
			v55[2] = 1;
			*v55 = v50 != 0;
			a1[2] += 16i64;
			v56 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v56, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v57 = v8[6];
			v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v59 = *v58;
			*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
			a1[2] += 16i64;
			v60 = (unsigned __int64*)sub_14018F0E0(&v86, L"bIsHighlightable")[1];
			if (v60)
			{
				v61 = -1i64;
				do
					++v61;
				while (*((_BYTE*)v60 + v61));
				sub_140058710((__int64)a1, v60, v61);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v62 = (_DWORD*)a1[2];
			v62[2] = 1;
			*v62 = v57 != 0;
			a1[2] += 16i64;
			v63 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v63, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v64 = v8[7];
			v65 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v66 = *v65;
			*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
			a1[2] += 16i64;
			v67 = (unsigned __int64*)sub_14018F0E0(&v86, L"bShowOverhead")[1];
			if (v67)
			{
				v68 = -1i64;
				do
					++v68;
				while (*((_BYTE*)v67 + v68));
				sub_140058710((__int64)a1, v67, v68);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v69 = (_DWORD*)a1[2];
			v69[2] = 1;
			*v69 = v64 != 0;
			a1[2] += 16i64;
			v70 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v70, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v71 = v8[8];
			v72 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v73 = *v72;
			*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
			a1[2] += 16i64;
			v74 = (unsigned __int64*)sub_14018F0E0(&v86, L"bUsePlayerPath")[1];
			if (v74)
			{
				v75 = -1i64;
				do
					++v75;
				while (*((_BYTE*)v74 + v75));
				sub_140058710((__int64)a1, v74, v75);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v87)
				sub_14018B900(v87, 0);
			v76 = (_DWORD*)a1[2];
			v76[2] = 1;
			*v76 = v71 != 0;
			a1[2] += 16i64;
			v77 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v77, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			sub_1400FB2A0((__int64)&v82, *(_QWORD*)(v8 + 52), v15);
			sub_1400579E0((__int64)a1, v78, v15);
		}
		v8 += 72;
		--v10;
	} while (v10);
	v79 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	v80 = a1[2];
	*(_QWORD*)v80 = *v79;
	*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v80, v9);
	return 1i64;
}
// 140656DE5: variable 'v24' is possibly undefined
// 140656EA5: variable 'v31' is possibly undefined
// 140656F65: variable 'v38' is possibly undefined
// 140657025: variable 'v45' is possibly undefined
// 1406570E5: variable 'v52' is possibly undefined
// 1406571A5: variable 'v59' is possibly undefined
// 140657265: variable 'v66' is possibly undefined
// 140657325: variable 'v73' is possibly undefined
// 1406573CE: variable 'v78' is possibly undefined
// 140B2CB20: using guessed type wchar_t aBuseablewhende[17];
// 140B2CB48: using guessed type wchar_t aBuseablewhenho[20];
// 140B2CB70: using guessed type wchar_t aBisactive_6[10];
// 140B2CB88: using guessed type wchar_t aBcaninteract[13];
// 140B2CCF0: using guessed type wchar_t aBuseplayerpath[15];
// 140B2CD20: using guessed type wchar_t aBishighlightab[17];
// 140B2CD48: using guessed type wchar_t aBshowoverhead[14];
// 140B2CD68: using guessed type wchar_t aBshowcallout[13];
// 140B2CD88: using guessed type wchar_t aBclicktomove[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

