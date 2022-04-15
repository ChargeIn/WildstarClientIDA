//----- (00000001400B2F20) ----------------------------------------------------
void __fastcall sub_1400B2F20(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // r14
	int v5; // ebp
	int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // ebx
	int v9; // edx
	__int64 v10; // rdx
	__int64 v11; // rbx
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 - 152) && a2)
	{
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v5 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v8 = v6;
		if (!v6)
		{
			if (*(_DWORD*)(a1 + 316) != 9)
			{
				if (a1 == 424)
					v10 = 0i64;
				else
					v10 = a1 + 8;
				v11 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 - 152) + 80i64))(*(_QWORD*)(a1 - 152), v10);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 64i64))(v11, 0i64);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			}
			v9 = 9;
			goto LABEL_22;
		}
		if (v6 > 3002)
		{
			if (v6 == 3320)
			{
				v9 = 34;
				goto LABEL_22;
			}
			if (v6 == 3716)
			{
				v9 = 19;
				goto LABEL_22;
			}
		}
		else
		{
			if (v6 == 3002)
				goto LABEL_10;
			if (v6 < 10)
				goto LABEL_13;
			if (v6 <= 11)
			{
			LABEL_10:
				v9 = 16;
				goto LABEL_22;
			}
			if (v6 == 42)
			{
				v9 = 20;
			LABEL_22:
				sub_1400B23B0(a1 - 424, v9);
				goto LABEL_23;
			}
		}
	LABEL_13:
		sub_1400B2700(a1 - 424, v7, v6);
		v12 = 0x141D0D7A8i64;
		sub_1401A3130(95, 0, &v12, v8);
	LABEL_23:
		(**(void(__fastcall***)(__int64))a2)(a2);
		*(StackBase - 1) = v5;
	}
}
// 1400B2FBD: variable 'v7' is possibly undefined

