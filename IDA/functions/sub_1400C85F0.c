//----- (00000001400C85F0) ----------------------------------------------------
char sub_1400C85F0(_QWORD* a1, __int64 a2, ...)
{
	char v4; // di
	__int64 v5; // rcx
	va_list va; // [rsp+60h] [rbp+18h] BYREF

	va_start(va, a2);
	if (!a1[4])
		return 0;
	v4 = 0;
	if (a1[35])
	{
		v5 = a1[36];
		if (v5)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5))
				return sub_1400F3040(
					a1[4] + 384i64,
					*(LARGE_INTEGER*)(a1[35] + 104i64),
					*(_DWORD*)(a1[36] + 8i64),
					*(_QWORD*)a2,
					*(_BYTE**)(a2 + 8),
					va);
		}
	}
	return v4;
}

