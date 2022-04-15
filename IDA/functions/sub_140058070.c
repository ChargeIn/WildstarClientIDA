#include "../winhttp.h"

//----- (0000000140058070) ----------------------------------------------------
__int64 __fastcall sub_140058070(__int64 a1)
{
	__int64 v2; // rax
	const char* v3; // rbx
	void** v4; // rax

	v2 = *(_QWORD*)(a1 + 16) - 16i64;
	if (*(_DWORD*)(v2 + 8) == 4)
	{
	LABEL_7:
		v3 = (const char*)(*(_QWORD*)v2 + 32i64);
		goto LABEL_8;
	}
	if ((unsigned int)sub_14005E620(a1, *(_QWORD*)(a1 + 16) - 16i64))
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v2 = *(_QWORD*)(a1 + 16) - 16i64;
		goto LABEL_7;
	}
	v3 = 0i64;
LABEL_8:
	v4 = sub_1407DDFA0();
	sub_1407DE220((unsigned __int64)(v4 + 12), "PANIC: unprotected error in call to Lua API (%s)\n", v3);
	return 0i64;
}

