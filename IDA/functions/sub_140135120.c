//----- (0000000140135120) ----------------------------------------------------
void __fastcall sub_140135120(int* a1)
{
	__int64 v2; // rcx
	int v3; // esi
	__int64 v4; // rcx
	__int64 v5; // r9
	int v6; // r8d
	__int64 v7; // rbp
	__int64 v8; // rcx
	LARGE_INTEGER v9; // rdx
	char v10; // al
	_QWORD* v11; // rax
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rdi
	const __m128i* v16; // r14
	__int64 v17; // rax
	__int64 v18; // [rsp+28h] [rbp-60h]
	char v19[8]; // [rsp+40h] [rbp-48h] BYREF
	const __m128i* v20; // [rsp+48h] [rbp-40h]
	__int64 v21; // [rsp+50h] [rbp-38h]
	int v22; // [rsp+90h] [rbp+8h] BYREF

	v2 = *(_QWORD*)a1;
	if (v2)
	{
		v3 = 0;
		if ((*(int (**)(void))(*(_QWORD*)v2 + 16i64))() > 0)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, char*, _QWORD, _QWORD, _DWORD))(**(_QWORD**)a1 + 24i64))(
					*(_QWORD*)a1,
					v19,
					(unsigned int)v3,
					*((_QWORD*)a1 + 4),
					0);
				v4 = (__int64)v20;
				if (((v21 - (_QWORD)v20) & 0xFFFFFFFFFFFFFFFEui64) != 0 && *((_QWORD*)a1 + 18) != *((_QWORD*)a1 + 17))
				{
					v5 = *((_QWORD*)a1 + 17);
					v6 = a1[14];
					v7 = *(_QWORD*)(*(_QWORD*)a1 + 400i64);
					v8 = *(_QWORD*)a1 + 384i64;
					v9 = *(LARGE_INTEGER*)(a1 + 2);
					LODWORD(v18) = v3 + 1;
					v22 = -2;
					v10 = sub_1400F3010(v8, v9, v6, v5, byte_1409D8E8C, v18, &v22);
					if (v22 != -2 && v10 && v22 >= 0)
					{
						v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64), v22);
						v12 = *(_QWORD*)(v7 + 16);
						*(_QWORD*)v12 = *v11;
						*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
						*(_QWORD*)(v7 + 16) += 16i64;
						v13 = sub_14012E780(v7);
						*(_QWORD*)(v7 + 16) -= 16i64;
						v15 = v13;
						if (v13)
						{
							v16 = v20;
							v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
							if (!*(_DWORD*)(v17 + 92))
								sub_1401A7F50(v17, v16);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
						}
						sub_1400579E0(v7, v14, v22);
					}
					v4 = (__int64)v20;
				}
				if (v4)
					sub_14018B900(v4, 0);
				++v3;
			} while (v3 < (*(int(__fastcall**)(_QWORD))(**(_QWORD**)a1 + 16i64))(*(_QWORD*)a1));
		}
	}
}
// 14013520B: variable 'v18' is possibly undefined
// 140135292: variable 'v14' is possibly undefined
// 1409D8E8C: using guessed type _BYTE byte_1409D8E8C[48];
// 140135120: using guessed type char var_48[8];

