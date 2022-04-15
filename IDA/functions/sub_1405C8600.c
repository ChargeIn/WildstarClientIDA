//----- (00000001405C8600) ----------------------------------------------------
void __fastcall sub_1405C8600(__int64 a1)
{
	__int64 v2; // rsi
	unsigned int v3; // ebp
	__int64 v4; // rcx
	int* v5; // rax
	int* v6; // rdx
	__int64 v7; // rax
	__int64 v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // r10
	__int64 v13; // rax
	unsigned int v14; // edi
	__int64 v15; // r10
	int v16; // eax
	unsigned int v17; // edx
	__int64 v18; // rcx
	_DWORD* v19; // r11
	unsigned int v20; // eax
	_QWORD* v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // r14
	__int64 v25; // rbp
	unsigned __int64 i; // rdi
	__int64 v27; // rax
	int v28; // r8d
	__int64 v29; // rax
	__int64 v30; // rdx
	__int64 v31; // [rsp+30h] [rbp-38h] BYREF
	__int64 v32; // [rsp+38h] [rbp-30h]

	v2 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1i64);
	if (!v2)
		return;
	if (*(_DWORD*)(a1 + 424))
	{
		sub_1405488C0(*(_QWORD*)(a1 + 416));
		sub_1405488C0(*(_QWORD*)(a1 + 408));
		*(_DWORD*)(a1 + 424) = 0;
	}
	v3 = **(_DWORD**)(v2 + 112);
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 144i64))(a1, v2, a1 + 16);
	v5 = (int*)sub_1405645B0(v4, v3, 1);
	v6 = v5;
	if (v5 && *(_WORD*)v5 && (*(_DWORD*)(a1 + 8) != 1 || *(_QWORD*)(a1 + 24) == *(_QWORD*)(a1 + 32)))
	{
		v7 = 0i64;
		while (*((_WORD*)v6 + ++v7) != 0)
			;
		sub_14001C480(a1 + 16, v6, (int*)((char*)v6 + 2 * v7));
	}
	v9 = *(_QWORD*)(qword_140C65898 + 25744);
	v10 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v9 + 5632));
	if (!v10)
	{
		v12 = qword_140C65898;
		if (*(_QWORD*)(qword_140C65898 + 120) != v9)
			goto LABEL_20;
		v13 = sub_14039DF50(qword_140C65898);
		if (!v13)
			goto LABEL_19;
		v10 = sub_1404695E0(v13);
		if (!v10)
			goto LABEL_19;
	}
	if (*(_QWORD*)(v10 + 312) == v2)
	{
		v12 = qword_140C65898;
		if (*(_QWORD*)(v2 + 80))
			*(_DWORD*)(a1 + 164) = 1;
		else
			*(_DWORD*)(a1 + 160) = 1;
	}
	else
	{
	LABEL_19:
		v12 = qword_140C65898;
	}
LABEL_20:
	if (*(_DWORD*)(a1 + 384))
	{
		*(_DWORD*)(a1 + 172) = 1;
		*(_DWORD*)(a1 + 384) = 0;
	}
	if (*(_DWORD*)(a1 + 388))
	{
		*(_DWORD*)(a1 + 168) = 1;
		*(_DWORD*)(a1 + 388) = 0;
	}
	if (*(_DWORD*)(a1 + 392) || *(_DWORD*)(a1 + 396))
	{
		*(_DWORD*)(a1 + 184) = 1;
		*(_QWORD*)(a1 + 392) = 0i64;
	}
	if (*(_DWORD*)(a1 + 328))
	{
		*(_DWORD*)(a1 + 180) = 1;
		*(_DWORD*)(a1 + 328) = 0;
	}
	v14 = *(_DWORD*)(*(_QWORD*)(v2 + 112) + 4i64);
	if (*(_QWORD*)(v12 + 120) && sub_1407A16F0(v11, v3) && (v16 = sub_1405A76A0(v15, v14), *v19 + v16))
	{
		v20 = sub_1405A6C30(v18, v17);
		v21 = sub_14018EFA0(&v31, (__int64)L"%d", v20);
		if (v21 != (_QWORD*)(a1 + 112))
			sub_14001C480(a1 + 112, (int*)v21[1], (int*)v21[2]);
		v22 = v32;
		if (v32)
			sub_14018B900(v32, 0);
		*(float*)(a1 + 156) = sub_1405A6F40(v22, v3);
	}
	else
	{
		sub_14001C2B0(a1 + 112, *(int**)(a1 + 120), *(int**)(a1 + 128));
		*(_DWORD*)(a1 + 156) = 0;
	}
	v23 = qword_140C65898;
	v24 = *(_QWORD*)(qword_140C65898 + 120);
	if (!*(_DWORD*)(a1 + 312) && v24 && *(_QWORD*)(v2 + 8) && !*(_DWORD*)(a1 + 260))
	{
		v25 = 0i64;
		for (i = 92i64; i < 0x64; i += 4i64)
		{
			v27 = *(_QWORD*)(v2 + 8);
			if (*(_DWORD*)(i + v27 - 8))
			{
				v28 = *(_DWORD*)(i + v27);
				if (v28 == 1)
				{
					v29 = sub_14055BDC0(v23, v24, v2, 1, 0);
					v30 = v29;
					if (!v29 || *(_DWORD*)(v29 + 128))
						return;
				}
				else
				{
					v30 = 0i64;
					if (!v28)
						v30 = v24;
				}
				if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						v30,
						*(unsigned int*)(i + *(_QWORD*)(v2 + 8) + 8),
						0i64,
						0i64,
						0))
				{
					*(_QWORD*)(a1 + 248) = sub_14023A540(*(_DWORD*)(*(_QWORD*)(v2 + 8) + 4 * v25 + 84));
					return;
				}
				v23 = qword_140C65898;
			}
			++v25;
		}
	}
}
// 1405C868A: variable 'v4' is possibly undefined
// 1405C87CA: variable 'v11' is possibly undefined
// 1405C87DC: variable 'v15' is possibly undefined
// 1405C87E1: variable 'v19' is possibly undefined
// 1405C87E6: variable 'v18' is possibly undefined
// 1405C87E6: variable 'v17' is possibly undefined
// 1405C882B: variable 'v22' is possibly undefined
// 140B15EF4: using guessed type wchar_t aD_55[3];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

