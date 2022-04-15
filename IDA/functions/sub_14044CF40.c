//----- (000000014044CF40) ----------------------------------------------------
__int64 sub_14044CF40()
{
	__int64 v0; // rcx
	__int64 v1; // rcx
	__int64 result; // rax

	v0 = qword_140C65898;
	*(_DWORD*)qword_140C65908 = 1;
	if (v0)
		sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(v0 + 32736) + 96i64), "StoreCatalogUpdated", byte_1409D13FB);
	v1 = qword_140C66DA8;
	result = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(result + 368) == 5)
		{
			result = *(_QWORD*)(result + 176);
			if (!result)
				return result;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v1 + 368) != 5)
					break;
				v1 = *(_QWORD*)(v1 + 176);
			} while (v1);
		}
		sub_1400EA3E0(*(_QWORD*)(v1 + 72), "StoreCatalogUpdated", byte_1409D13EF);
	}
	return 0i64;
}
// 1409D13EF: using guessed type _BYTE byte_1409D13EF[12];
// 1409D13FB: using guessed type _BYTE byte_1409D13FB[3];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

