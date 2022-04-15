#include "../winhttp.h"

//----- (00000001407E3DB8) ----------------------------------------------------
_QWORD* sub_1407E3DB8()
{
	DWORD LastError; // edi
	_QWORD* v1; // rbx
	_QWORD* v2; // rax
	DWORD CurrentThreadId; // eax

	LastError = GetLastError();
	v1 = sub_1407E265C(dword_140C0FFA8);
	if (!v1)
	{
		v2 = sub_1407E2BB0(1ui64, 0x478ui64);
		v1 = v2;
		if (v2)
		{
			if (sub_1407E2678(dword_140C0FFA8, v2))
			{
				sub_1407E3E3C((__int64)v1, 0i64);
				CurrentThreadId = GetCurrentThreadId();
				v1[1] = -1i64;
				*(_DWORD*)v1 = CurrentThreadId;
			}
			else
			{
				sub_1407E14C0(v1);
				v1 = 0i64;
			}
		}
	}
	SetLastError(LastError);
	return v1;
}
// 140C0FFA8: using guessed type int dword_140C0FFA8;

