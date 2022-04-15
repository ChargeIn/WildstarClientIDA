#include "../winhttp.h"

//----- (0000000140556DE0) ----------------------------------------------------
__int64 __fastcall sub_140556DE0(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64* v4; // rbx
	__int64 v5; // rdi
	unsigned int v6; // eax
	unsigned __int64 v7; // rdx
	_QWORD** v8; // rcx
	_QWORD* v9; // rax
	int v10; // eax
	__int64 v11; // rcx

	result = sub_1405A8A40(a1, a2);
	v3 = result;
	if (result)
	{
		if (*(_QWORD*)(qword_140C63628 + 728) && *(_QWORD*)(qword_140C63628 + 744))
		{
			v4 = *(__int64**)(qword_140C63628 + 728);
			v5 = *v4;
			v6 = sub_1400518A0(qword_140C63628, 21, 1, 0);
			(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v5 + 16))(
				v4,
				v6,
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
		}
		sub_140557FD0((__int64)&qword_140C7DC60, v3, 2);
		if (dword_140C7DC68)
			sub_140437A10((_QWORD*)qword_140C658D8, 0xB1u, 0, 0i64, 0, 0, 1);
		v7 = 0i64;
		v8 = *(_QWORD***)(qword_140C7DCD0 + 24);
		v9 = *v8;
		if (*v8 == v8)
			goto LABEL_19;
		do
		{
			v9 = (_QWORD*)*v9;
			++v7;
		} while (v9 != v8);
		if (v7 <= 2)
		{
		LABEL_19:
			if ((_QWORD)xmmword_140C7DCB0 != *((_QWORD*)&xmmword_140C7DCB0 + 1))
			{
				*(_BYTE*)xmmword_140C7DCB0 = 0;
				*((_QWORD*)&xmmword_140C7DCB0 + 1) = xmmword_140C7DCB0;
			}
			HIDWORD(qword_140C7DC74) = 0;
			LODWORD(qword_140C7DC60) = 0;
			sub_140557C30((__int64)&qword_140C7DC60);
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_Close", byte_1409D0BFF);
			sub_140554EA0((__int64)&qword_140C7DC60, 1);
		}
		else
		{
			if ((_QWORD)xmmword_140C7DCB0 != *((_QWORD*)&xmmword_140C7DCB0 + 1))
			{
				*(_BYTE*)xmmword_140C7DCB0 = 0;
				*((_QWORD*)&xmmword_140C7DCB0 + 1) = xmmword_140C7DCB0;
			}
			HIDWORD(qword_140C7DC74) = 0;
			LODWORD(qword_140C7DC60) = 1;
			if (dword_140C7DC68)
			{
				v10 = qword_140C7DC98;
				if (!(_DWORD)qword_140C7DC98)
				{
					sub_140557470((__int64)&qword_140C7DC60);
					v10 = qword_140C7DC98;
				}
				if (dword_140C7DC68)
				{
					if (!v10)
						sub_140557E50((__int64)&qword_140C7DC60);
				}
			}
			sub_140426120(*(_QWORD*)(qword_140C65898 + 29504), qword_140C7DC60, qword_140C7DC74);
		}
		sub_14034BDD0(v11, 0);
		dword_140C7DCA0 = 0;
		qword_140C7DC98 = 0i64;
		return 1i64;
	}
	return result;
}
// 140556FD2: variable 'v11' is possibly undefined
// 1409D0BFF: using guessed type _BYTE byte_1409D0BFF[19];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140C7DC98: using guessed type __int64 qword_140C7DC98;
// 140C7DCA0: using guessed type int dword_140C7DCA0;
// 140C7DCB0: using guessed type __int128 xmmword_140C7DCB0;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

