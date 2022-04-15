//----- (00000001400B4140) ----------------------------------------------------
void __fastcall sub_1400B4140(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rbx
	int v4; // esi
	int v5; // eax
	__int64 v6; // rdx
	unsigned int v7; // edi
	int v8; // edx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (*(_QWORD*)(a1 + 272))
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v7 = v5;
		if (!v5)
		{
			v8 = 30;
			goto LABEL_13;
		}
		if (v5 != 10)
		{
			if (v5 == 3010)
			{
				v8 = 29;
				goto LABEL_13;
			}
			if (v5 <= 3326)
				goto LABEL_9;
			if (v5 > 3328)
			{
				if (v5 == 3329)
				{
					v8 = 27;
				LABEL_13:
					sub_1400B23B0(a1, v8);
					goto LABEL_14;
				}
			LABEL_9:
				sub_1400B2700(a1, v6, v5);
				v9 = 0x141D0E0C0i64;
				sub_1401A3130(95, 0, &v9, v7);
				goto LABEL_14;
			}
		}
		v8 = 28;
		goto LABEL_13;
	}
LABEL_14:
	*(StackBase - 1) = v4;
}
// 1400B41BA: variable 'v6' is possibly undefined

