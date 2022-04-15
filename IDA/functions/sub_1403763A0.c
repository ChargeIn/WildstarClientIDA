#include "../winhttp.h"

//----- (00000001403763A0) ----------------------------------------------------
__int64 __fastcall sub_1403763A0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int v5; // edi
	unsigned int v6; // eax
	__int64 v7; // rcx
	int v8; // eax
	int v9; // eax
	int v10; // eax
	__int64 result; // rax
	int* v12; // rdi
	__int64 v13; // rcx
	int v14; // esi
	int v15; // eax
	int* v16; // rax
	__int64 v17; // rcx
	__int64* v18; // rdi
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rsi
	unsigned int v22; // r9d
	bool v23; // cf
	__int64 v24; // rax
	__int64 v25; // rdi
	unsigned __int64 v26; // rax
	__int64 v27; // r14
	unsigned __int64 v28; // r12
	unsigned __int64 v29; // rsi
	int* v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // [rsp+38h] [rbp-38h]
	__int64 v35; // [rsp+40h] [rbp-30h] BYREF
	int v36; // [rsp+48h] [rbp-28h]
	__int64 v37; // [rsp+50h] [rbp-20h]
	__int64(__fastcall * v38)(__int64); // [rsp+58h] [rbp-18h]
	__int64 v39; // [rsp+60h] [rbp-10h]
	__int64 v40; // [rsp+68h] [rbp-8h]
	__int64 v41; // [rsp+A0h] [rbp+30h] BYREF

	*(_QWORD*)(a1 + 24) = a2;
	(**(void(__fastcall***)(__int64))a2)(a2);
	v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
	if (v4)
		v5 = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
	else
		v5 = 0;
	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 216i64))(*(_QWORD*)(a1 + 24));
	v7 = *(_QWORD*)(a1 + 24);
	v41 = v6;
	LODWORD(v34) = v5;
	*(_QWORD*)(a1 + 88) = v6;
	*(_QWORD*)(a1 + 96) = v34;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 40i64))(v7);
	if (v8)
	{
		v9 = v8 - 1;
		if (v9)
		{
			v10 = v9 - 1;
			if (!v10)
			{
				v12 = sub_14018B280(48i64, 0);
				if (v12)
				{
					*((_QWORD*)v12 + 3) = 0i64;
					*((_QWORD*)v12 + 4) = 0i64;
					*(_QWORD*)v12 = off_140B66260;
					*((_QWORD*)v12 + 5) = 0i64;
				}
				else
				{
					v12 = 0i64;
				}
				*((_QWORD*)v12 + 2) = a1;
				v13 = *(_QWORD*)(a1 + 16);
				if ((*(_DWORD*)(v13 + 236) & 0x100) == 0
					|| (v14 = (*(__int64(__fastcall**)(_QWORD, const wchar_t*, int*, __int64))(**(_QWORD**)(v13 + 40) + 40i64))(
						*(_QWORD*)(v13 + 40),
						L"Art\\Dev\\Sound_Emitter_Sphere.m3",
						v12 + 10,
						2i64),
						v14 >= 0))
				{
					v14 = 0;
					*(_QWORD*)(a1 + 48) = v12;
					goto LABEL_26;
				}
			LABEL_25:
				(**(void(__fastcall***)(int*, __int64))v12)(v12, 1i64);
				goto LABEL_26;
			}
			if (v10 != 1)
				return 2147942487i64;
		}
		v12 = sub_14018B280(80i64, 0);
		if (v12)
		{
			*((_QWORD*)v12 + 2) = 0i64;
			*((_QWORD*)v12 + 3) = 0i64;
			*((_QWORD*)v12 + 4) = 0i64;
			*(_QWORD*)v12 = off_140B66190;
			*((_QWORD*)v12 + 5) = 0i64;
			*((_QWORD*)v12 + 6) = 0i64;
			*(_QWORD*)(v12 + 15) = 0i64;
			v12[14] = 0;
			*((_QWORD*)v12 + 9) = 0i64;
			v15 = sub_140395080((__int64)v12, a1);
		}
		else
		{
			v12 = 0i64;
			v15 = sub_140395080(0i64, a1);
		}
	}
	else
	{
		v16 = sub_14018B280(64i64, 0);
		v12 = v16;
		if (v16)
		{
			*((_QWORD*)v16 + 2) = 0i64;
			v16[7] = 0;
			*(_QWORD*)v16 = off_140B660C0;
			*((_OWORD*)v16 + 2) = 0i64;
			*((_OWORD*)v16 + 3) = 0i64;
		}
		else
		{
			v12 = 0i64;
		}
		v15 = sub_140394620((__int64)v12, a1);
	}
	v14 = v15;
	if (v15 >= 0)
	{
		*(_QWORD*)(a1 + 48) = v12;
		goto LABEL_26;
	}
	if (v12)
		goto LABEL_25;
