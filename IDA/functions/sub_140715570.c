//----- (0000000140715570) ----------------------------------------------------
__int64 __fastcall sub_140715570(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* v8; // rax
	__int64 v9; // r9
	__int64 v10; // rbx
	int v11; // esi
	__int64* i; // rax

	v8 = sub_14018B280(88i64, 0);
	v10 = (__int64)v8;
	if (v8)
	{
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		*((_QWORD*)v8 + 7) = 0i64;
		*(_QWORD*)v8 = off_140B77D38;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = sub_1407825E0(v10, a2, a3, v9, a5);
	if (v11 >= 0)
	{
		if (!*(_QWORD*)(v10 + 40))
		{
			for (i = (__int64*)(a1 + 48); *i; i = (__int64*)(*i + 48))
				;
			*(_QWORD*)(v10 + 40) = i;
			*(_QWORD*)(v10 + 48) = 0i64;
			*i = v10;
		}
		return 0i64;
	}
	else
	{
		if (v10)
			(**(void(__fastcall***)(__int64, __int64))v10)(v10, 1i64);
		return (unsigned int)v11;
	}
}
// 1407155DC: variable 'v9' is possibly undefined
// 140B77D38: using guessed type __int64 (__fastcall *off_140B77D38[8])();

