//----- (0000000140378AD0) ----------------------------------------------------
__int64 __fastcall sub_140378AD0(__int64 a1, float a2)
{
	__int64 result; // rax
	unsigned __int64 v4; // rbx
	unsigned __int64 i; // rsi

	*(float*)(a1 + 120) = a2 * *(float*)(a1 + 116);
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
	v4 = 0i64;
	for (i = result; v4 < i; ++v4)
	{
		result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
			*(_QWORD*)(a1 + 48),
			v4);
		if (result)
			result = sub_140378AD0(result);
	}
	return result;
}

