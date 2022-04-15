#include "../winhttp.h"

//----- (0000000140875050) ----------------------------------------------------
__int64 __fastcall sub_140875050(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v5; // rax
	unsigned int v6; // esi
	int v7; // [rsp+20h] [rbp-38h] BYREF
	__int64 v8; // [rsp+28h] [rbp-30h]
	int v9; // [rsp+30h] [rbp-28h]
	__int16 v10; // [rsp+3Ch] [rbp-1Ch]
	char v11; // [rsp+3Eh] [rbp-1Ah]
	__int64 v12; // [rsp+40h] [rbp-18h]

	v3 = sub_140855940(a1);
	if (!v3)
		return 15i64;
	v5 = *(_QWORD*)(a2 + 72);
	v7 = 3;
	v10 = 0;
	v8 = v5;
	LODWORD(v5) = *(_DWORD*)(a2 + 68);
	v11 = 0;
	v12 = v3;
	v9 = v5;
	v6 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 128i64))(v3, &v7);
	if (v6 == 1)
		v6 = sub_14082B4E0((__int64)qword_140C61B68, v3, *(_QWORD*)(a2 + 72), *(_DWORD*)(a2 + 68));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
	return v6;
}

