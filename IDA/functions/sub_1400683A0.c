#include "../winhttp.h"

//----- (00000001400683A0) ----------------------------------------------------
__int64 __fastcall sub_1400683A0(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rbx
	__int64 v4; // r9
	_DWORD* v5; // rdx
	int v6; // eax
	int v7; // r8d
	int v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]
	int v11; // [rsp+30h] [rbp-18h]
	unsigned int v12; // [rsp+34h] [rbp-14h] BYREF

	sub_140067E60(a1, &v9, 0);
	v2 = v9;
	v3 = *(_QWORD*)(a1 + 48);
	if (v9 == 1)
		v2 = 3;
	v9 = v2;
	sub_14006A700(v3, &v9);
	if (v9 != 2)
	{
		if (v9 == 3)
		{
			v6 = sub_14006A030((__int64*)v3);
		}
		else
		{
			if (v9 <= 3)
				goto LABEL_12;
			if (v9 <= 5)
				goto LABEL_16;
			if (v9 == 10)
			{
				v4 = *(_QWORD*)(*(_QWORD*)v3 + 24i64) + 4i64 * v10;
				if (v10 < 1 || (v5 = (_DWORD*)(v4 - 4), byte_140A12408[*(_DWORD*)(v4 - 4) & 0x3F] >= 0))
					v5 = (_DWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 24i64) + 4i64 * v10);
				*v5 ^= ((unsigned __int16)*v5 ^ (((*v5 & 0x3FC0) == 0) << 6)) & 0x3FC0;
				v6 = v10;
			}
			else
			{
			LABEL_12:
				v6 = sub_14006AF20((__int64*)v3, &v9, 0);
			}
		}
		if (v6 != -1)
			sub_14006A3C0((__int64*)v3, (int*)&v12, v6);
	}
LABEL_16:
	v7 = v11;
	*(_DWORD*)(v3 + 52) = *(_DWORD*)(v3 + 48);
	if (v7 != -1)
		sub_14006A3C0((__int64*)v3, (int*)(v3 + 56), v7);
	return v12;
}

