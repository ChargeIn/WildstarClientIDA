//----- (00000001404F7040) ----------------------------------------------------
__int64 __fastcall sub_1404F7040(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	unsigned int v5; // r12d
	__int64 v6; // rbx
	int v7; // eax
	__int64 v8; // rdi
	__int64(__fastcall * v9)(wchar_t**, _QWORD, __int64); // rax
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // r13
	__int64 v12; // rdx
	unsigned __int64 v13; // rsi
	unsigned int v14; // r14d
	__int64 v15; // rax
	unsigned int v16; // ebp
	__int64 v17; // rax
	signed int v18; // eax
	_QWORD* v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v28; // [rsp+30h] [rbp-178h] BYREF
	unsigned __int64 v29; // [rsp+38h] [rbp-170h] BYREF
	__int64 v30[2]; // [rsp+40h] [rbp-168h]
	__int64 v31[2]; // [rsp+50h] [rbp-158h]
	WCHAR Buffer[128]; // [rsp+60h] [rbp-148h] BYREF

	v3 = *(_QWORD*)(a1 + 2328);
	if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v5 = 0;
	v6 = 0i64;
	v29 = 0i64;
	v28 = 0i64;
	v7 = sub_1402EC590(v3, (__int64*)&v29);
	v8 = v29;
	if (v7 < 0 || (v7 = sub_1401DB2A0(v29, a2, &v28), v6 = v28, v7 < 0))
	{
		v5 = v7;
		goto LABEL_54;
	}
	v9 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	v10 = 0i64;
	v29 = 0i64;
	v30[0] = 0i64;
	v30[1] = 0i64;
	v31[0] = 0i64;
	v31[1] = 0i64;
	do
	{
		v11 = *(__int64*)((char*)v31 + v10);
		v12 = *(__int64*)((char*)v30 + v10);
		v13 = 0i64;
		v28 = v12;
		if (!v11)
			goto LABEL_26;
		do
		{
			v14 = *(_DWORD*)(v12 + 4 * v13);
			if (v9)
			{
				v15 = v9(off_140A6ADA8, v14, qword_140C63858);
			}
			else
			{
				if (dword_140C64F64)
					goto LABEL_24;
				if ((int)sub_14020BAC0() < 0)
					goto LABEL_22;
				v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(qword_140C654E8, v14);
			}
			if (!v15)
				goto LABEL_22;
			v16 = *(_DWORD*)(v15 + 16);
			v9 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			if (qword_140C63840)
			{
				v17 = qword_140C63840(off_140A6AC58, v16, qword_140C63858);
				goto LABEL_19;
			}
			if (!dword_140C650D4)
			{
				if ((int)sub_14020A140() >= 0)
				{
					v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AC8 + 24i64))(qword_140C64AC8, v16);
				LABEL_19:
					if (v17)
					{
						v18 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v6 + 80i64))(
							v6,
							*(unsigned int*)(v17 + 8),
							v14,
							0i64);
						if (v18 < 0)
						{
							sub_1401B3450((char*)Buffer, 128i64, v18);
							sub_1400035B0();
						}
					}
				}
			LABEL_22:
				v9 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			}
			v12 = v28;
		LABEL_24:
			++v13;
		} while (v13 < v11);
		v10 = v29;
	LABEL_26:
		v10 += 8i64;
		v29 = v10;
	} while (v10 < 0x10);
	v19 = *(_QWORD**)(a1 + 1024);
	if (v19)
		*v19 = *(_QWORD*)(a1 + 1032);
	v20 = *(_QWORD*)(a1 + 1032);
	if (v20)
		*(_QWORD*)(v20 + 1024) = *(_QWORD*)(a1 + 1024);
	v21 = *(_QWORD*)(a1 + 2328);
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	if (v21 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v21 + 24i64))(v21) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	sub_1405005B0(a1 + 2232);
	sub_140019490((_QWORD*)(a1 + 2232));
	v22 = *(_QWORD*)(a1 + 2176);
	if (v22)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
		*(_QWORD*)(a1 + 2176) = 0i64;
	}
	v23 = *(_QWORD*)(a1 + 2184);
	if (v23)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		*(_QWORD*)(a1 + 2184) = 0i64;
	}
	if (*(_QWORD*)(a1 + 2168) != v6)
	{
		if (v6)
			(**(void(__fastcall***)(__int64))v6)(v6);
		v24 = *(_QWORD*)(a1 + 2168);
		if (v24)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
		*(_QWORD*)(a1 + 2168) = v6;
	}
	if (*(_QWORD*)(a1 + 2160) != v8)
	{
		if (v8)
			(**(void(__fastcall***)(__int64))v8)(v8);
		v25 = *(_QWORD*)(a1 + 2160);
		if (v25)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		*(_QWORD*)(a1 + 2160) = v8;
	}
	*(_DWORD*)(a1 + 1040) = 1;
	v26 = *(_QWORD*)(a1 + 2192);
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		*(_QWORD*)(a1 + 2192) = 0i64;
	}
	*(_DWORD*)(a1 + 2200) = 0;
LABEL_54:
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	return v5;
}
// 1404F70A9: variable 'v3' is possibly undefined
// 140A6AC58: using guessed type wchar_t *off_140A6AC58[2];
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64AC8: using guessed type __int64 qword_140C64AC8;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C650D4: using guessed type int dword_140C650D4;
// 140C654E8: using guessed type __int64 qword_140C654E8;
// 1404F7040: using guessed type WCHAR Buffer[128];

