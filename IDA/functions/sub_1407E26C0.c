#include "../winhttp.h"

//----- (00000001407E26C0) ----------------------------------------------------
__int64 sub_1407E26C0()
{
	unsigned int v0; // ebx
	bool v1; // zf
	bool v2; // sf
	int v3; // eax
	int v5; // [rsp+30h] [rbp+8h] BYREF

	v0 = 0;
	v1 = dword_140C0FA10 == 0;
	v2 = dword_140C0FA10 < 0;
	if (dword_140C0FA10 < 0)
	{
		v5 = 0;
		if (_security_cookie == qword_140DC5320
			|| (v1 = ((unsigned int(__fastcall*)(int*, _QWORD))(_security_cookie ^ qword_140DC5320))(&v5, 0i64) == 122,
				v3 = 1,
				!v1))
		{
			v3 = 0;
		}
		dword_140C0FA10 = v3;
		v1 = v3 == 0;
		v2 = v3 < 0;
	}
	LOBYTE(v0) = !v2 && !v1;
	return v0;
}
// 140C0FA10: using guessed type int dword_140C0FA10;
// 140DC5320: using guessed type __int64 qword_140DC5320;

