//----- (0000000140404EE0) ----------------------------------------------------
__int64 __fastcall sub_140404EE0(__int64 a1)
{
	__int64* v1; // r14
	unsigned int v2; // esi
	unsigned int v3; // eax
	unsigned int v4; // r15d
	__int64 v5; // rax
	int* v6; // rdi
	int v7; // eax
	unsigned __int64 v8; // rbp
	unsigned int v9; // r10d
	__int64 v10; // r11
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rbx
	__int64 v14; // r9
	unsigned int v15; // r8d
	__int64 v16; // rcx
	int* v17; // rax
	int v18; // eax
	__int64 v20; // [rsp+50h] [rbp+8h] BYREF

	v20 = a1;
	v1 = (__int64*)qword_140C658A0;
	v2 = 0;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A69870, qword_140C63858);
	}
	else
	{
		if (dword_140C6528C || (int)sub_1401F1E80() < 0)
			goto LABEL_33;
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64728 + 40i64))(qword_140C64728);
	}
	v4 = v3;
	if (v3)
	{
		do
		{
			if (qword_140C63848)
			{
				v5 = qword_140C63848(off_140A69870, v2, qword_140C63858);
			}
			else
			{
				if (dword_140C6528C)
				{
					v6 = 0i64;
					goto LABEL_15;
				}
				if ((int)sub_1401F1E80() < 0)
				{
					v6 = 0i64;
					goto LABEL_15;
				}
				v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64728 + 32i64))(qword_140C64728, v2);
			}
			v6 = (int*)v5;
		LABEL_15:
			v7 = v6[13];
			if ((v7 & 8) != 0 && (v7 & 0x80u) == 0)
			{
				v8 = v1[1];
				v9 = *v6;
				v10 = *v1;
				v11 = 0i64;
				v12 = v8;
				while (v11 < v12)
				{
					v13 = v11 + ((v12 - v11) >> 1);
					v14 = *(_QWORD*)(v10 + 8 * v13);
					v15 = **(_DWORD**)(v14 + 8);
					if (v15 < v9)
					{
						v11 = v13 + 1;
					}
					else
					{
						if (v15 <= v9 && !*(_QWORD*)(v14 + 16))
							goto LABEL_25;
						v12 = v11 + ((v12 - v11) >> 1);
					}
				}
				v13 = v11;
			LABEL_25:
				if (v13 >= v8 || (v16 = *(_QWORD*)(v10 + 8 * v13), **(_DWORD**)(v16 + 8) != v9) || *(_QWORD*)(v16 + 16))
				{
					v17 = sub_14018B280(312i64, 0);
					if (v17)
						v20 = sub_140401690((__int64)v17, v6, 0i64);
					else
						v20 = 0i64;
					sub_1400B4DE0(v1, v13, &v20);
				}
			}
			++v2;
		} while (v2 < v4);
	}
LABEL_33:
	v18 = dword_140C45F80;
	if (*(_DWORD*)qword_140C63750 < dword_140C45F80)
		v18 = *(_DWORD*)qword_140C63750;
	sub_1404057A0((__int64)v1, *((unsigned __int8*)&dword_140C45F90 + v18));
	return 0i64;
}
// 140A69870: using guessed type wchar_t *off_140A69870[2];
// 140C45F80: using guessed type int dword_140C45F80;
// 140C45F90: using guessed type int dword_140C45F90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64728: using guessed type __int64 qword_140C64728;
// 140C6528C: using guessed type int dword_140C6528C;
// 140C658A0: using guessed type __int64 qword_140C658A0;

