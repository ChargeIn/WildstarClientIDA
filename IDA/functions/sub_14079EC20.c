#include "../winhttp.h"

//----- (000000014079EC20) ----------------------------------------------------
__int64 __fastcall sub_14079EC20(__int64 a1, __int64 a2)
{
	__int64 v4; // r8
	unsigned int v5; // r9d
	unsigned int v6; // r10d
	__int64 v7; // rcx
	__int64 v8; // r11
	unsigned int v9; // edx
	unsigned int v10; // edx
	int v11; // edx
	__int64 v12; // rcx
	__int64 v13; // [rsp+38h] [rbp+10h] BYREF
	__int64 v14; // [rsp+40h] [rbp+18h] BYREF

	v13 = a2;
	if (!a2 || *(_QWORD*)(a1 + 96) >= (unsigned __int64)*(unsigned int*)(a1 + 80))
		return 2147500037i64;
	if (sub_14079EE60(a1, a2 + 16, (unsigned __int64*)&v14))
		return 2147500036i64;
	sub_1400B4DE0((__int64*)(a1 + 88), v14, &v13);
	v4 = *(_QWORD*)(a1 + 96);
	if (v4)
	{
		v5 = *(_DWORD*)(a1 + 56);
		v6 = *(_DWORD*)(a1 + 60);
		v7 = *(_QWORD*)(a1 + 88);
		v8 = *(_QWORD*)(a1 + 96);
		do
		{
			v9 = *(_DWORD*)(*(_QWORD*)v7 + 120i64);
			if (v9 < v5)
			{
				v5 = *(_DWORD*)(*(_QWORD*)v7 + 120i64);
				*(_DWORD*)(a1 + 56) = v9;
			}
			v10 = *(_DWORD*)(*(_QWORD*)v7 + 120i64);
			if (v10 > v6)
			{
				v6 = *(_DWORD*)(*(_QWORD*)v7 + 120i64);
				*(_DWORD*)(a1 + 60) = v10;
			}
			v7 += 8i64;
			--v8;
		} while (v8);
	}
	else
	{
		*(_DWORD*)(a1 + 56) = -1;
		*(_DWORD*)(a1 + 60) = 0;
	}
	*(_DWORD*)(a1 + 8) &= ~0x100u;
	v11 = -1;
	if (v4)
	{
		v12 = *(_QWORD*)(a1 + 88);
		do
		{
			if (v11 == -1)
				v11 = *(_DWORD*)(*(_QWORD*)v12 + 100i64);
			if (*(_DWORD*)(*(_QWORD*)v12 + 100i64) != v11)
				*(_DWORD*)(a1 + 8) |= 0x100u;
			v12 += 8i64;
			--v4;
		} while (v4);
	}
	return 0i64;
}

