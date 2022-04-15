#include "../winhttp.h"

//----- (00000001402DD2E0) ----------------------------------------------------
int* __fastcall sub_1402DD2E0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int* result; // rax

	if (a2)
	{
		*(_QWORD*)(a1 + 1832) = *a2;
		*(_QWORD*)(a1 + 1840) = a2[1];
		*(_QWORD*)(a1 + 1848) = a2[2];
		*(_QWORD*)(a1 + 1856) = a2[3];
		*(_QWORD*)(a1 + 1864) = a2[4];
		*(_QWORD*)(a1 + 1872) = a2[5];
		*(_QWORD*)(a1 + 1880) = a2[6];
		*(_QWORD*)(a1 + 1888) = a2[7];
		*(_QWORD*)(a1 + 1896) = a2[8];
		*(_QWORD*)(a1 + 1904) = a2[9];
		*(_QWORD*)(a1 + 1912) = a2[10];
		result = (int*)a2[11];
		*(_QWORD*)(a1 + 1928) = a3;
		*(_QWORD*)(a1 + 1920) = result;
	}
	else
	{
		result = sub_1407E4830((int*)(a1 + 1832), 0i64, 0x60ui64);
		*(_QWORD*)(a1 + 1928) = 0i64;
	}
	return result;
}

