//----- (00000001403998E0) ----------------------------------------------------
__int64 __fastcall sub_1403998E0(__int64 a1, int* a2, int a3, int* a4)
{
	__int64 v9; // rax
	_QWORD* v10; // rdi
	unsigned int* v11; // r8
	_DWORD* v12; // rsi
	int* v13; // rax
	__int64 v14; // rax
	unsigned int v15; // r14d
	__int64 v16; // rbp
	unsigned int v17; // edx
	int v18; // eax
	__int64 v19; // rdx
	int v20; // edx
	__int64 v21; // rcx
	__int16* v22; // rdi
	int v23; // esi
	unsigned int v24; // ebx
	__int64 v25; // rax
	__int16* v26; // rbp
	_DWORD* v27; // rdi
	__int64 v28; // rbx
	__int64 v29; // rax
	__int64 v30; // rcx
	BOOL v31; // eax
	unsigned int v32; // eax
	unsigned int v33; // esi
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // rcx
	int v38; // ebx
	__int64 v39; // rcx
	__int64 v40; // [rsp+20h] [rbp-78h]
	__int64 v41; // [rsp+28h] [rbp-70h]
	__int64 v42; // [rsp+50h] [rbp-48h] BYREF
	__int64 v43; // [rsp+58h] [rbp-40h]
	__int64 v44; // [rsp+60h] [rbp-38h]
	__int64 v45; // [rsp+68h] [rbp-30h]
	int v46; // [rsp+A0h] [rbp+8h] BYREF
	int v47; // [rsp+A4h] [rbp+Ch]

	if (!*(_QWORD*)(a1 + 120))
		return 30i64;
	v9 = sub_1403AC780(a1 + 160, a2);
	v10 = (_QWORD*)v9;
	if (!v9)
		return 22i64;
	v11 = *(unsigned int**)(v9 + 72);
	v12 = *(_DWORD**)(v9 + 64);
	if (!v11)
		v11 = v12 + 2;
	if (!(unsigned int)sub_1403AD020(a1, *(unsigned int**)(v9 + 64), v11))
	{
		v13 = (int*)(*(__int64(__fastcall**)(_QWORD*, int*))(*v10 + 32i64))(v10, &v46);
		if ((int)sub_1403C1460(a1, v13) >= 0)
			return 0i64;
	}
	if ((v12[85] & 0x400) != 0 && v12[96] && *((_DWORD*)v10 + 8))
	{
		v46 = 300;
		v47 = -1;
		return sub_140399DE0(a1, a2, &v46, 0, 0);
	}
	v14 = v10[10];
	v15 = 0;
	v16 = 0i64;
	if (!v14)
		v14 = v10[8] + 156i64;
	v17 = *(_DWORD*)(v14 + 128);
	if (v17)
	{
		v16 = sub_1403ACD90(qword_140C65B70, v17, *(_QWORD*)(qword_140C65898 + 120));
		if (v16)
		{
			if (sub_14047B6D0(*(_QWORD*)(a1 + 120)))
			{
				v18 = *(_DWORD*)(a1 + 26544);
				if (v18)
				{
					if (**(_DWORD**)(v16 + 112) == v18)
					{
						sub_14039E400(a1);
						return 0i64;
					}
				}
			}
		}
	}
	v19 = v10[8];
	if (*(_DWORD*)(v19 + 408)
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(a1 + 120),
				*(unsigned int*)(v19 + 408),
				0i64,
				0i64,
				0))
	{
		v20 = *(_DWORD*)(sub_1402259C0(*(_DWORD*)(v10[8] + 408i64)) + 56);
		if (v20
			&& (v22 = sub_14034BDD0(v21, v20), (unsigned int)sub_14018E2C0((__int64)&unk_1409E7964, (unsigned __int16*)v22)))
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PrereqFailureMessage", byte_1409E958C, v22);
			return 17i64;
		}
		else
		{
			v23 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
			v24 = **(_DWORD**)(v16 + 112);
			v25 = *(_QWORD*)(v16 + 8);
			if (v25)
				v26 = sub_14034BDD0(v21, *(_DWORD*)(v25 + 16));
			else
				v26 = (__int16*)&unk_1409E7914;
			v27 = *(_DWORD**)(qword_140C7DF98 + 28488);
			if (v27)
			{
				sub_1405648A0(v21, &v42, 178, v23, v24);
				v28 = v43;
				if (v43 != v44)
				{
					LODWORD(v41) = v23;
					LODWORD(v40) = *v27;
					sub_1400EA3E0(
						*(_QWORD*)(qword_140C65898 + 29504),
						"SpellCastFailed",
						"iiUUSS",
						(unsigned int)v27[4],
						v40,
						v41,
						v23,
						v43,
						v26);
				}
				if (v28)
					sub_14018B900(v28, 0);
			}
			return 17i64;
		}
	}
	v29 = v10[8];
	v30 = *(_DWORD*)(v29 + 340) & 0x200;
	v31 = (*(_DWORD*)(v29 + 340) & 0x400) == 0 || !*(_DWORD*)(v29 + 384) || *((_DWORD*)v10 + 8) == 0;
	if (!v16 || !(_DWORD)v30 && !v31)
	{
		if (v12[108])
		{
			sub_14039C8A0(a1, v10);
		}
		else if (!v12[116]
			|| (v36 = (*(__int64(__fastcall**)(_QWORD*))(*v10 + 48i64))(v10), !(unsigned int)sub_1404B99B0(v37, v36)))
		{
			if (!v12[118])
				return 23i64;
			v38 = sub_1404528B0(v30, a2, 0);
			sub_140452A30(v39, v38, (__int64)v10);
			if (v38 == 2)
				return 22;
			return v15;
		}
		return 0i64;
	}
	v32 = sub_14056A070((__int64)v10, 0i64, a3, a4);
	v33 = v32;
	if (!v32 || v32 == 317)
	{
		if (*(_DWORD*)(*(_QWORD*)(v16 + 112) + 124i64) == 4)
		{
			if (!sub_1403A1600(a1))
			{
				v35 = *(_QWORD*)a2;
				*(_QWORD*)(a1 + 27880) = v16;
				LODWORD(v45) = 9;
				*(_QWORD*)(a1 + 27888) = 0x100000000i64;
				*(_QWORD*)(a1 + 27896) = v35;
				*(_QWORD*)(a1 + 27904) = v45;
				return 0i64;
			}
			sub_1403A1510(v34);
		}
		v33 = sub_140398CC0(a1, (__int64)v10, v16, a3, (__int64*)a4);
	}
	if (v33 && v33 != 317)
		sub_1403A12A0(a1, v33, v16, 0);
	return v33;
}
// 140399AA9: variable 'v21' is possibly undefined
// 140399B8A: variable 'v40' is possibly undefined
// 140399B8A: variable 'v41' is possibly undefined
// 140399C25: variable 'v34' is possibly undefined
// 140399CD4: variable 'v37' is possibly undefined
// 140399CEC: variable 'v30' is possibly undefined
// 140399CF8: variable 'v39' is possibly undefined
// 1409E958C: using guessed type _BYTE byte_1409E958C[104];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C7DF98: using guessed type __int64 qword_140C7DF98;

