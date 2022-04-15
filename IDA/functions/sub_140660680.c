//----- (0000000140660680) ----------------------------------------------------
__int64 __fastcall sub_140660680(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r15d
	__int64 v4; // r12
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // r14d
	__int64 v8; // rax
	int* v9; // rsi
	int v10; // ebp
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rcx
	int v16; // ebx
	int v17; // eax
	unsigned __int16* v18; // rax
	__int64 v19; // rdx
	int v20; // eax
	__int64 v21; // rax
	int v22; // eax
	__int16* v23; // rax
	__int64 v24; // rdx
	char* v25; // r8

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6E030, qword_140C63858);
	}
	else
	{
		if (dword_140C63E44)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1402490E0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64330 + 40i64))(qword_140C64330);
	}
	v3 = v2;
LABEL_9:
	v4 = *(_QWORD*)(qword_140C65898 + 28048);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	v7 = 0;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v3)
	{
		do
		{
			if (qword_140C63848)
			{
				v8 = qword_140C63848(off_140A6E030, v7, qword_140C63858);
			}
			else
			{
				if (dword_140C63E44)
				{
					v9 = 0i64;
					goto LABEL_20;
				}
				if ((int)sub_1402490E0() < 0)
				{
					v9 = 0i64;
					goto LABEL_20;
				}
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64330 + 32i64))(qword_140C64330, v7);
			}
			v9 = (int*)v8;
		LABEL_20:
			v10 = *v9;
			v11 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v11 + 8) = 3;
			*(double*)v11 = (double)v10;
			v12 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
				sub_14005E2C0(a1);
			v13 = *(_QWORD*)(a1 + 16);
			v14 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v13 + 8) = 5;
			*(_QWORD*)v13 = v14;
			*(_QWORD*)(a1 + 16) += 16i64;
			v16 = 1;
			if (v4)
			{
				v17 = sub_1406621F0(v10);
				if (v17 < 11)
				{
					v18 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 72i64))(
						v4,
						(unsigned int)v17);
					if (v18)
					{
						v16 = 0;
						sub_1400F0090(a1, v19, (unsigned __int64*)"strName", v18);
					}
				}
			}
			if (*(_DWORD*)(qword_140C65B98 + 268) != 4)
				goto LABEL_45;
			v20 = dword_140DC4AF0;
			if ((dword_140DC4AF0 & 1) == 0)
			{
				v20 = dword_140DC4AF0 | 1;
				dword_140DC4AF0 |= 1u;
				if (qword_140C63840)
				{
					v21 = qword_140C63840(off_140A6A408, 867i64, qword_140C63858);
				LABEL_33:
					if (v21)
					{
						v15 = *(unsigned int*)(v21 + 8);
						v20 = dword_140DC4AF0;
						dword_140DC4AF4 = v15;
						goto LABEL_38;
					}
					goto LABEL_35;
				}
				if (!dword_140C638AC)
				{
					if ((int)sub_1401FFFC0() >= 0)
					{
						v21 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(
							qword_140C64C58,
							867i64);
						goto LABEL_33;
					}
				LABEL_35:
					v20 = dword_140DC4AF0;
				}
				v15 = 0i64;
				dword_140DC4AF4 = 0;
				goto LABEL_38;
			}
			v15 = (unsigned int)dword_140DC4AF4;
		LABEL_38:
			if ((v20 & 2) != 0)
			{
				v22 = dword_140DC4AF8;
			}
			else
			{
				dword_140DC4AF0 = v20 | 2;
				if ((_DWORD)v15 == 2)
				{
					v22 = 24;
					dword_140DC4AF8 = 24;
				}
				else
				{
					v22 = ((_DWORD)v15 == 1) + 22;
					dword_140DC4AF8 = v22;
				}
			}
			if (v10 == v22)
			{
				v23 = sub_14034BDD0(v15, 563678);
				v25 = "strName";
			LABEL_47:
				sub_1400F0090(a1, v24, (unsigned __int64*)v25, (unsigned __int16*)v23);
				goto LABEL_48;
			}
		LABEL_45:
			if (v16)
			{
				v23 = sub_14034BDD0(v15, v9[1]);
				v25 = "strName";
				goto LABEL_47;
			}
		LABEL_48:
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			++v7;
		} while (v7 < v3);
	}
	return 1i64;
}
// 140660819: variable 'v19' is possibly undefined
// 14066090F: variable 'v15' is possibly undefined
// 140660921: variable 'v24' is possibly undefined
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140A6E030: using guessed type wchar_t *off_140A6E030[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C63E44: using guessed type int dword_140C63E44;
// 140C64330: using guessed type __int64 qword_140C64330;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140DC4AF0: using guessed type int dword_140DC4AF0;
// 140DC4AF4: using guessed type int dword_140DC4AF4;
// 140DC4AF8: using guessed type int dword_140DC4AF8;

