//----- (0000000140530DD0) ----------------------------------------------------
__int64 __fastcall sub_140530DD0(_QWORD* a1)
{
	_DWORD* v2; // rdi
	__int64* v3; // rcx
	int v4; // ebx
	int v5; // eax
	int v6; // edx
	int v7; // ecx
	unsigned int v8; // eax
	bool v9; // zf
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF

	v2 = (_DWORD*)sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = 0;
	v5 = *((_DWORD*)v3 + 2);
	if (v5 != 3)
	{
		if (v5 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v13))
		{
			v6 = 0;
			goto LABEL_9;
		}
		v12 = 3;
		v3 = &v11;
		v11 = v13;
	}
	v6 = (int)*(double*)v3;
LABEL_9:
	v7 = v2[317];
	if (v2[318] < v6)
		v6 = v2[318];
	if (v7 < v6)
		v7 = v6;
	v2[316] = v7;
	v8 = sub_140529FF0((__int64)v2);
	v9 = v8 == v2[333];
	v2[333] = v8;
	LOBYTE(v4) = !v9;
	if (v4)
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ZoneMapPlayerIndicatorUpdated", L"b", v8);
	return 0i64;
}
// 1409EF904: using guessed type wchar_t aB_24[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

