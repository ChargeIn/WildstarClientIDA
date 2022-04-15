//----- (0000000140577250) ----------------------------------------------------
__int64 __fastcall sub_140577250(__int64 a1, __int64 a2, int* a3, __int64* a4)
{
	__int64* v4; // r14
	int* v7; // rax
	__int64 v8; // rbx
	__int64 result; // rax
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rax

	v4 = (__int64*)qword_140C65B78;
	v7 = sub_14018B280(400i64, 8u);
	v8 = (__int64)v7;
	if (v7)
	{
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 3) = 0i64;
		*((_QWORD*)v7 + 4) = 0i64;
		*((_QWORD*)v7 + 5) = 0i64;
		*((_QWORD*)v7 + 6) = 0i64;
		*((_QWORD*)v7 + 9) = 0i64;
		*((_QWORD*)v7 + 10) = 0i64;
		*((_QWORD*)v7 + 12) = 0i64;
		*((_QWORD*)v7 + 13) = 0i64;
		v7[31] = 0;
		v7[14] = 1414420037;
		*((_QWORD*)v7 + 18) = 0i64;
		*((_QWORD*)v7 + 19) = 0i64;
		*((_QWORD*)v7 + 21) = 0i64;
		*((_QWORD*)v7 + 22) = 0i64;
		*(_QWORD*)(v7 + 49) = 0i64;
		v7[32] = 1414420037;
		*((_QWORD*)v7 + 26) = 0i64;
		*(_QWORD*)v7 = off_140B73E80;
		sub_1407E4830(v7 + 56, 0i64, 0xB0ui64);
	}
	else
	{
		v8 = 0i64;
	}
	result = sub_14071FCD0(v8, a3);
	v10 = result;
	if ((int)result >= 0)
	{
		if (!*(_QWORD*)(v8 + 24))
		{
			*(_QWORD*)(v8 + 24) = v4;
			*(_QWORD*)(v8 + 32) = *v4;
			*v4 = v8;
			v11 = *(_QWORD*)(v8 + 32);
			if (v11)
				*(_QWORD*)(v11 + 24) = v8 + 32;
		}
		if (a4 && !*(_QWORD*)(v8 + 8))
		{
			*(_QWORD*)(v8 + 8) = a4;
			*(_QWORD*)(v8 + 16) = *a4;
			*a4 = v8;
			v12 = *(_QWORD*)(v8 + 16);
			if (v12)
				*(_QWORD*)(v12 + 8) = v8 + 16;
		}
	}
	else
	{
		if (!v8)
			return result;
		(**(void(__fastcall***)(__int64, __int64))v8)(v8, 1i64);
	}
	return v10;
}
// 140B73E80: using guessed type __int64 (__fastcall *off_140B73E80[11])();
// 140C65B78: using guessed type __int64 qword_140C65B78;

