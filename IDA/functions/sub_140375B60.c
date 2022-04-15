#include "../winhttp.h"

//----- (0000000140375B60) ----------------------------------------------------
void __fastcall sub_140375B60(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r11
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rdi
	const wchar_t* v10; // rax
	__int64 v11; // rcx
	__int64* v12; // rax
	__int64 v13; // r8
	__int64 v14; // rdi
	const wchar_t* v15; // rax
	_QWORD* v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // r14
	unsigned __int64 v22; // r15
	__int64 v23; // rdi
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rax
	void(__fastcall * **v27)(_QWORD, __int64); // rcx
	const void*** i; // rdi
	const void** v29; // rcx
	_QWORD* v30; // rdx
	_QWORD* v31; // rdx
	__int64 v32; // rcx
	_QWORD* v33; // rcx
	__int64 v34; // rcx
	_QWORD* v35; // rcx
	__int64 v36; // rcx
	_QWORD* v37; // rcx
	__int64 v38; // rcx
	_QWORD* v39; // rcx
	__int64 v40; // rcx
	_QWORD* v41; // rcx
	__int64 v42; // rcx
	_QWORD* v43; // rcx
	__int64 v44; // rcx
	_QWORD* v45; // rcx
	__int64 v46; // rcx
	_QWORD* v47; // rcx
	__int64 v48; // rcx
	_QWORD* v49; // rcx
	__int64 v50; // rcx
	_QWORD* v51; // rcx
	_QWORD* v52; // rcx
	_QWORD* v53; // rcx
	__int64 v54; // rcx
	__int64 v55; // rcx
	__int64 v56; // [rsp+38h] [rbp-19h]
	int v57; // [rsp+38h] [rbp-19h]
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-9h] BYREF
	__int64 v59; // [rsp+50h] [rbp-1h]
	LPVOID lpTlsValue; // [rsp+58h] [rbp+7h]
	__int64(__fastcall * *v61)(); // [rsp+68h] [rbp+17h] BYREF
	__int64 v62; // [rsp+70h] [rbp+1Fh]
	LPVOID v63; // [rsp+78h] [rbp+27h]
	__int64 v64; // [rsp+B8h] [rbp+67h] BYREF

	*(_QWORD*)a1 = off_140B65AE0;
	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	if (*(_DWORD*)(a1 + 308))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 48) + 184i64))(*(_QWORD*)(a1 + 48), 0i64);
		*(_DWORD*)(a1 + 308) = 0;
	}
	while (*(_QWORD*)(a1 + 1120))
	{
		if (*(_QWORD*)(a1 + 1120))
		{
			sub_14038FBF0(*(_QWORD**)(a1 + 1120));
			sub_14018B900(v3, 0);
		}
	}
	v4 = *(_QWORD*)(a1 + 1080);
	if (v4)
		sub_140376280(v4);
	v5 = *(_QWORD*)(a1 + 1104);
	if (v5)
		sub_1403762E0(v5);
	if (*(_DWORD*)(a1 + 1052))
	{
		TlsValue = &off_140B5E648;
		v59 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v6 = *(_QWORD*)(a1 + 16);
		v61 = TlsValue;
		v62 = v59;
		v63 = lpTlsValue;
		v7 = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		v8 = *v7;
		v64 = 0x141DEF910i64;
		v9 = (*(__int64(__fastcall**)(__int64*))(v8 + 16))(v7) + 520;
		v10 = sub_140379CB0((_QWORD*)a1);
		v57 = *(_DWORD*)(a1 + 96);
		LODWORD(v9) = sub_1401971E0(&dword_140C8A680, 20, &v64, v10, v9, *(_QWORD*)(a1 + 88), v57, &v61);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if ((_DWORD)v9)
			DebugBreak();
	}
	if (*(_DWORD*)(a1 + 1056))
	{
		TlsValue = &off_140B5E648;
		v59 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = *(_QWORD*)(a1 + 16);
		v61 = TlsValue;
		v62 = v59;
		v63 = lpTlsValue;
		v12 = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
		v13 = *v12;
		v64 = 0x141DEF830i64;
		v14 = (*(__int64(__fastcall**)(__int64*))(v13 + 16))(v12) + 520;
		v15 = sub_140379CB0((_QWORD*)a1);
		LODWORD(v56) = *(_DWORD*)(a1 + 96);
		LODWORD(v14) = sub_1401971E0(&dword_140C8A684, 20, &v64, v15, v14, *(_QWORD*)(a1 + 88), v56, &v61);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if ((_DWORD)v14)
			DebugBreak();
		sub_140367760(*(_QWORD**)(a1 + 16), a1);
	}
	v16 = *(_QWORD**)(a1 + 1168);
	if (v16)
		*v16 = *(_QWORD*)(a1 + 1176);
	v17 = *(_QWORD*)(a1 + 1176);
	if (v17)
		*(_QWORD*)(v17 + 1168) = *(_QWORD*)(a1 + 1168);
	v18 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 1168) = 0i64;
	*(_QWORD*)(a1 + 1176) = 0i64;
	--* (_QWORD*)(v18 + 5024);
	v19 = *(_QWORD*)(a1 + 1136);
	if (v19)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
		*(_QWORD*)(a1 + 1136) = 0i64;
	}
	v20 = *(_QWORD*)(a1 + 1144);
	if (v20)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
		*(_QWORD*)(a1 + 1144) = 0i64;
	}
	if (*(_DWORD*)(a1 + 72))
	{
		v21 = *(_QWORD*)(a1 + 16) + 5096i64;
		v64 = *(_QWORD*)(a1 + 24);
		v22 = (*(__int64(__fastcall**)(__int64*))(v21 + 24))(&v64);
		v23 = *(_QWORD*)(v21 + 16) + 8 * (v22 % *(_QWORD*)(v21 + 8));
		if (*(_QWORD*)v23)
		{
			while (v22 != **(_QWORD**)v23
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v21 + 32))(&v64, *(_QWORD*)v23 + 16i64))
			{
				v23 = *(_QWORD*)v23 + 8i64;
				if (!*(_QWORD*)v23)
					goto LABEL_35;
			}
			v24 = *(_QWORD*)v23;
			*(_QWORD*)v23 = *(_QWORD*)(*(_QWORD*)v23 + 8i64);
			sub_14018B900(v24, 0);
			--* (_QWORD*)v21;
		}
	}
