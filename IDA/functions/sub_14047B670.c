//----- (000000014047B670) ----------------------------------------------------
__int64 __fastcall sub_14047B670(__int64 a1)
{
	unsigned __int64 v1; // r8
	int v2; // r9d
	__int64 v3; // rdx
	__int64 i; // rax

	v1 = *(_QWORD*)(a1 + 408);
	v2 = 0;
	v3 = 0i64;
	if (v1)
	{
		for (i = *(_QWORD*)(a1 + 400); *(_DWORD*)i || *(_BYTE*)(i + 4); i += 12i64)
		{
			if (++v3 >= v1)
				return sub_1403D90D0(qword_140C65898, v2);
		}
		v2 = *(_DWORD*)(*(_QWORD*)(a1 + 400) + 12 * v3 + 8);
	}
	return sub_1403D90D0(qword_140C65898, v2);
}
// 140C65898: using guessed type __int64 qword_140C65898;

