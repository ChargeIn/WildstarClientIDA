//----- (000000014032C4D0) ----------------------------------------------------
__int64 __fastcall sub_14032C4D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	char v5[184]; // [rsp+40h] [rbp-B8h] BYREF

	if ((*(int(__fastcall**)(_QWORD, _QWORD, char*))(**(_QWORD**)(*(_QWORD*)a4 + 48i64) + 1048i64))(
		*(_QWORD*)(*(_QWORD*)a4 + 48i64),
		*(unsigned int*)(*(_QWORD*)a4 + 64i64),
		v5) >= 0)
		(*(void(__fastcall**)(__int64, char*, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD*)qword_140C65688 + 120i64))(
			qword_140C65688,
			v5,
			0i64,
			0i64,
			0,
			0,
			0i64);
	return 0i64;
}
// 140C65688: using guessed type __int64 qword_140C65688;

