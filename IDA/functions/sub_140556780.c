#include "../winhttp.h"

//----- (0000000140556780) ----------------------------------------------------
__int64 __fastcall sub_140556780(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rcx
	_QWORD* v5; // rax
	__int64 v6; // rcx
	unsigned __int64 v7; // rdx
	_QWORD** v8; // rcx
	_QWORD* v9; // rax
	int v10; // eax
	int v11; // ecx
	__int64 v12; // rcx
	unsigned __int64 v13; // rdx
	_QWORD** v14; // rcx
	_QWORD* v15; // rax
	int v16; // eax
	int v17; // ecx
	__int64 v18; // rcx
	int v19; // eax
	int v20; // edx
	int v21; // eax

	if (!(_DWORD)qword_140C7DC60)
		return 0i64;
	if (!a2)
		return 0i64;
	v4 = *(_QWORD**)(qword_140C7DCD0 + 16i64 * (int)qword_140C7DC60 + 8);
	v5 = (_QWORD*)*v4;
	if ((_QWORD*)*v4 == v4)
		return 0i64;
	while (v5[2] != a2)
	{
		v5 = (_QWORD*)*v5;
		if (v5 == v4)
			return 0i64;
	}
	sub_14034BDD0((__int64)v4, 0);
	qword_140C7DC98 = 0i64;
	dword_140C7DCA0 = 0;
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_ResponseText", byte_1409E92E4, *(_QWORD*)(a2 + 32));
	if ((_DWORD)qword_140C7DC60 == 1)
	{
		v21 = sub_1405588B0((unsigned int)(qword_140C7DC60 - 1), *(_DWORD*)(a2 + 56));
		return sub_140558930((__int64)&qword_140C7DC60, v21, *(_DWORD*)(a2 + 60), 0);
	}
	else
	{
		v6 = (unsigned int)(qword_140C7DC60 - 2);
		switch ((_DWORD)qword_140C7DC60)
		{
		case 2:
			v19 = *(_DWORD*)(a2 + 56);
			v20 = *(_DWORD*)(a2 + 60);
			if (v19 == 11)
			{
				return sub_140556B20(v6, v20);
			}
			else if (v19 == 13)
			{
				return sub_140557340(v6, v20, *(_DWORD*)(a2 + 68));
			}
			else
			{
				return sub_140556DE0(v6, v20);
			}
		case 3:
			if (*(_DWORD*)(a2 + 56) == 10)
				return sub_140557000((unsigned int)(qword_140C7DC60 - 3), *(_DWORD*)(a2 + 60), *(_DWORD*)(a2 + 64));
			v13 = 0i64;
			v14 = *(_QWORD***)(qword_140C7DCD0 + 24);
			v15 = *v14;
			if (*v14 == v14)
				goto LABEL_41;
			do
			{
				v15 = (_QWORD*)*v15;
				++v13;
			} while (v15 != v14);
			if (v13 <= 2)
				goto LABEL_41;
			if ((_QWORD)xmmword_140C7DCB0 != *((_QWORD*)&xmmword_140C7DCB0 + 1))
			{
				*(_BYTE*)xmmword_140C7DCB0 = 0;
				*((_QWORD*)&xmmword_140C7DCB0 + 1) = xmmword_140C7DCB0;
			}
			v16 = dword_140C7DC68;
			HIDWORD(qword_140C7DC74) = 0;
			LODWORD(qword_140C7DC60) = 1;
			if (dword_140C7DC68)
			{
				v17 = qword_140C7DC98;
				if (!(_DWORD)qword_140C7DC98)
				{
					sub_140557470((__int64)&qword_140C7DC60);
					v17 = qword_140C7DC98;
					v16 = dword_140C7DC68;
				}
				if (v16 && !v17)
					sub_140557E50((__int64)&qword_140C7DC60);
			}
			sub_140426120(*(_QWORD*)(qword_140C65898 + 29504), qword_140C7DC60, qword_140C7DC74);
			sub_14034BDD0(v18, 0);
			qword_140C7DC98 = 0i64;
			dword_140C7DCA0 = 0;
			return 1i64;
		case 4:
			if (*(_DWORD*)(a2 + 56) == 13)
				return sub_140557340((unsigned int)(qword_140C7DC60 - 4), *(_DWORD*)(a2 + 60), *(_DWORD*)(a2 + 68));
			v7 = 0i64;
			v8 = *(_QWORD***)(qword_140C7DCD0 + 24);
			v9 = *v8;
			if (*v8 != v8)
			{
				do
				{
					v9 = (_QWORD*)*v9;
					++v7;
				} while (v9 != v8);
				if (v7 > 2)
				{
					if ((_QWORD)xmmword_140C7DCB0 != *((_QWORD*)&xmmword_140C7DCB0 + 1))
					{
						*(_BYTE*)xmmword_140C7DCB0 = 0;
						*((_QWORD*)&xmmword_140C7DCB0 + 1) = xmmword_140C7DCB0;
					}
					v10 = dword_140C7DC68;
					HIDWORD(qword_140C7DC74) = 0;
					LODWORD(qword_140C7DC60) = 1;
					if (dword_140C7DC68)
					{
						v11 = qword_140C7DC98;
						if (!(_DWORD)qword_140C7DC98)
						{
							sub_140557470((__int64)&qword_140C7DC60);
							v11 = qword_140C7DC98;
							v10 = dword_140C7DC68;
						}
						if (v10)
						{
							if (!v11)
								sub_140557E50((__int64)&qword_140C7DC60);
						}
					}
					sub_140426120(*(_QWORD*)(qword_140C65898 + 29504), qword_140C7DC60, qword_140C7DC74);
				LABEL_44:
					sub_14034BDD0(v12, 0);
					qword_140C7DC98 = 0i64;
					dword_140C7DCA0 = 0;
					return 1i64;
				}
			}
		LABEL_41:
			if ((_QWORD)xmmword_140C7DCB0 != *((_QWORD*)&xmmword_140C7DCB0 + 1))
			{
				*(_BYTE*)xmmword_140C7DCB0 = 0;
				*((_QWORD*)&xmmword_140C7DCB0 + 1) = xmmword_140C7DCB0;
			}
			HIDWORD(qword_140C7DC74) = 0;
			LODWORD(qword_140C7DC60) = 0;
			sub_140557C30((__int64)&qword_140C7DC60);
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_Close", byte_1409D0BFF);
			sub_140554EA0((__int64)&qword_140C7DC60, 1);
			goto LABEL_44;
		default:
			return 0i64;
		}
	}
}
// 1405569FC: variable 'v18' is possibly undefined
// 140556A8B: variable 'v12' is possibly undefined
// 1409D0BFF: using guessed type _BYTE byte_1409D0BFF[19];
// 1409E92E4: using guessed type _BYTE byte_1409E92E4[64];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140C7DC98: using guessed type __int64 qword_140C7DC98;
// 140C7DCA0: using guessed type int dword_140C7DCA0;
// 140C7DCB0: using guessed type __int128 xmmword_140C7DCB0;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

