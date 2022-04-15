//----- (00000001405FF100) ----------------------------------------------------
_BOOL8 __fastcall sub_1405FF100(_QWORD* a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v4; // rax
	int v5; // r13d
	int v6; // r12d
	__int64 v7; // r8
	__int64 v8; // rbx
	unsigned __int64 v9; // rsi
	__int64 v10; // r8
	_DWORD* v11; // r9
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // r8
	_DWORD* v17; // r9
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64* v20; // rax
	__int64 v21; // rax
	int v22; // r9d
	__int64 v23; // rcx
	int v24; // r9d
	__int64 v25; // rcx
	__int64 v27; // [rsp+20h] [rbp-38h] BYREF
	__int64 v28; // [rsp+28h] [rbp-30h] BYREF
	int v29; // [rsp+30h] [rbp-28h] BYREF
	__int64 v30; // [rsp+38h] [rbp-20h]
	void(__fastcall * v31)(__int64); // [rsp+40h] [rbp-18h]
	__int64 v32; // [rsp+48h] [rbp-10h]
	__int64 v33; // [rsp+90h] [rbp+38h] BYREF
	__int64 v34; // [rsp+A0h] [rbp+48h] BYREF
	__int64 v35; // [rsp+A8h] [rbp+50h] BYREF

	v2 = a1[1];
	v4 = *(_QWORD*)(v2 + 8);
	v5 = 0;
	v6 = 0;
	v7 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v7 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v7 == v2 || (v33 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v33 = v2;
	v8 = v33;
	if (v33 == v2)
		return 0i64;
	v9 = 0i64;
	if (*(_QWORD*)(v33 + 48))
	{
		do
		{
			v10 = a1[13];
			v11 = (_DWORD*)(*(_QWORD*)(v8 + 40) + 4 * v9);
			v12 = *(_QWORD*)(v10 + 8);
			v13 = v10;
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < *v11)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v13 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v13 == v10 || *v11 < *(_DWORD*)(v13 + 32))
			{
				v34 = a1[13];
				v14 = &v34;
			}
			else
			{
				v33 = v13;
				v14 = &v33;
			}
			v15 = *v14;
			if (v15 != a1[13])
			{
				v35 = v15;
				sub_1405FFD90((__int64)(a1 + 12), &v35);
				v6 = 1;
			}
			v16 = a1[9];
			v17 = (_DWORD*)(*(_QWORD*)(v8 + 40) + 4 * v9);
			v18 = *(_QWORD*)(v16 + 8);
			v19 = v16;
			while (v18)
			{
				if (*(_DWORD*)(v18 + 32) < *v17)
				{
					v18 = *(_QWORD*)(v18 + 24);
				}
				else
				{
					v19 = v18;
					v18 = *(_QWORD*)(v18 + 16);
				}
			}
			if (v19 == v16 || *v17 < *(_DWORD*)(v19 + 32))
			{
				v28 = a1[9];
				v20 = &v28;
			}
			else
			{
				v27 = v19;
				v20 = &v27;
			}
			v21 = *v20;
			if (v21 != a1[9])
			{
				v35 = v21;
				sub_1400EFCD0((__int64)(a1 + 8), &v35);
				v5 = 1;
			}
			sub_1405FF990((__int64)(a1 + 4), (_DWORD*)(*(_QWORD*)(v8 + 40) + 4 * v9++));
		} while (v9 < *(_QWORD*)(v8 + 48));
	}
	v33 = v8;
	sub_1405FFEA0((__int64)a1, &v33);
	if (v5 && !*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5296i64))
	{
		v22 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5272i64);
		v23 = *(_QWORD*)(qword_140C65898 + 29504) + 5280i64;
		v30 = *(_QWORD*)(qword_140C65898 + 29504) + 5216i64;
		v29 = 0;
		v31 = sub_1400A8020;
		v32 = 0i64;
		sub_140195960(v23, 0, (__int64)&v29, v22);
	}
	if (v6 && !*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5432i64))
	{
		v24 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5408i64);
		v25 = *(_QWORD*)(qword_140C65898 + 29504) + 5416i64;
		v30 = *(_QWORD*)(qword_140C65898 + 29504) + 5352i64;
		v29 = 0;
		v31 = sub_1400A8020;
		v32 = 0i64;
		sub_140195960(v25, 0, (__int64)&v29, v24);
	}
	return v5 || v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

