//----- (000000014019F3F0) ----------------------------------------------------
__int64 __fastcall sub_14019F3F0(__int64* a1, __int64* a2, __int64 a3, int(__fastcall* a4)(__int64, __int64, _QWORD))
{
	__int64 v4; // rdi
	__int64 v5; // rsi
	__int64* v9; // rbx
	__int64 result; // rax
	__int64 v11; // [rsp+50h] [rbp+18h] BYREF

	v11 = a3;
	v4 = *a1;
	v5 = *a2;
	v11 = 0i64;
	v9 = &v11;
	if (v4)
	{
		while (v5)
		{
			if (a4(v4, v5, 0i64) > 0)
			{
				*v9 = v5;
				*(_QWORD*)(v5 + 112) = v9;
				v9 = (__int64*)(v5 + 120);
				v5 = *(_QWORD*)(v5 + 120);
			}
			else
			{
				*v9 = v4;
				*(_QWORD*)(v4 + 112) = v9;
				v9 = (__int64*)(v4 + 120);
				v4 = *(_QWORD*)(v4 + 120);
			}
			if (!v4)
				goto LABEL_7;
		}
		*v9 = v4;
		*(_QWORD*)(v4 + 112) = v9;
	}
	else
	{
	LABEL_7:
		if (v5)
		{
			*v9 = v5;
			*(_QWORD*)(v5 + 112) = v9;
		}
		else
		{
			*v9 = 0i64;
		}
	}
	result = v11;
	*a1 = 0i64;
	*a2 = result;
	if (result)
		*(_QWORD*)(result + 112) = a2;
	return result;
}
// 14019F47A: conditional instruction was optimized away because rdi.8!=0

