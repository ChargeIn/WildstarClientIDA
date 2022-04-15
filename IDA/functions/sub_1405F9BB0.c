//----- (00000001405F9BB0) ----------------------------------------------------
__int64 __fastcall sub_1405F9BB0(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r15d
	unsigned int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rbp
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	int* v13; // rbx
	int* v14; // rax
	int v15; // eax
	__int64 v16; // rbx
	int* v17; // rax
	_QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
	char v20[16]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v21; // [rsp+78h] [rbp+10h] BYREF
	__int64 v22; // [rsp+80h] [rbp+18h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A699C0, qword_140C63858);
	}
	else
	{
		if (dword_140C64030)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401F3800() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64CF0 + 40i64))(qword_140C64CF0);
	}
	v3 = v2;
LABEL_9:
	v4 = 0;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (dword_140C64030)
			{
				v6 = 0i64;
			}
			else
			{
				if ((int)sub_1401F3800() >= 0)
				{
					v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64CF0 + 32i64))(qword_140C64CF0, v4);
					goto LABEL_17;
				}
				v6 = 0i64;
			}
		LABEL_18:
			switch (*(_DWORD*)(v6 + 20))
			{
			case 0:
				v7 = a1 + 96;
				goto LABEL_29;
			case 1:
				v7 = a1 + 160;
				goto LABEL_29;
			case 2:
				v7 = a1 + 192;
				goto LABEL_29;
			case 3:
				v7 = a1 + 224;
				goto LABEL_29;
			case 4:
				v7 = a1 + 256;
				goto LABEL_29;
			case 5:
				v7 = a1 + 128;
				goto LABEL_29;
			case 6:
				v7 = a1 + 288;
				goto LABEL_29;
			case 7:
				v7 = a1 + 320;
				goto LABEL_29;
			case 8:
				v7 = a1 + 352;
				goto LABEL_29;
			case 9:
				v7 = a1 + 384;
			LABEL_29:
				if (v7)
				{
					v8 = *(_QWORD*)(v7 + 8);
					v9 = v8;
					v10 = *(_QWORD*)(v8 + 8);
					while (v10)
					{
						if (*(_DWORD*)(v10 + 32) < *(_DWORD*)(v6 + 24))
						{
							v10 = *(_QWORD*)(v10 + 24);
						}
						else
						{
							v9 = v10;
							v10 = *(_QWORD*)(v10 + 16);
						}
					}
					if (v9 == v8 || *(_DWORD*)(v6 + 24) < *(_DWORD*)(v9 + 32))
					{
						v22 = *(_QWORD*)(v7 + 8);
						v11 = &v22;
					}
					else
					{
						v21 = v9;
						v11 = &v21;
					}
					v12 = *v11;
					if (v12 == v8)
					{
						v13 = sub_14018B280(16i64, 0);
						if (v13)
						{
							v14 = sub_14018B280(24i64, 0);
							*((_QWORD*)v13 + 1) = v14;
							*(_QWORD*)v14 = v14;
							*(_QWORD*)(*((_QWORD*)v13 + 1) + 8i64) = *((_QWORD*)v13 + 1);
						}
						else
						{
							v13 = 0i64;
						}
						v15 = *(_DWORD*)(v6 + 24);
						v19[1] = v13;
						LODWORD(v19[0]) = v15;
						sub_140055F80(v7, (__int64)v20, v19);
					}
					else
					{
						v13 = *(int**)(v12 + 40);
					}
					v16 = *((_QWORD*)v13 + 1);
					v17 = sub_14018B280(24i64, 0);
					if (v17 != (int*)-16i64)
						*((_QWORD*)v17 + 2) = v6;
					*(_QWORD*)v17 = v16;
					*((_QWORD*)v17 + 1) = *(_QWORD*)(v16 + 8);
					**(_QWORD**)(v16 + 8) = v17;
					*(_QWORD*)(v16 + 8) = v17;
				}
				break;
			default:
				break;
			}
			if (++v4 >= v3)
				return 0i64;
		}
		v5 = qword_140C63848(off_140A699C0, v4, qword_140C63858);
	LABEL_17:
		v6 = v5;
		goto LABEL_18;
	}
	return 0i64;
}
// 140A699C0: using guessed type wchar_t *off_140A699C0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64030: using guessed type int dword_140C64030;
// 140C64CF0: using guessed type __int64 qword_140C64CF0;
// 1405F9BB0: using guessed type char var_38[16];

