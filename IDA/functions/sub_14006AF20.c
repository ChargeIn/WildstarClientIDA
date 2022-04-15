#include "../winhttp.h"

//----- (000000014006AF20) ----------------------------------------------------
__int64 __fastcall sub_14006AF20(__int64* a1, int* a2, int a3)
{
	int v4; // ecx
	int v7; // edx
	bool v8; // zf
	int v9; // r8d
	int v10; // edx
	int v11; // ecx
	int v12; // ecx

	v4 = *a2;
	if (*a2 == 11 && (v7 = *(_DWORD*)(*(_QWORD*)(*a1 + 24) + 4i64 * a2[2]), (v7 & 0x3F) == 19))
	{
		--* ((_DWORD*)a1 + 12);
		v8 = a3 == 0;
		v9 = *(_DWORD*)(a1[3] + 8);
		v10 = (v8 << 14) | ((v7 & 0xFF81FFFF | 0x340000) >> 17);
	}
	else
	{
		if (v4 == 12)
			goto LABEL_9;
		v11 = *((_DWORD*)a1 + 15) + 1;
		if (v11 > *(unsigned __int8*)(*a1 + 115))
		{
			if (v11 >= 250)
				sub_140062CF0(a1[3], aFunctionOrExpr, *(_DWORD*)(a1[3] + 16));
			*(_BYTE*)(*a1 + 115) = v11;
		}
		sub_14006A7E0((__int64)a1, a2, (*((_DWORD*)a1 + 15))++);
		if (*a2 == 12)
		{
		LABEL_9:
			v12 = a2[2];
			if ((v12 & 0x100) == 0 && v12 >= *((unsigned __int8*)a1 + 74))
				--* ((_DWORD*)a1 + 15);
		}
		v9 = *(_DWORD*)(a1[3] + 8);
		v10 = ((a3 | (a2[2] << 9)) << 14) | 0x3FDB;
	}
	sub_14006BBF0((__int64)a1, v10, v9);
	return sub_14006A030(a1);
}

