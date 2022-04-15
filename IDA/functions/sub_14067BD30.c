//----- (000000014067BD30) ----------------------------------------------------
__int64 __fastcall sub_14067BD30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64* v4; // rax
	int v5; // edi
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (!v2 || (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) < 2)
	{
		v11 = a1[2];
		*(_QWORD*)v11 = 0xBFF0000000000000ui64;
		goto LABEL_16;
	}
	v4 = *(__int64**)(v3 + 48);
	v5 = -1;
	v6 = *v4;
	v7 = *(_DWORD*)(*v4 + 12);
	if (!v7)
	{
		v10 = sub_140617410(v6, *(_DWORD*)(v6 + 20));
		if (v10)
			v5 = *(_DWORD*)(*(_QWORD*)(v10 + 152) + 4i64);
		goto LABEL_14;
	}
	if (v7 == 2)
		goto LABEL_8;
	if (v7 > 4)
	{
		if (v7 <= 6)
		{
			v9 = sub_140223380(*(_DWORD*)(v6 + 20));
			if (v9)
				v5 = *(_DWORD*)(v9 + 16);
			goto LABEL_14;
		}
		if (v7 == 14)
		{
		LABEL_8:
			v8 = sub_14021FC40(*(_DWORD*)(v6 + 20));
			if (v8)
				v5 = *(_DWORD*)(v8 + 52);
		}
	}
LABEL_14:
	v11 = a1[2];
	*(double*)v11 = (double)v5;
LABEL_16:
	*(_DWORD*)(v11 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}

