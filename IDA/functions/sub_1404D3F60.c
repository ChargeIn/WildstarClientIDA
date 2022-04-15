#include "../winhttp.h"

//----- (00000001404D3F60) ----------------------------------------------------
__int64 __fastcall sub_1404D3F60(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r14d
	unsigned int v4; // ebp
	__int64 v5; // rax
	__int64 v6; // rbx
	int v7; // esi
	unsigned int v8; // edi
	__int64 v9; // rax
	__int64(__fastcall * v10)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v11; // edi
	unsigned int v12; // esi
	__int64 v13; // rax
	unsigned int v14; // edi
	_DWORD* v15; // rax
	unsigned int v16; // r9d

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6B550, qword_140C63858);
	}
	else
	{
		if (dword_140C65558)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140214FE0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C641F0 + 40i64))(qword_140C641F0);
	}
	v3 = v2;
LABEL_9:
	v4 = 0;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (dword_140C65558)
			{
				v6 = 0i64;
			}
			else
			{
				if ((int)sub_140214FE0() >= 0)
				{
					v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641F0 + 32i64))(qword_140C641F0, v4);
					goto LABEL_17;
				}
				v6 = 0i64;
			}
		LABEL_18:
			v7 = *(_DWORD*)(a1 + 24);
			if (!v6 || (*(_BYTE*)(v6 + 4) & 1) == 0)
				goto LABEL_49;
			v8 = *(_DWORD*)(v6 + 16);
			if (qword_140C63840)
			{
				v9 = qword_140C63840(off_140A6B518, v8, qword_140C63858);
			}
			else
			{
				if (dword_140C6417C || (int)sub_140214BA0() < 0)
					goto LABEL_49;
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652E0 + 24i64))(qword_140C652E0, v8);
			}
			if (v9 && (*(_BYTE*)(v9 + 16) & 1) != 0 && *(_DWORD*)(v9 + 12) == v7)
			{
				v10 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				v11 = *(_DWORD*)(v6 + 20);
				v12 = 1;
				if (qword_140C63840)
				{
					v13 = qword_140C63840(off_140A6E180, v11, qword_140C63858);
				LABEL_33:
					if (v13)
						v12 = *(_DWORD*)(v13 + 72);
					goto LABEL_35;
				}
				if (!dword_140C64698)
				{
					if ((int)sub_14024AA60() >= 0)
					{
						v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(
							qword_140C63C08,
							v11);
						goto LABEL_33;
					}
				LABEL_35:
					v10 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				}
				v14 = *(_DWORD*)(v6 + 20);
				if (!dword_140C7E6A0[0])
				{
					sub_1406454B0();
					v10 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				}
				if (v10)
				{
					v15 = (_DWORD*)v10(off_140A6E180, v14, qword_140C63858);
					goto LABEL_43;
				}
				if (dword_140C64698 || (int)sub_14024AA60() < 0)
					goto LABEL_47;
				v15 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(
					qword_140C63C08,
					v14);
			LABEL_43:
				if (!v15)
				{
				LABEL_47:
					v16 = 0;
				}
				else
				{
					v16 = v15[19];
					if (*((_DWORD*)&qword_140C7E6A4 + (int)v15[20]) - v15[18] < v16)
						v16 = *((_DWORD*)&qword_140C7E6A4 + (int)v15[20]) - v15[18];
				}
				sub_1404D41C0(a1, v6, v12, v16);
			}
		LABEL_49:
			if (++v4 >= v3)
				return 0i64;
		}
		v5 = qword_140C63848(off_140A6B550, v4, qword_140C63858);
	LABEL_17:
		v6 = v5;
		goto LABEL_18;
	}
	return 0i64;
}
// 140A6B518: using guessed type wchar_t *off_140A6B518[2];
// 140A6B550: using guessed type wchar_t *off_140A6B550[2];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C6417C: using guessed type int dword_140C6417C;
// 140C641F0: using guessed type __int64 qword_140C641F0;
// 140C64698: using guessed type int dword_140C64698;
// 140C652E0: using guessed type __int64 qword_140C652E0;
// 140C65558: using guessed type int dword_140C65558;
// 140C7E6A0: using guessed type int dword_140C7E6A0[];
// 140C7E6A4: using guessed type __int64 qword_140C7E6A4;

