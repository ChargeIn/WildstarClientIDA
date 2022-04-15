//----- (0000000140378110) ----------------------------------------------------
unsigned __int64 __fastcall sub_140378110(__int64 a1)
{
	unsigned __int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned int v6; // ecx
	int v7; // ebx
	__int64 v8; // rax
	bool v9; // cf
	__int64 v10; // rax
	int* v11; // rax
	int v12; // ecx
	int* v13; // rdx
	_QWORD* v14; // rax
	int v15; // ecx
	unsigned int v16; // r15d
	int v17; // eax
	__int64 v18; // rsi
	void(__fastcall * **v19)(_QWORD); // rbx
	unsigned __int64 v20; // rdi
	_QWORD* v21; // rbx
	int* v22; // rax
	void(__fastcall * ***v23)(_QWORD); // rbx
	__int64 v24; // rcx
	__int64 v25; // rcx
	unsigned int v26; // edx
	int v27; // ebx
	__int64 v28; // rax
	__int64 v29; // rax
	int v30; // ecx
	int* v31; // rdx
	int v32; // ecx
	unsigned int v33; // r15d
	__int64 v34; // rdi
	__int64 v35; // rbx
	unsigned __int64 v36; // rsi
	_QWORD* v37; // rbx
	int* v38; // rax
	__int64* v39; // rbx
	__int64 v40; // rdi
	__int64* v41; // rdi
	__int64** v42; // rcx
	__int64 v43; // rax
	int j; // [rsp+50h] [rbp+8h] BYREF
	int i; // [rsp+54h] [rbp+Ch]

	if (!*(_QWORD*)(a1 + 24) || (result = *(_QWORD*)(a1 + 32), *(_DWORD*)(result + 1052)))
	{
		if (*(_QWORD*)(a1 + 1060) != *(_QWORD*)(a1 + 944) || *(_QWORD*)(a1 + 1068) != *(_QWORD*)(a1 + 952))
		{
			v5 = *(_QWORD*)(a1 + 1080);
			if (v5)
				sub_140376280(v5);
			*(_DWORD*)(a1 + 1060) = *(_DWORD*)(a1 + 944);
			*(_DWORD*)(a1 + 1064) = *(_DWORD*)(a1 + 948);
			*(_DWORD*)(a1 + 1068) = *(_DWORD*)(a1 + 952);
			*(_DWORD*)(a1 + 1072) = *(_DWORD*)(a1 + 956);
			v6 = (*(_DWORD*)(a1 + 952) - *(_DWORD*)(a1 + 944)) * (*(_DWORD*)(a1 + 956) - *(_DWORD*)(a1 + 948));
			if (!v6)
				goto LABEL_21;
			v7 = (*(_DWORD*)(a1 + 952) - *(_DWORD*)(a1 + 944)) * (*(_DWORD*)(a1 + 956) - *(_DWORD*)(a1 + 948));
			v8 = 32i64 * v6;
			if (!is_mul_ok(v6, 0x20ui64))
				v8 = -1i64;
			v9 = __CFADD__(v8, 8i64);
			v10 = v8 + 8;
			if (v9)
				v10 = -1i64;
			v11 = sub_14018B280(v10, 0);
			if (v11)
			{
				v12 = v7 - 1;
				*v11 = v7;
				v13 = v11 + 2;
				if (v7 - 1 >= 0)
				{
					v14 = v11 + 6;
					do
					{
						--v12;
						*v14 = 0i64;
						v14[1] = 0i64;
						*(v14 - 2) = 0i64;
						*(v14 - 1) = 0i64;
						v14 += 4;
					} while (v12 >= 0);
				}
			}
			else
			{
			LABEL_21:
				v13 = 0i64;
			}
			v15 = *(_DWORD*)(a1 + 948);
			*(_QWORD*)(a1 + 1080) = v13;
			v16 = 0;
			for (i = v15; v15 < *(_DWORD*)(a1 + 956); i = v15)
			{
				v17 = *(_DWORD*)(a1 + 944);
				for (j = v17; v17 < *(_DWORD*)(a1 + 952); j = v17)
				{
					v18 = *(_QWORD*)(a1 + 16);
					v19 = 0i64;
					if (v17 >= (int)qword_140C44530
						&& v17 < dword_140C44538
						&& v15 >= SHIDWORD(qword_140C44530)
						&& v15 < dword_140C4453C)
					{
						v20 = (*(__int64(__fastcall**)(int*))(v18 + 2384))(&j);
						v21 = *(_QWORD**)(*(_QWORD*)(v18 + 2376) + 8 * (v20 % *(_QWORD*)(v18 + 2368)));
						if (!v21)
							goto LABEL_32;
						while (v20 != *v21 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v18 + 2392))(&j, v21 + 2))
						{
							v21 = (_QWORD*)v21[1];
							if (!v21)
								goto LABEL_32;
						}
						v23 = (void(__fastcall****)(_QWORD))(v21 + 3);
						if (v23)
						{
							v19 = *v23;
							(**v19)(v19);
						}
						else
						{
						LABEL_32:
							v22 = sub_14018B280(112i64, 0);
							if (v22)
								v19 = (void(__fastcall***)(_QWORD))sub_14038F6A0((__int64)v22, v18, &j);
							else
								v19 = 0i64;
						}
					}
					v24 = 32i64 * v16++;
					sub_14038F600((_QWORD*)(*(_QWORD*)(a1 + 1080) + v24), v19, a1);
					if (v19)
						(*v19)[1](v19);
					v15 = i;
					v17 = j + 1;
				}
				++v15;
			}
		}
		if (*(_QWORD*)(a1 + 1088) != *(_QWORD*)(a1 + 960)
			|| (result = *(_QWORD*)(a1 + 1096), result != *(_QWORD*)(a1 + 968)))
		{
			v25 = *(_QWORD*)(a1 + 1104);
			if (v25)
				sub_1403762E0(v25);
			*(_DWORD*)(a1 + 1088) = *(_DWORD*)(a1 + 944);
			*(_DWORD*)(a1 + 1092) = *(_DWORD*)(a1 + 948);
			result = *(unsigned int*)(a1 + 952);
			*(_DWORD*)(a1 + 1096) = result;
			*(_DWORD*)(a1 + 1100) = *(_DWORD*)(a1 + 956);
			v26 = (*(_DWORD*)(a1 + 968) - *(_DWORD*)(a1 + 960)) * (*(_DWORD*)(a1 + 972) - *(_DWORD*)(a1 + 964));
			if (!v26)
				goto LABEL_55;
			v27 = (*(_DWORD*)(a1 + 968) - *(_DWORD*)(a1 + 960)) * (*(_DWORD*)(a1 + 972) - *(_DWORD*)(a1 + 964));
			v28 = 32i64 * v26;
			if (!is_mul_ok(v26, 0x20ui64))
				v28 = -1i64;
			v9 = __CFADD__(v28, 8i64);
			v29 = v28 + 8;
			if (v9)
				v29 = -1i64;
			result = (unsigned __int64)sub_14018B280(v29, 0);
			if (result)
			{
				v30 = v27 - 1;
				*(_DWORD*)result = v27;
				v31 = (int*)(result + 8);
				if (v27 - 1 >= 0)
				{
					result += 24i64;
					do
					{
						--v30;
						*(_QWORD*)result = 0i64;
						*(_QWORD*)(result + 8) = 0i64;
						*(_QWORD*)(result - 16) = 0i64;
						result += 32i64;
					} while (v30 >= 0);
				}
			}
			else
			{
			LABEL_55:
				v31 = 0i64;
			}
			v32 = *(_DWORD*)(a1 + 964);
			*(_QWORD*)(a1 + 1104) = v31;
			v33 = 0;
			for (i = v32; v32 < *(_DWORD*)(a1 + 972); i = v32)
			{
				result = *(unsigned int*)(a1 + 960);
				for (j = result; (int)result < *(_DWORD*)(a1 + 968); j = result)
				{
					v34 = *(_QWORD*)(a1 + 16);
					v35 = 0i64;
					if ((int)result >= (int)qword_140C44530
						&& (int)result < dword_140C44538
						&& v32 >= SHIDWORD(qword_140C44530)
						&& v32 < dword_140C4453C)
					{
						v36 = (*(__int64(__fastcall**)(int*))(v34 + 2384))(&j);
						v37 = *(_QWORD**)(*(_QWORD*)(v34 + 2376) + 8 * (v36 % *(_QWORD*)(v34 + 2368)));
						if (!v37)
							goto LABEL_66;
						while (v36 != *v37 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v34 + 2392))(&j, v37 + 2))
						{
							v37 = (_QWORD*)v37[1];
							if (!v37)
								goto LABEL_66;
						}
						v39 = v37 + 3;
						if (v39)
						{
							v35 = *v39;
							(**(void(__fastcall***)(__int64))v35)(v35);
						}
						else
						{
						LABEL_66:
							v38 = sub_14018B280(112i64, 0);
							if (v38)
								v35 = sub_14038F6A0((__int64)v38, v34, &j);
							else
								v35 = 0i64;
						}
					}
					v40 = v33++;
					v41 = (__int64*)(*(_QWORD*)(a1 + 1104) + 32 * v40);
					*v41 = v35;
					v41[1] = a1;
					(**(void(__fastcall***)(__int64))v35)(v35);
					v42 = (__int64**)(*v41 + 56);
					if (!v41[2])
					{
						v41[2] = (__int64)v42;
						v41[3] = (__int64)*v42;
						*v42 = v41;
						v43 = v41[3];
						if (v43)
							*(_QWORD*)(v43 + 16) = v41 + 3;
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
					v32 = i;
					result = (unsigned int)(j + 1);
				}
				++v32;
			}
		}
	}
	else
	{
		v3 = *(_QWORD*)(a1 + 1080);
		if (v3)
		{
			sub_140376280(v3);
			*(_QWORD*)(a1 + 1060) = qword_140C784C0;
			*(_DWORD*)(a1 + 1068) = qword_140C784C8;
			result = HIDWORD(qword_140C784C8);
			*(_DWORD*)(a1 + 1072) = HIDWORD(qword_140C784C8);
			*(_QWORD*)(a1 + 1080) = 0i64;
		}
		v4 = *(_QWORD*)(a1 + 1104);
		if (v4)
		{
			sub_1403762E0(v4);
			*(_QWORD*)(a1 + 1088) = qword_140C784C0;
			*(_DWORD*)(a1 + 1096) = qword_140C784C8;
			result = HIDWORD(qword_140C784C8);
			*(_DWORD*)(a1 + 1100) = HIDWORD(qword_140C784C8);
			*(_QWORD*)(a1 + 1104) = 0i64;
		}
	}
	return result;
}
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;

