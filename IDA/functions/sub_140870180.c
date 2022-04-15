#include "../winhttp.h"

//----- (0000000140870180) ----------------------------------------------------
void __fastcall sub_140870180(__int64 a1)
{
	__int64 v1; // rbx
	__int64 i; // rbx

	v1 = *(_QWORD*)(a1 + 56);
	if (v1)
	{
		for (i = *(_QWORD*)(v1 + 24); i; i = *(_QWORD*)(i + 32))
			sub_14085FBA0(i);
	}
}

