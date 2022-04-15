#include "../winhttp.h"

//----- (00000001408A3BE0) ----------------------------------------------------
__int64 __fastcall sub_1408A3BE0(__int64 a1)
{
	unsigned int v1; // eax
	__int64 v3; // rdi
	__int64 v4; // rbx

	v1 = *(_DWORD*)(a1 + 184);
	if (*(_QWORD*)(a1 + 8) && v1)
	{
		v3 = v1;
		v4 = 0i64;
		do
		{
			sub_1408A6490(v4 + *(_QWORD*)(a1 + 8));
			v4 += 56i64;
			--v3;
		} while (v3);
	}
	return 1i64;
}

