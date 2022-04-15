#include "../winhttp.h"

//----- (00000001407C4330) ----------------------------------------------------
__int64 __fastcall sub_1407C4330(__int64 a1, int* a2, __int64* a3)
{
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	int* v7; // rax
	__int64 v8; // rbx
	signed int v9; // eax
	unsigned int v10; // edi
	int v11; // ecx
	int* v13[2]; // [rsp+30h] [rbp-838h] BYREF
	WCHAR Buffer[1024]; // [rsp+40h] [rbp-828h] BYREF

	v13[0] = a2;
	v5 = (*(__int64(__fastcall**)(int**))(a1 + 1296))(v13);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 1288) + 8 * (v5 % *(_QWORD*)(a1 + 1280)));
	if (v6)
	{
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(a1 + 1304))(v13, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_5;
		}
		if (v6 != (_QWORD*)-24i64)
		{
			if (a3)
				*a3 = v6[3];
			(**(void(__fastcall***)(__int64)) * a3)(*a3);
			return 0i64;
		}
	}
LABEL_5:
	v7 = sub_14018B280(3840i64, 0);
	if (v7)
		v8 = sub_1407D1540((__int64)v7);
	else
		v8 = 0i64;
	v9 = sub_1407D1F00(v8, a1, v13[0]);
	v10 = v9;
	if (v9 >= 0)
	{
		*a3 = v8;
		return 0i64;
	}
	sub_1401B3450((char*)Buffer, 1024i64, v9);
	sub_1400035B0();
	if (v8)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 120i64))(v8, (unsigned int)(v11 - 5));
	return v10;
}
// 1407C442A: variable 'v11' is possibly undefined
// 1407C4330: using guessed type WCHAR Buffer[1024];

