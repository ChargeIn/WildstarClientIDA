//----- (00000001405ADD40) ----------------------------------------------------
void __fastcall sub_1405ADD40(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // r12
	__int64* v7; // r15
	__int64 v8; // r14
	int v9; // ecx
	int v10; // r13d
	__int64 v11; // rcx
	unsigned __int64 v12; // rbp
	_QWORD* v13; // rbx
	__int64 v14; // rbx
	__int64 v15; // r8
	int v16; // ebp
	unsigned int v17; // esi
	int v18; // ebx
	__int64 v19; // rax
	__int64 v20; // [rsp+20h] [rbp-48h] BYREF
	__int64* v21; // [rsp+28h] [rbp-40h]
	__int64* v22; // [rsp+30h] [rbp-38h]
	__int64 v23; // [rsp+38h] [rbp-30h]
	__int64 v24; // [rsp+70h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 232);
	if (!v2)
		return;
	if (!*(_DWORD*)(a1 + 272))
		return;
	v4 = *(_QWORD*)(qword_140C659F8 + 112);
	if (!v4)
		return;
	while (*(_DWORD*)(v4 + 16) != *(_DWORD*)(v2 + 4) || *(_DWORD*)(v4 + 20) != *(_DWORD*)(a1 + 188))
	{
		v4 = *(_QWORD*)(v4 + 8);
		if (!v4)
			return;
	}
	v21 = 0i64;
	v22 = 0i64;
	v23 = 0i64;
	sub_1404C7C30(v4, &v20, a2);
	v5 = (__int64)v21;
	v6 = (__int64)v22;
	v7 = v21;
	if (v21 == v22)
		goto LABEL_36;
	do
	{
		v8 = *v7;
		v9 = *(_DWORD*)(*v7 + 128);
		if ((unsigned int)(v9 - 1) > 2 && (v9 != 4 || !(unsigned int)sub_140724910(*v7)) && *(_DWORD*)(v8 + 128) != 4)
		{
			v24 = *(_QWORD*)(v8 + 88);
			v10 = *(_DWORD*)(v8 + 96);
			v12 = (*(__int64(__fastcall**)(__int64*))(a1 + 392))(&v24);
			v13 = *(_QWORD**)(*(_QWORD*)(a1 + 384) + 8 * (v12 % *(_QWORD*)(a1 + 376)));
			if (v13)
			{
				while (v12 != *v13 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 400))(&v24, v13 + 2))
				{
					v13 = (_QWORD*)v13[1];
					if (!v13)
						goto LABEL_26;
				}
				if (v13 != (_QWORD*)-24i64)
				{
					sub_1400B6120(a1 + 368, (__int64)&v24);
					v14 = *(_QWORD*)(a1 + 416);
					v11 = *(_QWORD*)(a1 + 424);
					if (v14 != v11)
					{
						while (**(_QWORD**)v14 != v24)
						{
							v14 += 8i64;
							if (v14 == v11)
								goto LABEL_26;
						}
						sub_14018B900(*(_QWORD*)v14, 0);
						v15 = *(_QWORD*)(a1 + 424);
						if (v14 + 8 != v15)
							sub_1407DB590((int*)v14, (int*)(v14 + 8), (v15 - (v14 + 8)) & 0xFFFFFFFFFFFFFFF8ui64);
						*(_QWORD*)(a1 + 424) -= 8i64;
					}
				}
			}
		LABEL_26:
			v16 = *(_DWORD*)(v8 + 248);
			v17 = *(_DWORD*)(a1 + 184);
			v18 = 0;
			if (qword_140C63840)
			{
				v19 = qword_140C63840(off_140A6A8D8, v17, qword_140C63858);
			}
			else
			{
				if (dword_140C65340 || (int)sub_140205D40() < 0)
				{
				LABEL_33:
					sub_1404C9C70(v11, v18, *(_DWORD*)(a1 + 188), v8);
					sub_14077DB00(a1 + 440, v24, v10, v16);
					goto LABEL_34;
				}
				v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 24i64))(qword_140C63C30, v17);
			}
			if (v19)
				v18 = *(_DWORD*)(v19 + 4);
			goto LABEL_33;
		}
	LABEL_34:
		++v7;
	} while (v7 != (__int64*)v6);
	v5 = (__int64)v21;
LABEL_36:
	if (!*(_DWORD*)qword_140C659F0)
		sub_1405AEC80(a1);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingMyResidenceDecorChanged", byte_1409EBF4C, 0i64);
	if (v5)
		sub_14018B900(v5, 0);
}
// 1405ADF6A: variable 'v11' is possibly undefined
// 1409EBF4C: using guessed type _BYTE byte_1409EBF4C[24];
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

