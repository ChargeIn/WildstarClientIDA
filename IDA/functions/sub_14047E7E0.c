//----- (000000014047E7E0) ----------------------------------------------------
__int64 __fastcall sub_14047E7E0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 result; // rax
	char v7[24]; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+40h] [rbp+8h] BYREF
	unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

	v9 = a2;
	sub_1400293C0(a1 + 14168, (__int64)v7, (int*)&v9);
	v4 = sub_140498A40(qword_140C65980, a2, 0);
	v5 = v4;
	if (!v4)
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PublicEventUnitUpdate",
			byte_1409ED124,
			*(unsigned int*)(a1 + 8));
	v8 = *(_DWORD*)(a1 + 8);
	sub_1400293C0(v4 + 200, (__int64)v7, &v8);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 176i64))(v5);
	if ((_DWORD)result)
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PublicEventUnitUpdate",
			byte_1409ED124,
			*(unsigned int*)(a1 + 8));
	return result;
}
// 1409ED124: using guessed type _BYTE byte_1409ED124[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

