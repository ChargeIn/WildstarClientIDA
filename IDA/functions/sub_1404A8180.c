//----- (00000001404A8180) ----------------------------------------------------
__int64 __fastcall sub_1404A8180(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v5; // rbx
	unsigned int v6; // edx
	__int64 v7; // rdi
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // edx
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // [rsp+30h] [rbp+8h]
	__int64 v16; // [rsp+30h] [rbp+8h]

	v2 = qword_140C659B0;
	if (!a2)
		return 0i64;
	v5 = *(_QWORD*)(a2 + 24);
	if (!v5)
		return 0i64;
	v6 = *(_DWORD*)(v5 + 124);
	if (!v6)
	{
		v11 = *(_DWORD*)(v5 + 128);
		if (v11)
		{
			v12 = *(_QWORD*)(qword_140C659B0 + 1080);
			v13 = v12;
			v14 = *(_QWORD*)(v12 + 8);
			while (v14)
			{
				if (*(_DWORD*)(v14 + 32) < v11)
				{
					v14 = *(_QWORD*)(v14 + 24);
				}
				else
				{
					v13 = v14;
					v14 = *(_QWORD*)(v14 + 16);
				}
			}
			if (v13 == v12 || (v16 = v13, v11 < *(_DWORD*)(v13 + 32)))
				v16 = *(_QWORD*)(qword_140C659B0 + 1080);
			if (v16 != v12)
				return *(_DWORD*)(v16 + 36) & (unsigned int)(1 << *(_DWORD*)(a2 + 13816));
		}
		return 0i64;
	}
	v7 = sub_1404A7EB0(qword_140C659B0, v6);
	if (!v7)
		return 0i64;
	if ((unsigned int)sub_1404A7F50(v2, *(_DWORD*)(v5 + 124)))
		return 1i64;
	if (!*(_DWORD*)(*(_QWORD*)v7 + 4i64))
		return 0i64;
	v8 = *(_QWORD*)(v2 + 1048);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < *(_DWORD*)(v5 + 124))
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v15 = v9, *(_DWORD*)(v5 + 124) < *(_DWORD*)(v9 + 32)))
		v15 = *(_QWORD*)(v2 + 1048);
	if (v15 != v8)
		return *(_DWORD*)(v15 + 36) & (unsigned int)(1 << *(_DWORD*)(a2 + 13816));
	else
		return 0i64;
}
// 140C659B0: using guessed type __int64 qword_140C659B0;

