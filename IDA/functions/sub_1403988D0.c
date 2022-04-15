//----- (00000001403988D0) ----------------------------------------------------
__int64 sub_1403988D0(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4, ...)
{
	__int64 v4; // r13
	__int64 v7; // rbx
	_DWORD* v8; // rbp
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // r14d
	int* v12; // r12
	unsigned int v13; // ecx
	unsigned int v14; // esi
	int v15; // eax
	__int64 v16; // rax
	__int64 v17; // r13
	__int64 v18; // rax
	bool v19; // zf
	__int64 v20; // rcx
	int v21; // eax
	__int64 v22; // rax
	__int64 v23; // rax
	_DWORD* v24; // r12
	__int64 v25; // rax
	__int64 v26; // r14
	int v27; // eax
	unsigned int v28; // eax
	int v30; // eax
	__int64 v31[2]; // [rsp+40h] [rbp-68h] BYREF
	int v32; // [rsp+50h] [rbp-58h]
	__int64 v33; // [rsp+54h] [rbp-54h]
	int v34; // [rsp+5Ch] [rbp-4Ch]
	char v35; // [rsp+B0h] [rbp+8h] BYREF
	int v36; // [rsp+B8h] [rbp+10h]
	__int64 v37; // [rsp+C0h] [rbp+18h]
	__int64 v38; // [rsp+C8h] [rbp+20h]
	int* v39; // [rsp+D0h] [rbp+28h] BYREF
	va_list va; // [rsp+D0h] [rbp+28h]
	__int64* v41; // [rsp+D8h] [rbp+30h]
	_DWORD* v42; // [rsp+E0h] [rbp+38h]
	va_list va1; // [rsp+E8h] [rbp+40h] BYREF

	va_start(va1, a4);
	va_start(va, a4);
	v39 = va_arg(va1, int*);
	v41 = va_arg(va1, __int64*);
	v42 = va_arg(va1, _DWORD*);
	v38 = a4;
	v37 = a3;
	v4 = a3;
	if (*(_QWORD*)(a1 + 28736))
		sub_14057A2C0(a1);
	v7 = 0i64;
	v8 = (_DWORD*)sub_1403D90D0(a1, a2[7]);
	v9 = *(_QWORD*)(a1 + 120);
	if (v9)
	{
		if (a2[7] == *(_DWORD*)(v9 + 8))
		{
			v10 = *(_QWORD*)(qword_140C65898 + 120);
			if (v10)
			{
				if (v8[2] == *(_DWORD*)(v10 + 8) && *(_QWORD*)(qword_140C65898 + 26392))
				{
					v35 = 0;
					sub_1403F4900(a1, 0x18Fu, (__int64)&v35);
				}
			}
		}
	}
	v11 = v8[66];
	v12 = v39;
	v13 = **(_DWORD**)(v4 + 112);
	v36 = 1;
	v14 = 1;
	*a2 = v13;
	a2[7] = v8[2];
	v15 = dword_140C4D2A0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D2A0)
		v15 = *(_DWORD*)qword_140C63750;
	if (*((_BYTE*)&dword_140C4D2B0 + v15))
	{
		v16 = *(_QWORD*)(v4 + 112);
		if (*(_DWORD*)(v16 + 124) == 2 && (*(_DWORD*)(v16 + 268) & 0x4000000) == 0 && v11)
		{
			v17 = sub_1403D90D0(a1, v11);
			v18 = v38;
			v19 = v38 == 0;
			a2[9] = v11;
			v14 = sub_140398800(v19, a2, (__int64)v8, v17, (unsigned int*)(a1 + 27920), v18, 0i64, v19);
			if (v14 == 105)
			{
				v21 = 0;
				goto LABEL_24;
			}
			v4 = v37;
		}
	}
	if (*v12)
	{
		v22 = sub_1403D90D0(a1, *v12);
		v11 = *v12;
		v17 = v22;
	}
	else
	{
		v23 = sub_14055BDC0(a1, (__int64)v8, v4, 0, 0);
		v17 = v23;
		if (v23)
			v11 = *(_DWORD*)(v23 + 8);
		else
			v11 = 0;
	}
	v21 = v36;
LABEL_24:
	*v12 = v11;
	a2[9] = v11;
	if (v21)
		v14 = sub_140398800(a1 + 27920, a2, (__int64)v8, v17, (unsigned int*)(a1 + 27920), v38, 0i64, v38 == 0);
	v24 = v42;
	*v42 = 0;
	if (((v14 - 67) & 0xFFFFFFFD) == 0)
	{
		v20 = qword_140C65898;
		if (v8 == *(_DWORD**)(qword_140C65898 + 120))
		{
			v25 = sub_1403D90D0(qword_140C65898, v8[48]);
			v26 = v25;
			if (v25)
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v25 + 32i64))(v25))
				{
					if (*(_DWORD*)(v26 + 128) != 9)
					{
						LOBYTE(v27) = sub_14047C120((_QWORD*)v26);
						if (!v27)
						{
							v20 = *(_QWORD*)(qword_140C65898 + 25744);
							if (*(_DWORD*)(v20 + 8) == v8[48])
							{
								v31[0] = 0i64;
								v33 = 0i64;
								v32 = 0;
								v34 = 96;
								v31[1] = 0i64;
								v28 = sub_140398800(
									a1 + 27920,
									a2,
									(__int64)v8,
									v17,
									(unsigned int*)(a1 + 27920),
									v38,
									(__int64)v31,
									v38 == 0);
								if (!v28 || v28 == 317)
								{
									*v24 = 1;
								}
								else if (v28 != 51)
								{
									v14 = v28;
								}
								v20 = v31[0];
								if (v31[0])
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31[0] - 16) + 8i64))(v31[0] - 16);
							}
						}
					}
				}
			}
		}
	}
	if (v14 && v14 != 317)
		return v14;
	v39 = 0i64;
	if (qword_140C65B70)
	{
		v30 = sub_140561780(v20, a2, **(_DWORD**)(v37 + 112), (__int64*)va);
		v7 = (__int64)v39;
	}
	else
	{
		v30 = 1;
	}
	if (v41)
		*v41 = v7;
	if (v30)
		return 1i64;
	if (v8[32] != 24)
	{
		if (!v7)
			return 5i64;
		if (v14 != 317)
			sub_14046AFC0((__int64)v8, *(_QWORD*)(v7 + 312), v7);
	}
	if (v7)
	{
		sub_14039DD70(a1, *(_QWORD*)(v7 + 312), 1000, 0);
		if (*(_QWORD*)(a1 + 28736))
			sub_14057A2C0(a1);
	}
	return 0i64;
}
// 140398B36: variable 'v27' is possibly undefined
// 140398C26: variable 'v20' is possibly undefined
// 140C4D2A0: using guessed type int dword_140C4D2A0;
// 140C4D2B0: using guessed type int dword_140C4D2B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

