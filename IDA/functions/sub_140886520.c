#include "../winhttp.h"

//----- (0000000140886520) ----------------------------------------------------
__int64 __fastcall sub_140886520(__int64 a1, _DWORD* a2, int a3, __int64 a4, unsigned int* a5, __int64* a6)
{
	__int64 v8; // rsi
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 result; // rax
	int v14; // ebx

	v8 = 0i64;
	*a6 = 0i64;
	v11 = sub_1408819F0(dword_140C111C0, 216i64);
	v12 = v11;
	if (!v11)
	{
		sub_140883340(a1, *(_BYTE*)(a4 + 13));
		v11 = sub_1408819F0(dword_140C111C0, 216i64);
		v12 = v11;
		if (!v11)
		{
		LABEL_9:
			result = 0i64;
			goto LABEL_10;
		}
	}
	sub_1408835E0(v11);
	*(_QWORD*)v12 = off_1409A7D00;
	*(_BYTE*)(v12 + 208) = 0;
	*(_QWORD*)(v12 + 200) = 0i64;
	*(_QWORD*)(v12 + 120) = off_1409A7D60;
	if ((unsigned int)sub_140884B70(v12, a1, a2, a3, a4, a5, *(_DWORD*)(a1 + 264)) != 1)
	{
		if (v12)
		{
			v14 = dword_140C111C0;
			(**(void(__fastcall***)(__int64, _QWORD))v12)(v12, 0i64);
			sub_140881720(v14, v12);
		}
		goto LABEL_9;
	}
	sub_140883CD0(a1, v12);
	if (v12)
		v8 = v12 + 120;
	result = v12;
LABEL_10:
	*a6 = v8;
	return result;
}
// 1409A7D00: using guessed type __int64 (__fastcall *off_1409A7D00[29])();
// 1409A7D60: using guessed type __int64 (__fastcall *off_1409A7D60[17])();
// 140C111C0: using guessed type int dword_140C111C0;

