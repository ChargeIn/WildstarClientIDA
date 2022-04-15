#include "../winhttp.h"

//----- (00000001406E4E00) ----------------------------------------------------
_BOOL8 __fastcall sub_1406E4E00(_DWORD* a1, _QWORD** a2)
{
	_DWORD* v2; // rdx
	int v3; // r9d
	int v4; // r9d
	int v5; // r9d
	int v6; // r9d
	_BOOL8 result; // rax

	result = 0;
	if (qword_140C65898)
	{
		v2 = (_DWORD*)**a2;
		v3 = v2[6];
		if (!v3 || (unsigned __int64)(unsigned int)(v3 + a1[676]) <= *(_QWORD*)(qword_140C65898 + 5704))
		{
			v4 = v2[8];
			if (!v4 || (unsigned __int64)(unsigned int)(v4 + a1[677]) <= *(_QWORD*)(qword_140C65898 + 5720))
			{
				v5 = v2[7];
				if (!v5 || (unsigned __int64)(unsigned int)(v5 + a1[678]) <= *(_QWORD*)(qword_140C65898 + 5712))
				{
					v6 = v2[9];
					if (!v6 || (unsigned __int64)(unsigned int)(v6 + a1[679]) <= *(_QWORD*)(qword_140C65898 + 5728))
						return 1;
				}
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

