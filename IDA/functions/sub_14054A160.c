//----- (000000014054A160) ----------------------------------------------------
__int64 __fastcall sub_14054A160(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	int* v4; // rax
	int* v5; // rdx
	int* v6; // rsi
	__int64 v7; // rcx
	int v8; // ebx
	__int64 v9; // [rsp+20h] [rbp-308h] BYREF
	int v10[180]; // [rsp+30h] [rbp-2F8h] BYREF

	sub_1407E4830(v10, 0i64, 0x2D0ui64);
	v9 = 0i64;
	result = (*(__int64(__fastcall**)(_QWORD, int*, __int64*))(**(_QWORD**)(qword_140C65898 + 29256) + 208i64))(
		*(_QWORD*)(qword_140C65898 + 29256),
		v10,
		&v9);
	if ((int)result >= 0)
	{
		v3 = *(_QWORD*)(a1 + 64);
		v4 = sub_14018DB00(*(_QWORD*)(a1 + 56), v3 + 1, 8i64);
		*(_QWORD*)&v4[2 * v3] = v9;
		v5 = *(int**)(a1 + 56);
		v6 = v4;
		if (v5 != v4)
		{
			sub_1407DB590(v4, v5, 8i64 * *(_QWORD*)(a1 + 64));
			v7 = *(_QWORD*)(a1 + 56);
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			*(_QWORD*)(a1 + 56) = v6;
		}
		*(_QWORD*)(a1 + 64) = v3 + 1;
		v8 = sub_14054B1B0(a1, 0i64);
		if (v8 >= 0)
		{
			return 0i64;
		}
		else
		{
			sub_140007270(a1 + 56, *(_QWORD*)(a1 + 64) - 1i64);
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			return (unsigned int)v8;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 14054A160: using guessed type int var_2F8[180];

