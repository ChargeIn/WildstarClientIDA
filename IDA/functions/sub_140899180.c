#include "../winhttp.h"

//----- (0000000140899180) ----------------------------------------------------
__int128* __fastcall sub_140899180(__int64 a1, __int64 a2, __int64* a3, _DWORD* a4)
{
	__int64 v7; // rax
	unsigned int v8; // ebx
	__int64 v9; // rax
	unsigned int v10; // edx
	__int64 v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rbx
	_QWORD* v14; // rcx
	__int64 v15; // [rsp+40h] [rbp-148h] BYREF
	__int64 v16; // [rsp+48h] [rbp-140h] BYREF
	char v17[272]; // [rsp+50h] [rbp-138h] BYREF
	__int64 v18; // [rsp+160h] [rbp-28h]
	char v19; // [rsp+1A8h] [rbp+20h] BYREF

	if (++ * a4 <= 0x40u)
	{
		v7 = sub_1408906B0(a2, &v15);
		if (v7)
			v8 = *(_DWORD*)(v7 + 24);
		else
			v8 = 0;
		sub_140890370((__int64)v17, *a3, 1);
		v9 = sub_1408906B0((__int64)v17, &v16);
		if (v9)
			v10 = *(_DWORD*)(v9 + 24);
		else
			v10 = 0;
		v11 = sub_140895D10(*(_QWORD*)(a1 + 128), *(_QWORD*)(a1 + 128), v8, v15, v10, v16, &v19);
		v12 = v11;
		if (v19)
		{
			v13 = v18;
			v14 = (_QWORD*)v18;
			++* (_DWORD*)(v18 + 80);
			if (!sub_140898590(v14, *(_DWORD*)(v11 + 84)))
			{
				sub_14088B850((__int64(__fastcall***)(_QWORD, _QWORD)) * a3);
				*a3 = 0i64;
			}
			sub_14088B630(v13);
		}
		nullsub_1(v17);
		return (__int128*)v12;
	}
	else
	{
		return sub_140895950();
	}
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);

