//----- (00000001400235D0) ----------------------------------------------------
_QWORD* __fastcall sub_1400235D0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	int v10; // r11d
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int v22; // r11d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // r11d
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	int v30; // r11d
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	int v34; // r11d
	int v35; // r14d
	_QWORD* v36; // rax
	__int64 v37; // r10
	__int64 v38; // rdx
	__int64 v39; // rdi
	unsigned __int64* v40; // rdx
	unsigned __int64 v41; // rbx
	unsigned __int64 v42; // r8
	_DWORD* v43; // rcx
	__int64* v44; // rax
	int v45; // r14d
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	__int64 v49; // rdi
	unsigned __int64* v50; // rdx
	unsigned __int64 v51; // r8
	_DWORD* v52; // rcx
	__int64* v53; // rax
	__int64 v54; // rcx
	_QWORD* result; // rax
	__m128 v56; // xmm3
	__m128 v57; // xmm2
	unsigned int v58; // r8d
	__int64 v59; // rdx
	_QWORD* v60; // rax
	__int64 v61; // r10
	__int64 v62; // rdx
	unsigned __int16* v63; // r11
	unsigned __int64 v64; // rdx
	_QWORD* v65; // rax
	__int64 v66; // r10
	__int64 v67; // rdx
	__int64 v68; // rdi
	unsigned __int64* v69; // rdx
	__int64 v70; // rax
	double v71; // xmm0_8
	__int64* v72; // rax
	__m128 v73; // [rsp+40h] [rbp-38h] BYREF
	__int64 v74; // [rsp+80h] [rbp+8h] BYREF

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v6, L"strName", (unsigned __int16*)(a2 + 8));
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v9 = *(_QWORD*)(v8 + 16);
	*(_QWORD*)v9 = *v7;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v8 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v9, L"nLevel", v10);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v13, L"idWorld", v14);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v17 = *(_QWORD*)(v16 + 16);
	*(_QWORD*)v17 = *v15;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v16 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v17, L"idClass", v18);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v21 = *(_QWORD*)(v20 + 16);
	*(_QWORD*)v21 = *v19;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(v20 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v21, L"idRace", v22);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v25 = *(_QWORD*)(v24 + 16);
	*(_QWORD*)v25 = *v23;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v24 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v25, L"idGender", v26);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v29 = *(_QWORD*)(v28 + 16);
	*(_QWORD*)v29 = *v27;
	*(_DWORD*)(v29 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(v28 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v29, L"idPath", v30);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v33 = *(_QWORD*)(v32 + 16);
	*(_QWORD*)v33 = *v31;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(v32 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v33, L"idFaction", v34);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v35 = *(_DWORD*)(a2 + 708);
	v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v38 = *(_QWORD*)(v37 + 16);
	*(_QWORD*)v38 = *v36;
	*(_DWORD*)(v38 + 8) = *((_DWORD*)v36 + 2);
	*(_QWORD*)(v37 + 16) += 16i64;
	v39 = *(_QWORD*)(a1 + 16);
	v40 = (unsigned __int64*)sub_14018F0E0(&v73, L"bDisabled")[1];
	v41 = -1i64;
	if (v40)
	{
		v42 = -1i64;
		do
			++v42;
		while (*((_BYTE*)v40 + v42));
		sub_140058710(v39, v40, v42);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v39 + 16) + 8i64) = 0;
		*(_QWORD*)(v39 + 16) += 16i64;
	}
	if (v73.m128_u64[1])
		sub_14018B900(v73.m128_i64[1], 0);
	v43 = *(_DWORD**)(v39 + 16);
	v43[2] = 1;
	*v43 = v35 != 0;
	*(_QWORD*)(v39 + 16) += 16i64;
	v44 = (__int64*)sub_1400580E0(v39, -3);
	sub_14005EA50(v39, v44, (int*)(*(_QWORD*)(v39 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v39 + 16) - 16i64));
	*(_QWORD*)(v39 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v45 = *(_DWORD*)(a2 + 712);
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v48 = *(_QWORD*)(v47 + 16);
	*(_QWORD*)v48 = *v46;
	*(_DWORD*)(v48 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(v47 + 16) += 16i64;
	v49 = *(_QWORD*)(a1 + 16);
	v50 = (unsigned __int64*)sub_14018F0E0(&v73, L"bRequiresRename")[1];
	if (v50)
	{
		v51 = -1i64;
		do
			++v51;
		while (*((_BYTE*)v50 + v51));
		sub_140058710(v49, v50, v51);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v49 + 16) + 8i64) = 0;
		*(_QWORD*)(v49 + 16) += 16i64;
	}
	if (v73.m128_u64[1])
		sub_14018B900(v73.m128_i64[1], 0);
	v52 = *(_DWORD**)(v49 + 16);
	v52[2] = 1;
	*v52 = v45 != 0;
	*(_QWORD*)(v49 + 16) += 16i64;
	v53 = (__int64*)sub_1400580E0(v49, -3);
	sub_14005EA50(v49, v53, (int*)(*(_QWORD*)(v49 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v49 + 16) - 16i64));
	*(_QWORD*)(v49 + 16) -= 32i64;
	result = *(_QWORD**)(a1 + 16);
	v56 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 688), (__m128) * (unsigned int*)(a2 + 696));
	v57 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 692), (__m128)0i64);
	result[2] -= 16i64;
	v73 = _mm_unpacklo_ps(v56, v57);
	if (qword_140C658F8)
	{
		v58 = *(_DWORD*)(a2 + 684);
		v59 = *(unsigned int*)(a2 + 680);
		v74 = qword_140C77760;
		result = (_QWORD*)sub_140448BE0(v54, v59, v58, v73.m128_f32, 0i64, 1, &v74);
		if (result)
		{
			(*(void(__fastcall**)(_QWORD*))(*result + 8i64))(result);
			v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
			v62 = *(_QWORD*)(v61 + 16);
			*(_QWORD*)v62 = *v60;
			*(_DWORD*)(v62 + 8) = *((_DWORD*)v60 + 2);
			*(_QWORD*)(v61 + 16) += 16i64;
			sub_1400F0870(*(_QWORD*)(a1 + 16), v62, L"strZone", v63);
			result = *(_QWORD**)(a1 + 16);
			result[2] -= 16i64;
		}
	}
	v64 = *(_QWORD*)(a2 + 808);
	if (v64)
	{
		LODWORD(v74) = -8388609;
		sub_1401E83A0((float*)&v74, v64);
		v65 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v67 = *(_QWORD*)(v66 + 16);
		*(_QWORD*)v67 = *v65;
		*(_DWORD*)(v67 + 8) = *((_DWORD*)v65 + 2);
		*(_QWORD*)(v66 + 16) += 16i64;
		v68 = *(_QWORD*)(a1 + 16);
		v69 = (unsigned __int64*)sub_14018F0E0(&v73, L"fLastLoggedOutDays")[1];
		if (v69)
		{
			do
				++v41;
			while (*((_BYTE*)v69 + v41));
			sub_140058710(v68, v69, v41);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v68 + 16) + 8i64) = 0;
			*(_QWORD*)(v68 + 16) += 16i64;
		}
		if (v73.m128_u64[1])
			sub_14018B900(v73.m128_i64[1], 0);
		v70 = *(_QWORD*)(v68 + 16);
		v71 = *(float*)&v74;
		*(_DWORD*)(v70 + 8) = 3;
		*(double*)v70 = v71;
		*(_QWORD*)(v68 + 16) += 16i64;
		v72 = (__int64*)sub_1400580E0(v68, -3);
		sub_14005EA50(v68, v72, (int*)(*(_QWORD*)(v68 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v68 + 16) - 16i64));
		*(_QWORD*)(v68 + 16) -= 32i64;
		result = *(_QWORD**)(a1 + 16);
		result[2] -= 16i64;
	}
	return result;
}
// 140023605: variable 'v5' is possibly undefined
// 140023652: variable 'v8' is possibly undefined
// 140023675: variable 'v10' is possibly undefined
// 1400236A1: variable 'v12' is possibly undefined
// 1400236C4: variable 'v14' is possibly undefined
// 1400236ED: variable 'v16' is possibly undefined
// 140023710: variable 'v18' is possibly undefined
// 140023739: variable 'v20' is possibly undefined
// 14002375C: variable 'v22' is possibly undefined
// 140023785: variable 'v24' is possibly undefined
// 1400237A8: variable 'v26' is possibly undefined
// 1400237D1: variable 'v28' is possibly undefined
// 1400237F4: variable 'v30' is possibly undefined
// 14002381D: variable 'v32' is possibly undefined
// 140023840: variable 'v34' is possibly undefined
// 14002386C: variable 'v37' is possibly undefined
// 14002394D: variable 'v47' is possibly undefined
// 140023A7D: variable 'v54' is possibly undefined
// 140023AAA: variable 'v61' is possibly undefined
// 140023ACD: variable 'v63' is possibly undefined
// 140023B20: variable 'v66' is possibly undefined
// 1409ED8C8: using guessed type wchar_t aStrname_0[8];
// 1409ED8D8: using guessed type wchar_t aNlevel[7];
// 1409ED8E8: using guessed type wchar_t aIdworld[8];
// 1409ED8F8: using guessed type wchar_t aIdclass[8];
// 1409ED908: using guessed type wchar_t aIdrace[7];
// 1409ED918: using guessed type wchar_t aIdgender[9];
// 1409ED930: using guessed type wchar_t aIdpath[7];
// 1409ED940: using guessed type wchar_t aIdfaction[10];
// 1409ED958: using guessed type wchar_t aBdisabled[10];
// 1409ED970: using guessed type wchar_t aBrequiresrenam[16];
// 1409ED990: using guessed type wchar_t aStrzone[8];
// 1409ED9A0: using guessed type wchar_t aFlastloggedout[19];
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 1400235D0: using guessed type __m128 var_38;

