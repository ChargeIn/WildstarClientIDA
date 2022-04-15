#include "../winhttp.h"

//----- (0000000140040D40) ----------------------------------------------------
__int64 __fastcall sub_140040D40(__int64 a1)
{
	__int64 v2; // rdx
	unsigned __int16* v3; // rcx
	__int64 v4; // r8
	unsigned __int16 v5; // ax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v9; // [rsp+20h] [rbp-838h] BYREF
	__int64 v10; // [rsp+28h] [rbp-830h]
	unsigned __int16 v11[1024]; // [rsp+40h] [rbp-818h] BYREF

	v2 = 1024i64;
	v3 = v11;
	v4 = *(_QWORD*)(qword_140C635F0 + 312) - (_QWORD)v11;
	while (v2 != -2147482622)
	{
		v5 = *(unsigned __int16*)((char*)v3 + v4);
		if (!v5)
			break;
		*v3++ = v5;
		if (!--v2)
		{
			--v3;
			break;
		}
	}
	*v3 = 0;
	v6 = (unsigned __int64*)sub_14018F0E0(&v9, v11)[1];
	if (v6)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)v6 + v7));
		sub_140058710(a1, v6, v7);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 140040DA9: conditional instruction was optimized away because rdx.8!=0
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140040D40: using guessed type unsigned __int16 var_818[1024];

