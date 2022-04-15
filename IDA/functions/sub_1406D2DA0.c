//----- (00000001406D2DA0) ----------------------------------------------------
bool __fastcall sub_1406D2DA0(__int64 a1, unsigned int a2)
{
	int v2; // r9d
	__int64 v3; // r8
	int v4; // r9d
	int v5; // r9d
	__int64 v6; // rdx
	bool result; // al

	v2 = *(_DWORD*)(a1 + 1100);
	v3 = qword_140C65898 + 160;
	if (v2)
	{
		v4 = v2 - 1;
		if (!v4)
			goto LABEL_7;
		v5 = v4 - 1;
		if (!v5)
		{
			v3 = qword_140C65898 + 208;
			goto LABEL_8;
		}
		if (v5 != 8)
		{
		LABEL_7:
			v3 = qword_140C65898 + 184;
			goto LABEL_8;
		}
		v3 = qword_140C65898 + 232;
	}
LABEL_8:
	result = 0;
	if (a2 < *(_DWORD*)(v3 + 4))
	{
		v6 = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 8i64 * a2);
		if (v6)
		{
			if (*(_DWORD*)(v6 + 140))
				return 1;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

