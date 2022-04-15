//----- (0000000140576AA0) ----------------------------------------------------
__int64 __fastcall sub_140576AA0(__int64* a1, int* a2, __int64* a3)
{
	int* v6; // rax
	__int64 v7; // rbx
	__int64 result; // rax
	unsigned int v9; // edi
	__int64 v10; // rax
	__int64 v11; // rax

	v6 = sub_14018B280(384i64, 0);
	v7 = (__int64)v6;
	if (v6)
	{
		*((_QWORD*)v6 + 1) = 0i64;
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 3) = 0i64;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 5) = 0i64;
		*((_QWORD*)v6 + 6) = 0i64;
		*((_QWORD*)v6 + 9) = 0i64;
		*((_QWORD*)v6 + 10) = 0i64;
		*((_QWORD*)v6 + 12) = 0i64;
		*((_QWORD*)v6 + 13) = 0i64;
		v6[31] = 0;
		v6[14] = 1414420037;
		*((_QWORD*)v6 + 18) = 0i64;
		*((_QWORD*)v6 + 19) = 0i64;
		*((_QWORD*)v6 + 21) = 0i64;
		*((_QWORD*)v6 + 22) = 0i64;
		*(_QWORD*)(v6 + 49) = 0i64;
		v6[32] = 1414420037;
		*((_QWORD*)v6 + 26) = 0i64;
		*(_QWORD*)v6 = off_140B742B0;
		sub_1407E4830(v6 + 56, 0i64, 0xA0ui64);
	}
	else
	{
		v7 = 0i64;
	}
	result = sub_14071BD20(v7, a2);
	v9 = result;
	if ((int)result >= 0)
	{
		if (!*(_QWORD*)(v7 + 24))
		{
			*(_QWORD*)(v7 + 24) = a1;
			*(_QWORD*)(v7 + 32) = *a1;
			*a1 = v7;
			v10 = *(_QWORD*)(v7 + 32);
			if (v10)
				*(_QWORD*)(v10 + 24) = v7 + 32;
		}
		if (a3 && !*(_QWORD*)(v7 + 8))
		{
			*(_QWORD*)(v7 + 8) = a3;
			*(_QWORD*)(v7 + 16) = *a3;
			*a3 = v7;
			v11 = *(_QWORD*)(v7 + 16);
			if (v11)
				*(_QWORD*)(v11 + 8) = v7 + 16;
		}
	}
	else
	{
		if (!v7)
			return result;
		(**(void(__fastcall***)(__int64, __int64))v7)(v7, 1i64);
	}
	return v9;
}
// 140B742B0: using guessed type __int64 (__fastcall *off_140B742B0[11])();

