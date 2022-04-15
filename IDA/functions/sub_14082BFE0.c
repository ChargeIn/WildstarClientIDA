//----- (000000014082BFE0) ----------------------------------------------------
char __fastcall sub_14082BFE0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v5; // rbx
	bool v6; // di
	__int64 v7; // r8
	__int64 v8; // r11
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax

	if (!a3)
		return 0;
	v5 = 0i64;
	v6 = 0;
	if (!*(_DWORD*)(a2 + 56))
		return 0;
	v7 = sub_140855940(a2);
	v8 = v7;
	if (!v7)
		return 0;
	v9 = *a3;
	v10 = a3[1];
	do
	{
		v11 = *a3;
		if (v9 != v10)
		{
			while (*(_DWORD*)(v7 + 24) != *(_DWORD*)v11 || ((*(_BYTE*)(v7 + 91) & 2) != 0) != *(_BYTE*)(v11 + 4))
			{
				v11 += 8i64;
				if (v11 == v10)
					goto LABEL_10;
			}
			goto LABEL_21;
		}
	LABEL_10:
		if (!v6)
		{
			v5 = *(_QWORD*)(v7 + 72);
			v6 = v5 != 0;
		}
		v7 = *(_QWORD*)(v7 + 64);
	} while (v7);
	if (!v5)
	{
	LABEL_19:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
		return 0;
	}
	while (1)
	{
		v12 = *a3;
		if (v9 != v10)
			break;
	LABEL_18:
		v5 = *(_QWORD*)(v5 + 72);
		if (!v5)
			goto LABEL_19;
	}
	while (*(_DWORD*)(v5 + 24) != *(_DWORD*)v12 || ((*(_BYTE*)(v5 + 91) & 2) != 0) != *(_BYTE*)(v12 + 4))
	{
		v12 += 8i64;
		if (v12 == v10)
			goto LABEL_18;
	}
LABEL_21:
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
	return 1;
}

