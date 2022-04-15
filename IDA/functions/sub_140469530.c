#include "../winhttp.h"

//----- (0000000140469530) ----------------------------------------------------
bool __fastcall sub_140469530(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	bool result; // al
	__int64 v5; // rax

	v2 = sub_140561C30(qword_140C65B70, *(_DWORD*)(a1 + 5632));
	if (!v2)
	{
		if (*(_QWORD*)(qword_140C65898 + 120) != a1)
			return 0;
		v3 = sub_14039DF50(qword_140C65898);
		if (!v3 || (v2 = sub_1404695E0(v3)) == 0)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) == a1)
			{
				v5 = sub_14039DF50(qword_140C65898);
				if (v5)
				{
					if ((unsigned int)sub_140469530(v5))
						return 1;
				}
			}
			return 0;
		}
	}
	result = 0;
	if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 44i64))
		return *(_DWORD*)(v2 + 80) + *(_DWORD*)(v2 + 404) - dword_140C636A8 > 0;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

