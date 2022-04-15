//----- (00000001404F75D0) ----------------------------------------------------
__int64 __fastcall sub_1404F75D0(__int64 a1, __int64 a2, __int64 a3, int* a4, __int64 a5, __int64 a6)
{
	__int64 v7; // rcx
	__int64 v10; // rsi
	unsigned int v11; // r15d
	__int64 v12; // rbx
	int v13; // eax
	__int64 v14; // rdi
	__int64 v15; // r12
	__int64 v16; // r13
	unsigned int v17; // esi
	__int64 v18; // rax
	__int64 v19; // rsi
	__int64 v20; // rax
	__int64 v21; // rdx
	int v22; // eax
	signed int v23; // eax
	__int64 v24; // r8
	__int64 v25; // r8
	_QWORD* v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v35; // [rsp+30h] [rbp-178h] BYREF
	__int64 v36; // [rsp+38h] [rbp-170h] BYREF
	int v37; // [rsp+40h] [rbp-168h]
	__int64 v38; // [rsp+48h] [rbp-160h]
	__int64 v39; // [rsp+50h] [rbp-158h]
	WCHAR Buffer[128]; // [rsp+60h] [rbp-148h] BYREF

	v7 = *(_QWORD*)(a1 + 2328);
	v10 = a2;
	v38 = a2;
	v39 = a6;
	if (v7 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v11 = 0;
	v12 = 0i64;
	v36 = 0i64;
	v35 = 0i64;
	v13 = sub_1402EC590(v7, &v36);
	v14 = v36;
	if (v13 < 0 || (v13 = sub_1401DB2A0(v36, v10, &v35), v12 = v35, v13 < 0))
	{
		v11 = v13;
		goto LABEL_52;
	}
	v15 = a5;
	if (!a5)
		goto LABEL_19;
	v16 = a3 - (_QWORD)a4;
	do
	{
		v17 = *(int*)((char*)a4 + v16);
		if (qword_140C63840)
		{
			v18 = qword_140C63840(off_140A6ADA8, v17, qword_140C63858);
		}
		else
		{
			if (dword_140C64F64 || (int)sub_14020BAC0() < 0)
				goto LABEL_17;
			v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(qword_140C654E8, v17);
		}
		v19 = v18;
		if (v18)
		{
			v20 = sub_14020A3A0(*(_DWORD*)(v18 + 16));
			if (v20)
			{
				v21 = *(unsigned int*)(v20 + 8);
				v22 = *a4;
				v36 = v19;
				v37 = v22;
				v23 = (*(__int64(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v12 + 72i64))(v12, v21, &v36);
				if (v23 < 0)
				{
					sub_1401B3450((char*)Buffer, 128i64, v23);
					sub_1400035B0();
				}
			}
		}
	LABEL_17:
		++a4;
		--v15;
	} while (v15);
	v10 = v38;
LABEL_19:
	if (v39)
	{
		v24 = *(int*)(v10 + 16);
		if (*(_DWORD*)(v10 + 12) > 0x10u || (unsigned int)v24 > 2)
			v25 = qword_140C658E8;
		else
			v25 = *(_QWORD*)(32i64 * *(int*)(v10 + 12) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v24;
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 312i64))(v12, v39, v25);
	}
	v26 = *(_QWORD**)(a1 + 1024);
	if (v26)
		*v26 = *(_QWORD*)(a1 + 1032);
	v27 = *(_QWORD*)(a1 + 1032);
	if (v27)
		*(_QWORD*)(v27 + 1024) = *(_QWORD*)(a1 + 1024);
	v28 = *(_QWORD*)(a1 + 2328);
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	if (v28 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v28 + 24i64))(v28) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	sub_1405005B0(a1 + 2232);
	sub_140019490((_QWORD*)(a1 + 2232));
	v29 = *(_QWORD*)(a1 + 2176);
	if (v29)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
		*(_QWORD*)(a1 + 2176) = 0i64;
	}
	v30 = *(_QWORD*)(a1 + 2184);
	if (v30)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
		*(_QWORD*)(a1 + 2184) = 0i64;
	}
	if (*(_QWORD*)(a1 + 2168) != v12)
	{
		if (v12)
			(**(void(__fastcall***)(__int64))v12)(v12);
		v31 = *(_QWORD*)(a1 + 2168);
		if (v31)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
		*(_QWORD*)(a1 + 2168) = v12;
	}
	if (*(_QWORD*)(a1 + 2160) != v14)
	{
		if (v14)
			(**(void(__fastcall***)(__int64))v14)(v14);
		v32 = *(_QWORD*)(a1 + 2160);
		if (v32)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		*(_QWORD*)(a1 + 2160) = v14;
	}
	*(_DWORD*)(a1 + 1040) = 1;
	v33 = *(_QWORD*)(a1 + 2192);
	if (v33)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
		*(_QWORD*)(a1 + 2192) = 0i64;
	}
	*(_DWORD*)(a1 + 2200) = 0;
LABEL_52:
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	return v11;
}
// 1404F7659: variable 'v7' is possibly undefined
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C654E8: using guessed type __int64 qword_140C654E8;
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 1404F75D0: using guessed type WCHAR Buffer[128];

