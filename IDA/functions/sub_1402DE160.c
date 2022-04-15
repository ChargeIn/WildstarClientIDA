#include "../winhttp.h"

//----- (00000001402DE160) ----------------------------------------------------
__int64 __fastcall sub_1402DE160(__int64 a1, __int64 a2)
{
	__int64 v5; // rdx
	__int64 v6; // rcx
	int v7; // ecx
	unsigned int v8; // r11d
	int v9; // ecx
	int v10; // ecx
	int v11; // edx
	int v12; // ecx
	int v13; // eax
	int v14; // r8d
	int v15; // edx
	__int64 v16; // [rsp+10h] [rbp+10h]
	__int64 v17; // [rsp+18h] [rbp+18h]
	__int64 v18; // [rsp+20h] [rbp+20h]

	if (a1 == a2)
		return 1i64;
	v5 = *(_QWORD*)(a1 + 40);
	v6 = *(_QWORD*)(a2 + 40);
	if (v5 == v6
		&& *(_QWORD*)(a1 + 12) == *(_QWORD*)(a2 + 12)
		&& *(_QWORD*)(a1 + 48) == *(_QWORD*)(a2 + 48)
		&& *(_QWORD*)(a1 + 20) == *(_QWORD*)(a2 + 20)
		&& *(_QWORD*)(a1 + 28) == *(_QWORD*)(a2 + 28)
		&& *(_DWORD*)(a1 + 36) == *(_DWORD*)(a2 + 36))
	{
		return 1i64;
	}
	if (v5 != *(_QWORD*)(a2 + 48) || *(_QWORD*)(a1 + 48) != v6)
		return 0i64;
	v7 = *(_DWORD*)(a2 + 36);
	v8 = 1;
	if (v7)
	{
		v9 = v7 - 1;
		if (!v9)
		{
			v15 = *(_DWORD*)(a2 + 28);
			LODWORD(v16) = *(_DWORD*)(a2 + 20);
			HIDWORD(v18) = v15;
			HIDWORD(v16) = *(_DWORD*)(a2 + 24) - v15 + 1;
			LODWORD(v17) = v15 + *(_DWORD*)(a2 + 12) - 1;
			HIDWORD(v17) = *(_DWORD*)(a2 + 16);
			v12 = 3;
			LODWORD(v18) = *(_DWORD*)(a2 + 32);
			goto LABEL_21;
		}
		v10 = v9 - 1;
		if (!v10)
		{
			v14 = *(_DWORD*)(a2 + 28);
			v18 = *(_QWORD*)(a2 + 28);
			LODWORD(v16) = *(_DWORD*)(a2 + 20) - v14 + 1;
			LODWORD(v17) = *(_DWORD*)(a2 + 12) + v14 - 1;
			HIDWORD(v17) = *(_DWORD*)(a2 + 16) + HIDWORD(v18) - 1;
			v12 = 2;
			HIDWORD(v16) = *(_DWORD*)(a2 + 24) - HIDWORD(v18) + 1;
			goto LABEL_21;
		}
		if (v10 != 1)
		{
			v12 = v16;
			goto LABEL_21;
		}
		v11 = *(_DWORD*)(a2 + 32);
		LODWORD(v18) = v11;
		LODWORD(v16) = *(_DWORD*)(a2 + 20) - v11 + 1;
		HIDWORD(v17) = v11 + *(_DWORD*)(a2 + 16) - 1;
		HIDWORD(v16) = *(_DWORD*)(a2 + 24);
		v12 = 1;
		LODWORD(v17) = *(_DWORD*)(a2 + 12);
		v13 = *(_DWORD*)(a2 + 28);
	}
	else
	{
		v12 = 0;
		v16 = *(_QWORD*)(a2 + 20);
		v17 = *(_QWORD*)(a2 + 12);
		LODWORD(v18) = *(_DWORD*)(a2 + 28);
		v13 = *(_DWORD*)(a2 + 32);
	}
	HIDWORD(v18) = v13;
LABEL_21:
	if (*(_QWORD*)(a1 + 12) != v16
		|| *(_QWORD*)(a1 + 20) != v17
		|| *(_QWORD*)(a1 + 28) != v18
		|| *(_DWORD*)(a1 + 36) != v12)
	{
		return 0;
	}
	return v8;
}

