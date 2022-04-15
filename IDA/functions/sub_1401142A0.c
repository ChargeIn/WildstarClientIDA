#include "../winhttp.h"

//----- (00000001401142A0) ----------------------------------------------------
__int64 __fastcall sub_1401142A0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rbp
	__int64 v6; // rax
	int* v7; // rsi
	int* v8; // r14
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	WCHAR* v14; // rax
	__int64 v15; // r14
	__int64 v16; // rax
	int* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rsi
	unsigned __int64 i; // rbx
	wchar_t* v21; // rdx
	__int64 v22; // rax
	wchar_t* v23; // rax
	unsigned int* v24; // rax
	__int64 v25; // rcx
	unsigned int* v26; // rbx
	unsigned int* v27; // rsi
	unsigned __int64 v28; // rax
	__int64 v29; // r8
	int v30; // edx
	int v31; // ebx
	__int64 v32; // rax
	_WORD* v33; // rax
	__int64 v34; // rax
	int* v35; // rax
	__int64 v36; // rax
	_QWORD* v37; // rsi
	void(__fastcall * **v38)(_QWORD); // rbx
	__int64 v39; // rax
	__m128i* v40; // rax
	__m128i* v41; // rbx
	__int64 v42; // rdx
	int* v43; // rax
	__int64 v44; // rdx
	__int64 v46; // [rsp+30h] [rbp-48h] BYREF
	__int64 v47; // [rsp+38h] [rbp-40h]
	__int64 v48; // [rsp+40h] [rbp-38h]
	unsigned int v49; // [rsp+80h] [rbp+8h] BYREF
	int v50; // [rsp+90h] [rbp+18h] BYREF

	v4 = sub_1401A6B80(a2, L"PromptText");
	v5 = 0i64;
	if (v4)
		v6 = sub_1401A4F40(v4 + 32);
	else
		v6 = 0i64;
	v7 = (int*)&unk_1409D4564;
	v8 = 0i64;
	if (v6)
		v7 = (int*)v6;
	v9 = 0i64;
	if (*(_WORD*)v7)
	{
		do
			++v9;
		while (*((_WORD*)v7 + v9));
	}
	v10 = (2 * v9) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v8 = sub_14018B280(2 * (v10 + 1), 0);
	v11 = 2 * v10;
	sub_1407DB590(v8, v7, v11);
	if ((int*)((char*)v8 + v11))
		*(_WORD*)((char*)v8 + v11) = 0;
	v12 = sub_1401A6B80(a2, L"PromptTextId");
	if (v12)
		v14 = (WCHAR*)sub_1401A4F40(v12 + 32);
	else
		v14 = 0i64;
	sub_1400E2630(v13, &v46, v14, v8);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	v15 = v47;
	if (v47 != v48)
	{
		v16 = sub_1401A6B80(a2, L"PromptFont");
		if (v16 && (v17 = (int*)sub_1401A4F40(v16 + 32)) != 0i64)
			v18 = sub_1400E58C0(*(_QWORD*)(a1 + 32), v17);
		else
			v18 = *(_QWORD*)(a1 + 696);
		*(_QWORD*)(a1 + 1264) = v18;
		(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			*(_QWORD*)(*(_QWORD*)(a1 + 1264) + 96i64),
			v15,
			-1i64,
			a1 + 1272);
	}
	v19 = 0i64;
	for (i = 0i64; i < 6; ++i)
	{
		v21 = off_140A1C888[i];
		LOBYTE(v49) = 0;
		v22 = sub_1401A6B80(a2, v21);
		if (v22)
		{
			v23 = (wchar_t*)sub_1401A4F40(v22 + 32);
			sub_1401A52E0(v23, (bool*)&v49);
			if ((_BYTE)v49)
				v19 |= 1i64 << i;
		}
	}
	*(_DWORD*)(a1 + 1256) = v19;
	v24 = sub_1400F66F0(&v49, a2, L"PromptColor", 0xFF808080);
	v25 = qword_140C63678;
	v26 = (unsigned int*)(a1 + 1260);
	v27 = v24;
	if ((unsigned int*)(a1 + 1260) != v24)
	{
		sub_1401429A0(qword_140C63678, *v26);
		v28 = *v27;
		v25 = qword_140C63678;
		*v26 = v28;
		if (v28 < *(_QWORD*)(v25 + 48))
		{
			v29 = 32i64 * (unsigned int)v28 + *(_QWORD*)(v25 + 40);
			v30 = *(_DWORD*)(v29 + 16);
			if ((unsigned int)(v30 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v29 + 16) = v30 + 1;
		}
	}
	sub_1401429A0(v25, v49);
	v31 = 31744;
	v50 = 31744;
	v32 = sub_1401A6B80(a2, L"MaxTextLength");
	if (v32)
	{
		v33 = (_WORD*)sub_1401A4F40(v32 + 32);
		sub_1407DF428(v33, (__int64)L"%d", &v50);
	}
	if (v50 < 31744)
		v31 = v50;
	*(_QWORD*)(a1 + 1056) = v31;
	v34 = *(_QWORD*)(a1 + 48);
	if (v34 && *(_QWORD*)(v34 + 152))
	{
		if (!*(_QWORD*)(a1 + 1144))
		{
			v35 = sub_14018B280(48i64, 0);
			if (v35)
				v36 = sub_1401095E0((__int64)v35);
			else
				v36 = 0i64;
			*(_QWORD*)(a1 + 1144) = v36;
		}
		v37 = *(_QWORD**)(a1 + 1144);
		v38 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(a1 + 48) + 152i64);
		if (v38 != (void(__fastcall***)(_QWORD)) * v37)
		{
			if (v38)
				(**v38)(v38);
			if (*v37)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v37 + 8i64))(*v37);
				*v37 = 0i64;
			}
			*v37 = v38;
		}
	}
	v39 = sub_1401A6B80(a2, L"IMEBG");
	if (v39)
	{
		v40 = (__m128i*)sub_1401A4F40(v39 + 32);
		v41 = v40;
		if (v40)
		{
			v42 = 0i64;
			if (v40->m128i_i16[0])
			{
				do
					++v42;
				while (v40->m128i_i16[v42]);
				if (v42)
				{
					if (!*(_QWORD*)(a1 + 1152))
					{
						v43 = sub_14018B280(48i64, 0);
						if (v43)
							v5 = sub_1401095E0((__int64)v43);
						*(_QWORD*)(a1 + 1152) = v5;
					}
					v44 = *(_QWORD*)(a1 + 32);
					if (v44)
						sub_140109710(*(__int64**)(a1 + 1152), v44 + 240, v41, 0);
				}
			}
		}
	}
	if ((*(_QWORD*)(a1 + 656) & 0x1000000000i64) != 0)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 104i64))(a1, 0i64);
	if (v15)
		sub_14018B900(v15, 0);
	return 0i64;
}
// 14011437D: variable 'v13' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A1C070: using guessed type wchar_t aPrompttext[11];
// 140A1C088: using guessed type wchar_t aPrompttextid[13];
// 140A1C0A8: using guessed type wchar_t aPromptfont[11];
// 140A1C170: using guessed type wchar_t aPromptcolor[12];
// 140A1C1A8: using guessed type wchar_t aMaxtextlength[14];
// 140A1C888: using guessed type wchar_t *off_140A1C888[6];
// 140A329A8: using guessed type wchar_t aImebg[6];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

