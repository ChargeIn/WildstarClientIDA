//----- (0000000140746E90) ----------------------------------------------------
__int64 __fastcall sub_140746E90(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbp
	__int64 v6; // rax
	int* v7; // rdi
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	__int64 v11; // r14
	int v12; // r13d
	unsigned __int64 v13; // rbx
	__int64 v14; // rcx
	unsigned __int64 v15; // rdi
	unsigned __int64 v16; // rbp
	__int64 v17; // rdx
	_QWORD* v18; // r14
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rax
	int v22; // r12d
	__int64 v23; // r15
	__int64 v24; // rax
	__int64 v25; // rax
	unsigned __int16* v26; // rax
	unsigned __int16* v27; // rdx
	unsigned __int64* v28; // rbp
	unsigned __int64 v29; // rdi
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	unsigned __int64 v34; // [rsp+20h] [rbp-88h]
	unsigned __int64 v35; // [rsp+28h] [rbp-80h]
	__int64 i; // [rsp+30h] [rbp-78h]
	_QWORD v37[14]; // [rsp+38h] [rbp-70h] BYREF
	__int64 v38; // [rsp+B0h] [rbp+8h]
	__int64 v39; // [rsp+B8h] [rbp+10h]
	__int64 v40; // [rsp+C0h] [rbp+18h]
	unsigned __int64 v41; // [rsp+C8h] [rbp+20h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	v4 = qword_140C65898;
	*(_QWORD*)(a1 + 16) += 16i64;
	v5 = *(_QWORD*)(v4 + 29504);
	v6 = 0i64;
	v7 = 0i64;
	while (aIconsprites[++v6] != 0)
		;
	v9 = (2 * v6) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v7 = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(v7, (int*)L"IconSprites", v10);
	if ((int*)((char*)v7 + v10))
		*(_WORD*)((char*)v7 + v10) = 0;
	if (v7)
	{
		v11 = sub_140108E00((_QWORD*)(v5 + 240), v7);
		v39 = v11;
		sub_14018B900((__int64)v7, 0);
	}
	else
	{
		v11 = 0i64;
		v39 = 0i64;
	}
	v12 = 1;
	v13 = 0i64;
	v14 = (__int64)(*(_QWORD*)(v11 + 72) - *(_QWORD*)(v11 + 64)) >> 3;
	do
		++v13;
	while (aIconSkill[v13]);
	v41 = v13;
	v15 = 0i64;
	do
		++v15;
	while (aIconSkilleleme[v15]);
	v34 = v15;
	v16 = 0i64;
	do
		++v16;
	while (aIconSkilltempo[v16]);
	v17 = 0i64;
	v35 = v16;
	v38 = 0i64;
	for (i = (int)v14; v17 < i; v38 = v17)
	{
		v18 = *(_QWORD**)(*(_QWORD*)(v11 + 64) + 8 * v17);
		v19 = (*(__int64(__fastcall**)(_QWORD*))(*v18 + 16i64))(v18);
		if (!(unsigned int)sub_14018E3E0(v19, L"Icon_Skill", v13))
		{
			v20 = (*(__int64(__fastcall**)(_QWORD*))(*v18 + 16i64))(v18);
			if ((unsigned int)sub_14018E3E0(v20, L"Icon_SkillElemental", v15))
			{
				v21 = (*(__int64(__fastcall**)(_QWORD*))(*v18 + 16i64))(v18);
				if ((unsigned int)sub_14018E3E0(v21, L"Icon_SkillTemporary", v16))
				{
					v22 = 0;
					v23 = 0i64;
					v40 = (int)((__int64)(v18[5] - v18[4]) >> 3);
					if (v40 > 0)
					{
						do
						{
							v24 = *(_QWORD*)(a1 + 16);
							*(_DWORD*)(v24 + 8) = 3;
							*(double*)v24 = (double)v12;
							*(_QWORD*)(a1 + 16) += 16i64;
							if (v23 < 0 || v22 >= (int)((__int64)(v18[5] - v18[4]) >> 3))
								v25 = 0i64;
							else
								v25 = *(_QWORD*)(v18[4] + 8 * v23);
							v26 = *(unsigned __int16**)(v25 + 32);
							v27 = (unsigned __int16*)&word_140B7B704;
							if (v26)
								v27 = v26;
							v28 = (unsigned __int64*)sub_14018F0E0(v37, v27)[1];
							if (v28)
							{
								v29 = -1i64;
								do
									++v29;
								while (*((_BYTE*)v28 + v29));
								if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
									sub_14005E2C0(a1);
								v30 = *(_QWORD*)(a1 + 16);
								v31 = sub_140062650(a1, v28, v29);
								*(_DWORD*)(v30 + 8) = 4;
								*(_QWORD*)v30 = v31;
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
							}
							v32 = v37[1];
							*(_QWORD*)(a1 + 16) += 16i64;
							if (v32)
								sub_14018B900(v32, 0);
							sub_14005EA50(
								a1,
								(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
								(int*)(*(_QWORD*)(a1 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
							*(_QWORD*)(a1 + 16) -= 32i64;
							++v23;
							++v12;
							++v22;
						} while (v23 < v40);
						v13 = v41;
						v15 = v34;
						v16 = v35;
					}
				}
			}
		}
		v11 = v39;
		v17 = v38 + 1;
	}
	return 1i64;
}
// 140B49C40: using guessed type wchar_t aIconSkilleleme[20];
// 140B49C68: using guessed type wchar_t aIconSkill[11];
// 140B49C80: using guessed type wchar_t aIconsprites[12];
// 140B49D78: using guessed type wchar_t aIconSkilltempo[20];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

