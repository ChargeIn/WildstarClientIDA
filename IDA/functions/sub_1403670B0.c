#include "../winhttp.h"

//----- (00000001403670B0) ----------------------------------------------------
int __fastcall sub_1403670B0(__int64 a1, int a2, __int64 a3)
{
	int* v5; // rax
	__int64 v6; // rax

	v5 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	v6 = sub_14035BF90(a3, v5);
	if (v6)
		LODWORD(v6) = sub_1403830C0(v6, a2);
	return v6;
}

