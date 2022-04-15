//----- (000000014034B210) ----------------------------------------------------
__int64 __fastcall sub_14034B210(__int64 a1, unsigned __int64* a2, __int64 a3, __int64 a4, __int64 a5)
{
	_DWORD* StackBase; // r14
	unsigned int v6; // ebx
	int v8; // ebp
	unsigned __int64 v9; // r15
	unsigned __int64 v11; // rsi
	unsigned __int64 v12; // rdi
	unsigned __int64 v13; // rcx
	__int64 result; // rax

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v6 = 1;
	v8 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	v9 = a2[2];
	v11 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v9 + 48i64))(v9);
	if ((*(_QWORD*)a5 == 0i64) != v11 && (*(int(__fastcall**)(unsigned __int64))(*(_QWORD*)v9 + 56i64))(v9) < 0)
		goto LABEL_7;
	v12 = *(unsigned int*)(a5 + 12);
	v13 = *a2;
	if (v12 + v11 > *a2)
	{
		if (v11 >= v13)
			goto LABEL_10;
		v12 = v13 - v11;
	}
	if ((*(int(__fastcall**)(unsigned __int64, __int64, unsigned __int64))(*(_QWORD*)v9 + 96i64))(v9, a4, v12) < 0)
	{
	LABEL_7:
		v6 = 2;
		goto LABEL_10;
	}
	if (v12 + v11 >= *a2)
		v6 = 17;
LABEL_10:
	result = v6;
	*(StackBase - 1) = v8;
	return result;
}

