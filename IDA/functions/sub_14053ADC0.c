//----- (000000014053ADC0) ----------------------------------------------------
void __fastcall sub_14053ADC0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	unsigned int v4; // edi
	__int64 v5; // r8
	__int64 v6; // rsi
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rbx
	int v10; // ecx
	unsigned int v11; // ebp
	unsigned int v12; // ebx
	unsigned int v13; // r15d
	__int64 v14; // rax
	unsigned int* v15; // rsi
	__int64 v16; // rax
	bool v17; // zf
	__int64 v18; // rax
	__int64 v19; // r9
	unsigned int v20; // ebx
	unsigned int v21; // r15d
	__int64 v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rax
	unsigned int v25; // esi
	__int64 v26; // rax
	unsigned int* v27; // rbx
	__int64 v28; // rax
	__int64 v29; // rax
	bool v30; // di
	__int64 v31; // rax
	__int64 v32; // rax
	unsigned int v33; // [rsp+20h] [rbp-28h]
	int v34; // [rsp+28h] [rbp-20h]

	if (*(_QWORD*)(a1 + 25744))
	{
		v2 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		v3 = qword_140C659F0;
		v4 = 0;
		v5 = *(_QWORD*)(qword_140C659F0 + 824);
		v6 = v2;
		v7 = 0i64;
		v8 = *(_QWORD*)(v5 + 48);
		if (v8)
			v7 = v8 + 8;
		v9 = *(_QWORD*)(a1 + 25744);
		v10 = *(_DWORD*)(a1 + 29940);
		v11 = *(_DWORD*)(v9 + 6120);
		if (v10)
		{
			if (v10 == v11 && v2)
			{
				sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "HousingPanelControlClose", byte_1409D0F4F);
				v12 = 0;
				v13 = sub_140207050();
				if (!v13)
					return;
				while (1)
				{
					v14 = sub_140207100(v12);
					v15 = (unsigned int*)v14;
					if (v14)
					{
						if (*(_DWORD*)(v14 + 28) == v11)
							break;
					}
					if (++v12 >= v13)
						return;
				}
				v16 = sub_1405B1510(&qword_140C7DFB0);
				if (!v16)
					goto LABEL_15;
				v17 = *(_DWORD*)(v16 + 192) == 1;
			LABEL_14:
				if (!v17)
				{
				LABEL_17:
					v19 = *v15;
					v34 = 0;
				LABEL_52:
					v33 = v11;
					sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "HousingPanelControlOpen", byte_1409EBF64, v19, v33, v34);
					return;
				}
			LABEL_15:
				v18 = sub_1405B1510(&qword_140C7DFB0);
				if (v18)
					sub_1405AD310(v18, 4);
				goto LABEL_17;
			}
			if (v10 == v11 && v7)
			{
				v20 = 0;
				v21 = sub_140207050();
				if (!v21)
					return;
				while (1)
				{
					v22 = sub_140207100(v20);
					v15 = (unsigned int*)v22;
					if (v22)
					{
						if (*(_DWORD*)(v22 + 28) == v11)
							break;
					}
					if (++v20 >= v21)
						return;
				}
				v17 = (unsigned int)sub_1404B5980() == 1;
				goto LABEL_14;
			}
		}
		v23 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v23 && *(_DWORD*)(v23 + 20) == 8)
		{
			v24 = sub_1405B1510(&qword_140C7DFB0);
			if (v24)
				sub_1405AD310(v24, 4);
			v34 = 0;
			v19 = 0i64;
			goto LABEL_52;
		}
		if (v10)
		{
			if (sub_1405B15C0(v5, *(_DWORD*)(v9 + 6124))
				&& *(_QWORD*)(sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(v9 + 6124)) + 16) == *(_QWORD*)(v6 + 16))
			{
				sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "HousingPanelControlClose", byte_1409D0F4F);
				v25 = sub_140207050();
				if (!v25)
					return;
				while (1)
				{
					v26 = sub_140207100(v4);
					v27 = (unsigned int*)v26;
					if (v26)
					{
						if (*(_DWORD*)(v26 + 28) == *(_DWORD*)(a1 + 29940))
							break;
					}
					if (++v4 >= v25)
						return;
				}
				if ((unsigned int)sub_1404B5980() == 1)
				{
					v28 = sub_1405B1510(&qword_140C7DFB0);
					if (v28)
						sub_1405AD310(v28, 4);
				}
				v34 = 1;
			LABEL_51:
				v19 = *v27;
				goto LABEL_52;
			}
			v3 = qword_140C659F0;
		}
		if (sub_1405B16C0(*(_QWORD*)(v3 + 824), v11, 1)
			&& *(_QWORD*)(sub_1405B16C0(*(_QWORD*)(qword_140C659F0 + 824), v11, 1) + 16) == *(_QWORD*)(v6 + 16))
		{
			sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "HousingPanelControlClose", byte_1409D0F4F);
			v29 = sub_1402070A0(*(_DWORD*)(v6 + 64));
			v27 = (unsigned int*)v29;
			if (!v29)
				return;
			v30 = *(_DWORD*)(v29 + 28) != v11;
			if ((unsigned int)sub_1404B5980() == 1)
			{
				v31 = sub_1405B1510(&qword_140C7DFB0);
				if (v31)
					sub_1405AD310(v31, 4);
			}
			v34 = v30;
			goto LABEL_51;
		}
		v32 = sub_1405B1510(&qword_140C7DFB0);
		if (v32)
			sub_1405AD310(v32, 1);
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "HousingPanelControlClose", byte_1409D0F4F);
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "WarPartyBattleClose", &unk_1409D0EA6);
	}
}
// 14053AEE6: conditional instruction was optimized away because ecx.4!=0
// 1409D0F4F: using guessed type _BYTE byte_1409D0F4F[19];
// 1409EBF64: using guessed type _BYTE byte_1409EBF64[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

