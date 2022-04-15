//----- (000000014002FBE0) ----------------------------------------------------
__int64 __fastcall sub_14002FBE0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r14d
	__int64 v7; // rsi
	unsigned __int64 v8; // r15
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64* v20; // rax
	__int64 v21; // rcx
	__int16* v22; // rax
	__int64 v23; // rdx
	float v24; // xmm6_4
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rax
	__int64* v28; // rax

	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v4 = *(_QWORD*)(a2 + 16);
	v5 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	v6 = 0;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a2 + 16) += 16i64;
	v7 = 0i64;
	v8 = (__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3;
	if (v8)
	{
		while (1)
		{
			v9 = *(_DWORD*)(*(_QWORD*)(a1 + 4824) + 8 * v7);
			if (qword_140C63840)
				break;
			if (!dword_140C64580 && (int)sub_1401FA680() >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65470 + 24i64))(qword_140C65470, v9);
			LABEL_9:
				v11 = v10;
				if (v10)
				{
					v12 = *(_QWORD*)(a2 + 16);
					++v6;
					*(_DWORD*)(v12 + 8) = 3;
					*(double*)v12 = (double)v6;
					v13 = *(_QWORD*)(a2 + 32);
					*(_QWORD*)(a2 + 16) += 16i64;
					if (*(_QWORD*)(v13 + 120) >= *(_QWORD*)(v13 + 112))
						sub_14005E2C0(a2);
					v14 = *(_QWORD*)(a2 + 16);
					v15 = sub_14005C1B0(a2, 0, 0);
					*(_DWORD*)(v14 + 8) = 5;
					*(_QWORD*)v14 = v15;
					v16 = *(_QWORD*)(a2 + 32);
					*(_QWORD*)(a2 + 16) += 16i64;
					if (*(_QWORD*)(v16 + 120) >= *(_QWORD*)(v16 + 112))
						sub_14005E2C0(a2);
					v17 = *(_QWORD*)(a2 + 16);
					v18 = sub_140062650(a2, (unsigned __int64*)"sliderId", 8ui64);
					*(_DWORD*)(v17 + 8) = 4;
					*(_QWORD*)v17 = v18;
					*(_QWORD*)(a2 + 16) += 16i64;
					v19 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v19 + 8) = 3;
					*(double*)v19 = (double)(int)v7;
					*(_QWORD*)(a2 + 16) += 16i64;
					v20 = (__int64*)sub_1400580E0(a2, -3);
					sub_14005EA50(a2, v20, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
					v22 = sub_14034BDD0(v21, *(_DWORD*)(v11 + 4));
					sub_1400F0090(a2, v23, (unsigned __int64*)"name", (unsigned __int16*)v22);
					v24 = *(float*)(*(_QWORD*)(a1 + 4824) + 8 * v7 + 4);
					if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
						sub_14005E2C0(a2);
					v25 = *(_QWORD*)(a2 + 16);
					v26 = sub_140062650(a2, (unsigned __int64*)"value", 5ui64);
					*(_DWORD*)(v25 + 8) = 4;
					*(_QWORD*)v25 = v26;
					*(_QWORD*)(a2 + 16) += 16i64;
					v27 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v27 + 8) = 3;
					*(double*)v27 = v24;
					*(_QWORD*)(a2 + 16) += 16i64;
					v28 = (__int64*)sub_1400580E0(a2, -3);
					sub_14005EA50(a2, v28, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
					sub_14005EA50(
						a2,
						(__int64*)(*(_QWORD*)(a2 + 16) - 48i64),
						(int*)(*(_QWORD*)(a2 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
				}
			}
			if (++v7 >= v8)
				return 1i64;
		}
		v10 = qword_140C63840(off_140A69F70, v9, qword_140C63858);
		goto LABEL_9;
	}
	return 1i64;
}
// 14002FD9B: variable 'v21' is possibly undefined
// 14002FDAD: variable 'v23' is possibly undefined
// 140A69F70: using guessed type wchar_t *off_140A69F70[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64580: using guessed type int dword_140C64580;
// 140C65470: using guessed type __int64 qword_140C65470;

