//----- (0000000140874220) ----------------------------------------------------
__int64 __fastcall sub_140874220(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	__int64 v8; // rbx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	unsigned __int64 v11; // rdx
	__int64 v13; // rcx

	v8 = sub_14086C4D0(*(_QWORD*)(a2 + 32));
	if (!v8)
		goto LABEL_15;
	if (!*(_QWORD*)(*(_QWORD*)(a3 + 144) + 32i64))
		sub_1403B5350();
	if (*(_QWORD*)(*(_QWORD*)(a3 + 144) + 32i64))
	{
		*(_QWORD*)(v8 + 32) = *a4;
		if (a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
		v9 = *(_QWORD*)(v8 + 24);
		*(_QWORD*)(v8 + 24) = a1;
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
		v10 = *(_QWORD**)(*(_QWORD*)(a3 + 144) + 32i64);
		if (v10[1] == *v10)
		{
			*(_BYTE*)(v8 + 18) &= 0xFCu;
			*(_WORD*)(v8 + 16) = 1;
		}
		else
		{
			*(_DWORD*)(v8 + 16) = *(_DWORD*)(*v10 + 16i64);
		}
		v11 = *(_QWORD*)(v8 + 32);
		if (v11)
			sub_140874400(a1, v11);
		return 1i64;
	}
	else
	{
	LABEL_15:
		v13 = *(_QWORD*)(a2 + 32);
		*(_QWORD*)(a2 + 32) = 0i64;
		if (v13)
			sub_140866000(v13);
		return 52i64;
	}
}

