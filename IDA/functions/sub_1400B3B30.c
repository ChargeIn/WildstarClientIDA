//----- (00000001400B3B30) ----------------------------------------------------
void __fastcall sub_1400B3B30(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rsi
	int v3; // edi
	__int64 v4; // rbx

	if (*(_QWORD*)(a1 - 184))
	{
		if (a2)
		{
			StackBase = NtCurrentTeb()->NtTib.StackBase;
			v3 = *(StackBase - 1);
			*(StackBase - 1) = 1;
			v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 40i64))(a2);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
			*(StackBase - 1) = v3;
		}
	}
}

