//----- (0000000140400730) ----------------------------------------------------
void __fastcall sub_140400730(__int64 a1, __int64 a2, __int64 a3, unsigned __int8(__fastcall* a4)(__int64, __int64))
{
	__int64 v7; // rcx
	char v8[16]; // [rsp+30h] [rbp-78h] BYREF
	__int64 v9; // [rsp+40h] [rbp-68h]
	__int64 v10; // [rsp+68h] [rbp-40h]
	__int64 v11; // [rsp+70h] [rbp-38h]

	sub_140474E10((__int64)v8, a2 - 112);
	sub_140474EC0(a2 - 112, a1);
	sub_1404004E0(a1, 0i64, (a2 - a1 - 112) / 112, (__int64)v8, a4);
	if (qword_140C65898)
	{
		v7 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v7)
			sub_1400EA3E0(v7, "MessageFinished", byte_1409EB834, v8);
	}
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		v10 = 0i64;
	}
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		v11 = 0i64;
	}
	if (v9)
		sub_14018B900(v9, 0);
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

