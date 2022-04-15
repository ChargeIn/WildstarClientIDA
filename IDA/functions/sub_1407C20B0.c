#include "../winhttp.h"

//----- (00000001407C20B0) ----------------------------------------------------
const void**** __fastcall sub_1407C20B0(__int64 a1, const void*** a2)
{
	const void***** v3; // r8
	__int64 v4; // r9
	const void**** result; // rax
	const void*** v6; // rdx
	__int64 v7; // rcx
	const void*** v8; // rbx
	int i; // edi

	v3 = (const void*****)a1;
	v4 = 7i64;
	do
	{
		for (result = *v3; *v3; result = *v3)
		{
			v6 = result[4];
			if (v6)
				*v6 = (const void**)result[5];
			a2 = result[5];
			if (a2)
				a2[4] = (const void**)result[4];
			result[4] = 0i64;
			result[5] = 0i64;
		}
		++v3;
		--v4;
	} while (v4);
	v7 = *(_QWORD*)(a1 + 120);
	if (v7)
		result = (const void****)(*(__int64(__fastcall**)(__int64, const void***, const void*****))(*(_QWORD*)(v7 - 16) + 8i64))(
			v7 - 16,
			a2,
			v3);
	v8 = (const void***)(a1 + 56);
	for (i = 6; i >= 0; --i)
	{
		if (*--v8)
			result = sub_1401A4A00(v8);
	}
	return result;
}

