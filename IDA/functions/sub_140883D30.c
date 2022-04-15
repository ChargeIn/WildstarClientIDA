#include "../winhttp.h"

//----- (0000000140883D30) ----------------------------------------------------
char __fastcall sub_140883D30(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rdi
	void(__fastcall * *v4)(_QWORD, _QWORD); // rax
	__int64 v5; // rax
	int v6; // edi
	__int64 v8; // [rsp+20h] [rbp-28h]
	__int64 v9; // [rsp+28h] [rbp-20h]

	v1 = *(_QWORD*)(a1 + 120);
	v2 = 0i64;
	while (v1)
	{
		v4 = *(void(__fastcall***)(_QWORD, _QWORD))v1;
		if ((*(_BYTE*)(v1 + 117) & 8) != 0)
		{
			if (((unsigned __int8(__fastcall*)(__int64))v4[1])(v1))
			{
				v5 = *(_QWORD*)(v1 + 24);
				v9 = v2;
				v8 = v5;
				if (v1 == *(_QWORD*)(a1 + 120))
					*(_QWORD*)(a1 + 120) = v5;
				else
					*(_QWORD*)(v2 + 24) = v5;
				v6 = dword_140C111C0;
				(**(void(__fastcall***)(__int64, _QWORD))v1)(v1, 0i64);
				sub_140881720(v6, v1);
				v2 = v9;
				v1 = v8;
				continue;
			}
		}
		else
		{
			((void(__fastcall*)(__int64))v4[2])(v1);
		}
		v2 = v1;
		v1 = *(_QWORD*)(v1 + 24);
	}
	if (*(_QWORD*)(a1 + 120))
		return 0;
	*(_QWORD*)(a1 + 120) = 0i64;
	return 1;
}
// 140C111C0: using guessed type int dword_140C111C0;

