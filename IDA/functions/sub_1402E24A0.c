#include "../winhttp.h"

//----- (00000001402E24A0) ----------------------------------------------------
int* __fastcall sub_1402E24A0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int* result; // rax

	if (a2)
	{
		*(_QWORD*)(a1 + 128) = *a2;
		*(_QWORD*)(a1 + 136) = a2[1];
		*(_QWORD*)(a1 + 144) = a2[2];
		*(_QWORD*)(a1 + 152) = a2[3];
		*(_QWORD*)(a1 + 160) = a2[4];
		*(_QWORD*)(a1 + 168) = a2[5];
		*(_QWORD*)(a1 + 176) = a2[6];
		*(_QWORD*)(a1 + 184) = a2[7];
		*(_QWORD*)(a1 + 192) = a2[8];
		*(_QWORD*)(a1 + 200) = a2[9];
		*(_QWORD*)(a1 + 208) = a2[10];
		result = (int*)a2[11];
		*(_QWORD*)(a1 + 224) = a3;
		*(_QWORD*)(a1 + 216) = result;
	}
	else
	{
		result = sub_1407E4830((int*)(a1 + 128), 0i64, 0x60ui64);
		*(_QWORD*)(a1 + 224) = 0i64;
	}
	return result;
}

