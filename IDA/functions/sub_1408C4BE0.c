#include "../winhttp.h"

//----- (00000001408C4BE0) ----------------------------------------------------
void __fastcall sub_1408C4BE0(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // eax
	__int64 v4; // rdx

	v1 = *(_QWORD*)(a1 + 328);
	if (*(_BYTE*)(v1 + 152))
	{
		v3 = *(_DWORD*)(v1 + 144);
		if (v3)
		{
			if (v3 != 1 || *(_BYTE*)(a1 + 300))
			{
				sub_1408A81D0(
					(__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * *(unsigned __int8*)(a1 + 299)),
					*(_DWORD*)(v1 + 148),
					COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 292))),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v1 + 52)),
					*(float*)(v1 + 48),
					*(float*)(v1 + 56));
				*(_DWORD*)(192i64 * *(unsigned __int8*)(a1 + 299) + *(_QWORD*)(a1 + 312) + 176) = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 144i64);
				v4 = *(_QWORD*)(a1 + 328);
				if (*(_DWORD*)(v4 + 144) == 1 && *(_BYTE*)(a1 + 300) == 2)
				{
					sub_1408A81D0(
						(__m128*)(*(_QWORD*)(a1 + 312) + 192i64 * (*(unsigned __int8*)(a1 + 299) + 1)),
						*(_DWORD*)(v4 + 148),
						COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 292))),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v4 + 52)),
						*(float*)(v4 + 48),
						*(float*)(v4 + 56));
					*(_DWORD*)(192i64 * *(unsigned __int8*)(a1 + 299) + *(_QWORD*)(a1 + 312) + 368) = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 144i64);
				}
			}
		}
	}
}

