#include "../winhttp.h"

//----- (00000001404695E0) ----------------------------------------------------
__int64 __fastcall sub_1404695E0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 result; // rax

	while (1)
	{
		v1 = a1;
		result = sub_140561C30(qword_140C65B70, *(_DWORD*)(a1 + 5632));
		if (result)
			break;
		if (*(_QWORD*)(qword_140C65898 + 120) != v1)
			break;
		result = sub_14039DF50(qword_140C65898);
		if (!result)
			break;
		a1 = result;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

