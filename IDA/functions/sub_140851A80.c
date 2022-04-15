//----- (0000000140851A80) ----------------------------------------------------
__int64 __fastcall sub_140851A80(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rax

	v9 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 608i64))(a1, a4);
	if (v9)
		*(_BYTE*)(v9 + 32) = a3 & a2 | *(_BYTE*)(v9 + 32) & ~(_BYTE)a3;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1))
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
	if (!a4)
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 440i64))(a1, a2, a3);
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD*)a1 + 216i64))(
		a1,
		a2,
		a3,
		a4,
		0i64);
}

