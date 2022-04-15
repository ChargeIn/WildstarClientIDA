//----- (00000001403B9530) ----------------------------------------------------
__int64 __fastcall sub_1403B9530(__int64 a1, unsigned __int8* a2)
{
	__int64 v2; // rbx
	unsigned __int64 v5; // rdi

	v2 = *(_QWORD*)(a1 + 28048);
	if (!v2)
		return 2147500037i64;
	v5 = *a2;
	if (v5 < sub_1405E73E0(*(_QWORD*)(a1 + 28048)))
	{
		if (v5 == *(_QWORD*)(v2 + 48))
		{
		LABEL_8:
			sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "StanceChanged", byte_1409D0C77);
			return 0i64;
		}
		if (*(_DWORD*)(v2 + 4 * v5 + 8))
		{
			*(_QWORD*)(v2 + 48) = v5;
			if (qword_140C89D90)
				sub_1405C7960((__int64*)qword_140C89D90, *(_DWORD*)(v2 + 4 * v5 + 8));
			goto LABEL_8;
		}
	}
	return 0i64;
}
// 1409D0C77: using guessed type _BYTE byte_1409D0C77[24];
// 140C89D90: using guessed type __int64 qword_140C89D90;

