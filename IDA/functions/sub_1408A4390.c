#include "../winhttp.h"

//----- (00000001408A4390) ----------------------------------------------------
__int64 __fastcall sub_1408A4390(__int64 a1, int a2)
{
	int v4; // r8d
	int v5; // r9d
	__int64 v6; // rax

	if (*(_BYTE*)(a1 + 108))
	{
		v4 = a2;
		v5 = 0;
		if (a2)
		{
			do
			{
				++v5;
				v4 &= v4 - 1;
			} while (v4);
			if (v5)
			{
				v6 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 8i64))(*(_QWORD*)(a1 + 32), 148i64);
				if (v6)
				{
					*(_QWORD*)v6 = 0i64;
					*(_QWORD*)(v6 + 8) = 0i64;
					*(_QWORD*)(v6 + 16) = 0i64;
					*(_QWORD*)(v6 + 24) = 0i64;
					*(_QWORD*)(v6 + 32) = 0i64;
					*(_QWORD*)(v6 + 40) = 0i64;
					*(_QWORD*)(v6 + 48) = 0i64;
					*(_QWORD*)(v6 + 56) = 0i64;
					*(_QWORD*)(v6 + 64) = 0i64;
					*(_QWORD*)(v6 + 72) = 0i64;
					*(_QWORD*)(v6 + 80) = 0i64;
					*(_QWORD*)(v6 + 88) = 0i64;
					*(_QWORD*)(v6 + 96) = 0i64;
					*(_QWORD*)(v6 + 104) = 0i64;
					*(_QWORD*)(v6 + 112) = 0i64;
					*(_QWORD*)(v6 + 120) = 0i64;
					*(_QWORD*)(v6 + 128) = 0i64;
					*(_QWORD*)(v6 + 136) = 0i64;
					*(_DWORD*)(v6 + 144) = 0;
				}
				else
				{
					v6 = 0i64;
				}
				*(_QWORD*)(a1 + 16) = v6;
				if (!v6)
					return 52i64;
				sub_1408D1290(v6, a2, *(_DWORD*)(a1 + 188), (float*)(a1 + 64));
			}
		}
	}
	return 1i64;
}

