#include "../winhttp.h"

//----- (00000001407D24D0) ----------------------------------------------------
__int64 __fastcall sub_1407D24D0(__int64 a1)
{
	signed int v2; // eax
	__int64 v3; // rax
	int v4; // ebx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // ebx
	__int64 v9; // rbx
	__int64 v10; // rcx
	unsigned int i; // ebx
	__int64 v13; // rax
	__int128 v14; // xmm1
	__int64 v15; // rcx
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int128 v18; // xmm0
	__int128 v19; // xmm1
	__int128 v20; // xmm0
	unsigned int v21; // ecx
	unsigned int j; // r12d
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // rcx
	unsigned int v26; // ecx
	__int64 v27; // r15
	__int64 v28; // r14
	__int64* v29; // rbx
	__int64 v30; // rdx
	_WORD* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // r11
	_WORD* v34; // rax
	float v35; // xmm2_4
	_WORD* v36; // rdx
	__int64 v37; // rcx
	_WORD* v38; // rdx
	__int64 v39; // rcx
	unsigned int k; // r13d
	__int64 v41; // r15
	unsigned __int64 v42; // rax
	int* v43; // rax
	int* v44; // rdx
	__int64 v45; // rcx
	unsigned int m; // r10d
	__int64 v47; // r8
	__int64 v48; // r9
	_WORD* v49; // rcx
	_DWORD* v50; // rax
	__int128 v51; // [rsp+40h] [rbp-C0h] BYREF
	LPVOID v52[2]; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+68h] [rbp-98h] BYREF
	__int64 v55; // [rsp+70h] [rbp-90h]
	LPVOID Value; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v57)(); // [rsp+80h] [rbp-80h] BYREF
	__int64 v58; // [rsp+88h] [rbp-78h]
	LPVOID v59; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v60)(); // [rsp+A0h] [rbp-60h] BYREF
	const wchar_t* v61; // [rsp+A8h] [rbp-58h]
	LPVOID lpTlsValue; // [rsp+B0h] [rbp-50h]
	__int64 v63; // [rsp+B8h] [rbp-48h]
	int* v64; // [rsp+C0h] [rbp-40h]
	__int64 v65[4]; // [rsp+D0h] [rbp-30h] BYREF
	__int128 v66[2]; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v67[6]; // [rsp+110h] [rbp+10h] BYREF
	__int128 v68; // [rsp+170h] [rbp+70h]
	char Buffer[2048]; // [rsp+180h] [rbp+80h] BYREF

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 216) + 40i64))(*(_QWORD*)(a1 + 216), 0i64);
	if (v2 < 0)
	{
		sub_1401B3450(Buffer, 1024i64, v2);
		TlsValue = &off_140B5E648;
		v55 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v53 = 0x141E4F268i64;
		v57 = TlsValue;
		v58 = v55;
		v3 = *(_QWORD*)(a1 + 144);
		v59 = Value;
		v4 = sub_1401971E0(&dword_140C8B180, 27, &v53, Buffer, v3, &v57);
	LABEL_5:
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v4)
			DebugBreak();
		v10 = *(_QWORD*)(a1 + 224);
		if (v10)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			*(_QWORD*)(a1 + 224) = 0i64;
		}
		*(_QWORD*)(a1 + 8) = 0i64;
		return 0i64;
	}
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 224) + 32i64))(*(_QWORD*)(a1 + 224));
	v6 = *(_QWORD*)(a1 + 224);
	*(_QWORD*)(a1 + 8) = v5;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	v57 = *(__int64(__fastcall***)())(a1 + 8);
	v58 = (__int64)v57 + v7;
	v59 = 0i64;
	v8 = sub_1407D1000(&v57, (__int64)(v57 + 152), (__int64)v57);
	if (v8 < 0)
	{
		v55 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v57 = TlsValue;
		v58 = v55;
		*(_QWORD*)&v51 = &off_140B5E648;
		*((_QWORD*)&v51 + 1) = L"Result";
		v59 = Value;
		v52[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v51);
		LODWORD(v52[1]) = v8;
		v9 = *(_QWORD*)(a1 + 144);
		v60 = &off_140B5E648;
		v66[1] = *(_OWORD*)v52;
		*(_QWORD*)&v51 = &off_140B5E640;
		v61 = L"FileName";
		v66[0] = v51;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v60);
		v63 = v9;
		v65[1] = (__int64)v61;
		v60 = &off_140B5E638;
		v65[3] = v9;
		v65[0] = (__int64)&off_140B5E638;
		v53 = 0x141E4F328i64;
		v65[2] = (__int64)lpTlsValue;
		v4 = sub_1401971E0(&dword_140C8B17C, 27, &v53, v65, v66, &v57);
		v60 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v51 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v52[0]);
		goto LABEL_5;
	}
	sub_1407D7DC0((__int64*)(a1 + 496), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 48i64));
	sub_1407D7EA0((__int64*)(a1 + 512), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 64i64));
	sub_1407D7FA0((__int64*)(a1 + 528), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 80i64));
	sub_1407D80B0((__int64*)(a1 + 544), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 96i64));
	sub_1407D81C0((__int64*)(a1 + 560), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 112i64));
	sub_1407D82D0((__int64*)(a1 + 576), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 128i64));
	for (i = 0; i < *(_DWORD*)(*(_QWORD*)(a1 + 8) + 128i64); *(_OWORD*)(v15 + v13 + 96) = v20)
	{
		HIDWORD(v68) = 0;
		sub_1407E4830((int*)v67, 0i64, 0x6Cui64);
		v13 = *(_QWORD*)(a1 + 576);
		v14 = v67[1];
		v15 = 112i64 * i++;
		*(_OWORD*)(v15 + v13) = v67[0];
		v16 = v67[2];
		*(_OWORD*)(v15 + v13 + 16) = v14;
		v17 = v67[3];
		*(_OWORD*)(v15 + v13 + 32) = v16;
		v18 = v67[4];
		*(_OWORD*)(v15 + v13 + 48) = v17;
		v19 = v67[5];
		*(_OWORD*)(v15 + v13 + 64) = v18;
		v20 = v68;
		*(_OWORD*)(v15 + v13 + 80) = v19;
	}
	sub_1407D7DC0((__int64*)(a1 + 992), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 200i64));
	sub_1407D7EA0((__int64*)(a1 + 1008), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 216i64));
	sub_1407D7FA0((__int64*)(a1 + 1024), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 232i64));
	sub_1407D80B0((__int64*)(a1 + 1040), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 248i64));
	sub_1407D81C0((__int64*)(a1 + 1056), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 264i64));
	sub_1407D7DC0((__int64*)(a1 + 1488), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 352i64));
	sub_1407D7EA0((__int64*)(a1 + 1504), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 368i64));
	sub_1407D7FA0((__int64*)(a1 + 1520), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 384i64));
	sub_1407D80B0((__int64*)(a1 + 1536), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 400i64));
	sub_1407D81C0((__int64*)(a1 + 1552), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 416i64));
	sub_1407D7DC0((__int64*)(a1 + 1984), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 504i64));
	sub_1407D7EA0((__int64*)(a1 + 2000), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 520i64));
	sub_1407D7FA0((__int64*)(a1 + 2016), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 536i64));
	sub_1407D80B0((__int64*)(a1 + 2032), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 552i64));
	sub_1407D81C0((__int64*)(a1 + 2048), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 568i64));
	v21 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 744i64);
	if (v21)
	{
		sub_1407D7BA0((__int64*)(a1 + 280), v21);
		for (j = 0; j < *(_DWORD*)(*(_QWORD*)(a1 + 8) + 744i64); ++j)
		{
			v23 = 32i64 * j;
			if ((*(int(__fastcall**)(_QWORD, _QWORD, unsigned __int64*, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 24)
				+ 2984i64)
				+ 40i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 24) + 2984i64),
					*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 752i64) + 48i64 * j + 16),
					&v53,
					0i64) < 0)
				*(_QWORD*)(v23 + *(_QWORD*)(a1 + 280)) = 0i64;
			else
				*(_QWORD*)(v23 + *(_QWORD*)(a1 + 280)) = v53;
			v24 = *(_QWORD*)(a1 + 280);
			*(_QWORD*)&v51 = 150i64;
			*((_QWORD*)&v51 + 1) = 1065353216i64;
			v25 = *(_QWORD*)(v23 + v24);
			v52[0] = 0i64;
			v52[1] = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v25 + 584i64))(v25, 0i64, &v51);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v23 + *(_QWORD*)(a1 + 280)) + 208i64))(
				*(_QWORD*)(v23 + *(_QWORD*)(a1 + 280)),
				*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 752i64) + 48i64 * j));
		}
	}
	v26 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 832i64);
	if (v26 > 4)
		v26 = 4;
	v27 = v26;
	if (v26)
	{
		v28 = 0i64;
		v29 = (__int64*)(a1 + 328);
		do
		{
			v30 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 840i64);
			v31 = *(_WORD**)(v30 + v28 + 8);
			if (v31
				&& *v31
				&& (*(int(__fastcall**)(_QWORD, _QWORD, __int64*, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 24) + 3000i64)
					+ 40i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 24) + 3000i64),
						*(_QWORD*)(v30 + v28 + 8),
						v29,
						0i64) >= 0)
			{
				v32 = *v29;
				*(_QWORD*)&v51 = 150i64;
				*((_QWORD*)&v51 + 1) = 1065353216i64;
				v52[0] = 0i64;
				v52[1] = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v32 + 584i64))(v32, 0i64, &v51);
			}
			else
			{
				*v29 = 0i64;
			}
			++v29;
			v28 += 16i64;
			--v27;
		} while (v27);
	}
	v33 = *(_QWORD*)(a1 + 8);
	v34 = *(_WORD**)(v33 + 856);
	if (v34 && *v34)
	{
		v35 = fmaxf((float)*(int*)(*(_QWORD*)(a1 + 24) + 2972i64), *(float*)(*(_QWORD*)(a1 + 24) + 2976i64));
		*(_DWORD*)(a1 + 360) = (int)v35;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670
			+ 112i64))(
				qword_140C65670,
				*(_QWORD*)(v33 + 856),
				(unsigned int)(int)v35,
				0i64,
				0,
				0,
				0,
				a1 + 368);
	}
	v36 = *(_WORD**)(*(_QWORD*)(a1 + 8) + 896i64);
	if (v36
		&& *v36
		&& (*(int(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 24) + 2984i64) + 40i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 24) + 2984i64),
			v36,
			a1 + 424,
			0i64) >= 0)
	{
		v37 = *(_QWORD*)(a1 + 424);
		*(_QWORD*)&v51 = 150i64;
		*((_QWORD*)&v51 + 1) = 1065353216i64;
		v52[0] = 0i64;
		v52[1] = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v37 + 584i64))(v37, 0i64, &v51);
	}
	else
	{
		*(_QWORD*)(a1 + 424) = 0i64;
	}
	v38 = *(_WORD**)(*(_QWORD*)(a1 + 8) + 912i64);
	if (v38
		&& *v38
		&& (*(int(__fastcall**)(_QWORD, _WORD*, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 24) + 2984i64) + 40i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 24) + 2984i64),
			v38,
			a1 + 432,
			0i64) >= 0)
	{
		v39 = *(_QWORD*)(a1 + 432);
		*(_QWORD*)&v51 = 150i64;
		*((_QWORD*)&v51 + 1) = 1065353216i64;
		v52[0] = 0i64;
		v52[1] = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v39 + 584i64))(v39, 0i64, &v51);
	}
	else
	{
		*(_QWORD*)(a1 + 432) = 0i64;
	}
	sub_1407D7C90((__int64*)(a1 + 472), *(unsigned int*)(*(_QWORD*)(a1 + 8) + 1184i64));
	for (k = 0; k < *(_DWORD*)(*(_QWORD*)(a1 + 8) + 1184i64); ++k)
	{
		v41 = *(_QWORD*)(a1 + 472);
		v42 = *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1192i64) + 24i64 * k);
		v53 = v42;
		if (*(_QWORD*)(v41 + 16i64 * k + 8) <= v42)
		{
			v43 = sub_14018DB00(*(_QWORD*)(v41 + 16i64 * k), (unsigned int)v42, 12i64);
			v44 = *(int**)(v41 + 16i64 * k);
			v64 = v43;
			if (v44 != v43)
			{
				sub_1407DB590(v43, v44, 12i64 * *(_QWORD*)(v41 + 16i64 * k + 8));
				v45 = *(_QWORD*)(v41 + 16i64 * k);
				if (v45)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v45 - 16) + 8i64))(v45 - 16);
				*(_QWORD*)(v41 + 16i64 * k) = v64;
			}
			v42 = v53;
		}
		*(_QWORD*)(v41 + 16i64 * k + 8) = v42;
		for (m = 0;
			m < *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1192i64) + 24i64 * k);
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 472) + 16i64 * k) + 4 * v48 + 8) = *(_DWORD*)(*(_QWORD*)(a1 + 24)
				+ 1320i64))
		{
			v47 = m++;
			v48 = 3 * v47;
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 472) + 16i64 * k) + 4 * v48) = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1192i64) + 24i64 * k + 16)
				+ 8 * v47);
		}
	}
	v49 = *(_WORD**)(*(_QWORD*)(a1 + 8) + 1208i64);
	if (v49 && *v49)
	{
		v50 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, bool, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670
			+ 96i64))(
				qword_140C65670,
				*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1208i64),
				0i64,
				*v50 != 0,
				1,
				0,
				0,
				a1 + 488);
	}
	return 1i64;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8B17C: using guessed type _DWORD dword_140C8B17C;
// 140C8B180: using guessed type _DWORD dword_140C8B180;
// 1407D24D0: using guessed type char Buffer[2048];

