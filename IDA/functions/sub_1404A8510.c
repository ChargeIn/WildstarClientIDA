//----- (00000001404A8510) ----------------------------------------------------
__int64 __fastcall sub_1404A8510(__int64 a1, int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rdi
	int v8; // eax
	__int64 v9; // rcx

	v2 = qword_140C659B0;
	v4 = *(_QWORD*)(qword_140C65898 + 7152);
	if (a2 == 2)
	{
		if (v4)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
			if (v5 == 166)
			{
				v6 = v2 + 104;
				goto LABEL_7;
			}
			if (v5 == 167)
			{
				v6 = v2 + 136;
			LABEL_7:
				if (v6)
					return *(unsigned int*)(v6 + 16);
			}
		}
	}
	else if (v4)
	{
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
		if (v8 == 166)
		{
			v9 = v2 + 240;
		}
		else
		{
			if (v8 != 167)
				return 0i64;
			v9 = v2 + 496;
		}
		if (v9)
		{
			if (!a2)
				return *(unsigned int*)(v9 + 16);
			if (a2 == 1)
				return *(unsigned int*)(v9 + 80);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;

