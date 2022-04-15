//----- (0000000140715650) ----------------------------------------------------
__int64 __fastcall sub_140715650(__int64 a1, int a2, unsigned int* a3)
{
	int* v6; // rax
	__int64 v7; // rbx
	int v8; // esi
	__int64* i; // rax

	v6 = sub_14018B280(104i64, 0);
	v7 = (__int64)v6;
	if (v6)
	{
		*((_QWORD*)v6 + 3) = 0i64;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 5) = 0i64;
		*((_QWORD*)v6 + 6) = 0i64;
		*((_QWORD*)v6 + 7) = 0i64;
		*(_QWORD*)v6 = off_140B77D50;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = sub_140782830(v7, a2, a3);
	if (v8 >= 0)
	{
		if (!*(_QWORD*)(v7 + 40))
		{
			for (i = (__int64*)(a1 + 48); *i; i = (__int64*)(*i + 48))
				;
			*(_QWORD*)(v7 + 40) = i;
			*(_QWORD*)(v7 + 48) = 0i64;
			*i = v7;
		}
		return 0i64;
	}
	else
	{
		if (v7)
			(**(void(__fastcall***)(__int64, __int64))v7)(v7, 1i64);
		return (unsigned int)v8;
	}
}
// 140B77D50: using guessed type __int64 (__fastcall *off_140B77D50[5])();

