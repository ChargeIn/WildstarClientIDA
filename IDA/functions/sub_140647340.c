//----- (0000000140647340) ----------------------------------------------------
__int64 __fastcall sub_140647340(__int64 a1, _DWORD* a2)
{
	unsigned __int16** v2; // rbp
	unsigned int v3; // eax
	unsigned int v4; // r14d
	int v5; // r12d
	int v6; // r15d
	unsigned int v7; // edi
	int v8; // r13d
	__int64 v9; // rax
	_DWORD* v10; // rbx
	int v11; // edx
	__int16* v12; // rax
	unsigned __int16* v13; // rbp
	__int16* v14; // rsi
	unsigned __int64 v15; // rax
	__int64 result; // rax
	int v19; // [rsp+70h] [rbp+18h]

	v2 = (unsigned __int16**)a1;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6E3E8, qword_140C63858);
	}
	else
	{
		if (dword_140C64634)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14024D920() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64270 + 40i64))(qword_140C64270);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	v6 = 0;
	v7 = 0;
	if (v4)
	{
		v8 = v19;
		while (1)
		{
			if (qword_140C63848)
			{
				v9 = qword_140C63848(off_140A6E3E8, v7, qword_140C63858);
			}
			else
			{
				if (dword_140C64634)
				{
					v10 = 0i64;
					goto LABEL_19;
				}
				if ((int)sub_14024D920() < 0)
				{
					v10 = 0i64;
					goto LABEL_19;
				}
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 32i64))(qword_140C64270, v7);
			}
			v10 = (_DWORD*)v9;
		LABEL_19:
			if (!v10[2])
			{
				v11 = v10[1];
				if (v11)
				{
					v12 = sub_14034BDD0(a1, v11);
					v13 = *v2;
					v14 = v12;
					if (!(unsigned int)sub_14018E2C0((__int64)v12, v13))
					{
						*a2 = *v10;
						return 0i64;
					}
					v15 = sub_14018E5E0(v14, v13);
					v2 = (unsigned __int16**)a1;
					if ((__int16*)v15 == v14)
					{
						v8 = *v10;
						v5 = v6;
						v6 = 1;
					}
				}
			}
			if (++v7 >= v4)
			{
				if (v6 && !v5)
				{
					result = 0i64;
					*a2 = v8;
					return result;
				}
				return 2147943568i64;
			}
		}
	}
	return 2147943568i64;
}
// 140647429: variable 'a1' is possibly undefined
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

