//----- (0000000140891180) ----------------------------------------------------
__int64 __fastcall sub_140891180(__int64 a1)
{
	__int64* v1; // rdi
	__int64 v2; // rbx
	__int64 result; // rax
	unsigned int v4; // esi
	__int64 v5; // rdi

	v1 = *(__int64**)(a1 + 216);
	if (!v1)
		return 1i64;
	v2 = *v1;
	if (*v1 == v1[1])
		return 1i64;
	while (1)
	{
		result = sub_140853B00(*(_DWORD*)(v2 + 4));
		v4 = result;
		if ((_DWORD)result != 1)
			break;
		v2 += 24i64;
		if (v2 == v1[1])
			return result;
	}
	v5 = *v1;
	if (v5 != v2)
	{
		do
		{
			sub_1408552B0(*(_DWORD*)(v5 + 4));
			v5 += 24i64;
		} while (v5 != v2);
		return v4;
	}
	return result;
}

