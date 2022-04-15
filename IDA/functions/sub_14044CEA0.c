//----- (000000014044CEA0) ----------------------------------------------------
__int64 __fastcall sub_14044CEA0(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	if (qword_140C65898)
		sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32736) + 96i64), "StoreError", byte_1409EFF74, *a2);
	v3 = qword_140C66DA8;
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
				if (*(_DWORD*)(v3 + 368) != 5)
					break;
				v3 = *(_QWORD*)(v3 + 176);
			} while (v3);
		}
		sub_1400EA3E0(*(_QWORD*)(v3 + 72), "StoreError", byte_1409F003C, *a2);
	}
	return 0i64;
}
// 1409EFF74: using guessed type _BYTE byte_1409EFF74[120];
// 1409F003C: using guessed type _BYTE byte_1409F003C[56];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

