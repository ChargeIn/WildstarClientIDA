#include "../winhttp.h"

//----- (00000001407DEEA4) ----------------------------------------------------
__int64 __fastcall sub_1407DEEA4(_BYTE* a1, unsigned __int8* a2)
{
	int v2; // r9d
	unsigned __int8* v3; // r10
	__int64 v5; // rax
	bool v6; // cf
	unsigned __int8 i; // al
	char v9[32]; // [rsp+20h] [rbp-38h]

	v2 = 0;
	v3 = a2;
	v5 = 0i64;
	v6 = 1;
	do
	{
		if (!v6)
		{
			_report_rangecheckfailure();
			__debugbreak();
		}
		v9[v5++] = 0;
		v6 = (unsigned __int64)v5 < 0x20;
	} while (v5 < 32);
	for (i = *a2; i; i = *v3)
	{
		v9[(unsigned __int64)i >> 3] |= 1 << (i & 7);
		++v3;
	}
	v9[0] |= 1u;
	while (((unsigned __int8)(1 << (*a1 & 7)) & (unsigned __int8)v9[(unsigned __int64)(unsigned __int8)*a1 >> 3]) == 0)
	{
		++v2;
		++a1;
	}
	return v2;
}
// 1407DEDF4: using guessed type __int64 _report_rangecheckfailure(void);
// 1407DEEA4: using guessed type char var_38[32];

