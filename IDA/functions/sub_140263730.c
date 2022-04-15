//----- (0000000140263730) ----------------------------------------------------
__int64 __fastcall sub_140263730(__int64* a1, __int64 a2, __int64 a3, unsigned int a4)
{
	unsigned int v5; // esi
	__int64 v7; // rbx
	__int64 v8; // rax

	v5 = a2;
	if (!a3)
		return (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 352))(a1, a2, 0i64, 0i64, 0i64);
	v7 = *a1;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 56i64))(a3);
	return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64, _QWORD, _QWORD))(v7 + 352))(a1, v5, v8, a4, 0i64);
}

