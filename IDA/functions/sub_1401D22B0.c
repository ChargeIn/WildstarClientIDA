#include "../winhttp.h"

//----- (00000001401D22B0) ----------------------------------------------------
__int64 __fastcall sub_1401D22B0(__int64 a1, int a2, _DWORD* a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v4; // rax
	unsigned __int64 v7; // rdi
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	int v10; // eax
	unsigned int v11; // eax
	int v12; // eax
	int v13; // ecx
	__int64 v14; // rax
	int v15; // eax
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	__int64 v18[2]; // [rsp+28h] [rbp-40h] BYREF
	int v19; // [rsp+38h] [rbp-30h]

	v3 = *(unsigned int*)(a1 + 764);
	v4 = *(_QWORD*)(a1 + 856);
	*(_DWORD*)(a1 + 760) = a2;
	v7 = (unsigned int)(v3 + a2);
	if (v4 >= v3 && v4 < v7)
	{
		if (!v4 && a1 != -864)
		{
			*(_QWORD*)(a1 + 884) = 0i64;
			*(_WORD*)(a1 + 892) = 0;
			*(_DWORD*)(a1 + 864) = 1732584193;
			*(_DWORD*)(a1 + 868) = -271733879;
			*(_DWORD*)(a1 + 872) = -1732584194;
			*(_DWORD*)(a1 + 876) = 271733878;
			*(_DWORD*)(a1 + 880) = -1009589776;
			*(_QWORD*)(a1 + 960) = 0i64;
		}
		v8 = *(_QWORD*)(a1 + 856);
		if (v7 != v8)
			sub_1401C8C20(a1 + 864, (_BYTE*)(v8 + *(_QWORD*)(a1 + 752) - v3), v7 - v8);
		*(_QWORD*)(a1 + 856) = v7;
		if (v7 == *(_QWORD*)(a1 + 712))
		{
			if (a1 != -864)
				sub_1401C8B70(a1 + 864, (__int64)v18);
			if (v18[0] != *(_QWORD*)(a1 + 720) || v18[1] != *(_QWORD*)(a1 + 728) || v19 != *(_DWORD*)(a1 + 736))
			{
				v17 = 0x141D44FA0i64;
				sub_1401A3130(3, 0, &v17, a1 + 24);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 744) + 72i64))(*(_QWORD*)(a1 + 744));
			}
		}
	}
	if (!*(_DWORD*)(a1 + 760))
		goto LABEL_31;
	do
	{
		v9 = *(unsigned int*)(a1 + 780);
		if (v9 >= *(_QWORD*)(a1 + 640))
			break;
		v10 = *(_DWORD*)(a1 + 640);
		*(_QWORD*)(a1 + 768) = &unk_140C90190;
		v11 = v10 - v9;
		if (v11 > 0x3FFF0)
			v11 = 262128;
		*(_DWORD*)(a1 + 776) = v11;
		if (a1 == -752)
			return 2684551169i64;
		v12 = sub_1401ABDA0(a1 + 752, 0);
		if (v12 < 0)
		{
			if (v12 != -4)
				return 2684551169i64;
			return 2147942414i64;
		}
	} while (*(_DWORD*)(a1 + 760));
	if (*(_DWORD*)(a1 + 760) && (v13 = *(_DWORD*)(a1 + 656)) != 0)
	{
		v14 = *(_QWORD*)(a1 + 648);
		*(_DWORD*)(a1 + 776) = v13;
		*(_QWORD*)(a1 + 768) = v14;
		if (a1 == -752)
			return 2684551169i64;
		v15 = sub_1401ABDA0(a1 + 752, 0);
		if (v15 < 0)
		{
			if (v15 != -4)
				return 2684551169i64;
			return 2147942414i64;
		}
		*a3 = *(_DWORD*)(a1 + 656) - *(_DWORD*)(a1 + 776);
	}
	else
	{
	LABEL_31:
		*a3 = 0;
	}
	return 0i64;
}

