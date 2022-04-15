//----- (00000001405C3360) ----------------------------------------------------
__int64 __fastcall sub_1405C3360(__int64 a1, _QWORD* a2)
{
	unsigned int v2; // edi
	unsigned int v3; // ebp
	unsigned __int64 i; // r14
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned int v9; // esi
	__int64 v10; // rax
	unsigned int v11; // ebx
	_DWORD* v12; // rax
	unsigned int v13; // edx

	v2 = 0;
	v3 = -1;
	for (i = 0i64; i < a2[1]; ++i)
	{
		v6 = *(_DWORD*)(*a2 + 4 * i);
		if (qword_140C63840)
		{
			v7 = qword_140C63840(off_140A6B550, v6, qword_140C63858);
		}
		else
		{
			if (dword_140C65558 || (int)sub_140214FE0() < 0)
				goto LABEL_26;
			v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641F0 + 24i64))(qword_140C641F0, v6);
		}
		v8 = v7;
		if (v7)
		{
			v9 = *(_DWORD*)(v7 + 16);
			if (qword_140C63840)
			{
				v10 = qword_140C63840(off_140A6B518, v9, qword_140C63858);
			}
			else
			{
				if (dword_140C6417C || (int)sub_140214BA0() < 0)
					goto LABEL_26;
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652E0 + 24i64))(qword_140C652E0, v9);
			}
			if (v10 && (unsigned int)(*(_DWORD*)(v10 + 12) - 10) <= 2)
			{
				v11 = *(_DWORD*)(v8 + 20);
				if (!dword_140C7E6A0[0])
					sub_1406454B0();
				if (qword_140C63840)
				{
					v12 = (_DWORD*)qword_140C63840(off_140A6E180, v11, qword_140C63858);
				}
				else
				{
					if (dword_140C64698 || (int)sub_14024AA60() < 0)
						goto LABEL_26;
					v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(
						qword_140C63C08,
						v11);
				}
				if (v12)
				{
					v13 = v12[19];
					if (*((_DWORD*)&qword_140C7E6A4 + (int)v12[20]) - v12[18] < v13)
						v13 = *((_DWORD*)&qword_140C7E6A4 + (int)v12[20]) - v12[18];
					goto LABEL_27;
				}
			}
		}
	LABEL_26:
		v13 = 0;
	LABEL_27:
		if (v13 < v3)
			v3 = v13;
	}
	if (v3 != -1)
		return v3;
	return v2;
}
// 140A6B518: using guessed type wchar_t *off_140A6B518[2];
// 140A6B550: using guessed type wchar_t *off_140A6B550[2];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C6417C: using guessed type int dword_140C6417C;
// 140C641F0: using guessed type __int64 qword_140C641F0;
// 140C64698: using guessed type int dword_140C64698;
// 140C652E0: using guessed type __int64 qword_140C652E0;
// 140C65558: using guessed type int dword_140C65558;
// 140C7E6A0: using guessed type int dword_140C7E6A0[];
// 140C7E6A4: using guessed type __int64 qword_140C7E6A4;

