#include "../winhttp.h"

//----- (000000014079ED20) ----------------------------------------------------
__int64 __fastcall sub_14079ED20(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	void(__fastcall * **v5)(_QWORD, __int64); // rcx
	__int64 v6; // r8
	unsigned int v7; // r9d
	unsigned int v8; // r10d
	__int64 v9; // rcx
	__int64 v10; // r11
	unsigned int v11; // edx
	unsigned int v12; // edx
	int v13; // edx
	__int64 v14; // rcx
	__int64 v15; // [rsp+40h] [rbp+18h] BYREF

	if (!sub_14079EE60(a1, a2, (unsigned __int64*)&v15))
		return 2147500037i64;
	v4 = v15;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 88) + 8 * v15) + 8i64))(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8 * v15));
	v5 = *(void(__fastcall****)(_QWORD, __int64))(*(_QWORD*)(a1 + 88) + 8 * v4);
	if (v5)
		(**v5)(v5, 1i64);
	sub_140007270(a1 + 88, v4);
	v6 = *(_QWORD*)(a1 + 96);
	if (v6)
	{
		v7 = *(_DWORD*)(a1 + 56);
		v8 = *(_DWORD*)(a1 + 60);
		v9 = *(_QWORD*)(a1 + 88);
		v10 = *(_QWORD*)(a1 + 96);
		do
		{
			v11 = *(_DWORD*)(*(_QWORD*)v9 + 120i64);
			if (v11 < v7)
			{
				v7 = *(_DWORD*)(*(_QWORD*)v9 + 120i64);
				*(_DWORD*)(a1 + 56) = v11;
			}
			v12 = *(_DWORD*)(*(_QWORD*)v9 + 120i64);
			if (v12 > v8)
			{
				v8 = *(_DWORD*)(*(_QWORD*)v9 + 120i64);
				*(_DWORD*)(a1 + 60) = v12;
			}
			v9 += 8i64;
			--v10;
		} while (v10);
	}
	else
	{
		*(_DWORD*)(a1 + 56) = -1;
		*(_DWORD*)(a1 + 60) = 0;
	}
	*(_DWORD*)(a1 + 8) &= ~0x100u;
	v13 = -1;
	if (v6)
	{
		v14 = *(_QWORD*)(a1 + 88);
		do
		{
			if (v13 == -1)
				v13 = *(_DWORD*)(*(_QWORD*)v14 + 100i64);
			if (*(_DWORD*)(*(_QWORD*)v14 + 100i64) != v13)
				*(_DWORD*)(a1 + 8) |= 0x100u;
			v14 += 8i64;
			--v6;
		} while (v6);
	}
	return 0i64;
}

