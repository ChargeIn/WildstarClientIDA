//----- (0000000140005600) ----------------------------------------------------
__int64 __fastcall sub_140005600(__int64 a1, __int64 a2)
{
	unsigned int i; // r9d
	int* v4; // r10
	__int64 v5; // rcx
	__int64 v6; // rax
	int v7; // r9d
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v11; // rax
	int v12; // r9d
	int v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	void(__fastcall * v15)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v16; // [rsp+38h] [rbp-10h]

	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v4 = (int*)(*(_QWORD*)(a2 + 8) + 16i64 * i);
		v5 = *v4;
		if ((unsigned int)(v5 - 1) > 2)
			*(_QWORD*)(a1 + 8 * v5 + 208) = *((_QWORD*)v4 + 1);
	}
	if (qword_140C65898)
	{
		v6 = *(_QWORD*)(qword_140C65898 + 29504) + 4264i64;
		if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 4344i64))
		{
			v7 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 4320i64);
			v13 = 0;
			v14 = v6;
			v15 = sub_1400A8020;
			v16 = 0i64;
			sub_140195960(v6 + 64, 0, (__int64)&v13, v7);
		}
	}
	v8 = qword_140C66DA8;
	v9 = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(v9 + 368) == 5)
		{
			v9 = *(_QWORD*)(v9 + 176);
			if (!v9)
				return 0i64;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v8 + 368) != 5)
					break;
				v8 = *(_QWORD*)(v8 + 176);
			} while (v8);
		}
		v11 = v8 + 584;
		if (!*(_QWORD*)(v11 + 80))
		{
			v12 = *(_DWORD*)(v11 + 56);
			v13 = 0;
			v14 = v11;
			v15 = sub_1400A8020;
			v16 = 0i64;
			sub_140195960(v11 + 64, 0, (__int64)&v13, v12);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

