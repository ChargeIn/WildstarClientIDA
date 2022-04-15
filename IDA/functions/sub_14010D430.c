#include "../winhttp.h"

//----- (000000014010D430) ----------------------------------------------------
_DWORD* __fastcall sub_14010D430(__int64 a1, _DWORD* a2, _DWORD* a3, int a4)
{
	_DWORD* result; // rax
	int v7; // ecx
	int v8; // eax
	int v9; // eax
	int v10; // eax

	*a2 = *a3;
	a2[1] = a3[1];
	a2[2] = a3[2];
	a2[3] = a3[3];
	switch (a4)
	{
	case 0:
		a2[2] = *a2 + sub_14010CF80(a1);
		a2[3] = a2[1] + sub_14010D1C0(a1);
		return a2;
	case 1:
		*a2 += sub_14010CF80(a1);
		a2[2] -= sub_14010D0A0(a1);
		a2[3] = a2[1] + sub_14010D1C0(a1);
		return a2;
	case 2:
		*a2 = a2[2] - sub_14010D0A0(a1);
		a2[3] = a2[1] + sub_14010D1C0(a1);
		return a2;
	case 3:
		*a2 = a2[2] - sub_14010D0A0(a1);
		goto LABEL_6;
	case 4:
		*a2 = a2[2] - sub_14010D0A0(a1);
		goto LABEL_10;
	case 5:
		*a2 += sub_14010CF80(a1);
		a2[2] -= sub_14010D0A0(a1);
		goto LABEL_10;
	case 6:
		a2[2] = *a2 + sub_14010CF80(a1);
	LABEL_10:
		v7 = a2[3] - sub_14010D2F0(a1);
		result = a2;
		a2[1] = v7;
		return result;
	case 7:
		a2[2] = *a2 + sub_14010CF80(a1);
	LABEL_6:
		a2[1] += sub_14010D1C0(a1);
		goto LABEL_7;
	case 8:
		if (*(_BYTE*)(a1 + 992))
			v8 = *(_DWORD*)(a1 + 1000);
		else
			v8 = sub_14010CF80(a1);
		*a2 += v8;
		if (*(_BYTE*)(a1 + 992))
			v9 = *(_DWORD*)(a1 + 1004);
		else
			v9 = sub_14010D0A0(a1);
		a2[2] -= v9;
		if (*(_BYTE*)(a1 + 992))
			v10 = *(_DWORD*)(a1 + 996);
		else
			v10 = sub_14010D1C0(a1);
		a2[1] += v10;
		if (*(_BYTE*)(a1 + 992))
		{
			a2[3] -= *(_DWORD*)(a1 + 1008);
			return a2;
		}
		else
		{
		LABEL_7:
			a2[3] -= sub_14010D2F0(a1);
			return a2;
		}
	default:
		return a2;
	}
}

