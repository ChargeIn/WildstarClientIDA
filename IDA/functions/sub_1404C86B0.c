//----- (00000001404C86B0) ----------------------------------------------------
__int64 __fastcall sub_1404C86B0(__int64* a1, __int64* a2)
{
	__int64 v2; // r11
	__int64 v5; // r8
	__int64 v6; // r9
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v10; // rdi
	unsigned int v11; // eax
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // [rsp+30h] [rbp+8h]

	v2 = *a1;
	if (*a1 && a2)
	{
		v5 = *(_QWORD*)(qword_140C659F0 + 824);
		v6 = *(_QWORD*)(v5 + 16);
		v7 = *(_QWORD*)(v5 + 24);
		if (v6 != v7)
		{
			while (*(_DWORD*)(*(_QWORD*)v6 + 188i64) != *(_DWORD*)(v2 + 20))
			{
				v6 += 8i64;
				if (v6 == v7)
					goto LABEL_6;
			}
			if (*(_QWORD*)v6 && *(_QWORD*)(*(_QWORD*)v6 + 280i64) == *a2)
			{
				a2[1] = 0i64;
				return 0i64;
			}
		}
	LABEL_6:
		v8 = sub_1404C8160(v2, *a2);
		if (v8 && *(_QWORD*)(v8 + 80))
		{
			a2[1] = v8;
			return 1i64;
		}
		v10 = *a1;
		if (*a2)
		{
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*a2 + 48i64))(*a2);
			v12 = *(_QWORD*)(v10 + 120);
			v13 = *(_QWORD*)(v12 + 8);
			v14 = v12;
			while (v13)
			{
				if (*(_DWORD*)(v13 + 32) < v11)
				{
					v13 = *(_QWORD*)(v13 + 24);
				}
				else
				{
					v14 = v13;
					v13 = *(_QWORD*)(v13 + 16);
				}
			}
			if (v14 == v12 || (v16 = v14, v11 < *(_DWORD*)(v14 + 32)))
				v16 = *(_QWORD*)(v10 + 120);
			if (v16 != v12)
			{
				v15 = *(_QWORD*)(v16 + 40);
				if (v15)
				{
					if (*(_QWORD*)(v15 + 80))
						a2[1] = v15;
				}
			}
		}
	}
	return 1i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

