#include "../winhttp.h"

//----- (00000001400CB0E0) ----------------------------------------------------
_DWORD* __fastcall sub_1400CB0E0(__int64 a1, _DWORD* a2, __int64 a3)
{
	__int64 v6; // r9
	int v7; // ecx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rax
	int v11; // r9d
	int v12; // r8d
	int v13; // ecx
	_DWORD* result; // rax
	int v15[4]; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v16[6]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v17; // [rsp+50h] [rbp+8h]

	sub_1400CB890(a1, v16);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = 0;
	v17 = 0i64;
	if (v6)
	{
		if ((*(_BYTE*)(v6 + 656) & 4) != 0)
		{
			v8 = *(_QWORD*)(v6 + 464);
			if (v8)
				v9 = *(_DWORD*)(v8 + 1300);
			else
				v9 = 0;
			LODWORD(v17) = v9;
		}
		if ((*(_BYTE*)(v6 + 656) & 2) != 0)
		{
			v10 = *(_QWORD*)(v6 + 472);
			if (v10)
				v7 = *(_DWORD*)(v10 + 1300);
			HIDWORD(v17) = v7;
		}
	}
	sub_14014E8D0(a3, v15, v16);
	v11 = v15[2] - v17;
	v12 = v15[3] - HIDWORD(v17);
	v13 = v15[0] - v17;
	a2[1] = v15[1] - HIDWORD(v17);
	*a2 = v13;
	result = a2;
	a2[2] = v11;
	a2[3] = v12;
	return result;
}
// 1400CB0E0: using guessed type unsigned int var_18[6];

