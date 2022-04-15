//----- (00000001408BEDA0) ----------------------------------------------------
__int64 __fastcall sub_1408BEDA0(__int64 a1, __int64 a2)
{
	*(_QWORD*)a1 = a2;
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	qword_140C62B00 = a1;
	sub_140826FF0((__int64)sub_1408BF070);
	return a1;
}
// 140C62B00: using guessed type __int64 qword_140C62B00;

