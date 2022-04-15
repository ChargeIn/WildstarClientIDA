#include "../winhttp.h"

//----- (000000014084F1E0) ----------------------------------------------------
char __fastcall sub_14084F1E0(__int64 a1, __int64 a2)
{
	char result; // al
	char v5; // dl
	__int64 v6; // rcx

	result = 0;
	v5 = 0;
	do
	{
		if (!a1)
			break;
		result = a2 == a1;
		if (a2 != a1 && !v5)
		{
			v6 = *(_QWORD*)(a1 + 72);
			if (v6)
			{
				result = sub_14085AF80(v6, a2);
				v5 = 1;
			}
		}
		a1 = *(_QWORD*)(a1 + 64);
	} while (!result);
	return result;
}

