//----- (00000001400B4080) ----------------------------------------------------
void __fastcall sub_1400B4080(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rbx
	int v5; // ebp
	int v6; // eax
	unsigned int v7; // esi
	__int64 v8; // [rsp+40h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v5 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (*(_QWORD*)(a1 - 240) && a2)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v7 = v6;
		if (v6)
		{
			if (v6 == 10)
			{
				sub_1400B23B0(a1 - 512, 16);
			}
			else if (v6 != 7400 && v6 != 7403)
			{
				sub_1400B2700(a1 - 512, (unsigned int)(v6 - 7400), v6);
				v8 = 0x141D0DDB8i64;
				sub_1401A3130(95, 0, &v8, v7);
			}
		}
		(**(void(__fastcall***)(__int64))a2)(a2);
	}
	*(StackBase - 1) = v5;
}

