#include "../winhttp.h"

//----- (00000001408902A0) ----------------------------------------------------
void __fastcall sub_1408902A0(unsigned int* a1, __int64 a2)
{
	__int64* v2; // rbx
	char v3; // bp
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v8; // r9
	__int64 v9; // r10
	__int64 v10; // rcx

	v2 = *(__int64**)(a2 + 264);
	v3 = 0;
	v4 = *v2;
	v5 = 0i64;
	if (!*v2)
	{
		if (!(*(unsigned __int8(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 184i64))(a1))
		{
			v3 = 1;
			goto LABEL_10;
		}
		v4 = *v2;
	}
	v8 = a1[36];
	v9 = v2[1] - v8;
	if (v9 < 0)
		v9 = 0i64;
	v10 = *(_QWORD*)(v4 + 8) - v8;
	if (v10 < 0)
		v10 = 0i64;
	v5 = v10 - v9;
LABEL_10:
	sub_1408908C0(a2, v5, v3);
}

