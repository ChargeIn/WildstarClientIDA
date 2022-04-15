//----- (0000000140891570) ----------------------------------------------------
__int64 __fastcall sub_140891570(__int64 a1)
{
	__int64* v1; // rdi
	__int64 i; // rbx
	__int64 result; // rax

	v1 = *(__int64**)(a1 + 216);
	if (v1)
	{
		for (i = *v1; i != v1[1]; i += 24i64)
			result = sub_1408552B0(*(_DWORD*)(i + 4));
	}
	return result;
}

