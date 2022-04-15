//----- (000000014039CE20) ----------------------------------------------------
__int64 __fastcall sub_14039CE20(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	int v5; // ecx
	__int64 v7; // rcx
	int v8; // eax

	v2 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 29064);
	if (v4)
	{
		if (a2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 88i64))(v4);
			goto LABEL_10;
		}
	}
	else if (a2)
	{
		v5 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 104i64))(a2) + 4);
		if (((unsigned int)(v5 - 1) <= 2 || v5 == 7) && (unsigned int)(dword_140C636A8 - *(_DWORD*)(v2 + 29072)) < 0x3E8)
			return 2147500037i64;
		goto LABEL_11;
	}
	if (v4)
	{
	LABEL_10:
		if (!a2)
		{
		LABEL_12:
			v7 = *(_QWORD*)(v2 + 29064);
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				*(_QWORD*)(v2 + 29064) = 0i64;
			}
			v8 = dword_140C636A8;
			*(_QWORD*)(v2 + 29064) = a2;
			*(_DWORD*)(v2 + 29072) = v8;
			return 0i64;
		}
	LABEL_11:
		(**(void(__fastcall***)(__int64))a2)(a2);
		goto LABEL_12;
	}
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

