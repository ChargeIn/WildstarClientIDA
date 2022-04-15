//----- (000000014074BB60) ----------------------------------------------------
__int64 __fastcall sub_14074BB60(__int64 a1)
{
	__int64 v2; // rax
	char v4; // [rsp+30h] [rbp+8h] BYREF

	v4 = 0;
	sub_1403F4900(qword_140C65898, 0x18Fu, (__int64)&v4);
	v2 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v2 = 0x3FF0000000000000i64;
	*(_DWORD*)(v2 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

