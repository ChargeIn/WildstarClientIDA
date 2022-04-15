//----- (000000014009B1A0) ----------------------------------------------------
__int64 __fastcall sub_14009B1A0(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 8ui64);
	if ((int)result >= 0)
		return sub_140099C90(a1, a2, (__int64)(a3 + 2));
	return result;
}

