//----- (0000000140897DE0) ----------------------------------------------------
__int64 __fastcall sub_140897DE0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 i; // rbx
	__int64 v5; // rdx

	result = sub_140896A10(a1);
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		*(_QWORD*)(a1 + 16) = v3;
		result = sub_140881720(dword_140C10F20, v3);
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 24) = 0;
	}
	for (i = *(_QWORD*)(a1 + 48); i != *(_QWORD*)(a1 + 56); i += 16i64)
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(i + 8) + 8i64))(*(_QWORD*)(i + 8));
	v5 = *(_QWORD*)(a1 + 48);
	if (v5)
	{
		*(_QWORD*)(a1 + 56) = v5;
		result = sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_DWORD*)(a1 + 64) = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

