//----- (00000001404E52D0) ----------------------------------------------------
__int64 __fastcall sub_1404E52D0(__int64 a1)
{
	__int64 v2; // rbx
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	unsigned __int64 v7; // rdi
	int v8; // eax
	__int64 v9; // rdx
	int v10; // r8d
	__int64** v11; // rax
	__int64 v12; // rcx
	unsigned __int16* v13; // rbx
	__int64 v14; // rax

	if (qword_140C65898)
	{
		v2 = 0i64;
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		v4 = 0;
		if (v3)
		{
			v5 = *(_QWORD*)(qword_140C63650 + 760);
			v6 = 0i64;
			while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
			{
				v6 = ++v4;
				if (v4 >= v3)
					goto LABEL_8;
			}
			v2 = *(_QWORD*)(v5 + 8i64 * v4);
		}
	LABEL_8:
		v7 = (int)(sub_1400F26A0(v2 + 384, 1) - 1);
		v8 = sub_1400F26A0(v2 + 384, 2);
		v9 = *(_QWORD*)(qword_140C635F0 + 5584);
		v10 = v8;
		if (v7 < *(_QWORD*)(v9 + 64))
		{
			v11 = *(__int64***)(*(_QWORD*)(v9 + 56) + 8 * v7);
			if (v11[1])
			{
				v12 = **v11;
				if (v12)
				{
					if ((!*(_DWORD*)(v12 + 24) || !*(_QWORD*)(v12 + 32)) && !*(_QWORD*)(v12 + 48) && v7 < *(_QWORD*)(v9 + 64))
					{
						v13 = *(unsigned __int16**)(***(_QWORD***)(*(_QWORD*)(v9 + 56) + 8 * v7) + 56i64);
						if (v13)
						{
							v14 = sub_1405E2000(qword_140C65898 + 26680, v10);
							if (v14)
								sub_140006E50(*(_QWORD*)(qword_140C635F0 + 5584), v13, *(_QWORD*)(v14 + 24));
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

