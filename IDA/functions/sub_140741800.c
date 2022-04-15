//----- (0000000140741800) ----------------------------------------------------
__int64 __fastcall sub_140741800(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int16* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // ebx
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = sub_14022BFC0(*(_DWORD*)(v3 + 8))) != 0)
	{
		v5 = 0i64;
		v6 = sub_14024B980(*(_DWORD*)(v4 + 4));
		if (v6)
		{
			v7 = sub_14024DB80(*(_DWORD*)(v6 + 44));
			if (v7)
			{
				while (1)
				{
					v9 = *(_DWORD*)(v7 + 8);
					if (!v9)
						break;
					if (qword_140C63840)
					{
						v7 = qword_140C63840(off_140A6E3E8, v9, qword_140C63858);
					}
					else
					{
						if (dword_140C64634 || (int)sub_14024D920() < 0)
							goto LABEL_13;
						v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v9);
					}
					if (!v7)
						goto LABEL_13;
				}
				v5 = sub_14034BDD0(v8, *(_DWORD*)(v7 + 4));
			}
			else
			{
			LABEL_13:
				v5 = 0i64;
			}
		}
		v10 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v5)[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			sub_140058710((__int64)a1, v10, v11);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v14)
		{
			sub_14018B900(v14, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1407418DD: variable 'v8' is possibly undefined
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

