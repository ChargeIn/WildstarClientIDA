//----- (000000014026D5B0) ----------------------------------------------------
__int64 __fastcall sub_14026D5B0(__int64 a1, int a2, int a3, __int64* a4)
{
	int* v9; // rax
	__int64 v10; // rbx
	int v11; // esi
	int* v12; // rax

	if (!a4)
		return 2147942487i64;
	if (a3 == 3)
	{
		v9 = sub_14018B280(64i64, 0);
		v10 = (__int64)v9;
		if (v9)
		{
			*(_QWORD*)v9 = off_140B61790;
			*((_QWORD*)v9 + 6) = 0i64;
			*((_QWORD*)v9 + 7) = 0i64;
			v9[8] = 0;
			v9[2] = 1;
			*((_QWORD*)v9 + 2) = a1;
			v9[11] = *(_DWORD*)(a1 + 240) - 1;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = sub_14028A2D0(v10, a2);
		if (v11 < 0)
		{
			if (v10)
			{
				sub_14028A170(v10);
				sub_14018B900(v10, 0);
				return (unsigned int)v11;
			}
			return (unsigned int)v11;
		}
	}
	else
	{
		v12 = sub_14018B280(72i64, 0);
		v10 = (__int64)v12;
		if (v12)
		{
			*(_QWORD*)v12 = off_140B617E0;
			*((_QWORD*)v12 + 7) = 0i64;
			*((_QWORD*)v12 + 8) = 0i64;
			v12[8] = 0;
			*((_QWORD*)v12 + 5) = 0i64;
			v12[12] = 0;
			v12[2] = 1;
			*((_QWORD*)v12 + 2) = a1;
			v12[13] = *(_DWORD*)(a1 + 240) - 1;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = sub_140289A00(v10, a2, a3);
		if (v11 < 0)
		{
			if (v10)
			{
				sub_140289880(v10);
				sub_14018B900(v10, 0);
			}
			return (unsigned int)v11;
		}
	}
	*a4 = v10;
	return 0i64;
}
// 140B61790: using guessed type __int64 (__fastcall *off_140B61790[9])();
// 140B617E0: using guessed type __int64 (__fastcall *off_140B617E0[9])();

