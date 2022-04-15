//----- (00000001404B54E0) ----------------------------------------------------
void sub_1404B54E0()
{
	unsigned int v0; // eax
	__int64 v1; // rax
	unsigned int v2; // eax
	int v3; // ecx
	__int64 v4; // rdx
	__int64 v5; // rbx
	__int64 v6; // rcx
	_WORD* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	_WORD* v11; // rax

	v0 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	v1 = sub_14024ACC0(v0);
	if (v1)
	{
		v2 = *(_DWORD*)(v1 + 20);
		if (v2 <= 8)
		{
			v3 = 420;
			if (_bittest(&v3, v2))
			{
				v4 = qword_140C659F0;
				v5 = 0i64;
				v6 = *(_QWORD*)(*(_QWORD*)(qword_140C659F0 + 824) + 40i64);
				if (v6 && v6 != -8)
				{
					v7 = *(_WORD**)(v6 + 56);
					v8 = 0i64;
					if (!*v7)
						goto LABEL_9;
					do
					{
						++v7;
						++v8;
					} while (*v7);
					if (!v8)
					{
					LABEL_9:
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingNamePropertyOpen", &unk_1409D0FD3);
						v4 = qword_140C659F0;
					}
				}
				v9 = *(_QWORD*)(*(_QWORD*)(v4 + 824) + 48i64);
				if (v9)
				{
					v10 = v9 + 8;
					if (v10)
					{
						v11 = *(_WORD**)(v10 + 48);
						if (!*v11)
							goto LABEL_15;
						do
						{
							++v11;
							++v5;
						} while (*v11);
						if (!v5)
							LABEL_15:
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingNamePropertyOpen", &unk_1409D0FD3);
					}
				}
				sub_14053ADC0(qword_140C65898);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

