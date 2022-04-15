//----- (00000001400B3DE0) ----------------------------------------------------
void __fastcall sub_1400B3DE0(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rbx
	int v5; // ebp
	int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // r14d
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // [rsp+40h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v5 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (*(_QWORD*)(a1 - 216) && a2 && *(_QWORD*)(a1 + 240))
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v8 = v6;
		if (v6)
		{
			v9 = a1 - 488;
			if (v6 == 49)
			{
				sub_1400B23B0(v9, 31);
			}
			else
			{
				sub_1400B2700(v9, v7, v6);
				v11 = 0x141D0D8E8i64;
				sub_1401A3130(95, 0, &v11, v8);
			}
		}
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 64i64))(a2);
		(*(void(__fastcall**)(__int64))(a1 + 240))(v10);
		*(_QWORD*)(a1 + 240) = 0i64;
		(**(void(__fastcall***)(__int64))a2)(a2);
	}
	*(StackBase - 1) = v5;
}
// 1400B3E4B: variable 'v7' is possibly undefined

