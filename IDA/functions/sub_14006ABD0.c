#include "../winhttp.h"

//----- (000000014006ABD0) ----------------------------------------------------
int __fastcall sub_14006ABD0(__int64 a1, __int64 a2)
{
	int v4; // eax
	int v6; // eax
	__int64 v7; // rax
	__int64* v8; // r8
	__int64 v9; // xmm0_8
	int v10; // eax
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	char v13; // [rsp+30h] [rbp-18h] BYREF
	int v14; // [rsp+38h] [rbp-10h]

	if (*(_DWORD*)(a2 + 16) == *(_DWORD*)(a2 + 20))
		sub_14006A700(a1, (int*)a2);
	else
		sub_14006AB60(a1, (int*)a2);
	v4 = *(_DWORD*)a2;
	if (*(int*)a2 <= 0)
		return sub_14006AB60(a1, (int*)a2);
	if (v4 <= 3)
	{
	LABEL_11:
		if (*(int*)(a1 + 64) > 255)
			return sub_14006AB60(a1, (int*)a2);
		if (v4 == 1)
		{
			v7 = *(_QWORD*)(a1 + 8);
			v12 = 5;
			v14 = 0;
			v8 = (__int64*)&v13;
			v11 = v7;
		}
		else
		{
			v8 = &v11;
			if (v4 == 5)
			{
				v9 = *(_QWORD*)(a2 + 8);
				v12 = 3;
				v11 = v9;
			}
			else
			{
				v12 = 1;
				LODWORD(v11) = v4 == 2;
			}
		}
		v10 = sub_14006A4A0((unsigned int*)a1, (int*)&v11, (__int64)v8);
		*(_DWORD*)a2 = 4;
		*(_DWORD*)(a2 + 8) = v10;
		return v10 | 0x100;
	}
	if (v4 != 4)
	{
		if (v4 != 5)
			return sub_14006AB60(a1, (int*)a2);
		goto LABEL_11;
	}
	v6 = *(_DWORD*)(a2 + 8);
	if (v6 > 255)
		return sub_14006AB60(a1, (int*)a2);
	return v6 | 0x100;
}

