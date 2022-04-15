//----- (00000001400B4220) ----------------------------------------------------
void __fastcall sub_1400B4220(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rbx
	int v4; // edi
	int v5; // eax
	__int64 v6; // rdx
	unsigned int v7; // esi
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (*(_QWORD*)(a1 + 272))
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v7 = v5;
		if (v5)
		{
			sub_1400B2700(a1, v6, v5);
			v8 = 0x141D0E038i64;
			sub_1401A3130(95, 0, &v8, v7);
		}
		*(StackBase - 1) = v4;
	}
	else
	{
		*(StackBase - 1) = v4;
	}
}
// 1400B426A: variable 'v6' is possibly undefined