LABEL_26:
	v17 = *(_QWORD*)(a1 + 48);
	if (!v17)
		return (unsigned int)v14;
	v18 = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 56i64))(v17);
	if (v18)
	{
		v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
		v20 = *(_QWORD*)(a1 + 24);
		LODWORD(v41) = 0;
		v21 = v19;
		if (v19)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)v20 + 392i64))(v20, 5i64, 1i64, &v41);
			if (!(_DWORD)v41 || !sub_14021A740(v41))
				LODWORD(v41) = 1106;
			(*(void(__fastcall**)(__int64*, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*v18 + 648))(
				v18,
				sub_140379300,
				a1);
			v22 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 880i64)
				- *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 32i64))(v21) + 28);
			sub_1403793C0(a1, v18, v41, v22, 0);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)v20 + 392i64))(v20, 5i64, 0i64, &v41);
			if (!(_DWORD)v41 || !sub_14021A740(v41))
				LODWORD(v41) = *(_DWORD*)(a1 + 364);
			(*(void(__fastcall**)(__int64*, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*v18 + 648))(
				v18,
				sub_140379300,
				a1);
			sub_1403793C0(a1, v18, v41, 0, 32);
		}
		v23 = ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 200i64))(*(_QWORD*)(a1 + 24)) & 0x800) != 0;
		v24 = *v18;
		if (v23)
			(*(void(__fastcall**)(__int64*))(v24 + 736))(v18);
		else
			(*(void(__fastcall**)(__int64*))(v24 + 744))(v18);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 304i64))(a1, (unsigned int)v41);
	}
	result = sub_140376F30(a1);
	if ((int)result >= 0)
	{
		v25 = *(_QWORD*)(a1 + 16) + 5096i64;
		v41 = *(_QWORD*)(a1 + 24);
		if (*(_QWORD*)v25 == *(_QWORD*)(v25 + 8))
			sub_1400290D0(v25);
		v26 = (*(__int64(__fastcall**)(__int64*))(v25 + 24))(&v41);
		v27 = *(_QWORD*)(v25 + 16);
		v28 = v26;
		v29 = v26 % *(_QWORD*)(v25 + 8);
		v30 = sub_14018B280(32i64, 0);
		if (v30)
		{
			v31 = *(_QWORD*)(v27 + 8 * v29);
			*(_QWORD*)v30 = v28;
			*((_QWORD*)v30 + 1) = v31;
			v32 = v41;
			*((_QWORD*)v30 + 3) = a1;
			*((_QWORD*)v30 + 2) = v32;
		}
		else
		{
			v30 = 0i64;
		}
		*(_QWORD*)(v27 + 8 * v29) = v30;
		++* (_QWORD*)v25;
		*(_DWORD*)(a1 + 72) = 1;
		if (!*(_DWORD*)(a1 + 84))
		{
			v35 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2);
			v36 = 0;
			v37 = a1;
			v39 = 0i64;
			v40 = 1i64;
			v38 = sub_140377140;
			sub_1401B6BF0(v33, &v35, (int**)(a1 + 56));
		}
		return 0i64;
	}
	return result;
}
// 140376412: variable 'v34' is possibly undefined
// 140376770: variable 'v33' is possibly undefined
// 140AF5340: using guessed type wchar_t aArtDevSoundEmi[32];
// 140B660C0: using guessed type __int64 (__fastcall *off_140B660C0[79])();
// 140B66190: using guessed type __int64 (__fastcall *off_140B66190[53])();
// 140B66260: using guessed type __int64 (__fastcall *off_140B66260[27])();

