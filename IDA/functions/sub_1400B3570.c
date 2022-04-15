//----- (00000001400B3570) ----------------------------------------------------
__int64 __fastcall sub_1400B3570(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // r15
	int v4; // ebp
	int v6; // eax
	__int64 v7; // rdx
	unsigned int v8; // ebx
	unsigned int v9; // esi
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 result; // rax
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v8 = v6;
	if (v6)
	{
		if (v6 > 3310)
		{
			if ((unsigned int)(v6 - 7406) <= 1)
			{
				sub_1400B23B0(a1 - 472, 37);
				goto LABEL_16;
			}
		}
		else
		{
			if (v6 == 3310)
			{
				sub_1400B23B0(a1 - 472, 17);
				goto LABEL_16;
			}
			if ((unsigned int)(v6 - 10) <= 1 || v6 == 3002)
			{
				sub_1400B23B0(a1 - 472, 16);
				goto LABEL_16;
			}
		}
		sub_1400B2700(a1 - 472, v7, v6);
		v14 = 0x141D0DF90i64;
		sub_1401A3130(95, 0, &v14, v8);
		goto LABEL_16;
	}
	v9 = 0;
	v10 = a1 - 40;
	if (a1 == 472)
		v10 = 0i64;
	v11 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 - 200) + 80i64))(*(_QWORD*)(a1 - 200), v10);
	v12 = v11;
	if (*(_DWORD*)(a1 + 248) == 5)
	{
		LOBYTE(v9) = *(_DWORD*)(a1 + 240) != 0;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v11 + 64i64))(v11, v9);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
LABEL_16:
	result = (**(__int64(__fastcall***)(__int64))a2)(a2);
	*(StackBase - 1) = v4;
	return result;
}
// 1400B3623: variable 'v7' is possibly undefined

