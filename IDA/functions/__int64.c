//----- (0000000140958720) ----------------------------------------------------
__int64(__fastcall* __fastcall sub_140958720(__int64 a1))(__int64)
{
	void (*v1)(void); // rax
	__int64 v3; // rsi
	_DWORD* StackBase; // rdi
	int v5; // ebp
	__int64(__fastcall * result)(__int64); // rax

	v1 = *(void (**)(void))(a1 + 64);
	if (v1)
		v1();
	if (!*(_DWORD*)(a1 + 232))
	{
		v3 = *(_QWORD*)(a1 + 200);
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v5 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 136i64))(v3);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		}
		*(StackBase - 1) = v5;
	}
	result = *(__int64(__fastcall**)(__int64))(a1 + 80);
	if (result)
		return (__int64(__fastcall*)(__int64))result(a1);
	return result;
}

