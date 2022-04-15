//----- (0000000140859F30) ----------------------------------------------------
__int64 __fastcall sub_140859F30(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rbx
	__int64 v5; // r15
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // r15
	__int64 v9; // rsi

	v2 = a2;
	if (!*(_QWORD*)(a2 + 16))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 344i64))(a1, a2);
	}
	*(_BYTE*)(v2 + 36) = 1;
	v4 = (__int64)(a1[15] - a1[14]) >> 3;
	if ((_DWORD)v4)
	{
		v5 = 8i64 * (unsigned int)v4;
		do
		{
			v5 -= 8i64;
			v6 = *(_QWORD*)(v5 + a1[14]);
			LODWORD(v4) = v4 - 1;
			if (!sub_140853640(v6, *(__int64**)(v2 + 8)))
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 144i64))(v6, v2);
		} while ((_DWORD)v4);
	}
	v7 = (__int64)(a1[18] - a1[17]) >> 3;
	if ((_DWORD)v7)
	{
		v8 = 8i64 * (unsigned int)v7;
		do
		{
			v8 -= 8i64;
			v9 = *(_QWORD*)(v8 + a1[17]);
			LODWORD(v7) = v7 - 1;
			if (!sub_140853640(v9, *(__int64**)(v2 + 8)))
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 144i64))(v9, v2);
		} while ((_DWORD)v7);
	}
	return 1i64;
}

