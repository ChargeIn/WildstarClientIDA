#include "../winhttp.h"

//----- (00000001400083B0) ----------------------------------------------------
void __fastcall sub_1400083B0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rdi

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_1400083B0(a1, *(_QWORD*)(v2 + 24));
			v4 = *(_QWORD*)(v2 + 16);
			sub_14018B900(v2, 0);
			v2 = v4;
		} while (v4);
	}
}

