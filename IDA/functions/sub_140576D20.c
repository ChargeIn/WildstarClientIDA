//----- (0000000140576D20) ----------------------------------------------------
__int64 __fastcall sub_140576D20(
	__int64* a1,
	__int64 a2,
	void(__fastcall*** a3)(_QWORD),
	void(__fastcall*** a4)(_QWORD),
	__int64* a5)
{
	int* v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rcx
	__int64 result; // rax
	unsigned int v13; // ebx
	__int64 v14; // rax
	__int64 v15; // rax

	v9 = sub_14018B280(624i64, 0);
	v10 = (__int64)v9;
	if (v9)
	{
		sub_14071BE70((__int64)v9);
		sub_1407E4830((int*)(v11 + 352), 0i64, 0xD0ui64);
		sub_1407E4830((int*)(v10 + 352), 0i64, 0x100ui64);
		*(_QWORD*)v10 = off_140B740F0;
		*(_QWORD*)(v10 + 608) = 0i64;
		*(_QWORD*)(v10 + 616) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	result = sub_14071E0F0(v10, a2, a3, a4);
	v13 = result;
	if ((int)result >= 0)
	{
		if (!*(_QWORD*)(v10 + 24))
		{
			*(_QWORD*)(v10 + 24) = a1;
			*(_QWORD*)(v10 + 32) = *a1;
			*a1 = v10;
			v14 = *(_QWORD*)(v10 + 32);
			if (v14)
				*(_QWORD*)(v14 + 24) = v10 + 32;
		}
		if (a5 && !*(_QWORD*)(v10 + 8))
		{
			*(_QWORD*)(v10 + 8) = a5;
			*(_QWORD*)(v10 + 16) = *a5;
			*a5 = v10;
			v15 = *(_QWORD*)(v10 + 16);
			if (v15)
				*(_QWORD*)(v15 + 8) = v10 + 16;
		}
	}
	else
	{
		if (!v10)
			return result;
		(**(void(__fastcall***)(__int64, __int64))v10)(v10, 1i64);
	}
	return v13;
}
// 140576D60: variable 'v11' is possibly undefined
// 140B740F0: using guessed type __int64 (__fastcall *off_140B740F0[21])();

