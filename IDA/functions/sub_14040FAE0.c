#include "../winhttp.h"

//----- (000000014040FAE0) ----------------------------------------------------
__int64 __fastcall sub_14040FAE0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rcx
	int* v5; // rax

	v2 = a1 + 32;
	*(_QWORD*)(v2 - 32) = 0i64;
	*(_QWORD*)(v2 - 24) = 0i64;
	*(_QWORD*)(v2 - 16) = 0i64;
	*(_DWORD*)(v2 - 8) = 0;
	sub_1400B52A0(v2);
	sub_1407E4830((int*)(a1 + 344), 0i64, 0x90ui64);
	*(_QWORD*)(a1 + 344) = 0xC5000000C5i64;
	*(_QWORD*)(a1 + 352) = 0xC5000000C5i64;
	*(_QWORD*)(a1 + 360) = 0xC5000000C5i64;
	*(_QWORD*)(a1 + 368) = 0xC5000000C5i64;
	*(_QWORD*)(a1 + 376) = 0xC5000000C5i64;
	*(_QWORD*)(a1 + 384) = 0xC5000000C5i64;
	*(_QWORD*)(a1 + 392) = 0xC5000000C5i64;
	*(_DWORD*)(a1 + 400) = 197;
	sub_1407E4830((int*)(a1 + 344), 0i64, 0x190ui64);
	sub_1407E4830((int*)(a1 + 344), 0i64, 0x90ui64);
	v3 = 0i64;
	v4 = 15i64;
	do
	{
		*(_DWORD*)(v3 + a1 + 344) = 197;
		v3 += 4i64;
		--v4;
	} while (v4);
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 752) = 0i64;
	*(_QWORD*)(a1 + 768) = 0i64;
	*(_QWORD*)(a1 + 776) = 0i64;
	*(_QWORD*)(a1 + 784) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 768) = v5;
	*(_QWORD*)(a1 + 776) = v5;
	*(_QWORD*)(a1 + 784) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	sub_1403B8CE0((_QWORD*)(a1 + 792));
	*(_QWORD*)(a1 + 1136) = 0i64;
	*(_QWORD*)(a1 + 1176) = 0i64;
	*(_QWORD*)(a1 + 1184) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	*(_QWORD*)(a1 + 1200) = 0i64;
	*(_DWORD*)(a1 + 1208) = 0;
	*(_DWORD*)(a1 + 1048) = 0;
	*(_DWORD*)(a1 + 792) = 0;
	*(_QWORD*)(a1 + 1144) = 0i64;
	*(_QWORD*)(a1 + 1152) = 0i64;
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 1168) = 0i64;
	return a1;
}

