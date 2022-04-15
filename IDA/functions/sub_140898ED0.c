//----- (0000000140898ED0) ----------------------------------------------------
__int64 __fastcall sub_140898ED0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v4; // rdi
	__int64 v5; // rbx

	result = sub_140830F00(qword_140C61BA8, a2, 0);
	v4 = result;
	if (result)
	{
		v5 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)result + 672i64))(
			result,
			a1,
			*(_QWORD*)(*(_QWORD*)(a1 + 104) + 56i64),
			*(_QWORD*)(a1 + 104) + 24i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
		return v5;
	}
	return result;
}

