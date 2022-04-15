#include "../winhttp.h"

//----- (000000014069D750) ----------------------------------------------------
void __fastcall sub_14069D750(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	__int64 v5; // rdx
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	__int64 v9; // rdi
	int v10; // esi
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	__int64 v16; // rdi
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	__int64 v22; // rdi
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	int v28; // eax
	_DWORD* v29; // rcx
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	int v37; // eax
	_DWORD* v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // r10
	__int64 v41; // rdx
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r10
	__int64 v45; // rdx
	_DWORD* v46; // rax
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	__int64(__fastcall * *v50)(); // [rsp+28h] [rbp-29h] BYREF
	int v51; // [rsp+30h] [rbp-21h]
	__int64 v52; // [rsp+38h] [rbp-19h]
	__int64(__fastcall * *v53)(); // [rsp+40h] [rbp-11h] BYREF
	int v54; // [rsp+48h] [rbp-9h]
	__int64 v55; // [rsp+50h] [rbp-1h]
	__int64(__fastcall * *v56)(); // [rsp+58h] [rbp+7h] BYREF
	int v57; // [rsp+60h] [rbp+Fh]
	__int64 v58; // [rsp+68h] [rbp+17h]
	__int64(__fastcall * *v59)(); // [rsp+70h] [rbp+1Fh] BYREF
	__int64 v60; // [rsp+78h] [rbp+27h]
	__int64 v61; // [rsp+80h] [rbp+2Fh]
	int v62; // [rsp+88h] [rbp+37h]

	v2 = *a2;
	v56 = off_140B56A08;
	v57 = -2;
	v58 = 0i64;
	v53 = off_140B56A08;
	v55 = 0i64;
	v54 = -2;
	v50 = off_140B56A08;
	v52 = 0i64;
	v51 = -2;
	if ((*(unsigned int(__fastcall**)(__int64*))(v2 + 8))(a2))
	{
		v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2[2] + 32) + 160i64), *((_DWORD*)a2 + 2));
		v8 = *(_QWORD*)(v7 + 16);
		*(_QWORD*)v8 = *v6;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
		*(_QWORD*)(v7 + 16) += 16i64;
		v9 = a2[2];
		v10 = -1;
		v11 = (unsigned __int64*)sub_14018F0E0(&v59, L"tBackgroundIcon")[1];
		if (v11)
		{
			v12 = -1i64;
			do
				++v12;
			while (*((_BYTE*)v11 + v12));
			sub_140058710(v9, v11, v12);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v9 + 16) + 8i64) = 0;
			*(_QWORD*)(v9 + 16) += 16i64;
		}
		if (v60)
			sub_14018B900(v60, 0);
		sub_14005E8E0(
			a2[2],
			*(_QWORD*)(a2[2] + 16) - 32i64,
			(int*)(*(_QWORD*)(a2[2] + 16) - 16i64),
			*(_QWORD*)(a2[2] + 16) - 16i64);
		v55 = a2[2];
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v53[2])(&v53, 0xFFFFFFFFi64);
		*(_QWORD*)(a2[2] + 16) -= 32i64;
		if ((*(unsigned int(__fastcall**)(__int64*))(*a2 + 8))(a2))
		{
			v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2[2] + 32) + 160i64), *((_DWORD*)a2 + 2));
			v15 = *(_QWORD*)(v14 + 16);
			*(_QWORD*)v15 = *v13;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
			*(_QWORD*)(v14 + 16) += 16i64;
			v16 = a2[2];
			v17 = (unsigned __int64*)sub_14018F0E0(&v59, L"tForegroundIcon")[1];
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
			if (v60)
				sub_14018B900(v60, 0);
			sub_14005E8E0(
				a2[2],
				*(_QWORD*)(a2[2] + 16) - 32i64,
				(int*)(*(_QWORD*)(a2[2] + 16) - 16i64),
				*(_QWORD*)(a2[2] + 16) - 16i64);
			v52 = a2[2];
			((void(__fastcall*)(__int64(__fastcall***)(), __int64))v50[2])(&v50, 0xFFFFFFFFi64);
			*(_QWORD*)(a2[2] + 16) -= 32i64;
			if ((*(unsigned int(__fastcall**)(__int64*))(*a2 + 8))(a2))
			{
				v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2[2] + 32) + 160i64), *((_DWORD*)a2 + 2));
				v21 = *(_QWORD*)(v20 + 16);
				*(_QWORD*)v21 = *v19;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
				*(_QWORD*)(v20 + 16) += 16i64;
				v22 = a2[2];
				v23 = (unsigned __int64*)sub_14018F0E0(&v59, L"tScanLines")[1];
				if (v23)
				{
					v24 = -1i64;
					do
						++v24;
					while (*((_BYTE*)v23 + v24));
					sub_140058710(v22, v23, v24);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
					*(_QWORD*)(v22 + 16) += 16i64;
				}
				if (v60)
					sub_14018B900(v60, 0);
				sub_14005E8E0(
					a2[2],
					*(_QWORD*)(a2[2] + 16) - 32i64,
					(int*)(*(_QWORD*)(a2[2] + 16) - 16i64),
					*(_QWORD*)(a2[2] + 16) - 16i64);
				v58 = a2[2];
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v56[2])(&v56, 0xFFFFFFFFi64);
				*(_QWORD*)(a2[2] + 16) -= 32i64;
				v59 = off_140B569F0;
				v61 = v58;
				v62 = 1;
				LODWORD(v60) = -2;
				if (v58 && v57 != -2)
				{
					v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v58 + 32) + 160i64), v57);
					v27 = *(_QWORD*)(v26 + 16);
					*(_QWORD*)v27 = *v25;
					*(_DWORD*)(v27 + 8) = *((_DWORD*)v25 + 2);
					*(_QWORD*)(v26 + 16) += 16i64;
					v28 = -1;
					v29 = (_DWORD*)(*(_QWORD*)(v58 + 16) - 16i64);
					if (v29 != dword_140A12138)
						v28 = v29[2];
					*(_QWORD*)(v58 + 16) = v29;
					if (v28 == 5)
					{
						v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v58 + 32) + 160i64), v57);
						v32 = *(_QWORD*)(v31 + 16);
						*(_QWORD*)v32 = *v30;
						*(_DWORD*)(v32 + 8) = *((_DWORD*)v30 + 2);
						*(_QWORD*)(v31 + 16) += 16i64;
						LODWORD(v60) = sub_1400578C0(v61);
					}
				}
				sub_14069DD00(a1 + 32, &v59);
				v59 = off_140B56A08;
				if (v61)
					sub_1400579E0(v61, v33, v60);
				v59 = off_140B569F0;
				v62 = 1;
				v61 = v55;
				LODWORD(v60) = -2;
				if (v55 && v54 != -2)
				{
					v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v55 + 32) + 160i64), v54);
					v36 = *(_QWORD*)(v35 + 16);
					*(_QWORD*)v36 = *v34;
					*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
					*(_QWORD*)(v35 + 16) += 16i64;
					v37 = -1;
					v38 = (_DWORD*)(*(_QWORD*)(v55 + 16) - 16i64);
					if (v38 != dword_140A12138)
						v37 = v38[2];
					*(_QWORD*)(v55 + 16) = v38;
					if (v37 == 5)
					{
						v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v55 + 32) + 160i64), v54);
						v41 = *(_QWORD*)(v40 + 16);
						*(_QWORD*)v41 = *v39;
						*(_DWORD*)(v41 + 8) = *((_DWORD*)v39 + 2);
						*(_QWORD*)(v40 + 16) += 16i64;
						LODWORD(v60) = sub_1400578C0(v61);
					}
				}
				sub_14069DD00(a1, &v59);
				v59 = off_140B56A08;
				if (v61)
					sub_1400579E0(v61, v42, v60);
				v59 = off_140B569F0;
				v62 = 1;
				v61 = v52;
				LODWORD(v60) = -2;
				if (v52 && v51 != -2)
				{
					v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v52 + 32) + 160i64), v51);
					v45 = *(_QWORD*)(v44 + 16);
					*(_QWORD*)v45 = *v43;
					*(_DWORD*)(v45 + 8) = *((_DWORD*)v43 + 2);
					*(_QWORD*)(v44 + 16) += 16i64;
					v46 = (_DWORD*)(*(_QWORD*)(v52 + 16) - 16i64);
					if (v46 != dword_140A12138)
						v10 = v46[2];
					*(_QWORD*)(v52 + 16) = v46;
					if (v10 == 5)
					{
						v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v52 + 32) + 160i64), v51);
						v49 = *(_QWORD*)(v48 + 16);
						*(_QWORD*)v49 = *v47;
						*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
						*(_QWORD*)(v48 + 16) += 16i64;
						LODWORD(v60) = sub_1400578C0(v61);
					}
				}
				sub_14069DD00(a1 + 16, &v59);
				v59 = off_140B56A08;
				if (v61)
					sub_1400579E0(v61, v5, v60);
			}
		}
	}
	v50 = off_140B56A08;
	if (v52)
		sub_1400579E0(v52, v5, v51);
	v53 = off_140B56A08;
	if (v55)
		sub_1400579E0(v55, v5, v54);
	v56 = off_140B56A08;
	if (v58)
		sub_1400579E0(v58, v5, v57);
}
// 14069D7E4: variable 'v7' is possibly undefined
// 14069D8AF: variable 'v14' is possibly undefined
// 14069D972: variable 'v20' is possibly undefined
// 14069DA56: variable 'v26' is possibly undefined
// 14069DAA1: variable 'v31' is possibly undefined
// 14069DAE0: variable 'v33' is possibly undefined
// 14069DB20: variable 'v35' is possibly undefined
// 14069DB6B: variable 'v40' is possibly undefined
// 14069DBA9: variable 'v42' is possibly undefined
// 14069DBE9: variable 'v44' is possibly undefined
// 14069DC32: variable 'v48' is possibly undefined
// 14069DC71: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B34B70: using guessed type wchar_t aTforegroundico_0[16];
// 140B34B90: using guessed type wchar_t aTscanlines_0[11];
// 140B34BC0: using guessed type wchar_t aTbackgroundico_0[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

