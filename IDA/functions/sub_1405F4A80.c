#include "../winhttp.h"

//----- (00000001405F4A80) ----------------------------------------------------
void __fastcall sub_1405F4A80(__int64 a1, __int64 a2, int a3)
{
	unsigned int v5; // eax
	int* v6; // rcx
	__int64 v7; // rsi
	int v8; // ecx
	__int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
	int v10; // [rsp+60h] [rbp+18h] BYREF
	int v11; // [rsp+68h] [rbp+20h] BYREF

	if (!a3 && !*(_DWORD*)(a2 + 96))
	{
		v5 = sub_1405F46A0((unsigned int*)a1, &v11, &v10);
		v6 = *(int**)(a2 + 104);
		v7 = 0i64;
		if (v6)
			v8 = *v6;
		else
			v8 = 0;
		if (v8 == v5)
		{
			if ((int)sub_1404862B0(a2) < 0)
			{
				*(_QWORD*)(a1 + 192) = 0i64;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
			}
		}
		else
		{
			v9[0] = a1;
			v9[1] = (__int64)sub_1405F4A80;
			if (*(_DWORD*)qword_140C65920)
				v7 = sub_140486DC0(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
					(_DWORD*)(a2 + 56),
					v9,
					v5,
					v10);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
			*(_QWORD*)(a1 + 192) = v7;
		}
	}
}
// 140B242E0: using guessed type wchar_t aArtFxModelProp_27[66];
// 140C65920: using guessed type __int64 qword_140C65920;

