//----- (0000000140099190) ----------------------------------------------------
__int64 __fastcall sub_140099190(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 2ui64);
	if ((int)result >= 0)
		return sub_140099130(a1, a2, a3 + 1);
	return result;
}

