#include "../winhttp.h"

//----- (00000001408C4A80) ----------------------------------------------------
void __fastcall sub_1408C4A80(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // eax
	__int64 v4; // rdx

	v1 = *(_QWORD*)(a1 + 328);
	if (*(_BYTE*)(v1 + 152))
	{
		v3 = *(_DWORD*)(v1 + 136);
		if (v3)
		{
			if (v3 != 1 || *(_BYTE*)(a1 + 300))
			{
				sub_1408A81D0(
					(__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * *(unsigned __int8*)(a1 + 298)),
					*(_DWORD*)(v1 + 140),
					COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 292))),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v1 + 40)),
					*(float*)(v1 + 36),
					*(float*)(v1 + 44));
				*(_DWORD*)(192i64 * *(unsigned __int8*)(a1 + 298) + *(_QWORD*)(a1 + 312) + 176) = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 136i64);
				v4 = *(_QWORD*)(a1 + 328);
				if (*(_DWORD*)(v4 + 136) == 1 && *(_BYTE*)(a1 + 300) == 2)
				{
					sub_1408A81D0(
						(__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * (*(unsigned __int8*)(a1 + 298) + 1)),
						*(_DWORD*)(v4 + 140),
						COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 292))),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v4 + 40)),
						*(float*)(v4 + 36),
						*(float*)(v4 + 44));
					*(_DWORD*)(192i64 * *(unsigned __int8*)(a1 + 298) + *(_QWORD*)(a1 + 312) + 368) = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 136i64);
				}
			}
		}
	}
}

