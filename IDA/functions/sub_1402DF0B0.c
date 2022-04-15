//----- (00000001402DF0B0) ----------------------------------------------------
__int64 __fastcall sub_1402DF0B0(__int64 a1, volatile signed __int32* a2, __int64 a3)
{
	__int64 result; // rax
	__int64* v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rdi
	unsigned __int64 v9; // rbp
	int** v10; // r15
	int* v11; // rax
	unsigned int v12; // esi
	int* v13; // rcx
	int v14; // eax

	result = (*(__int64(__fastcall**)(volatile signed __int32*, __int64, __int64))(*(_QWORD*)a2 + 120i64))(
		a2,
		a3,
		a1 + 32);
	if ((int)result >= 0)
	{
		*(_QWORD*)(a1 + 16) = a2;
		_InterlockedIncrement(a2 + 3);
		v6 = (__int64*)(*(_QWORD*)(a1 + 16) + 1656i64);
		if (!*(_QWORD*)(a1 + 5464))
		{
			*(_QWORD*)(a1 + 5464) = v6;
			*(_QWORD*)(a1 + 5472) = *v6;
			*v6 = a1;
			v7 = *(_QWORD*)(a1 + 5472);
			if (v7)
				*(_QWORD*)(v7 + 5464) = a1 + 5472;
		}
		v8 = *(_QWORD*)(a1 + 16) + 1664i64;
		if (*(_QWORD*)v8 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1672i64))
			sub_1400290D0(*(_QWORD*)(a1 + 16) + 1664i64);
		v9 = (*(__int64(__fastcall**)(__int64))(v8 + 24))(a1 + 32);
		v10 = (int**)(*(_QWORD*)(v8 + 16) + 8 * (v9 % *(_QWORD*)(v8 + 8)));
		v11 = sub_14018B280(32i64, 0);
		v12 = 0;
		if (v11)
		{
			v13 = *v10;
			*(_QWORD*)v11 = v9;
			*((_QWORD*)v11 + 1) = v13;
			v11[4] = *(_DWORD*)(a1 + 32);
			v11[5] = *(_DWORD*)(a1 + 36);
			*((_QWORD*)v11 + 3) = a1;
		}
		else
		{
			v11 = 0i64;
		}
		*v10 = v11;
		++* (_QWORD*)v8;
		v14 = sub_1402DF1C0(a1);
		if (v14 < 0)
			return (unsigned int)v14;
		return v12;
	}
	return result;
}

