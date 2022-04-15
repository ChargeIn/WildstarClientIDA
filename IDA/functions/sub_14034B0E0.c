//----- (000000014034B0E0) ----------------------------------------------------
__int64 __fastcall sub_14034B0E0(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rbx
	int v4; // edi
	__int64 v5; // rcx

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	v5 = *(_QWORD*)(a2 + 16);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a2 + 16) = 0i64;
	}
	*(StackBase - 1) = v4;
	return 1i64;
}

