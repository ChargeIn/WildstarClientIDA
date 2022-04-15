//----- (0000000140004AE0) ----------------------------------------------------
__int64 __fastcall sub_140004AE0(__int64 a1, __int64 a2)
{
	unsigned int i; // ebx
	__int64 v5; // rcx
	__int64 v6; // rax
	int v7; // r9d
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // r9d
	__int64 v12; // rcx
	__int64 v13; // rax
	int v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+28h] [rbp-20h]
	void(__fastcall * v17)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v18; // [rsp+38h] [rbp-10h]

	for (i = 0; i < *(_DWORD*)a2; ++i)
		sub_140006000(a1, *(_QWORD*)(a2 + 8) + 40i64 * i, 1);
	v5 = qword_140C65898;
	if (qword_140C65898)
	{
		v6 = *(_QWORD*)(qword_140C65898 + 29504) + 5896i64;
		if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5976i64))
		{
			v7 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5952i64);
			v8 = *(_QWORD*)(qword_140C65898 + 29504) + 5960i64;
			v15 = 0;
			v16 = v6;
			v17 = sub_1400A8020;
			v18 = 0i64;
			sub_140195960(v8, 0, (__int64)&v15, v7);
			v5 = qword_140C65898;
		}
		v9 = *(_QWORD*)(v5 + 32736);
		if (v9)
		{
			v10 = v9 + 240;
			if (!*(_QWORD*)(v10 + 80))
			{
				v11 = *(_DWORD*)(v10 + 56);
				v15 = 0;
				v16 = v10;
				v17 = sub_1400A8020;
				v18 = 0i64;
				sub_140195960(v10 + 64, 0, (__int64)&v15, v11);
			}
		}
	}
	v12 = qword_140C66DA8;
	v13 = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(v13 + 368) == 5)
		{
			v13 = *(_QWORD*)(v13 + 176);
			if (!v13)
				return 0i64;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v12 + 368) != 5)
					break;
				v12 = *(_QWORD*)(v12 + 176);
			} while (v12);
		}
		sub_1400EA3E0(*(_QWORD*)(v12 + 72), "AccountItemUpdate", &unk_1409D014D);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

