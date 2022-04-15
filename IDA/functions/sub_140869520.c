//----- (0000000140869520) ----------------------------------------------------
__int64 __fastcall sub_140869520(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbp
	__int64 v4; // rbx
	__int64 v5; // rsi
	__int64 v6; // rax
	_QWORD* v7; // rdi

	v2 = a2;
	if (!*(_QWORD*)(a2 + 16))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 344i64))(a1, a2);
	}
	v4 = (__int64)(a1[22] - a1[21]) >> 3;
	if ((_DWORD)v4)
	{
		v5 = 8i64 * (unsigned int)v4;
		do
		{
			v6 = a1[21];
			v5 -= 8i64;
			LODWORD(v4) = v4 - 1;
			v7 = *(_QWORD**)(v5 + v6);
			if ((!*(_BYTE*)(v2 + 36) || !v7[9]) && !sub_140853640(*(_QWORD*)(v5 + v6), *(__int64**)(v2 + 8)))
				(*(void(__fastcall**)(_QWORD*, __int64))(*v7 + 136i64))(v7, v2);
		} while ((_DWORD)v4);
	}
	return 1i64;
}

