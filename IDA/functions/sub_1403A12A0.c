//----- (00000001403A12A0) ----------------------------------------------------
void __fastcall sub_1403A12A0(__int64 a1, int a2, __int64 a3, int a4)
{
	__int64 v6; // rdi
	__int64 v8; // r14
	unsigned int* v9; // rcx
	unsigned int* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rbx
	unsigned int v17; // eax
	int v18; // ebp
	unsigned int v19; // ebx
	__int64 v20; // rax
	__int16* v21; // r14
	_DWORD* v22; // rsi
	__int64 v23; // rbx
	__int64 v24; // [rsp+20h] [rbp-68h]
	__int64 v25; // [rsp+28h] [rbp-60h]
	__int64 v26; // [rsp+30h] [rbp-58h]
	__int64 v27; // [rsp+50h] [rbp-38h] BYREF
	__int64 v28; // [rsp+58h] [rbp-30h]
	__int64 v29; // [rsp+60h] [rbp-28h]

	if (a3)
	{
		v6 = a2;
		if (a2)
		{
			if (a2 != 317)
			{
				v8 = *(_QWORD*)(a1 + 120);
				if (v8)
				{
					if ((unsigned int)sub_1405A4D90(a1, **(_DWORD**)(a3 + 112))
						&& (v9 = *(unsigned int**)(a3 + 112), (v9[66] & 0x20000000) != 0)
						&& (unsigned int)(v6 - 15) <= 1)
					{
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SpellCastWithServiceToken", byte_1409EAE6C, *v9);
					}
					else
					{
						sub_1403B5250(v6);
						sub_1400035B0();
						if (a4 || (unsigned int)(v6 - 2) > 1 && ((((_DWORD)v6 - 67) & 0xFFFFFFFD) != 0 || !sub_14047BFD0(v8)))
						{
							v10 = *(unsigned int**)(a3 + 112);
							v11 = v10[6];
							if ((((_DWORD)v11 - 2) & 0xFFFFFFFA) == 0 && (_DWORD)v11 != 3)
							{
								v12 = sub_1403C1F50(a1, *v10, *(_BYTE*)(a1 + 28140));
								if (v12)
								{
									sub_1403BDAC0(qword_140C65898);
									sub_1405CA990(v13, (__int64*)(v12 + 416));
									sub_1405CA990(v14, (__int64*)(v12 + 408));
								}
							}
							v15 = *(_QWORD*)(a1 + 25744);
							if (v15)
							{
								v16 = *(_QWORD*)(v15 + 5512);
								if (v16)
								{
									v17 = sub_1400518A0(qword_140C63628, 17, 1, 0);
									(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v16
										+ 16i64))(
											v16,
											v17,
											0i64,
											0i64,
											0i64,
											0i64,
											0i64);
								}
							}
							v18 = *(_DWORD*)(v8 + 8);
							v19 = **(_DWORD**)(a3 + 112);
							v20 = *(_QWORD*)(a3 + 8);
							if (v20)
								v21 = sub_14034BDD0(v11, *(_DWORD*)(v20 + 16));
							else
								v21 = (__int16*)&unk_1409E7924;
							v22 = *(_DWORD**)(160 * v6 + qword_140C7DF98 + 8);
							if (v22)
							{
								sub_1405648A0(160 * v6, &v27, v6, v18, v19);
								v23 = v28;
								if (v28 != v29)
								{
									LODWORD(v26) = v18;
									LODWORD(v25) = v18;
									LODWORD(v24) = *v22;
									sub_1400EA3E0(
										*(_QWORD*)(qword_140C65898 + 29504),
										"SpellCastFailed",
										"iiUUSS",
										(unsigned int)v22[4],
										v24,
										v25,
										v26,
										v28,
										v21);
								}
								if (v23)
									sub_14018B900(v23, 0);
							}
						}
					}
				}
			}
		}
	}
}
// 1403A13D5: variable 'v13' is possibly undefined
// 1403A13E1: variable 'v14' is possibly undefined
// 1403A144E: variable 'v11' is possibly undefined
// 1403A14D0: variable 'v24' is possibly undefined
// 1403A14D0: variable 'v25' is possibly undefined
// 1403A14D0: variable 'v26' is possibly undefined
// 1409EAE6C: using guessed type _BYTE byte_1409EAE6C[24];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DF98: using guessed type __int64 qword_140C7DF98;

