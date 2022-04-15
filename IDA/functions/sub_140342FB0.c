//----- (0000000140342FB0) ----------------------------------------------------
__int64 __fastcall sub_140342FB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 v6; // rax
	__int64 result; // rax
	unsigned int v9; // ebx
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	__int64 v11; // [rsp+28h] [rbp-10h] BYREF

	v6 = *(_QWORD*)qword_140C65858;
	v10 = 0i64;
	v11 = 0i64;
	result = (*(__int64(__fastcall**)(__int64, __int64*))(v6 + 24))(qword_140C65858, &v10);
	if ((int)result >= 0)
	{
		if (a4)
			(*(void(__fastcall**)(__int64, __int64*, _QWORD))(*(_QWORD*)qword_140C65858 + 24i64))(
				qword_140C65858,
				&v11,
				a4);
		v9 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a1 + 40i64))(a1, a2, v10, v11);
		if (v10)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			v10 = 0i64;
		}
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		return v9;
	}
	return result;
}
// 140C65858: using guessed type __int64 qword_140C65858;

