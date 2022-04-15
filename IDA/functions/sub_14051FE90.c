//----- (000000014051FE90) ----------------------------------------------------
__int64 __fastcall sub_14051FE90(__int64 a1)
{
	unsigned int* v2; // rcx
	__int64 result; // rax
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // [rsp+30h] [rbp-28h] BYREF
	int v6; // [rsp+38h] [rbp-20h]
	int v7; // [rsp+44h] [rbp-14h]

	v2 = *(unsigned int**)(a1 + 16);
	if (v2)
	{
		sub_14073FAF0(v2, &v5, *(_DWORD*)(a1 + 24));
		if (v7 != 9 || (result = qword_140C635F0, v5 <= *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 280i64)))
		{
			if (v6 >= 15
				|| ((result = (unsigned int)(v6 - 1), (unsigned int)result > 0xD)
					? (v4 = 0i64)
					: (result = qword_140C65898, v4 = *(_QWORD*)(qword_140C65898 + 8i64 * v6 + 5616)),
					v5 <= v4))
			{
				sub_14073FE40(*(_QWORD*)(a1 + 16), *(_DWORD*)(a1 + 24));
				return sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"CostumeSaveResult",
					"iii",
					*(unsigned int*)(*(_QWORD*)(a1 + 16) + 12i64),
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64),
					13);
			}
		}
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

