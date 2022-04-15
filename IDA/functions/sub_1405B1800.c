//----- (00000001405B1800) ----------------------------------------------------
__int64 __fastcall sub_1405B1800(_QWORD* a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v4; // r8
	__int64* v5; // rax
	__int64* v6; // r8
	__int64 v7; // rcx
	__int64 v9; // rbx
	__int64 v10; // rdx
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // r8d
	__int64 v14; // rcx
	__int64* v15; // rcx
	__int64* v16; // r8
	__int64 v17; // rax

	v2 = *(_QWORD*)(a2 + 8);
	v4 = *(_QWORD*)(qword_140C659F0 + 824);
	if (!v2)
		return 0i64;
	v5 = *(__int64**)(v4 + 16);
	v6 = *(__int64**)(v4 + 24);
	if (v5 == v6)
		return 0i64;
	while (1)
	{
		v7 = *v5;
		if (*(_DWORD*)(*v5 + 8) == *(_DWORD*)a2 && *(_QWORD*)(v7 + 16) == v2)
			break;
		if (++v5 == v6)
			return 0i64;
	}
	v9 = *v5;
	if (v7)
	{
		*(_DWORD*)(v7 + 496) = *(_DWORD*)(a2 + 16);
		if ((unsigned int)(*(_DWORD*)(a2 + 16) - 1) > 1)
		{
			if (sub_1405B1510(a1) == v7)
			{
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingPanelControlClose", byte_1409D0F4F);
				v10 = qword_140C65898;
				*(_DWORD*)(qword_140C65898 + 29940) = 0;
				if (!*(_DWORD*)(v10 + 29944))
				{
				LABEL_21:
					v15 = (__int64*)a1[2];
					v16 = (__int64*)a1[3];
					if (v15 == v16)
						goto LABEL_27;
					while (1)
					{
						v17 = *v15;
						if (*(_DWORD*)(*v15 + 48) == 5)
							break;
						if (++v15 == v16)
						{
							sub_14053ADC0(v10);
							return 0i64;
						}
					}
					if (!v17 || v17 == v9)
						LABEL_27:
					sub_14053ADC0(v10);
					return 0i64;
				}
				*(_DWORD*)(v10 + 29944) = 0;
				sub_14053ADC0(v10);
			}
		LABEL_20:
			v10 = qword_140C65898;
			goto LABEL_21;
		}
		v11 = sub_1402070A0(*(_DWORD*)(v7 + 64));
		if (v11)
		{
			v12 = sub_140205FA0(*(_DWORD*)(v9 + 184));
			if (v12)
				v13 = *(_DWORD*)(v12 + 4);
			else
				v13 = 0;
			v14 = qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 29940) = *(_DWORD*)(v11 + 28);
			if (*(_DWORD*)(v14 + 29944) == v13)
				goto LABEL_19;
			*(_DWORD*)(v14 + 29944) = v13;
			sub_14053ADC0(v14);
		}
		v14 = qword_140C65898;
	LABEL_19:
		sub_1400EA3E0(*(_QWORD*)(v14 + 29504), "HousingOwnershipRecieved", &unk_1409D0F76);
		goto LABEL_20;
	}
	return 0i64;
}
// 1409D0F4F: using guessed type _BYTE byte_1409D0F4F[19];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

