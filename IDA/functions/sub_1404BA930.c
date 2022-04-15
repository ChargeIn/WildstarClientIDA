//----- (00000001404BA930) ----------------------------------------------------
__int64 __fastcall sub_1404BA930(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned int i; // ebp
	__int64 v6; // rcx
	__int64 v7; // r14
	__int64 v8; // r8
	__int64 v9; // rdx
	__int64* v10; // rax
	__int64* v11; // rdx
	int v12; // r9d
	__int64 v13; // rcx
	int v14; // ebx
	__int64 v15; // rax
	unsigned __int64 v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // [rsp+40h] [rbp+8h] BYREF

	v19 = a1;
	v2 = qword_140C659F0;
	if (!a2)
		return 2147500037i64;
	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v6 = *(_QWORD*)(a2 + 8);
		v7 = 176i64 * i;
		if (*(_DWORD*)(v6 + v7 + 168))
		{
			v8 = *(_QWORD*)(v6 + v7 + 8);
			v9 = *(_QWORD*)(v2 + 824);
			if (!v8)
				return 2147500037i64;
			v10 = *(__int64**)(v9 + 16);
			v11 = *(__int64**)(v9 + 24);
			if (v10 == v11)
				return 2147500037i64;
			v12 = *(_DWORD*)(v6 + 176i64 * i);
			while (1)
			{
				v13 = *v10;
				if (*(_DWORD*)(*v10 + 8) == v12 && *(_QWORD*)(v13 + 16) == v8)
					break;
				if (++v10 == v11)
					return 2147500037i64;
			}
			if (!v13)
				return 2147500037i64;
			v14 = 0;
			v15 = sub_140205FA0(*(_DWORD*)(v13 + 184));
			if (v15)
				v14 = *(_DWORD*)(v15 + 4);
			LODWORD(v19) = v14;
			v16 = (*(__int64(__fastcall**)(__int64*))(v2 + 328))(&v19);
			v17 = *(_QWORD*)(v2 + 320) + 8 * (v16 % *(_QWORD*)(v2 + 312));
			if (*(_QWORD*)v17)
			{
				while (v16 != **(_QWORD**)v17
					|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v2 + 336))(&v19, *(_QWORD*)v17 + 16i64))
				{
					v17 = *(_QWORD*)v17 + 8i64;
					if (!*(_QWORD*)v17)
						goto LABEL_21;
				}
				v18 = *(_QWORD*)v17;
				*(_QWORD*)v17 = *(_QWORD*)(*(_QWORD*)v17 + 8i64);
				sub_14018B900(v18, 0);
				--* (_QWORD*)(v2 + 304);
			}
		}
	LABEL_21:
		sub_1405B0F50(*(_QWORD*)(v2 + 824), v7 + *(_QWORD*)(a2 + 8));
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingPropertiesRecieved", byte_1409D0F77);
	return 0i64;
}
// 1409D0F77: using guessed type _BYTE byte_1409D0F77[13];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

