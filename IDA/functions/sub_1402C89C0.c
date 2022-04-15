#include "../winhttp.h"

//----- (00000001402C89C0) ----------------------------------------------------
__int64 __fastcall sub_1402C89C0(__int64 a1, __int64 a2, int a3)
{
	_DWORD* v4; // rax
	__int64* v5; // rbx
	__int64 v6; // rax
	__int64* i; // rbx
	int v9[4]; // [rsp+20h] [rbp-28h] BYREF

	*(_QWORD*)(a1 + 1200) = a2;
	*(_DWORD*)(a1 + 1208) = a3;
	v4 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v5 = *(__int64**)(a1 + 1248);
	*(_DWORD*)(a1 + 1212) = *v4;
	*(_DWORD*)(a1 + 1216) = v4[1];
	*(_DWORD*)(a1 + 1220) = v4[2];
	*(_DWORD*)(a1 + 1224) = v4[3];
	*(_DWORD*)(a1 + 1228) = v4[4];
	for (*(_DWORD*)(a1 + 1232) = v4[5]; v5; v5 = (__int64*)v5[50])
	{
		if ((*(float(__fastcall**)(__int64))(*(_QWORD*)v5[1] + 136i64))(v5[1]) != 0.0
			|| (*(float(__fastcall**)(__int64))(*(_QWORD*)v5[1] + 152i64))(v5[1]) != 0.0)
		{
			v6 = *v5;
			v9[0] = -1;
			(*(void(__fastcall**)(__int64*, int*))(v6 + 104))(v5, v9);
			sub_1402D3720((_QWORD*)v5[3], v5);
		}
	}
	if ((*(_BYTE*)(a1 + 1208) & 4) == 0)
	{
		for (i = *(__int64**)(a1 + 1256); i; i = (__int64*)i[47])
			sub_1402D2A40(i);
	}
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 1402C89C0: using guessed type int var_28[4];

