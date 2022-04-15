//----- (00000001402C98E0) ----------------------------------------------------
__int64 __fastcall sub_1402C98E0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	if (*(_DWORD*)(a1 + 48))
	{
		v4 = qword_140C657F0;
		*(_DWORD*)(a1 + 48) = 0;
		return sub_1400B6120(v4 + 56, a1 + 16);
	}
	return result;
}
// 140C657F0: using guessed type __int64 qword_140C657F0;

