#include "../winhttp.h"

//----- (0000000140673AB0) ----------------------------------------------------
__int64 __fastcall sub_140673AB0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned int v3; // esi
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // ebx
	__int64 v11; // rdx
	__int64(__fastcall * *v13)(); // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]
	int v16; // [rsp+38h] [rbp-10h]

	v2 = *(_QWORD*)a1;
	v3 = 1;
	v4 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v13 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v15 = v2;
	v16 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0(v2);
	v8 = *(_QWORD*)(v2 + 16);
	v9 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(v2 + 16) += 16i64;
	v10 = sub_1400578C0(v2);
	v14 = v10;
	if ((unsigned int)sub_140673B80(a1, (__int64)&v13))
		sub_1400FB2A0(a2, (__int64)L"tRunes", v10);
	else
		v3 = 0;
	sub_1400579E0(v2, v11, v10);
	return v3;
}
// 140673B5E: variable 'v11' is possibly undefined
// 140B2FCE0: using guessed type wchar_t aTrunes[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

