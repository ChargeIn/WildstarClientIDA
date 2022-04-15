//----- (000000014062B0B0) ----------------------------------------------------
__int64 __fastcall sub_14062B0B0(__int64 a1, _QWORD* a2)
{
	int v2; // r8d
	unsigned int v3; // r9d
	int v6; // eax
	__int64 v8; // rdx
	unsigned int v9; // r12d
	unsigned __int64 v10; // rdi
	int* v11; // rax
	__int64 v12; // r14
	unsigned __int64 v13; // rbx
	unsigned __int64* v14; // rsi
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned __int64 i; // rsi
	unsigned __int64 v18; // r10
	unsigned __int64 v19; // rbx
	__int64 v20; // r11
	unsigned __int64 v21; // rdx
	unsigned __int64 v22; // r8
	unsigned __int64 v23; // rcx
	unsigned __int64 v24; // r9
	__int64 v25; // rdx
	int v26; // ecx
	__int64 v27; // rbx
	__int64 v28[2]; // [rsp+20h] [rbp-98h] BYREF
	__int64 v29; // [rsp+30h] [rbp-88h] BYREF
	unsigned __int64 v30; // [rsp+38h] [rbp-80h]
	char v31[64]; // [rsp+40h] [rbp-78h] BYREF

	v2 = *(_DWORD*)(a1 + 8);
	v3 = *(_DWORD*)(a1 + 24);
	if (dword_140C636A8 - v2 >= v3)
	{
		if ((unsigned int)(dword_140C636A8 - v2) < *(_DWORD*)(a1 + 16))
		{
			*(_DWORD*)(a1 + 8) = v3 + v2;
		}
		else
		{
			*(_DWORD*)(a1 + 8) = dword_140C636A8;
			*(_DWORD*)(a1 + 12) = 1;
		}
	}
	else
	{
		v6 = *(_DWORD*)(a1 + 12);
		if (v6 == *(_DWORD*)(a1 + 20))
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i", 64i64);
			return 2147500037i64;
		}
		*(_DWORD*)(a1 + 12) = v6 + 1;
	}
	v8 = a2[1];
	v9 = 0;
	v10 = 0i64;
	v30 = 0i64;
	v11 = sub_14018DBC0(0i64, v8, 8i64);
	v12 = 0i64;
	v13 = 0i64;
	if (v11)
		v12 = (__int64)v11;
	v29 = v12;
	if (!a2[1])
		goto LABEL_35;
	do
	{
		v14 = (unsigned __int64*)(*a2 + 8 * v13);
		v15 = 0i64;
		if (v10)
		{
			while (*(_QWORD*)(v12 + 8 * v15) != *v14)
			{
				if (++v15 >= v10)
					goto LABEL_14;
			}
		}
		else
		{
		LABEL_14:
			v16 = sub_140629AF0(a1, *v14);
			if (v16 && (*(_BYTE*)(v16 + 76) & 2) == 0)
			{
				sub_140033260(&v29, v14);
				v10 = v30;
				v12 = v29;
			}
		}
		++v13;
	} while (v13 < a2[1]);
	if (v10)
	{
		for (i = 0i64; i < v10; ++i)
		{
			v18 = *(_QWORD*)(v12 + 8 * i);
			if (v18)
			{
				v19 = *(_QWORD*)(a1 + 40);
				v20 = *(_QWORD*)(a1 + 32);
				v21 = 0i64;
				v22 = v19;
				while (v21 < v22)
				{
					v23 = v21 + ((v22 - v21) >> 1);
					v24 = *(_QWORD*)(*(_QWORD*)(v20 + 8 * v23) + 8i64);
					if (v18 < v24)
					{
						v21 = v23 + 1;
					}
					else
					{
						if (v18 <= v24)
							goto LABEL_28;
						v22 = v21 + ((v22 - v21) >> 1);
					}
				}
				v23 = v21;
			LABEL_28:
				if (v23 != v19)
				{
					v25 = *(_QWORD*)(v20 + 8 * v23);
					if (*(_QWORD*)(v25 + 8) == v18)
					{
						if (v25)
						{
							v26 = *(_DWORD*)(v25 + 76);
							*(_DWORD*)(v25 + 76) = v26 | 2;
							if (v26 != (v26 | 2))
							{
								v27 = *(_QWORD*)(qword_140C65898 + 29504);
								sub_14001B370(v31, 30i64, L"%I64u", *(_QWORD*)(v12 + 8 * i));
								sub_1400EA3E0(v27, "MailRead", L"S", v31);
							}
						}
					}
				}
			}
		}
		v28[0] = (unsigned int)v10;
		v28[1] = v12;
		sub_1403F4900(qword_140C65898, 0x122u, (__int64)v28);
	}
	else
	{
	LABEL_35:
		v9 = -2147467259;
	}
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	return v9;
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 1409EF014: using guessed type wchar_t aS_57[2];
// 140B01528: using guessed type wchar_t aI64u_4[6];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

