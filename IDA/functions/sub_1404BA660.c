//----- (00000001404BA660) ----------------------------------------------------
__int64 __fastcall sub_1404BA660(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r13
	unsigned int* v3; // r15
	unsigned __int64 v4; // r14
	__int64 v5; // r12
	__int64 v6; // rdx
	__int64 v7; // rbp
	_QWORD* v8; // rdi
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rbx
	int* v11; // rax
	__int64 v12; // rbx
	unsigned __int64 v13; // rbp
	int** v14; // r14
	int* v15; // rax
	int* v16; // rcx
	__int64 v17; // rcx
	unsigned __int64 v18; // rbp
	int** v19; // r14
	int* v20; // rax
	int* v21; // rcx
	unsigned __int64 v22; // rbp
	int** v23; // r14
	int* v24; // rax
	__int64 v25; // rcx
	int* v26; // rcx
	__int64 v28[2]; // [rsp+30h] [rbp-48h] BYREF
	unsigned __int64 v29; // [rsp+80h] [rbp+8h]

	v2 = qword_140C659F0;
	v3 = a2;
	sub_1404B4C40((_QWORD*)qword_140C659F0);
	v4 = 0i64;
	v29 = 0i64;
	if (*v3)
	{
		v5 = 0i64;
		do
		{
			v6 = *((_QWORD*)v3 + 1);
			if (*(_QWORD*)(v6 + v5 + 24) != *(_QWORD*)(qword_140C635F0 + 5792))
			{
				v7 = v6 + v5;
				v8 = (_QWORD*)(v2 + 456);
				v9 = (*(__int64(__fastcall**)(__int64))(v2 + 480))(v6 + v5 + 16);
				v10 = *(_QWORD**)(*(_QWORD*)(v2 + 472) + 8 * (v9 % *(_QWORD*)(v2 + 464)));
				if (!v10)
					goto LABEL_10;
				while (v9 != *v10 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 488))(v7 + 16, v10 + 2))
				{
					v10 = (_QWORD*)v10[1];
					if (!v10)
						goto LABEL_10;
				}
				if (v10 == (_QWORD*)-32i64)
				{
				LABEL_10:
					v11 = sub_14018B280(264i64, 0);
					if (v11)
						v12 = sub_1404B4D50(
							(__int64)v11,
							(__int64*)(v5 + *((_QWORD*)v3 + 1)),
							(_QWORD*)(v2 + 496),
							++ * (_DWORD*)(v2 + 368));
					else
						v12 = 0i64;
					if (*(_QWORD*)(v2 + 416) == *(_QWORD*)(v2 + 424))
						sub_1400290D0(v2 + 416);
					v13 = (*(__int64(__fastcall**)(__int64))(v2 + 440))(v12);
					v14 = (int**)(*(_QWORD*)(v2 + 432) + 8 * (v13 % *(_QWORD*)(v2 + 424)));
					v15 = sub_14018B280(32i64, 0);
					if (v15)
					{
						v16 = *v14;
						*(_QWORD*)v15 = v13;
						*((_QWORD*)v15 + 1) = v16;
						v17 = *(_QWORD*)v12;
						*((_QWORD*)v15 + 3) = v12;
						*((_QWORD*)v15 + 2) = v17;
					}
					*v14 = v15;
					++* (_QWORD*)(v2 + 416);
					if (*(_QWORD*)(v2 + 376) == *(_QWORD*)(v2 + 384))
						sub_1400290D0(v2 + 376);
					v18 = (*(__int64(__fastcall**)(__int64))(v2 + 400))(v12 + 8);
					v19 = (int**)(*(_QWORD*)(v2 + 392) + 8 * (v18 % *(_QWORD*)(v2 + 384)));
					v20 = sub_14018B280(32i64, 0);
					if (v20)
					{
						v21 = *v19;
						*(_QWORD*)v20 = v18;
						*((_QWORD*)v20 + 1) = v21;
						LODWORD(v21) = *(_DWORD*)(v12 + 8);
						*((_QWORD*)v20 + 3) = v12;
						v20[4] = (int)v21;
					}
					*v19 = v20;
					++* (_QWORD*)(v2 + 376);
					if (*v8 == *(_QWORD*)(v2 + 464))
						sub_1400290D0(v2 + 456);
					v22 = (*(__int64(__fastcall**)(__int64))(v2 + 480))(v12 + 184);
					v23 = (int**)(*(_QWORD*)(v2 + 472) + 8 * (v22 % *(_QWORD*)(v2 + 464)));
					v24 = sub_14018B280(40i64, 0);
					if (v24)
					{
						v26 = *v23;
						*(_QWORD*)v24 = v22;
						*((_QWORD*)v24 + 1) = v26;
						*((_QWORD*)v24 + 2) = *(_QWORD*)(v12 + 184);
						v25 = *(_QWORD*)(v12 + 192);
						*((_QWORD*)v24 + 4) = v12;
						*((_QWORD*)v24 + 3) = v25;
					}
					*v23 = v24;
					++* v8;
					v28[1] = (__int64)sub_1404BC210;
					v28[0] = v2;
					sub_1403F8660(v25, 4, (__int64*)(v12 + 184), v28);
					v4 = v29;
					v3 = a2;
					*(_DWORD*)(v12 + 240) = 1;
				}
			}
			++v4;
			v5 += 40i64;
			v29 = v4;
		} while (v4 < *v3);
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingNeighborsLoaded", byte_1409D0F67);
	return 0i64;
}
// 1404BA8A3: variable 'v25' is possibly undefined
// 1409D0F67: using guessed type _BYTE byte_1409D0F67[12];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

