#include "../winhttp.h"

//----- (00000001400FCDC0) ----------------------------------------------------
__int64 __fastcall sub_1400FCDC0(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	unsigned int v4; // ebx
	__int64 v5; // rax
	int v7; // eax
	int v8[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v9; // [rsp+28h] [rbp-30h]
	signed int(__fastcall * v10)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v11; // [rsp+38h] [rbp-20h]
	int v12; // [rsp+40h] [rbp-18h]
	int* v13; // [rsp+68h] [rbp+10h] BYREF

	v13 = a2;
	v2 = qword_140C63658;
	if (((*(_QWORD*)(qword_140C63658 + 16) - *(_QWORD*)(qword_140C63658 + 8)) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		return 2147943647i64;
	v4 = 0;
	v5 = 0i64;
	while (aLightfxDll[++v5] != 0)
		;
	sub_14001C480(qword_140C63658, (int*)L"LightFX.dll", (int*)&aLightfxDll[v5]);
	v10 = sub_1400FCE80;
	v13 = 0i64;
	v8[0] = 4;
	v8[1] = 2;
	v9 = v2;
	v11 = 0i64;
	v12 = 1;
	v7 = sub_14019DCA0((__int64)v8, 0, 0i64, &v13);
	if (v7 < 0)
		v4 = v7;
	if (v13)
		(*(void (**)(void))(*(_QWORD*)v13 + 8i64))();
	return v4;
}
// 140A1A130: using guessed type wchar_t aLightfxDll[12];
// 140C63658: using guessed type __int64 qword_140C63658;

