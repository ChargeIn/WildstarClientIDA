//----- (0000000140874110) ----------------------------------------------------
__int64* __fastcall sub_140874110(__int64 a1)
{
	__int64* result; // rax
	__int64 v3; // rcx

	if (qword_140C61B98)
	{
		result = *(__int64**)(a1 + 16);
		if (*result)
			result = (__int64*)sub_14083A740((__int64**)qword_140C61B98, *result);
	}
	v3 = *(_QWORD*)(a1 + 32);
	if (v3)
	{
		result = (__int64*)sub_140866000(v3);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	return result;
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