LABEL_35:
	v25 = *(_QWORD*)(a1 + 48);
	if (v25)
	{
		v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 56i64))(v25);
		if (v26)
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v26 + 648i64))(v26, 0i64, 0i64);
		v27 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 48);
		if (v27)
			(**v27)(v27, 1i64);
	}
	for (i = (const void***)(a1 + 64); *i; v29[151] = 0i64)
	{
		(*i)[5] = 0i64;
		v29 = *i;
		v30 = (*i)[150];
		if (v30)
			*v30 = v29[151];
		v31 = v29[151];
		if (v31)
			v31[150] = v29[150];
		v29[150] = 0i64;
	}
	v32 = *(_QWORD*)(a1 + 24);
	if (v32)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v33 = *(_QWORD**)(a1 + 1296);
	if (v33)
		*v33 = *(_QWORD*)(a1 + 1304);
	v34 = *(_QWORD*)(a1 + 1304);
	if (v34)
		*(_QWORD*)(v34 + 1296) = *(_QWORD*)(a1 + 1296);
	*(_QWORD*)(a1 + 1296) = 0i64;
	*(_QWORD*)(a1 + 1304) = 0i64;
	v35 = *(_QWORD**)(a1 + 1280);
	if (v35)
		*v35 = *(_QWORD*)(a1 + 1288);
	v36 = *(_QWORD*)(a1 + 1288);
	if (v36)
		*(_QWORD*)(v36 + 1280) = *(_QWORD*)(a1 + 1280);
	*(_QWORD*)(a1 + 1280) = 0i64;
	*(_QWORD*)(a1 + 1288) = 0i64;
	v37 = *(_QWORD**)(a1 + 1264);
	if (v37)
		*v37 = *(_QWORD*)(a1 + 1272);
	v38 = *(_QWORD*)(a1 + 1272);
	if (v38)
		*(_QWORD*)(v38 + 1264) = *(_QWORD*)(a1 + 1264);
	*(_QWORD*)(a1 + 1264) = 0i64;
	*(_QWORD*)(a1 + 1272) = 0i64;
	v39 = *(_QWORD**)(a1 + 1248);
	if (v39)
		*v39 = *(_QWORD*)(a1 + 1256);
	v40 = *(_QWORD*)(a1 + 1256);
	if (v40)
		*(_QWORD*)(v40 + 1248) = *(_QWORD*)(a1 + 1248);
	*(_QWORD*)(a1 + 1248) = 0i64;
	*(_QWORD*)(a1 + 1256) = 0i64;
	v41 = *(_QWORD**)(a1 + 1232);
	if (v41)
		*v41 = *(_QWORD*)(a1 + 1240);
	v42 = *(_QWORD*)(a1 + 1240);
	if (v42)
		*(_QWORD*)(v42 + 1232) = *(_QWORD*)(a1 + 1232);
	*(_QWORD*)(a1 + 1232) = 0i64;
	*(_QWORD*)(a1 + 1240) = 0i64;
	v43 = *(_QWORD**)(a1 + 1216);
	if (v43)
		*v43 = *(_QWORD*)(a1 + 1224);
	v44 = *(_QWORD*)(a1 + 1224);
	if (v44)
		*(_QWORD*)(v44 + 1216) = *(_QWORD*)(a1 + 1216);
	*(_QWORD*)(a1 + 1216) = 0i64;
	*(_QWORD*)(a1 + 1224) = 0i64;
	v45 = *(_QWORD**)(a1 + 1200);
	if (v45)
		*v45 = *(_QWORD*)(a1 + 1208);
	v46 = *(_QWORD*)(a1 + 1208);
	if (v46)
		*(_QWORD*)(v46 + 1200) = *(_QWORD*)(a1 + 1200);
	*(_QWORD*)(a1 + 1200) = 0i64;
	*(_QWORD*)(a1 + 1208) = 0i64;
	v47 = *(_QWORD**)(a1 + 1184);
	if (v47)
		*v47 = *(_QWORD*)(a1 + 1192);
	v48 = *(_QWORD*)(a1 + 1192);
	if (v48)
		*(_QWORD*)(v48 + 1184) = *(_QWORD*)(a1 + 1184);
	*(_QWORD*)(a1 + 1184) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	v49 = *(_QWORD**)(a1 + 1168);
	if (v49)
		*v49 = *(_QWORD*)(a1 + 1176);
	v50 = *(_QWORD*)(a1 + 1176);
	if (v50)
		*(_QWORD*)(v50 + 1168) = *(_QWORD*)(a1 + 1168);
	*(_QWORD*)(a1 + 1168) = 0i64;
	*(_QWORD*)(a1 + 1176) = 0i64;
	if (*(_QWORD*)(a1 + 1120))
		sub_1401A4A00((const void***)(a1 + 1120));
	sub_140195D70(a1 + 976);
	*(_DWORD*)(a1 + 976) = 0;
	v51 = *(_QWORD**)(a1 + 992);
	if (v51)
		*v51 = *(_QWORD*)(a1 + 1000);
	v52 = *(_QWORD**)(a1 + 1000);
	if (v52)
		*v52 = *(_QWORD*)(a1 + 992);
	*(_QWORD*)(a1 + 992) = 0i64;
	*(_QWORD*)(a1 + 1000) = 0i64;
	v53 = *(_QWORD**)(a1 + 336);
	if (v53)
		sub_1407C2B30(v53, *(_QWORD*)(a1 + 352), *(_DWORD*)(a1 + 344), 9);
	v54 = *(_QWORD*)(a1 + 320);
	if (v54)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v54 + 8i64))(v54);
	v55 = *(_QWORD*)(a1 + 312);
	if (v55)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v55 + 8i64))(v55);
	if (*i)
		sub_1401A4A00(i);
}
// 140375BE9: variable 'v3' is possibly undefined
// 140375DA8: variable 'v56' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B65AE0: using guessed type __int64 (__fastcall *off_140B65AE0[14])();
// 140C8A680: using guessed type _DWORD dword_140C8A680;
// 140C8A684: using guessed type _DWORD dword_140C8A684;

