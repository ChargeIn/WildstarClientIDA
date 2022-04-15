#include "../winhttp.h"

//----- (0000000140901194) ----------------------------------------------------
_BYTE* __fastcall sub_140901194(_BYTE* a1, unsigned __int8* a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned __int8* v4; // r10
	_BYTE* v5; // r9
	bool v6; // cf
	unsigned __int8 i; // al
	char v9[32]; // [rsp+20h] [rbp-38h]

	v3 = 0i64;
	v4 = a2;
	v5 = a1;
	v6 = 1;
	do
	{
		if (!v6)
		{
			_report_rangecheckfailure(a1, a2, a3, a1);
			JUMPOUT(0x140901234i64);
		}
		v9[v3++] = 0;
		v6 = (unsigned __int64)v3 < 0x20;
	} while (v3 < 32);
	for (i = *a2; i; i = *v4)
	{
		v9[(unsigned __int64)i >> 3] |= 1 << (i & 7);
		++v4;
	}
	while (1)
	{
		if (!*v5)
			return 0i64;
		if (((unsigned __int8)(1 << (*v5 & 7)) & (unsigned __int8)v9[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0)
			break;
		++v5;
	}
	return v5;
}
// 14090122F: control flows out of bounds to 140901234
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 140901194: using guessed type char var_38[32];

