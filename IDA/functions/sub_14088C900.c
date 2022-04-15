//----- (000000014088C900) ----------------------------------------------------
__int64 __fastcall sub_14088C900(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = a3;
	if (a3)
		++* (_DWORD*)(a3 + 80);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_WORD*)(a1 + 60) &= 0xFFF8u;
	v3 = *(_QWORD*)(a1 + 24);
	if (v3)
		*(_QWORD*)(v3 + 136) = a1;
	return a1;
}

