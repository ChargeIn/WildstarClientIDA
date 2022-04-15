//----- (00000001405C97A0) ----------------------------------------------------
void __fastcall sub_1405C97A0(__int64 a1, int a2)
{
	int v3; // eax
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // r8
	int v7; // ebp
	unsigned int v8; // r14d
	__int64 v9; // rcx
	__int16* v10; // rsi
	_DWORD* v11; // rdi
	__int64 v12; // rbx
	__int64 v13; // [rsp+20h] [rbp-58h]
	__int64 v14; // [rsp+50h] [rbp-28h] BYREF
	__int64 v15; // [rsp+58h] [rbp-20h]
	__int64 v16; // [rsp+60h] [rbp-18h]

	if (!a2)
	{
		v3 = sub_14039B340(qword_140C65898, *(_DWORD*)(a1 + 276));
		v4 = v3;
		if (v3)
		{
			if (v3 != 317)
			{
				v5 = qword_140C65898;
				*(_DWORD*)(a1 + 328) = 1;
				v6 = *(_QWORD*)(v5 + 120);
				v7 = *(_DWORD*)(v6 + 8);
				v8 = *(_DWORD*)(a1 + 276);
				v9 = *(_QWORD*)(sub_1403ACD90(qword_140C65B70, v8, v6) + 8);
				v10 = v9 ? sub_14034BDD0(v9, *(_DWORD*)(v9 + 16)) : (__int16*)&unk_1409F35FC;
				v11 = *(_DWORD**)(160 * v4 + qword_140C7DF98 + 8);
				if (v11)
				{
					sub_1405648A0(160 * v4, &v14, v4, v7, v8);
					v12 = v15;
					if (v15 != v16)
					{
						LODWORD(v13) = *v11;
						sub_1400EA3E0(
							*(_QWORD*)(qword_140C65898 + 29504),
							"SpellCastFailed",
							"iiUUSS",
							(unsigned int)v11[4],
							v13,
							v7,
							v7,
							v15,
							v10);
					}
					if (v12)
						sub_14018B900(v12, 0);
				}
			}
		}
	}
}
// 1405C98B7: variable 'v13' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C7DF98: using guessed type __int64 qword_140C7DF98;

