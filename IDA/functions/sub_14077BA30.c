//----- (000000014077BA30) ----------------------------------------------------
void __fastcall sub_14077BA30(__int64 a1)
{
	unsigned __int64 v2; // rcx
	__int64 v3; // rcx
	int v4; // edx
	int v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	void(__fastcall * v7)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]

	v2 = *(unsigned int*)(a1 + 212);
	if (v2 < *(_QWORD*)(a1 + 184))
	{
		*(_DWORD*)(a1 + 212) = v2 + 1;
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"HighlightProgressOption",
			byte_1409EC38C,
			*(unsigned int*)(*(_QWORD*)(a1 + 176) + 4 * v2));
		v7 = (void(__fastcall*)(__int64))sub_14077BA30;
		v4 = 750;
	}
	else
	{
		v3 = qword_140C65898;
		*(_DWORD*)(a1 + 216) = 0;
		sub_1400EA3E0(*(_QWORD*)(v3 + 29504), "AcceptProgressInput", byte_1409EC27C, 1i64);
		*(_DWORD*)(a1 + 296) = 1;
		v7 = sub_14077BB20;
		v4 = *(_DWORD*)(a1 + 208) * *(_DWORD*)(*(_QWORD*)(a1 + 144) + 12i64);
	}
	v5 = 0;
	v6 = a1;
	v8 = 0i64;
	sub_140195960(a1 + 224, v4, (__int64)&v5, 4);
}
// 1409EC27C: using guessed type _BYTE byte_1409EC27C[24];
// 1409EC38C: using guessed type _BYTE byte_1409EC38C[60];
// 140C65898: using guessed type __int64 qword_140C65898;

