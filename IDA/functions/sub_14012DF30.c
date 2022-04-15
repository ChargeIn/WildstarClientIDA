//----- (000000014012DF30) ----------------------------------------------------
__int64 __fastcall sub_14012DF30(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v4; // r14
	__int64 v5; // rbx
	_QWORD* i; // r14
	_QWORD* v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned __int16* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rsi
	_WORD* v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int16* v18; // rax

	v2 = sub_14012AAF0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2) + 8);
		if (v4 && (v5 = v4[6]) != 0)
		{
			while (!(**(__int64(__fastcall***)(__int64))v5)(v5))
			{
				v5 = *(_QWORD*)(v5 + 72);
				if (!v5)
					goto LABEL_7;
			}
			(*(void(__fastcall**)(_QWORD*))(*v4 + 8i64))(v4);
			for (i = (_QWORD*)v4[6]; i; i = (_QWORD*)i[9])
			{
				v7 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*i + 8i64))(i);
				if (v7)
				{
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v8 = a1[2];
					v9 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v8 + 8) = 5;
					*(_QWORD*)v8 = v9;
					a1[2] += 16i64;
					if ((*(__int64(__fastcall**)(_QWORD*))(*v7 + 48i64))(v7))
						v11 = 0i64;
					else
						v11 = (unsigned __int16*)sub_1401A4F40((__int64)(v7 + 3));
					sub_1400F0870((__int64)a1, v10, L"__XmlNode", v11);
					sub_14012DCC0((__int64)a1, v7, 0);
				}
				else
				{
					v12 = (*(__int64(__fastcall**)(_QWORD*))(*i + 24i64))(i);
					v13 = v12;
					if (v12 && !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 48i64))(v12) && sub_1401A4F40(v13 + 24))
					{
						v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 48i64))(v13)
							? 0i64
							: (_WORD*)sub_1401A4F40(v13 + 24);
						if (*v14)
						{
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v15 = a1[2];
							v16 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v15 + 8) = 5;
							*(_QWORD*)v15 = v16;
							a1[2] += 16i64;
							if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 48i64))(v13))
								v18 = 0i64;
							else
								v18 = (unsigned __int16*)sub_1401A4F40(v13 + 24);
							sub_1400F0870((__int64)a1, v17, L"__XmlText", v18);
						}
					}
				}
			}
		}
		else
		{
		LABEL_7:
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14012E04F: variable 'v10' is possibly undefined
// 14012E11F: variable 'v17' is possibly undefined
// 140A204D8: using guessed type wchar_t aXmlnode[10];
// 140A204F0: using guessed type wchar_t aXmltext[10];

