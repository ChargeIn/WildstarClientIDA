#include "../winhttp.h"

//----- (00000001404B8050) ----------------------------------------------------
void sub_1404B8050()
{
	__int64 v0; // rdi
	__int64 v1; // rbx
	__int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

	v0 = sub_1405B1510(&qword_140C7DFB0);
	if (v0)
	{
		v1 = *(_QWORD*)(qword_140C659F8 + 200);
		if (v1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v1 + 72i64))(*(_QWORD*)(qword_140C659F8 + 200));
			v2[1] = 0i64;
			v2[0] = 0i64;
			if ((*(int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v1 + 136i64))(v1, v2) >= 0 && *(_QWORD*)v2[0])
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"HousingFreePlaceDecorCancelled",
					byte_1409EBD8C,
					*(unsigned int*)(*(_QWORD*)v2[0] + 496i64));
			sub_1405AAEB0(v0);
			if (v2[0])
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2[0] - 16) + 8i64))(v2[0] - 16);
		}
	}
}
// 1409EBD8C: using guessed type _BYTE byte_1409EBD8C[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

