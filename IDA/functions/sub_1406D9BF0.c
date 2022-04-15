//----- (00000001406D9BF0) ----------------------------------------------------
char __fastcall sub_1406D9BF0(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rcx
	__int64 v3; // rcx
	int v5; // [rsp+30h] [rbp+8h] BYREF
	int v6; // [rsp+34h] [rbp+Ch]

	v1 = *(_QWORD**)(a1 + 32);
	if (!*(_DWORD*)(a1 + 1024))
	{
		v2 = v1[430];
		if (v1[431] - v2 == 9 && *(_QWORD*)v2 == 0x6574496761424444i64 && *(_BYTE*)(v2 + 8) == 109)
		{
			v3 = v1[436];
			v5 = BYTE1(v3);
			v6 = (unsigned __int8)v3;
			sub_1403998E0(qword_140C65898, &v5, 0, 0i64);
		}
	}
	return 0;
}
// 140C65898: using guessed type __int64 qword_140C65898;

