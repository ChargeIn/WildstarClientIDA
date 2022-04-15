//----- (000000014026D700) ----------------------------------------------------
__int64 __fastcall sub_14026D700(__int64 a1, int a2, int a3, int a4, __int64* a5)
{
	int* v10; // rax
	__int64 v11; // rbx
	int v12; // esi
	int* v13; // rax

	if (!a5)
		return 2147942487i64;
	if (a4 == 3)
	{
		v10 = sub_14018B280(72i64, 0);
		v11 = (__int64)v10;
		if (v10)
		{
			*(_QWORD*)v10 = off_140B61830;
			*((_QWORD*)v10 + 7) = 0i64;
			*((_QWORD*)v10 + 8) = 0i64;
			v10[9] = 0;
			v10[2] = 1;
			*((_QWORD*)v10 + 2) = a1;
			v10[12] = *(_DWORD*)(a1 + 240) - 1;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = sub_14028B5E0(v11, a2, a3);
		if (v12 < 0)
		{
			if (v11)
			{
				sub_14028B480(v11);
				sub_14018B900(v11, 0);
				return (unsigned int)v12;
			}
			return (unsigned int)v12;
		}
	}
	else
	{
		v13 = sub_14018B280(72i64, 0);
		v11 = (__int64)v13;
		if (v13)
		{
			*(_QWORD*)v13 = off_140B61880;
			*((_QWORD*)v13 + 7) = 0i64;
			*((_QWORD*)v13 + 8) = 0i64;
			v13[9] = 0;
			*((_QWORD*)v13 + 5) = 0i64;
			v13[12] = 0;
			v13[2] = 1;
			*((_QWORD*)v13 + 2) = a1;
			v13[13] = *(_DWORD*)(a1 + 240) - 1;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = sub_14028AD70(v11, a2, a3, a4);
		if (v12 < 0)
		{
			if (v11)
			{
				sub_14028ABF0(v11);
				sub_14018B900(v11, 0);
			}
			return (unsigned int)v12;
		}
	}
	*a5 = v11;
	return 0i64;
}
// 140B61830: using guessed type __int64 (__fastcall *off_140B61830[9])();
// 140B61880: using guessed type __int64 (__fastcall *off_140B61880[9])();

