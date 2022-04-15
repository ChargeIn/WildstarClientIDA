//----- (0000000140378C20) ----------------------------------------------------
__int64 __fastcall sub_140378C20(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	unsigned __int64 v4; // rbx
	unsigned __int64 i; // rsi

	v2 = *(_QWORD*)(a1 + 24);
	if (v2)
		(*(float(__fastcall**)(__int64))(*(_QWORD*)v2 + 280i64))(v2);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 152i64))(*(_QWORD*)(a1 + 48));
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
	v4 = 0i64;
	for (i = result; v4 < i; ++v4)
	{
		result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
			*(_QWORD*)(a1 + 48),
			v4);
		if (result)
			result = sub_140378C20(result);
	}
	return result;
}
// 140378C51: ignored the value written to the shadow area of the succeeding call

