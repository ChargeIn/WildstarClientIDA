#include "../winhttp.h"

//----- (000000014078FDE0) ----------------------------------------------------
char* __fastcall sub_14078FDE0(__int64 a1, char* a2)
{
	int v2; // eax
	char* v3; // rbx
	char v5; // al

	v2 = *a2;
	v3 = a2 + 1;
	if (v2 == 37)
	{
		if (!*v3)
			sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aMalformedPatte_0);
		return a2 + 2;
	}
	else if (v2 == 91)
	{
		if (*v3 == 94)
			v3 = a2 + 2;
		do
		{
			if (!*v3)
				sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aMalformedPatte);
			v5 = *v3++;
			if (v5 == 37)
			{
				if (*v3)
					++v3;
			}
		} while (*v3 != 93);
		return v3 + 1;
	}
	else
	{
		return a2 + 1;
	}
}

