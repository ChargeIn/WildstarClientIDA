//----- (00000001406DA9A0) ----------------------------------------------------
void __fastcall sub_1406DA9A0(__int64 a1)
{
	int v1; // r9d
	unsigned __int64 v2; // rax
	unsigned __int64 v3; // r8
	__int64 v4; // rdx

	v1 = *(_DWORD*)(a1 + 1036);
	if (v1 && (v2 = 0i64, (v3 = *(_QWORD*)(qword_140C65898 + 2712)) != 0))
	{
		v4 = *(_QWORD*)(qword_140C65898 + 2704);
		while (!*(_QWORD*)v4 || *(_DWORD*)(*(_QWORD*)v4 + 64i64) != v1)
		{
			++v2;
			v4 += 8i64;
			if (v2 >= v3)
				goto LABEL_7;
		}
		*(_BYTE*)(a1 + 1024) = 1;
		sub_1400D4040(a1, "AbilitySelected", (char*)a1, &unk_1409D1576);
	}
	else
	{
	LABEL_7:
		*(_BYTE*)(a1 + 1024) = 0;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

