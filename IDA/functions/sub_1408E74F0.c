#include "../winhttp.h"

//----- (00000001408E74F0) ----------------------------------------------------
__int64 __fastcall sub_1408E74F0(__int64 a1, __int64 a2, unsigned int a3)
{
	int* v6; // rcx
	__int64 v8; // rbx

	sub_1408E77A0(a1, a2);
	*(_DWORD*)(a1 + 128) = a3;
	v6 = (int*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 8i64 * a3);
	*(_QWORD*)(a1 + 56) = v6;
	if (!v6)
		return 52i64;
	sub_1407E4830(v6, 0i64, (unsigned int)(8 * *(_DWORD*)(a1 + 128)));
	v8 = 0i64;
	if (!*(_DWORD*)(a1 + 128))
		return 1i64;
	while (1)
	{
		*(_QWORD*)(8 * v8 + *(_QWORD*)(a1 + 56)) = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(
			a2,
			8
			* (unsigned int)*(unsigned __int16*)(a1 + 116)
			* *(_DWORD*)(a1 + 108));
		if (!*(_QWORD*)(8 * v8 + *(_QWORD*)(a1 + 56)))
			break;
		v8 = (unsigned int)(v8 + 1);
		if ((unsigned int)v8 >= *(_DWORD*)(a1 + 128))
			return 1i64;
	}
	return 52i64;
}

